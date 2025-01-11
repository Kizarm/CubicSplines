#include "cdc_class.h"
#include "system.h"
// #include "project_config.h"
typedef __SIZE_TYPE__ size_t;
/* Only one instance of this class ! */
static cdc_class * pInstance = nullptr;
extern "C" {
  /* Interrupt Service Routine Declaration*/
  [[gnu::interrupt]] void USBFS_IRQHandler();
  /* prototype from libc, (hack.c), clang needed */
  void * memcpy (void * dest, const void * src, size_t n);
};
/* Interrupt Service Routine Definition */
void USBFS_IRQHandler () {
  if (pInstance) pInstance->cdc_irq();
}
/* USB_Device_clock_source */
enum RCC_USB_CLK_SRC : uint32_t {
  RCC_USBCLKSource_PLLCLK_Div1 = 0u,
  RCC_USBCLKSource_PLLCLK_Div2,
  RCC_USBCLKSource_PLLCLK_Div3,
};

static void RCC_USBCLKConfig(const RCC_USB_CLK_SRC RCC_USBCLKSource) {
  RCC.CFGR0.B.USBPRE = RCC_USBCLKSource;
}
/*********************************************************************
 * @fn      USBFS_RCC_Init
 *
 * @brief   Initializes the usbfs clock configuration.
 *
 * @return  none
 */
static void USBFS_RCC_Init( void ) {
    if( SystemCoreClock == 144'000'000 )  {
        RCC_USBCLKConfig( RCC_USBCLKSource_PLLCLK_Div3 );
    } else if( SystemCoreClock == 96'000'000 ) {
        RCC_USBCLKConfig( RCC_USBCLKSource_PLLCLK_Div2 );
    } else if( SystemCoreClock == 48'000'000 ) {
        RCC_USBCLKConfig( RCC_USBCLKSource_PLLCLK_Div1 );
    }
    RCC.AHBPCENR.B.OTG_EN = SET;
}
/*********************************************************************
 * @fn      USBFS_Device_Endp_Init
 *
 * @brief   Initializes USB device endpoints.
 *
 * @return  none
 */
void cdc_class::USBFS_Device_Endp_Init( void ) {

    USBFSD->UEP4_1_MOD = USBFS_UEP1_TX_EN;
    USBFSD->UEP2_3_MOD = USBFS_UEP2_RX_EN|USBFS_UEP3_TX_EN;

    USBFSD->UEP0_DMA = (size_t)USBFS_EP0_Buf;

    USBFSD->UEP1_DMA = (size_t)USBFS_EP1_Buf;
    USBFSD->UEP2_DMA = (size_t)USBFS_EP2_Buf;
    USBFSD->UEP3_DMA = (size_t)USBFS_EP3_Buf;

    USBFSD->UEP0_RX_CTRL = USBFS_UEP_R_RES_ACK;
    USBFSD->UEP2_RX_CTRL = USBFS_UEP_R_RES_ACK;

    USBFSD->UEP1_TX_LEN = 0;
    USBFSD->UEP3_TX_LEN = 0;

    USBFSD->UEP0_TX_CTRL = USBFS_UEP_T_RES_NAK;
    USBFSD->UEP1_TX_CTRL = USBFS_UEP_T_RES_NAK;
    USBFSD->UEP3_TX_CTRL = USBFS_UEP_T_RES_NAK;

    /* Clear End-points Busy Status */
    for(uint8_t i=0; i<DEF_UEP_NUM; i++ ) {
        USBFS_Endp_Busy[ i ] = 0;
    }
}

/*********************************************************************
 * @fn      USBFS_Device_Init
 *
 * @brief   Initializes USB device.
 *
 * @return  none
 */
