#ifndef CDC_CLASS_H
#define CDC_CLASS_H
#include "baselayer.h"
#include "ctrlinterface.h"
#include "gpio.h"
#include "fifo.h"
#include "system.h"
#ifdef __cplusplus
extern "C" {
#endif
#include "usb_desc.h"
#include "ch32v20x_usb.h"
/******************************************************************************/
/* Global Define */
/* end-point number */
enum EDEF_UEPS {
 DEF_UEP0 = 0, DEF_UEP1, DEF_UEP2, DEF_UEP3, DEF_UEP4, DEF_UEP5, DEF_UEP6, DEF_UEP7, MAX_UEPS
};
static constexpr uint32_t DEF_UEP_NUM = MAX_UEPS;
static_assert (DEF_UEP_NUM == 8, "Number endpoints fail");
// Tohle nechám být, je to celkem jedno
#define DEF_UEP_IN                    0x80
#define DEF_UEP_OUT                   0x00
#define USBFSD_UEP_RX_EN              0x08
#define USBFSD_UEP_TX_EN              0x04
#define USBFSD_UEP_BUF_MOD            0x01
/* Setup Request Packets */
#define pUSBFS_SetupReqPak            ((PUSB_SETUP_REQ)USBFS_EP0_Buf)
#ifdef __cplusplus
};
#endif

/** @class cdc_class
 * V postatě je to převzato z originálního balíku od wch.nc, ale ten
 * je napsán dost "špagetově", interface je nesrozumitelné, takže je tam dost věcí
 * přidáno odhadem.
 */
class cdc_class : public BaseLayer {
  CDC_CtrlInterface * CtrlIface;
  // GpioClass        dtr;
  FIFO<char, 128>     TxRing;
  volatile bool       Ready;
  USB_CDC_LineCoding  LineCoding;
  const    uint8_t  * pUSBFS_Descr;
  /* Setup Request */
  volatile uint8_t  USBFS_SetupReqCode;
  volatile uint8_t  USBFS_SetupReqType;
  volatile uint16_t USBFS_SetupReqValue;
  volatile uint16_t USBFS_SetupReqIndex;
  volatile uint16_t USBFS_SetupReqLen;
  /* USB Device Status */
  volatile uint8_t  USBFS_DevConfig;
  volatile uint8_t  USBFS_DevAddr;
  volatile uint8_t  USBFS_DevSleepStatus;
  volatile uint8_t  USBFS_DevEnumStatus;
  /* Endpoint Buffer */
  [[gnu::aligned(4)]] uint8_t USBFS_EP0_Buf[ DEF_USBD_UEP0_SIZE ];
  [[gnu::aligned(4)]] uint8_t USBFS_EP1_Buf[ DEF_USBD_ENDP1_SIZE ];
  [[gnu::aligned(4)]] uint8_t USBFS_EP2_Buf[ DEF_USBD_ENDP2_SIZE ];
  [[gnu::aligned(4)]] uint8_t USBFS_EP3_Buf[ DEF_USBD_ENDP3_SIZE ];
  /* USB IN Endpoint Busy Flag */
  volatile uint8_t  USBFS_Endp_Busy[ DEF_UEP_NUM ];
  public:
    explicit cdc_class () noexcept;
    void attach  (CDC_CtrlInterface & ctrl) { CtrlIface = & ctrl; }
    void init    ();
    void cdc_irq ();
    /// Předěláno na neblokující, data se vyměňují přes FIFO, rychlejší
    uint32_t Down(const char * data, const uint32_t len) override;
  protected:
    void USBFS_Device_Init( bool sta );
    void USBFS_Device_Endp_Init ();
    void TxDataDeal        ();
    inline void TransferHandler   ();
    inline void InTokenHandler    (const uint8_t intst);
    inline void OutTokenHandler   (const uint8_t intst);
    inline void SetupTokenHandler ();
};

#endif // CDC_CLASS_H