void cdc_class::USBFS_Device_Init( bool sta ) {
    if( sta )    {
        USBFSH->BASE_CTRL = USBFS_UC_RESET_SIE | USBFS_UC_CLR_ALL;
        delay_us( 10 );
        USBFSH->BASE_CTRL = 0x00;
        USBFSD->INT_EN    = USBFS_UIE_SUSPEND  | USBFS_UIE_BUS_RST | USBFS_UIE_TRANSFER;
        USBFSD->BASE_CTRL = USBFS_UC_DEV_PU_EN | USBFS_UC_INT_BUSY | USBFS_UC_DMA_EN;
        USBFS_Device_Endp_Init( );
        USBFSD->UDEV_CTRL = USBFS_UD_PD_DIS    | USBFS_UD_PORT_EN;
        NVIC.EnableIRQ( USBFS_IRQn );
    }    else    {
        USBFSH->BASE_CTRL = USBFS_UC_RESET_SIE | USBFS_UC_CLR_ALL;
        delay_us( 10 );
        USBFSD->BASE_CTRL = 0x00;
        NVIC.DisableIRQ( USBFS_IRQn );
    }
    // dtr << LED_OFF;
}

cdc_class::cdc_class() noexcept : BaseLayer(),
  CtrlIface(nullptr), /*dtr (DTR_LED),*/ TxRing(), Ready(false), LineCoding() {
  pInstance = this;
  USBFS_DevConfig = 0;
  USBFS_DevAddr = 0;
  USBFS_DevSleepStatus = 0;
  USBFS_DevEnumStatus = 0;
}
void cdc_class::init() {
  delay_init();
  USBFS_RCC_Init( );
  USBFS_Device_Init( true );
  while (!USBFS_DevEnumStatus) delay_us(10'000);
  while (!Ready)               delay_us(10'000);
}
[[gnu::__always_inline__]] void cdc_class::InTokenHandler(const uint8_t intst) {
  switch ( intst & ( USBFS_UIS_TOKEN_MASK | USBFS_UIS_ENDP_MASK ) ) {
      /* end-point 0 data in interrupt */
      case USBFS_UIS_TOKEN_IN | DEF_UEP0:
          if( USBFS_SetupReqLen == 0 ) {
              USBFSD->UEP0_RX_CTRL = USBFS_UEP_R_TOG | USBFS_UEP_R_RES_ACK;
          }
          if ( ( USBFS_SetupReqType & USB_REQ_TYP_MASK ) != USB_REQ_TYP_STANDARD ) {
              /* Non-standard request endpoint 0 Data upload */
          }  else  {
              /* Standard request endpoint 0 Data upload */
              switch( USBFS_SetupReqCode ) {
                  case USB_GET_DESCRIPTOR: {
                          const uint16_t len = USBFS_SetupReqLen >= DEF_USBD_UEP0_SIZE ? DEF_USBD_UEP0_SIZE : USBFS_SetupReqLen;
                          memcpy( USBFS_EP0_Buf, pUSBFS_Descr, len );
                          USBFS_SetupReqLen -= len;
                          pUSBFS_Descr += len;
                          USBFSD->UEP0_TX_LEN   = len;
                          USBFSD->UEP0_TX_CTRL ^= USBFS_UEP_T_TOG;
                  }       break;
                  case USB_SET_ADDRESS:
                          USBFSD->DEV_ADDR = (USBFSD->DEV_ADDR & USBFS_UDA_GP_BIT) | USBFS_DevAddr;
                          break;
                  default:
                          break;
              }
          }
          break;

      /* end-point 1 data in interrupt */
      case ( USBFS_UIS_TOKEN_IN | DEF_UEP1 ):
          USBFSD->UEP1_TX_CTRL ^= USBFS_UEP_T_TOG;
          USBFSD->UEP1_TX_CTRL = (USBFSD->UEP1_TX_CTRL & ~USBFS_UEP_T_RES_MASK) | USBFS_UEP_T_RES_NAK;
          USBFS_Endp_Busy[ DEF_UEP1 ] = 0;
          break;

      /* end-point 3 data in interrupt */
      case ( USBFS_UIS_TOKEN_IN | DEF_UEP3 ):
          USBFSD->UEP3_TX_CTRL ^= USBFS_UEP_T_TOG;
          USBFSD->UEP3_TX_CTRL = (USBFSD->UEP3_TX_CTRL & ~USBFS_UEP_T_RES_MASK) | USBFS_UEP_T_RES_NAK;
          USBFS_Endp_Busy[ DEF_UEP3 ] = 0;
          TxDataDeal ();
          break;

      default :
          break;
  }
}
[[gnu::__always_inline__]] void cdc_class::OutTokenHandler(const uint8_t intst) {
  uint16_t len;
  switch ( intst & ( USBFS_UIS_TOKEN_MASK | USBFS_UIS_ENDP_MASK ) ) {
      /* end-point 0 data out interrupt */
      case USBFS_UIS_TOKEN_OUT | DEF_UEP0:
          len = USBFSD->RX_LEN;
          (void) len;
          if ( intst & USBFS_UIS_TOG_OK ) {
              if ( ( USBFS_SetupReqType & USB_REQ_TYP_MASK ) != USB_REQ_TYP_STANDARD ) {
                  /* Non-standard request end-point 0 Data download */
                  USBFS_SetupReqLen = 0;
                  /* Non-standard request end-point 0 Data download */
                  if( USBFS_SetupReqCode == CDC_SET_LINE_CODING ) {
                        /* Save relevant parameters such as serial port baud rate */
                        /* The downlinked data is processed in the endpoint 0 OUT packet, the 7 bytes of the downlink are, in order
                            4 bytes: baud rate value: lowest baud rate byte, next lowest baud rate byte, next highest baud rate byte, highest baud rate byte.
                            1 byte: number of stop bits (0: 1 stop bit; 1: 1.5 stop bit; 2: 2 stop bits).
                            1 byte: number of parity bits (0: None; 1: Odd; 2: Even; 3: Mark; 4: Space).
                            1 byte: number of data bits (5,6,7,8,16); */
                        memcpy(& LineCoding, USBFS_EP0_Buf, sizeof (LineCoding));
                        if (CtrlIface) CtrlIface->IOCtrl(USB_USART_SET_PARAM, & LineCoding, sizeof (LineCoding));
                    }
              } else {
                  /* Standard request end-point 0 Data download */
                  /* Add your code here */
              }
              if( USBFS_SetupReqLen == 0 ) {
                  USBFSD->UEP0_TX_LEN  = 0;
                  USBFSD->UEP0_TX_CTRL = USBFS_UEP_T_TOG | USBFS_UEP_T_RES_ACK;
              }
          }
          break;

      /* end-point 1 data out interrupt */
      case USBFS_UIS_TOKEN_OUT | DEF_UEP2: {
          USBFSD->UEP2_RX_CTRL ^= USBFS_UEP_R_TOG;
          const uint32_t rlen   = USBFSD->RX_LEN;
          const char    *ptr    = reinterpret_cast<const char*> (USBFS_EP2_Buf);
          USBFSD->UEP2_RX_CTRL  = (USBFSD->UEP2_RX_CTRL & ~USBFS_UEP_R_RES_MASK) | USBFS_UEP_R_RES_NAK;
          Up (ptr, rlen);
          USBFSD->UEP2_RX_CTRL  = (USBFSD->UEP2_RX_CTRL & ~USBFS_UEP_R_RES_MASK) | USBFS_UEP_R_RES_ACK;
      }   break;

      default:
          break;
  }
}
union DtrRts {
  uint16_t data;
  uint8_t  bytes [2];
  explicit DtrRts (const uint16_t n) noexcept { data = n; }
};
[[gnu::__always_inline__]] void cdc_class::SetupTokenHandler() {
  uint8_t  errflag;
  uint16_t len;
  USBFSD->UEP0_TX_CTRL = USBFS_UEP_T_TOG|USBFS_UEP_T_RES_NAK;
  USBFSD->UEP0_RX_CTRL = USBFS_UEP_R_TOG|USBFS_UEP_R_RES_NAK;
  /* Store All Setup Values */
  USBFS_SetupReqType  = pUSBFS_SetupReqPak->bRequestType;
  USBFS_SetupReqCode  = pUSBFS_SetupReqPak->bRequest;
  USBFS_SetupReqLen   = pUSBFS_SetupReqPak->wLength;
  USBFS_SetupReqValue = pUSBFS_SetupReqPak->wValue;
  USBFS_SetupReqIndex = pUSBFS_SetupReqPak->wIndex;
  len = 0;
  errflag = 0;
  if ( ( USBFS_SetupReqType & USB_REQ_TYP_MASK ) != USB_REQ_TYP_STANDARD ) {
      /* usb non-standard request processing */
      if( USBFS_SetupReqType & USB_REQ_TYP_CLASS ) {
          /* Class requests */
          switch( USBFS_SetupReqCode ) {
              case CDC_GET_LINE_CODING:
                  // pUSBFS_Descr = (uint8_t *)&Uart.Com_Cfg[ 0 ];
                  pUSBFS_Descr = reinterpret_cast<uint8_t*>(& LineCoding);
                  len = sizeof (LineCoding);
                  break;

              case CDC_SET_LINE_CODING:
                  break;
              /* DTR - wValue & 1, RTS - wValue & 2 */
              case CDC_SET_LINE_CTLSTE: {
                  DtrRts tmp (USBFS_SetupReqValue);
                  if (CtrlIface) CtrlIface->IOCtrl(USB_USART_SET_DTR_RTS, tmp.bytes, 2);
                  const bool b = USBFS_SetupReqValue & 1;
                  Ready = b;
                  /*
                  if (b) dtr << LED_ON;
                  else   dtr << LED_OFF;
                  */
                } break;

              case CDC_SEND_BREAK:
                  break;

              default:
                  errflag = 0xff;
                  break;
          }
      } else if ( USBFS_SetupReqType & USB_REQ_TYP_VENDOR )  {
          /* Manufacturer request */
      } else  {
          errflag = 0xFF;
      }

      /* Copy Descriptors to Endp0 DMA buffer */
      len = (USBFS_SetupReqLen >= DEF_USBD_UEP0_SIZE) ? DEF_USBD_UEP0_SIZE : USBFS_SetupReqLen;
      memcpy( USBFS_EP0_Buf, pUSBFS_Descr, len );
      pUSBFS_Descr += len;
  } else {
      /* usb standard request processing */
      switch( USBFS_SetupReqCode ) {
          /* get device/configuration/string/report/... descriptors */
          case USB_GET_DESCRIPTOR:
              switch( (uint8_t)( USBFS_SetupReqValue >> 8 ) ) {
                  /* get usb device descriptor */
                  case USB_DESCR_TYP_DEVICE:
                      pUSBFS_Descr = MyDevDescr;
                      len = DEF_USBD_DEVICE_DESC_LEN;
                      break;

                  /* get usb configuration descriptor */
                  case USB_DESCR_TYP_CONFIG:
                      pUSBFS_Descr = MyCfgDescr;
                      len = DEF_USBD_CONFIG_DESC_LEN;
                      break;

                  /* get usb string descriptor */
                  case USB_DESCR_TYP_STRING: {
                      const uint8_t order = USBFS_SetupReqValue & 0xFF;
                      if (order < DEF_MAX_STRINGS) {
                        pUSBFS_Descr = StringDescArray [order];
                        len = pUSBFS_Descr [0];
                      } else {
                        errflag = 0xFF;
                      }
                  }   break;

                  default :
                      errflag = 0xFF;
                      break;
              }

              /* Copy Descriptors to Endp0 DMA buffer */
              if( USBFS_SetupReqLen>len ) {
                  USBFS_SetupReqLen = len;
              }
              len = (USBFS_SetupReqLen >= DEF_USBD_UEP0_SIZE) ? DEF_USBD_UEP0_SIZE : USBFS_SetupReqLen;
              memcpy( USBFS_EP0_Buf, pUSBFS_Descr, len );
              pUSBFS_Descr += len;
              break;

          /* Set usb address */
          case USB_SET_ADDRESS:
              USBFS_DevAddr = (uint8_t)( USBFS_SetupReqValue & 0xFF );
              break;

          /* Get usb configuration now set */
          case USB_GET_CONFIGURATION:
              USBFS_EP0_Buf[0] = USBFS_DevConfig;
              if ( USBFS_SetupReqLen > 1 ) {
                  USBFS_SetupReqLen = 1;
              }
              break;

          /* Set usb configuration to use */
          case USB_SET_CONFIGURATION:
              USBFS_DevConfig = (uint8_t)( USBFS_SetupReqValue & 0xFF );
              USBFS_DevEnumStatus = 0x01;
              break;

          /* Clear or disable one usb feature */
          case USB_CLEAR_FEATURE:
              if ( ( USBFS_SetupReqType & USB_REQ_RECIP_MASK ) == USB_REQ_RECIP_DEVICE ) {
                  /* clear one device feature */
                  if( (uint8_t)( USBFS_SetupReqValue & 0xFF ) == USB_REQ_FEAT_REMOTE_WAKEUP ) {
                      /* clear usb sleep status, device not prepare to sleep */
                      USBFS_DevSleepStatus &= ~0x01;
                  }
              } else if( ( USBFS_SetupReqType & USB_REQ_RECIP_MASK ) == USB_REQ_RECIP_ENDP )  {
                  /* Clear End-point Feature */
                  if( (uint8_t)( USBFS_SetupReqValue & 0xFF ) == USB_REQ_FEAT_ENDP_HALT ) {
                      switch( (uint8_t)( USBFS_SetupReqIndex & 0xFF ) ) {
                          case ( DEF_UEP_IN | DEF_UEP1 ):
                              /* Set End-point 1 IN NAK */
                              USBFSD->UEP1_TX_CTRL = USBFS_UEP_T_RES_NAK;
                              break;

                          case ( DEF_UEP_OUT | DEF_UEP2 ):
                              /* Set End-point 2 OUT ACK */
                              USBFSD->UEP2_RX_CTRL = USBFS_UEP_R_RES_ACK;
                              break;

                          case ( DEF_UEP_IN | DEF_UEP3 ):
                              /* Set End-point 3 IN NAK */
                              USBFSD->UEP3_TX_CTRL = USBFS_UEP_T_RES_NAK;
                              break;

                          default:
                              errflag = 0xFF;
                              break;
                      }
                  } else {
                      errflag = 0xFF;
                  }
              } else {
                  errflag = 0xFF;
              }
              break;

          /* set or enable one usb feature */
          case USB_SET_FEATURE:
              if( ( USBFS_SetupReqType & USB_REQ_RECIP_MASK ) == USB_REQ_RECIP_DEVICE ) {
                  /* Set Device Feature */
                  if( (uint8_t)( USBFS_SetupReqValue & 0xFF ) == USB_REQ_FEAT_REMOTE_WAKEUP ) {
                      if( MyCfgDescr[ 7 ] & 0x20 ) {
                          /* Set Wake-up flag, device prepare to sleep */
                          USBFS_DevSleepStatus |= 0x01;
                      } else {
                          errflag = 0xFF;
                      }
                  } else {
                      errflag = 0xFF;
                  }
              }
              else if( ( USBFS_SetupReqType & USB_REQ_RECIP_MASK ) == USB_REQ_RECIP_ENDP ) {
                  /* Set End-point Feature */
                  if( (uint8_t)( USBFS_SetupReqValue & 0xFF ) == USB_REQ_FEAT_ENDP_HALT ) {
                      /* Set end-points status stall */
                      switch( (uint8_t)( USBFS_SetupReqIndex & 0xFF ) ) {
                          case ( DEF_UEP_IN | DEF_UEP1 ):
                              /* Set End-point 1 IN STALL */
                              USBFSD->UEP1_TX_CTRL = ( USBFSD->UEP1_TX_CTRL & ~USBFS_UEP_T_RES_MASK ) | USBFS_UEP_T_RES_STALL;
                              break;

                          case ( DEF_UEP_OUT | DEF_UEP2 ):
                              /* Set End-point 2 OUT STALL */
                              USBFSD->UEP2_RX_CTRL = ( USBFSD->UEP2_RX_CTRL & ~USBFS_UEP_R_RES_MASK ) | USBFS_UEP_R_RES_STALL;
                              break;

                          case ( DEF_UEP_IN | DEF_UEP3 ):
                              /* Set End-point 3 IN STALL */
                              USBFSD->UEP3_TX_CTRL = ( USBFSD->UEP3_TX_CTRL & ~USBFS_UEP_T_RES_MASK ) | USBFS_UEP_T_RES_STALL;
                              break;

                          default:
                              errflag = 0xFF;
                              break;
                      }
                  } else {
                      errflag = 0xFF;
                  }
              } else {
                  errflag = 0xFF;
              }
              break;

          /* This request allows the host to select another setting for the specified interface  */
          case USB_GET_INTERFACE:
              USBFS_EP0_Buf[0] = 0x00;
              if ( USBFS_SetupReqLen > 1 ) {
                  USBFS_SetupReqLen = 1;
              }
              break;

          case USB_SET_INTERFACE:
              break;

          /* host get status of specified device/interface/end-points */
          case USB_GET_STATUS:
              USBFS_EP0_Buf[ 0 ] = 0x00;
              USBFS_EP0_Buf[ 1 ] = 0x00;
              if ( ( USBFS_SetupReqType & USB_REQ_RECIP_MASK ) == USB_REQ_RECIP_DEVICE ) {
                  if( USBFS_DevSleepStatus & 0x01 ) {
                      USBFS_EP0_Buf[ 0 ] = 0x02;
                  }
              } else if( ( USBFS_SetupReqType & USB_REQ_RECIP_MASK ) == USB_REQ_RECIP_ENDP ) {
                  switch( (uint8_t)( USBFS_SetupReqIndex & 0xFF ) ) {
                      case ( DEF_UEP_IN | DEF_UEP1 ):
                          if( ( (USBFSD->UEP1_TX_CTRL) & USBFS_UEP_T_RES_MASK ) == USBFS_UEP_T_RES_STALL ) {
                              USBFS_EP0_Buf[ 0 ] = 0x01;
                          }
                          break;

                      case ( DEF_UEP_OUT | DEF_UEP2 ):
                          if( ( (USBFSD->UEP2_RX_CTRL) & USBFS_UEP_R_RES_MASK ) == USBFS_UEP_R_RES_STALL ) {
                              USBFS_EP0_Buf[ 0 ] = 0x01;
                          }
                          break;

                      case ( DEF_UEP_IN | DEF_UEP3 ):
                          if( ( (USBFSD->UEP3_TX_CTRL) & USBFS_UEP_T_RES_MASK ) == USBFS_UEP_T_RES_STALL ) {
                              USBFS_EP0_Buf[ 0 ] = 0x01;
                          }
                          break;

                      default:
                          errflag = 0xFF;
                          break;
                  }
              } else {
                  errflag = 0xFF;
              }

              if( USBFS_SetupReqLen > 2 ) {
                  USBFS_SetupReqLen = 2;
              }

              break;

          default:
              errflag = 0xFF;
              break;
      }
  }
  /* errflag = 0xFF means a request not support or some errors occurred, else correct */
  if( errflag == 0xff)  {
      /* if one request not support, return stall */
      USBFSD->UEP0_TX_CTRL = USBFS_UEP_T_TOG|USBFS_UEP_T_RES_STALL;
      USBFSD->UEP0_RX_CTRL = USBFS_UEP_R_TOG|USBFS_UEP_R_RES_STALL;
  } else {
      /* end-point 0 data Tx/Rx */
      if( USBFS_SetupReqType & DEF_UEP_IN ) {
          /* tx */
          len = (USBFS_SetupReqLen>DEF_USBD_UEP0_SIZE) ? DEF_USBD_UEP0_SIZE : USBFS_SetupReqLen;
          USBFS_SetupReqLen -= len;
          USBFSD->UEP0_TX_LEN  = len;
          USBFSD->UEP0_TX_CTRL = USBFS_UEP_T_TOG|USBFS_UEP_T_RES_ACK;
      } else {
          /* rx */
          if( USBFS_SetupReqLen == 0 ) {
              USBFSD->UEP0_TX_LEN  = 0;
              USBFSD->UEP0_TX_CTRL = USBFS_UEP_T_TOG|USBFS_UEP_T_RES_ACK;
          } else {
              USBFSD->UEP0_RX_CTRL = USBFS_UEP_R_TOG|USBFS_UEP_R_RES_ACK;
          }
      }
  }
}

[[gnu::__always_inline__]] void cdc_class::TransferHandler() {
  const uint8_t intst = USBFSD->INT_ST;
  
  switch (intst & USBFS_UIS_TOKEN_MASK) {
      /* data-in stage processing */
      case USBFS_UIS_TOKEN_IN:
          InTokenHandler(intst);
          break;
      /* data-out stage processing */
      case USBFS_UIS_TOKEN_OUT:
          OutTokenHandler(intst);
          break;
      /* Setup stage processing */
      case USBFS_UIS_TOKEN_SETUP:
          SetupTokenHandler();
          break;
      default :
          break;
  }
  USBFSD->INT_FG = USBFS_UIF_TRANSFER;
}

void cdc_class::cdc_irq() {
    const uint8_t intflag = USBFSD->INT_FG;

    if( intflag & USBFS_UIF_TRANSFER ) {
        TransferHandler ();
    } else if( intflag & USBFS_UIF_BUS_RST ) {
        /* usb reset interrupt processing */
        USBFS_DevConfig = 0;
        USBFS_DevAddr = 0;
        USBFS_DevSleepStatus = 0;
        USBFS_DevEnumStatus = 0;

        USBFSD->DEV_ADDR = 0;
        USBFS_Device_Endp_Init( );
        //UART2_ParaInit( 1 );
        if (CtrlIface) CtrlIface->IOCtrl(USB_USART_INIT, nullptr, 0);
        USBFSD->INT_FG = USBFS_UIF_BUS_RST;
    } else if( intflag & USBFS_UIF_SUSPEND ) {
        USBFSD->INT_FG = USBFS_UIF_SUSPEND;
        delay_us(10);
        /* usb suspend interrupt processing */
        if ( USBFSD->MIS_ST & USBFS_UMS_SUSPEND ) {
            USBFS_DevSleepStatus |= 0x02;
            if( USBFS_DevSleepStatus == 0x03 ) {
                /* Handling usb sleep here */
            }
        } else {
            USBFS_DevSleepStatus &= ~0x02;
        }
    } else {
        /* other interrupts */
        USBFSD->INT_FG = intflag;
    }
}
void cdc_class::TxDataDeal() {
  if (USBFS_Endp_Busy [DEF_UEP3]) return;
  uint32_t n;
  char * ptr = reinterpret_cast<char*>(USBFS_EP3_Buf);
  for (n=0u; n<DEF_USBD_ENDP3_SIZE; n++) {
    if (!TxRing.Read (ptr [n])) break;
  }
  USBFSD->UEP3_TX_LEN = n;
  if (n) {
    USBFS_Endp_Busy [DEF_UEP3] = 1u;
    USBFSD->UEP3_TX_CTRL = (USBFSD->UEP3_TX_CTRL & ~USBFS_UEP_T_RES_MASK) | USBFS_UEP_T_RES_ACK;
  } else {
    USBFSD->UEP3_TX_CTRL = (USBFSD->UEP3_TX_CTRL & ~USBFS_UEP_T_RES_MASK) | USBFS_UEP_T_RES_NAK;
  }
}
uint32_t cdc_class::Down (const char * data, const uint32_t len) {
  if (!Ready) return 0; /* DTR is clear */
  uint32_t n;
  for (n=0u; n<len; n++) { if (!TxRing.Write(data [n])) break; }
  if  (n) TxDataDeal();
  return n;
}
