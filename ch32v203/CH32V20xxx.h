#ifndef CH32V20xxx_HDEF
#define CH32V20xxx_HDEF
/** @brief CH32V20xxx */
/* CH32V20xxx View File */

#define CH32V20x_D6
/* IO definitions (access restrictions to peripheral registers) */
/** defines 'read only'    permissions */
#define __I volatile
/** defines 'write only'   permissions */
#define __O volatile
/** defines 'read / write' permissions */
#define __IO volatile
#include <stdint.h>
#define MERGE union
#define __MPU_PRESENT             0
#define __NVIC_PRIO_BITS          0
#define __Vendor_SysTickConfig    0
#define __FPU_PRESENT             0
enum ONE_BIT : uint32_t { RESET = 0, SET = 1 };

// ////////////////////+++ USB +-+//////////////////// //
struct USB_Type          { /*!< Universal serial bus full-speed device interface */
  union EP0R_DEF     {  //!< endpoint 0 register
    struct {
      __IO uint16_t   EA      :  4; //!<[00] Endpoint address
      __IO uint16_t   STAT_TX :  2; //!<[04] Status bits, for transmission transfers
      __IO uint16_t   DTOG_TX :  1; //!<[06] Data Toggle, for transmission transfers
      __IO uint16_t   CTR_TX  :  1; //!<[07] Correct Transfer for transmission
      __IO uint16_t   EP_KIND :  1; //!<[08] Endpoint kind
      __IO uint16_t   EP_TYPE :  2; //!<[09] Endpoint type
      __IO uint16_t   SETUP   :  1; //!<[11] Setup transaction completed
      __IO uint16_t   STAT_RX :  2; //!<[12] Status bits, for reception transfers
      __IO uint16_t   DTOG_RX :  1; //!<[14] Data Toggle, for reception transfers
      __IO uint16_t   CTR_RX  :  1; //!<[15] Correct transfer for reception
    } B;
    __IO uint16_t  R;
  };
  union EP1R_DEF     {  //!< endpoint 1 register
    struct {
      __IO uint16_t   EA      :  4; //!<[00] Endpoint address
      __IO uint16_t   STAT_TX :  2; //!<[04] Status bits, for transmission transfers
      __IO uint16_t   DTOG_TX :  1; //!<[06] Data Toggle, for transmission transfers
      __IO uint16_t   CTR_TX  :  1; //!<[07] Correct Transfer for transmission
      __IO uint16_t   EP_KIND :  1; //!<[08] Endpoint kind
      __IO uint16_t   EP_TYPE :  2; //!<[09] Endpoint type
      __IO uint16_t   SETUP   :  1; //!<[11] Setup transaction completed
      __IO uint16_t   STAT_RX :  2; //!<[12] Status bits, for reception transfers
      __IO uint16_t   DTOG_RX :  1; //!<[14] Data Toggle, for reception transfers
      __IO uint16_t   CTR_RX  :  1; //!<[15] Correct transfer for reception
    } B;
    __IO uint16_t  R;
  };
  union EP2R_DEF     {  //!< endpoint 2 register
    struct {
      __IO uint16_t   EA      :  4; //!<[00] Endpoint address
      __IO uint16_t   STAT_TX :  2; //!<[04] Status bits, for transmission transfers
      __IO uint16_t   DTOG_TX :  1; //!<[06] Data Toggle, for transmission transfers
      __IO uint16_t   CTR_TX  :  1; //!<[07] Correct Transfer for transmission
      __IO uint16_t   EP_KIND :  1; //!<[08] Endpoint kind
      __IO uint16_t   EP_TYPE :  2; //!<[09] Endpoint type
      __IO uint16_t   SETUP   :  1; //!<[11] Setup transaction completed
      __IO uint16_t   STAT_RX :  2; //!<[12] Status bits, for reception transfers
      __IO uint16_t   DTOG_RX :  1; //!<[14] Data Toggle, for reception transfers
      __IO uint16_t   CTR_RX  :  1; //!<[15] Correct transfer for reception
    } B;
    __IO uint16_t  R;
  };
  union EP3R_DEF     {  //!< endpoint 3 register
    struct {
      __IO uint16_t   EA      :  4; //!<[00] Endpoint address
      __IO uint16_t   STAT_TX :  2; //!<[04] Status bits, for transmission transfers
      __IO uint16_t   DTOG_TX :  1; //!<[06] Data Toggle, for transmission transfers
      __IO uint16_t   CTR_TX  :  1; //!<[07] Correct Transfer for transmission
      __IO uint16_t   EP_KIND :  1; //!<[08] Endpoint kind
      __IO uint16_t   EP_TYPE :  2; //!<[09] Endpoint type
      __IO uint16_t   SETUP   :  1; //!<[11] Setup transaction completed
      __IO uint16_t   STAT_RX :  2; //!<[12] Status bits, for reception transfers
      __IO uint16_t   DTOG_RX :  1; //!<[14] Data Toggle, for reception transfers
      __IO uint16_t   CTR_RX  :  1; //!<[15] Correct transfer for reception
    } B;
    __IO uint16_t  R;
  };
  union EP4R_DEF     {  //!< endpoint 4 register
    struct {
      __IO uint16_t   EA      :  4; //!<[00] Endpoint address
      __IO uint16_t   STAT_TX :  2; //!<[04] Status bits, for transmission transfers
      __IO uint16_t   DTOG_TX :  1; //!<[06] Data Toggle, for transmission transfers
      __IO uint16_t   CTR_TX  :  1; //!<[07] Correct Transfer for transmission
      __IO uint16_t   EP_KIND :  1; //!<[08] Endpoint kind
      __IO uint16_t   EP_TYPE :  2; //!<[09] Endpoint type
      __IO uint16_t   SETUP   :  1; //!<[11] Setup transaction completed
      __IO uint16_t   STAT_RX :  2; //!<[12] Status bits, for reception transfers
      __IO uint16_t   DTOG_RX :  1; //!<[14] Data Toggle, for reception transfers
      __IO uint16_t   CTR_RX  :  1; //!<[15] Correct transfer for reception
    } B;
    __IO uint16_t  R;
  };
  union EP5R_DEF     {  //!< endpoint 5 register
    struct {
      __IO uint16_t   EA      :  4; //!<[00] Endpoint address
      __IO uint16_t   STAT_TX :  2; //!<[04] Status bits, for transmission transfers
      __IO uint16_t   DTOG_TX :  1; //!<[06] Data Toggle, for transmission transfers
      __IO uint16_t   CTR_TX  :  1; //!<[07] Correct Transfer for transmission
      __IO uint16_t   EP_KIND :  1; //!<[08] Endpoint kind
      __IO uint16_t   EP_TYPE :  2; //!<[09] Endpoint type
      __IO uint16_t   SETUP   :  1; //!<[11] Setup transaction completed
      __IO uint16_t   STAT_RX :  2; //!<[12] Status bits, for reception transfers
      __IO uint16_t   DTOG_RX :  1; //!<[14] Data Toggle, for reception transfers
      __IO uint16_t   CTR_RX  :  1; //!<[15] Correct transfer for reception
    } B;
    __IO uint16_t  R;
  };
  union EP6R_DEF     {  //!< endpoint 6 register
    struct {
      __IO uint16_t   EA      :  4; //!<[00] Endpoint address
      __IO uint16_t   STAT_TX :  2; //!<[04] Status bits, for transmission transfers
      __IO uint16_t   DTOG_TX :  1; //!<[06] Data Toggle, for transmission transfers
      __IO uint16_t   CTR_TX  :  1; //!<[07] Correct Transfer for transmission
      __IO uint16_t   EP_KIND :  1; //!<[08] Endpoint kind
      __IO uint16_t   EP_TYPE :  2; //!<[09] Endpoint type
      __IO uint16_t   SETUP   :  1; //!<[11] Setup transaction completed
      __IO uint16_t   STAT_RX :  2; //!<[12] Status bits, for reception transfers
      __IO uint16_t   DTOG_RX :  1; //!<[14] Data Toggle, for reception transfers
      __IO uint16_t   CTR_RX  :  1; //!<[15] Correct transfer for reception
    } B;
    __IO uint16_t  R;
  };
  union EP7R_DEF     {  //!< endpoint 7 register
    struct {
      __IO uint16_t   EA      :  4; //!<[00] Endpoint address
      __IO uint16_t   STAT_TX :  2; //!<[04] Status bits, for transmission transfers
      __IO uint16_t   DTOG_TX :  1; //!<[06] Data Toggle, for transmission transfers
      __IO uint16_t   CTR_TX  :  1; //!<[07] Correct Transfer for transmission
      __IO uint16_t   EP_KIND :  1; //!<[08] Endpoint kind
      __IO uint16_t   EP_TYPE :  2; //!<[09] Endpoint type
      __IO uint16_t   SETUP   :  1; //!<[11] Setup transaction completed
      __IO uint16_t   STAT_RX :  2; //!<[12] Status bits, for reception transfers
      __IO uint16_t   DTOG_RX :  1; //!<[14] Data Toggle, for reception transfers
      __IO uint16_t   CTR_RX  :  1; //!<[15] Correct transfer for reception
    } B;
    __IO uint16_t  R;
  };
  union CNTR_DEF     {  //!< control register
    struct {
      __IO uint16_t   FRES    :  1; //!<[00] Force USB Reset
      __IO uint16_t   PDWN    :  1; //!<[01] Power down
      __IO uint16_t   LPMODE  :  1; //!<[02] Low-power mode
      __IO uint16_t   FSUSP   :  1; //!<[03] Force suspend
      __IO uint16_t   RESUME  :  1; //!<[04] Resume request
           uint16_t   UNUSED0 :  3; //!<[05] 
      __IO uint16_t   ESOFM   :  1; //!<[08] Expected start of frame interrupt mask
      __IO uint16_t   SOFM    :  1; //!<[09] Start of frame interrupt mask
      __IO uint16_t   RESETM  :  1; //!<[10] USB reset interrupt mask
      __IO uint16_t   SUSPM   :  1; //!<[11] Suspend mode interrupt mask
      __IO uint16_t   WKUPM   :  1; //!<[12] Wakeup interrupt mask
      __IO uint16_t   ERRM    :  1; //!<[13] Error interrupt mask
      __IO uint16_t   PMAOVRM :  1; //!<[14] Packet memory area over / underrun interrupt mask
      __IO uint16_t   CTRM    :  1; //!<[15] Correct transfer interrupt mask
    } B;
    __IO uint16_t  R;
  };
  union ISTR_DEF     {  //!< interrupt status register
    struct {
      __IO uint16_t   EP_ID   :  4; //!<[00] Endpoint Identifier
      __IO uint16_t   DIR     :  1; //!<[04] Direction of transaction
           uint16_t   UNUSED0 :  3; //!<[05] 
      __IO uint16_t   ESOF    :  1; //!<[08] Expected start frame
      __IO uint16_t   SOF     :  1; //!<[09] start of frame
      __IO uint16_t   RESET   :  1; //!<[10] reset request
      __IO uint16_t   SUSP    :  1; //!<[11] Suspend mode request
      __IO uint16_t   WKUP    :  1; //!<[12] Wakeup
      __IO uint16_t   ERR     :  1; //!<[13] Error
      __IO uint16_t   PMAOVR  :  1; //!<[14] Packet memory area over / underrun
      __IO uint16_t   CTR     :  1; //!<[15] Correct transfer
    } B;
    __IO uint16_t  R;
  };
  union FNR_DEF      {  //!< frame number register
    struct {
      __I  uint16_t   FN   : 11; //!<[00] Frame number
      __I  uint16_t   LSOF :  2; //!<[11] Lost SOF
      __I  uint16_t   LCK  :  1; //!<[13] Locked
      __I  uint16_t   RXDM :  1; //!<[14] Receive data - line status
      __I  uint16_t   RXDP :  1; //!<[15] Receive data + line status
    } B;
    __I  uint16_t  R;
  };
  union DADDR_DEF    {  //!< device address
    struct {
      __IO uint16_t   ADD :  7; //!<[00] Device address
      __IO uint16_t   EF  :  1; //!<[07] Enable function
    } B;
    __IO uint16_t  R;
  };
  union BTABLE_DEF   {  //!< Buffer table address
    struct {
           uint32_t   UNUSED0 :  3; //!<[00] 
      __IO uint32_t   BTABLE  : 13; //!<[03] Buffer table
    } B;
    __IO uint32_t  R;
    explicit BTABLE_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      BTABLE_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      BTABLE_DEF r; r.R = R;
      R = f (r);
    }
  };
  // PERIPHERAL USB REGISTERS INSTANCES
  __IO EP0R_DEF                EP0R ;  //!< [0000](02)[0x00000000]
       uint8_t            UNUSED0 [2];  //!< [0002](02)[0xFFFFFFFF]
  __IO EP1R_DEF                EP1R ;  //!< [0004](02)[0x00000000]
       uint8_t            UNUSED1 [2];  //!< [0006](02)[0xFFFFFFFF]
  __IO EP2R_DEF                EP2R ;  //!< [0008](02)[0x00000000]
       uint8_t            UNUSED2 [2];  //!< [000a](02)[0xFFFFFFFF]
  __IO EP3R_DEF                EP3R ;  //!< [000c](02)[0x00000000]
       uint8_t            UNUSED3 [2];  //!< [000e](02)[0xFFFFFFFF]
  __IO EP4R_DEF                EP4R ;  //!< [0010](02)[0x00000000]
       uint8_t            UNUSED4 [2];  //!< [0012](02)[0xFFFFFFFF]
  __IO EP5R_DEF                EP5R ;  //!< [0014](02)[0x00000000]
       uint8_t            UNUSED5 [2];  //!< [0016](02)[0xFFFFFFFF]
  __IO EP6R_DEF                EP6R ;  //!< [0018](02)[0x00000000]
       uint8_t            UNUSED6 [2];  //!< [001a](02)[0xFFFFFFFF]
  __IO EP7R_DEF                EP7R ;  //!< [001c](02)[0x00000000]
       uint8_t            UNUSED7 [34];  //!< [001e](22)[0xFFFFFFFF]
  __IO CNTR_DEF                CNTR ;  //!< [0040](02)[0x00000003]
       uint8_t            UNUSED8 [2];  //!< [0042](02)[0xFFFFFFFF]
  __IO ISTR_DEF                ISTR ;  //!< [0044](02)[0x00000000]
       uint8_t            UNUSED9 [2];  //!< [0046](02)[0xFFFFFFFF]
  __I  FNR_DEF                  FNR ;  //!< [0048](02)[0x00000000]
       uint8_t          UNUSED10 [2];  //!< [004a](02)[0xFFFFFFFF]
  __IO DADDR_DEF              DADDR ;  //!< [004c](02)[0x00000000]
       uint8_t          UNUSED11 [2];  //!< [004e](02)[0xFFFFFFFF]
  __IO BTABLE_DEF            BTABLE ;  //!< [0050](04)[0x00000000]
}; /* total size = 0x0400, struct size = 0x0054 */

// ////////////////////+++ CAN1 +-+//////////////////// //
struct CAN1_Type         { /*!< Controller area network */
  union CTLR_DEF    {  //!< CAN Master control register
    struct {
      __IO ONE_BIT    INRQ    :  1; //!<[00] Initialization request
      __IO ONE_BIT    SLEEP   :  1; //!<[01] Sleep mode request
      __IO ONE_BIT    TXFP    :  1; //!<[02] Transmit FIFO priority
      __IO ONE_BIT    RFLM    :  1; //!<[03] Receive FIFO locked mode
      __IO ONE_BIT    NART    :  1; //!<[04] No automatic retransmission
      __IO ONE_BIT    AWUM    :  1; //!<[05] Automatic wakeup mode
      __IO ONE_BIT    ABOM    :  1; //!<[06] Automatic bus-off management
      __IO ONE_BIT    TTCM    :  1; //!<[07] Time triggered communication mode
           uint32_t   UNUSED0 :  7; //!<[08] 
      __IO ONE_BIT    RESET   :  1; //!<[15] Software master reset
      __IO ONE_BIT    DBF     :  1; //!<[16] Debug freeze
    } B;
    __IO uint32_t  R;
    explicit CTLR_DEF () noexcept { R = 0x00010002u; }
    template<typename F> void setbit (F f) volatile {
      CTLR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CTLR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union STATR_DEF   {  //!< CAN master status register
    struct {
      __I  ONE_BIT    INAK    :  1; //!<[00] Initialization acknowledge
      __I  ONE_BIT    SLAK    :  1; //!<[01] Sleep acknowledge
      __IO ONE_BIT    ERRI    :  1; //!<[02] Error interrupt
      __IO ONE_BIT    WKUI    :  1; //!<[03] Wakeup interrupt
      __IO ONE_BIT    SLAKI   :  1; //!<[04] Sleep acknowledge interrupt
           uint32_t   UNUSED0 :  3; //!<[05] 
      __I  ONE_BIT    TXM     :  1; //!<[08] Transmit mode
      __I  ONE_BIT    RXM     :  1; //!<[09] Receive mode
      __I  ONE_BIT    SAMP    :  1; //!<[10] Last sample point
      __I  ONE_BIT    RX      :  1; //!<[11] Rx signal
    } B;
    __IO uint32_t  R;
    explicit STATR_DEF () noexcept { R = 0x00000c02u; }
    template<typename F> void setbit (F f) volatile {
      STATR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      STATR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union TSTATR_DEF  {  //!< CAN transmit status register
    struct {
      __IO ONE_BIT    RQCP0   :  1; //!<[00] Request completed mailbox0
      __IO ONE_BIT    TXOK0   :  1; //!<[01] Transmission OK of mailbox0
      __IO ONE_BIT    ALST0   :  1; //!<[02] Arbitration lost for mailbox0
      __IO ONE_BIT    TERR0   :  1; //!<[03] Transmission error of mailbox0
           uint32_t   UNUSED0 :  3; //!<[04] 
      __IO ONE_BIT    ABRQ0   :  1; //!<[07] Abort request for mailbox0
      __IO ONE_BIT    RQCP1   :  1; //!<[08] Request completed mailbox1
      __IO ONE_BIT    TXOK1   :  1; //!<[09] Transmission OK of mailbox1
      __IO ONE_BIT    ALST1   :  1; //!<[10] Arbitration lost for mailbox1
      __IO ONE_BIT    TERR1   :  1; //!<[11] Transmission error of mailbox1
           uint32_t   UNUSED1 :  3; //!<[12] 
      __IO ONE_BIT    ABRQ1   :  1; //!<[15] Abort request for mailbox 1
      __IO ONE_BIT    RQCP2   :  1; //!<[16] Request completed mailbox2
      __IO ONE_BIT    TXOK2   :  1; //!<[17] Transmission OK of mailbox 2
      __IO ONE_BIT    ALST2   :  1; //!<[18] Arbitration lost for mailbox 2
      __IO ONE_BIT    TERR2   :  1; //!<[19] Transmission error of mailbox 2
           uint32_t   UNUSED2 :  3; //!<[20] 
      __IO ONE_BIT    ABRQ2   :  1; //!<[23] Abort request for mailbox 2
      __I  uint32_t   CODE    :  2; //!<[24] Mailbox code
      __I  ONE_BIT    TME0    :  1; //!<[26] Transmit mailbox 0 empty
      __I  ONE_BIT    TME1    :  1; //!<[27] Transmit mailbox 1 empty
      __I  ONE_BIT    TME2    :  1; //!<[28] Transmit mailbox 2 empty
      __I  ONE_BIT    LOW0    :  1; //!<[29] Lowest priority flag for mailbox 0
      __I  ONE_BIT    LOW1    :  1; //!<[30] Lowest priority flag for mailbox 1
      __I  ONE_BIT    LOW2    :  1; //!<[31] Lowest priority flag for mailbox 2
    } B;
    __IO uint32_t  R;
    explicit TSTATR_DEF () noexcept { R = 0x1c000000u; }
    template<typename F> void setbit (F f) volatile {
      TSTATR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      TSTATR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union RFIFO0_DEF  {  //!< CAN receive FIFO 0 register
    struct {
      __I  uint32_t   FMP0    :  2; //!<[00] FIFO 0 message pending
           ONE_BIT    UNUSED0 :  1; //!<[02] 
      __IO ONE_BIT    FULL0   :  1; //!<[03] FIFO 0 full
      __IO ONE_BIT    FOVR0   :  1; //!<[04] FIFO 0 overrun
      __IO ONE_BIT    RFOM0   :  1; //!<[05] Release FIFO 0 output mailbox
    } B;
    __IO uint32_t  R;
    explicit RFIFO0_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      RFIFO0_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      RFIFO0_DEF r; r.R = R;
      R = f (r);
    }
  };
  union RFIFO1_DEF  {  //!< CAN receive FIFO 1 register
    struct {
      __I  uint32_t   FMP1    :  2; //!<[00] FIFO 1 message pending
           ONE_BIT    UNUSED0 :  1; //!<[02] 
      __IO ONE_BIT    FULL1   :  1; //!<[03] FIFO 1 full
      __IO ONE_BIT    FOVR1   :  1; //!<[04] FIFO 1 overrun
      __IO ONE_BIT    RFOM1   :  1; //!<[05] Release FIFO 1 output mailbox
    } B;
    __IO uint32_t  R;
    explicit RFIFO1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      RFIFO1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      RFIFO1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union INTENR_DEF  {  //!< CAN interrupt enable register
    struct {
      __IO ONE_BIT    TMEIE   :  1; //!<[00] Transmit mailbox empty interrupt enable
      __IO ONE_BIT    FMPIE0  :  1; //!<[01] FIFO message pending interrupt enable
      __IO ONE_BIT    FFIE0   :  1; //!<[02] FIFO full interrupt enable
      __IO ONE_BIT    FOVIE0  :  1; //!<[03] FIFO overrun interrupt enable
      __IO ONE_BIT    FMPIE1  :  1; //!<[04] FIFO message pending interrupt enable
      __IO ONE_BIT    FFIE1   :  1; //!<[05] FIFO full interrupt enable
      __IO ONE_BIT    FOVIE1  :  1; //!<[06] FIFO overrun interrupt enable
           ONE_BIT    UNUSED0 :  1; //!<[07] 
      __IO ONE_BIT    EWGIE   :  1; //!<[08] Error warning interrupt enable
      __IO ONE_BIT    EPVIE   :  1; //!<[09] Error passive interrupt enable
      __IO ONE_BIT    BOFIE   :  1; //!<[10] Bus-off interrupt enable
      __IO ONE_BIT    LECIE   :  1; //!<[11] Last error code interrupt enable
           uint32_t   UNUSED1 :  3; //!<[12] 
      __IO ONE_BIT    ERRIE   :  1; //!<[15] Error interrupt enable
      __IO ONE_BIT    WKUIE   :  1; //!<[16] Wakeup interrupt enable
      __IO ONE_BIT    SLKIE   :  1; //!<[17] Sleep interrupt enable
    } B;
    __IO uint32_t  R;
    explicit INTENR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      INTENR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      INTENR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ERRSR_DEF   {  //!< CAN error status register
    struct {
      __I  ONE_BIT    EWGF    :  1; //!<[00] Error warning flag
      __I  ONE_BIT    EPVF    :  1; //!<[01] Error passive flag
      __I  ONE_BIT    BOFF    :  1; //!<[02] Bus-off flag
           ONE_BIT    UNUSED0 :  1; //!<[03] 
      __IO uint32_t   LEC     :  3; //!<[04] Last error code
           uint32_t   UNUSED1 :  9; //!<[07] 
      __I  uint32_t   TEC     :  8; //!<[16] Least significant byte of the 9-bit transmit error counter
      __I  uint32_t   REC     :  8; //!<[24] Receive error counter
    } B;
    __IO uint32_t  R;
    explicit ERRSR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ERRSR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ERRSR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union BTIMR_DEF   {  //!< CAN bit timing register
    struct {
      __IO uint32_t   BRP     : 10; //!<[00] Baud rate prescaler
           uint32_t   UNUSED0 :  6; //!<[10] 
      __IO uint32_t   TS1     :  4; //!<[16] Time segment 1
      __IO uint32_t   TS2     :  3; //!<[20] Time segment 2
           ONE_BIT    UNUSED1 :  1; //!<[23] 
      __IO uint32_t   SJW     :  2; //!<[24] Resynchronization jump width
           uint32_t   UNUSED2 :  4; //!<[26] 
      __IO ONE_BIT    LBKM    :  1; //!<[30] Loop back mode (debug)
      __IO ONE_BIT    SILM    :  1; //!<[31] Silent mode (debug)
    } B;
    __IO uint32_t  R;
    explicit BTIMR_DEF () noexcept { R = 0x01230000u; }
    template<typename F> void setbit (F f) volatile {
      BTIMR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      BTIMR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union TXMIR0_DEF  {  //!< CAN TX mailbox identifier register
    struct {
      __IO ONE_BIT    TXRQ :  1; //!<[00] Transmit mailbox request
      __IO ONE_BIT    RTR  :  1; //!<[01] Remote transmission request
      __IO ONE_BIT    IDE  :  1; //!<[02] Identifier extension
      __IO uint32_t   EXID : 18; //!<[03] extended identifier
      __IO uint32_t   STID : 11; //!<[21] Standard identifier
    } B;
    __IO uint32_t  R;
    explicit TXMIR0_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      TXMIR0_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      TXMIR0_DEF r; r.R = R;
      R = f (r);
    }
  };
  union TXMDTR0_DEF {  //!< CAN mailbox data length control and time stamp register
    struct {
      __IO uint32_t   DLC     :  4; //!<[00] Data length code
           uint32_t   UNUSED0 :  4; //!<[04] 
      __IO ONE_BIT    TGT     :  1; //!<[08] Transmit global time
           uint32_t   UNUSED1 :  7; //!<[09] 
      __IO uint32_t   TIME    : 16; //!<[16] Message time stamp
    } B;
    __IO uint32_t  R;
    explicit TXMDTR0_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      TXMDTR0_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      TXMDTR0_DEF r; r.R = R;
      R = f (r);
    }
  };
  union TXMDLR0_DEF {  //!< CAN mailbox data low register
    struct {
      __IO uint32_t   DATA0 :  8; //!<[00] Data byte 0
      __IO uint32_t   DATA1 :  8; //!<[08] Data byte 1
      __IO uint32_t   DATA2 :  8; //!<[16] Data byte 2
      __IO uint32_t   DATA3 :  8; //!<[24] Data byte 3
    } B;
    __IO uint32_t  R;
    explicit TXMDLR0_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      TXMDLR0_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      TXMDLR0_DEF r; r.R = R;
      R = f (r);
    }
  };
  union TXMDHR0_DEF {  //!< CAN mailbox data high register
    struct {
      __IO uint32_t   DATA4 :  8; //!<[00] Data byte 4
      __IO uint32_t   DATA5 :  8; //!<[08] Data byte 5
      __IO uint32_t   DATA6 :  8; //!<[16] Data byte 6
      __IO uint32_t   DATA7 :  8; //!<[24] Data byte 7
    } B;
    __IO uint32_t  R;
    explicit TXMDHR0_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      TXMDHR0_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      TXMDHR0_DEF r; r.R = R;
      R = f (r);
    }
  };
  union TXMIR1_DEF  {  //!< CAN TX mailbox identifier register
    struct {
      __IO ONE_BIT    TXRQ :  1; //!<[00] Transmit mailbox request
      __IO ONE_BIT    RTR  :  1; //!<[01] Remote transmission request
      __IO ONE_BIT    IDE  :  1; //!<[02] Identifier extension
      __IO uint32_t   EXID : 18; //!<[03] extended identifier
      __IO uint32_t   STID : 11; //!<[21] Standard identifier
    } B;
    __IO uint32_t  R;
    explicit TXMIR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      TXMIR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      TXMIR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union TXMDTR1_DEF {  //!< CAN mailbox data length control and time stamp register
    struct {
      __IO uint32_t   DLC     :  4; //!<[00] Data length code
           uint32_t   UNUSED0 :  4; //!<[04] 
      __IO ONE_BIT    TGT     :  1; //!<[08] Transmit global time
           uint32_t   UNUSED1 :  7; //!<[09] 
      __IO uint32_t   TIME    : 16; //!<[16] Message time stamp
    } B;
    __IO uint32_t  R;
    explicit TXMDTR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      TXMDTR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      TXMDTR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union TXMDLR1_DEF {  //!< CAN mailbox data low register
    struct {
      __IO uint32_t   DATA0 :  8; //!<[00] Data byte 0
      __IO uint32_t   DATA1 :  8; //!<[08] Data byte 1
      __IO uint32_t   DATA2 :  8; //!<[16] Data byte 2
      __IO uint32_t   DATA3 :  8; //!<[24] Data byte 3
    } B;
    __IO uint32_t  R;
    explicit TXMDLR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      TXMDLR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      TXMDLR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union TXMDHR1_DEF {  //!< CAN mailbox data high register
    struct {
      __IO uint32_t   DATA4 :  8; //!<[00] Data byte 4
      __IO uint32_t   DATA5 :  8; //!<[08] Data byte 5
      __IO uint32_t   DATA6 :  8; //!<[16] Data byte 6
      __IO uint32_t   DATA7 :  8; //!<[24] Data byte 7
    } B;
    __IO uint32_t  R;
    explicit TXMDHR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      TXMDHR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      TXMDHR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union TXMIR2_DEF  {  //!< CAN TX mailbox identifier register
    struct {
      __IO ONE_BIT    TXRQ :  1; //!<[00] Transmit mailbox request
      __IO ONE_BIT    RTR  :  1; //!<[01] Remote transmission request
      __IO ONE_BIT    IDE  :  1; //!<[02] Identifier extension
      __IO uint32_t   EXID : 18; //!<[03] extended identifier
      __IO uint32_t   STID : 11; //!<[21] Standard identifier
    } B;
    __IO uint32_t  R;
    explicit TXMIR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      TXMIR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      TXMIR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union TXMDTR2_DEF {  //!< CAN mailbox data length control and time stamp register
    struct {
      __IO uint32_t   DLC     :  4; //!<[00] Data length code
           uint32_t   UNUSED0 :  4; //!<[04] 
      __IO ONE_BIT    TGT     :  1; //!<[08] Transmit global time
           uint32_t   UNUSED1 :  7; //!<[09] 
      __IO uint32_t   TIME    : 16; //!<[16] Message time stamp
    } B;
    __IO uint32_t  R;
    explicit TXMDTR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      TXMDTR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      TXMDTR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union TXMDLR2_DEF {  //!< CAN mailbox data low register
    struct {
      __IO uint32_t   DATA0 :  8; //!<[00] Data byte 0
      __IO uint32_t   DATA1 :  8; //!<[08] Data byte 1
      __IO uint32_t   DATA2 :  8; //!<[16] Data byte 2
      __IO uint32_t   DATA3 :  8; //!<[24] Data byte 3
    } B;
    __IO uint32_t  R;
    explicit TXMDLR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      TXMDLR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      TXMDLR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union TXMDHR2_DEF {  //!< CAN mailbox data high register
    struct {
      __IO uint32_t   DATA4 :  8; //!<[00] Data byte 4
      __IO uint32_t   DATA5 :  8; //!<[08] Data byte 5
      __IO uint32_t   DATA6 :  8; //!<[16] Data byte 6
      __IO uint32_t   DATA7 :  8; //!<[24] Data byte 7
    } B;
    __IO uint32_t  R;
    explicit TXMDHR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      TXMDHR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      TXMDHR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union RXMIR0_DEF  {  //!< CAN receive FIFO mailbox identifier register
    struct {
           ONE_BIT    UNUSED0 :  1; //!<[00] 
      __I  ONE_BIT    RTR     :  1; //!<[01] Remote transmission request
      __I  ONE_BIT    IDE     :  1; //!<[02] Identifier extension
      __I  uint32_t   EXID    : 18; //!<[03] extended identifier
      __I  uint32_t   STID    : 11; //!<[21] Standard identifier
    } B;
    __I  uint32_t  R;

    explicit RXMIR0_DEF (volatile RXMIR0_DEF & o) noexcept { R = o.R; };
  };
  union RXMDTR0_DEF {  //!< CAN receive FIFO mailbox data length control and time stamp register
    struct {
      __I  uint32_t   DLC     :  4; //!<[00] Data length code
           uint32_t   UNUSED0 :  4; //!<[04] 
      __I  uint32_t   FMI     :  8; //!<[08] Filter match index
      __I  uint32_t   TIME    : 16; //!<[16] Message time stamp
    } B;
    __I  uint32_t  R;

    explicit RXMDTR0_DEF (volatile RXMDTR0_DEF & o) noexcept { R = o.R; };
  };
  union RXMDLR0_DEF {  //!< CAN receive FIFO mailbox data low register
    struct {
      __I  uint32_t   DATA0 :  8; //!<[00] Data Byte 0
      __I  uint32_t   DATA1 :  8; //!<[08] Data Byte 1
      __I  uint32_t   DATA2 :  8; //!<[16] Data Byte 2
      __I  uint32_t   DATA3 :  8; //!<[24] Data Byte 3
    } B;
    __I  uint32_t  R;

    explicit RXMDLR0_DEF (volatile RXMDLR0_DEF & o) noexcept { R = o.R; };
  };
  union RXMDHR0_DEF {  //!< CAN receive FIFO mailbox data high register
    struct {
      __I  uint32_t   DATA4 :  8; //!<[00] DATA4
      __I  uint32_t   DATA5 :  8; //!<[08] DATA5
      __I  uint32_t   DATA6 :  8; //!<[16] DATA6
      __I  uint32_t   DATA7 :  8; //!<[24] DATA7
    } B;
    __I  uint32_t  R;

    explicit RXMDHR0_DEF (volatile RXMDHR0_DEF & o) noexcept { R = o.R; };
  };
  union RXMIR1_DEF  {  //!< CAN receive FIFO mailbox identifier register
    struct {
           ONE_BIT    UNUSED0 :  1; //!<[00] 
      __I  ONE_BIT    RTR     :  1; //!<[01] Remote transmission request
      __I  ONE_BIT    IDE     :  1; //!<[02] Identifier extension
      __I  uint32_t   EXID    : 18; //!<[03] extended identifier
      __I  uint32_t   STID    : 11; //!<[21] Standard identifier
    } B;
    __I  uint32_t  R;

    explicit RXMIR1_DEF (volatile RXMIR1_DEF & o) noexcept { R = o.R; };
  };
  union RXMDTR1_DEF {  //!< CAN receive FIFO mailbox data length control and time stamp register
    struct {
      __I  uint32_t   DLC     :  4; //!<[00] Data length code
           uint32_t   UNUSED0 :  4; //!<[04] 
      __I  uint32_t   FMI     :  8; //!<[08] Filter match index
      __I  uint32_t   TIME    : 16; //!<[16] Message time stamp
    } B;
    __I  uint32_t  R;

    explicit RXMDTR1_DEF (volatile RXMDTR1_DEF & o) noexcept { R = o.R; };
  };
  union RXMDLR1_DEF {  //!< CAN receive FIFO mailbox data low register
    struct {
      __I  uint32_t   DATA0 :  8; //!<[00] Data Byte 0
      __I  uint32_t   DATA1 :  8; //!<[08] Data Byte 1
      __I  uint32_t   DATA2 :  8; //!<[16] Data Byte 2
      __I  uint32_t   DATA3 :  8; //!<[24] Data Byte 3
    } B;
    __I  uint32_t  R;

    explicit RXMDLR1_DEF (volatile RXMDLR1_DEF & o) noexcept { R = o.R; };
  };
  union RXMDHR1_DEF {  //!< CAN receive FIFO mailbox data high register
    struct {
      __I  uint32_t   DATA4 :  8; //!<[00] DATA4
      __I  uint32_t   DATA5 :  8; //!<[08] DATA5
      __I  uint32_t   DATA6 :  8; //!<[16] DATA6
      __I  uint32_t   DATA7 :  8; //!<[24] DATA7
    } B;
    __I  uint32_t  R;

    explicit RXMDHR1_DEF (volatile RXMDHR1_DEF & o) noexcept { R = o.R; };
  };
  union FCTLR_DEF   {  //!< CAN filter master register
    struct {
      __IO ONE_BIT  FINIT :  1; //!<[00] Filter init mode
    } B;
    __IO uint32_t  R;
    explicit FCTLR_DEF () noexcept { R = 0x2a1c0e01u; }
    template<typename F> void setbit (F f) volatile {
      FCTLR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      FCTLR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union FMCFGR_DEF  {  //!< CAN filter mode register
    struct {
      __IO ONE_BIT  FBM0  :  1; //!<[00] Filter mode
      __IO ONE_BIT  FBM1  :  1; //!<[01] Filter mode
      __IO ONE_BIT  FBM2  :  1; //!<[02] Filter mode
      __IO ONE_BIT  FBM3  :  1; //!<[03] Filter mode
      __IO ONE_BIT  FBM4  :  1; //!<[04] Filter mode
      __IO ONE_BIT  FBM5  :  1; //!<[05] Filter mode
      __IO ONE_BIT  FBM6  :  1; //!<[06] Filter mode
      __IO ONE_BIT  FBM7  :  1; //!<[07] Filter mode
      __IO ONE_BIT  FBM8  :  1; //!<[08] Filter mode
      __IO ONE_BIT  FBM9  :  1; //!<[09] Filter mode
      __IO ONE_BIT  FBM10 :  1; //!<[10] Filter mode
      __IO ONE_BIT  FBM11 :  1; //!<[11] Filter mode
      __IO ONE_BIT  FBM12 :  1; //!<[12] Filter mode
      __IO ONE_BIT  FBM13 :  1; //!<[13] Filter mode
    } B;
    __IO uint32_t  R;
    explicit FMCFGR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      FMCFGR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      FMCFGR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union FSCFGR_DEF  {  //!< CAN filter scale register
    struct {
      __IO ONE_BIT  FSC0  :  1; //!<[00] Filter scale configuration
      __IO ONE_BIT  FSC1  :  1; //!<[01] Filter scale configuration
      __IO ONE_BIT  FSC2  :  1; //!<[02] Filter scale configuration
      __IO ONE_BIT  FSC3  :  1; //!<[03] Filter scale configuration
      __IO ONE_BIT  FSC4  :  1; //!<[04] Filter scale configuration
      __IO ONE_BIT  FSC5  :  1; //!<[05] Filter scale configuration
      __IO ONE_BIT  FSC6  :  1; //!<[06] Filter scale configuration
      __IO ONE_BIT  FSC7  :  1; //!<[07] Filter scale configuration
      __IO ONE_BIT  FSC8  :  1; //!<[08] Filter scale configuration
      __IO ONE_BIT  FSC9  :  1; //!<[09] Filter scale configuration
      __IO ONE_BIT  FSC10 :  1; //!<[10] Filter scale configuration
      __IO ONE_BIT  FSC11 :  1; //!<[11] Filter scale configuration
      __IO ONE_BIT  FSC12 :  1; //!<[12] Filter scale configuration
      __IO ONE_BIT  FSC13 :  1; //!<[13] Filter scale configuration
    } B;
    __IO uint32_t  R;
    explicit FSCFGR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      FSCFGR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      FSCFGR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union FAFIFOR_DEF {  //!< CAN filter FIFO assignment register
    struct {
      __IO ONE_BIT  FFA0  :  1; //!<[00] Filter FIFO assignment for filter 0
      __IO ONE_BIT  FFA1  :  1; //!<[01] Filter FIFO assignment for filter 1
      __IO ONE_BIT  FFA2  :  1; //!<[02] Filter FIFO assignment for filter 2
      __IO ONE_BIT  FFA3  :  1; //!<[03] Filter FIFO assignment for filter 3
      __IO ONE_BIT  FFA4  :  1; //!<[04] Filter FIFO assignment for filter 4
      __IO ONE_BIT  FFA5  :  1; //!<[05] Filter FIFO assignment for filter 5
      __IO ONE_BIT  FFA6  :  1; //!<[06] Filter FIFO assignment for filter 6
      __IO ONE_BIT  FFA7  :  1; //!<[07] Filter FIFO assignment for filter 7
      __IO ONE_BIT  FFA8  :  1; //!<[08] Filter FIFO assignment for filter 8
      __IO ONE_BIT  FFA9  :  1; //!<[09] Filter FIFO assignment for filter 9
      __IO ONE_BIT  FFA10 :  1; //!<[10] Filter FIFO assignment for filter 10
      __IO ONE_BIT  FFA11 :  1; //!<[11] Filter FIFO assignment for filter 11
      __IO ONE_BIT  FFA12 :  1; //!<[12] Filter FIFO assignment for filter 12
      __IO ONE_BIT  FFA13 :  1; //!<[13] Filter FIFO assignment for filter 13
    } B;
    __IO uint32_t  R;
    explicit FAFIFOR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      FAFIFOR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      FAFIFOR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union FWR_DEF     {  //!< CAN filter activation register
    struct {
      __IO ONE_BIT  FACT0  :  1; //!<[00] Filter active
      __IO ONE_BIT  FACT1  :  1; //!<[01] Filter active
      __IO ONE_BIT  FACT2  :  1; //!<[02] Filter active
      __IO ONE_BIT  FACT3  :  1; //!<[03] Filter active
      __IO ONE_BIT  FACT4  :  1; //!<[04] Filter active
      __IO ONE_BIT  FACT5  :  1; //!<[05] Filter active
      __IO ONE_BIT  FACT6  :  1; //!<[06] Filter active
      __IO ONE_BIT  FACT7  :  1; //!<[07] Filter active
      __IO ONE_BIT  FACT8  :  1; //!<[08] Filter active
      __IO ONE_BIT  FACT9  :  1; //!<[09] Filter active
      __IO ONE_BIT  FACT10 :  1; //!<[10] Filter active
      __IO ONE_BIT  FACT11 :  1; //!<[11] Filter active
      __IO ONE_BIT  FACT12 :  1; //!<[12] Filter active
      __IO ONE_BIT  FACT13 :  1; //!<[13] Filter active
    } B;
    __IO uint32_t  R;
    explicit FWR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      FWR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      FWR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union F0R1_DEF    {  //!< Filter bank 0 register 1
    struct {
      __IO ONE_BIT  FB0  :  1; //!<[00] Filter bits
      __IO ONE_BIT  FB1  :  1; //!<[01] Filter bits
      __IO ONE_BIT  FB2  :  1; //!<[02] Filter bits
      __IO ONE_BIT  FB3  :  1; //!<[03] Filter bits
      __IO ONE_BIT  FB4  :  1; //!<[04] Filter bits
      __IO ONE_BIT  FB5  :  1; //!<[05] Filter bits
      __IO ONE_BIT  FB6  :  1; //!<[06] Filter bits
      __IO ONE_BIT  FB7  :  1; //!<[07] Filter bits
      __IO ONE_BIT  FB8  :  1; //!<[08] Filter bits
      __IO ONE_BIT  FB9  :  1; //!<[09] Filter bits
      __IO ONE_BIT  FB10 :  1; //!<[10] Filter bits
      __IO ONE_BIT  FB11 :  1; //!<[11] Filter bits
      __IO ONE_BIT  FB12 :  1; //!<[12] Filter bits
      __IO ONE_BIT  FB13 :  1; //!<[13] Filter bits
      __IO ONE_BIT  FB14 :  1; //!<[14] Filter bits
      __IO ONE_BIT  FB15 :  1; //!<[15] Filter bits
      __IO ONE_BIT  FB16 :  1; //!<[16] Filter bits
      __IO ONE_BIT  FB17 :  1; //!<[17] Filter bits
      __IO ONE_BIT  FB18 :  1; //!<[18] Filter bits
      __IO ONE_BIT  FB19 :  1; //!<[19] Filter bits
      __IO ONE_BIT  FB20 :  1; //!<[20] Filter bits
      __IO ONE_BIT  FB21 :  1; //!<[21] Filter bits
      __IO ONE_BIT  FB22 :  1; //!<[22] Filter bits
      __IO ONE_BIT  FB23 :  1; //!<[23] Filter bits
      __IO ONE_BIT  FB24 :  1; //!<[24] Filter bits
      __IO ONE_BIT  FB25 :  1; //!<[25] Filter bits
      __IO ONE_BIT  FB26 :  1; //!<[26] Filter bits
      __IO ONE_BIT  FB27 :  1; //!<[27] Filter bits
      __IO ONE_BIT  FB28 :  1; //!<[28] Filter bits
      __IO ONE_BIT  FB29 :  1; //!<[29] Filter bits
      __IO ONE_BIT  FB30 :  1; //!<[30] Filter bits
      __IO ONE_BIT  FB31 :  1; //!<[31] Filter bits
    } B;
    __IO uint32_t  R;
    explicit F0R1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      F0R1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      F0R1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union F0R2_DEF    {  //!< Filter bank 0 register 2
    struct {
      __IO ONE_BIT  FB0  :  1; //!<[00] Filter bits
      __IO ONE_BIT  FB1  :  1; //!<[01] Filter bits
      __IO ONE_BIT  FB2  :  1; //!<[02] Filter bits
      __IO ONE_BIT  FB3  :  1; //!<[03] Filter bits
      __IO ONE_BIT  FB4  :  1; //!<[04] Filter bits
      __IO ONE_BIT  FB5  :  1; //!<[05] Filter bits
      __IO ONE_BIT  FB6  :  1; //!<[06] Filter bits
      __IO ONE_BIT  FB7  :  1; //!<[07] Filter bits
      __IO ONE_BIT  FB8  :  1; //!<[08] Filter bits
      __IO ONE_BIT  FB9  :  1; //!<[09] Filter bits
      __IO ONE_BIT  FB10 :  1; //!<[10] Filter bits
      __IO ONE_BIT  FB11 :  1; //!<[11] Filter bits
      __IO ONE_BIT  FB12 :  1; //!<[12] Filter bits
      __IO ONE_BIT  FB13 :  1; //!<[13] Filter bits
      __IO ONE_BIT  FB14 :  1; //!<[14] Filter bits
      __IO ONE_BIT  FB15 :  1; //!<[15] Filter bits
      __IO ONE_BIT  FB16 :  1; //!<[16] Filter bits
      __IO ONE_BIT  FB17 :  1; //!<[17] Filter bits
      __IO ONE_BIT  FB18 :  1; //!<[18] Filter bits
      __IO ONE_BIT  FB19 :  1; //!<[19] Filter bits
      __IO ONE_BIT  FB20 :  1; //!<[20] Filter bits
      __IO ONE_BIT  FB21 :  1; //!<[21] Filter bits
      __IO ONE_BIT  FB22 :  1; //!<[22] Filter bits
      __IO ONE_BIT  FB23 :  1; //!<[23] Filter bits
      __IO ONE_BIT  FB24 :  1; //!<[24] Filter bits
      __IO ONE_BIT  FB25 :  1; //!<[25] Filter bits
      __IO ONE_BIT  FB26 :  1; //!<[26] Filter bits
      __IO ONE_BIT  FB27 :  1; //!<[27] Filter bits
      __IO ONE_BIT  FB28 :  1; //!<[28] Filter bits
      __IO ONE_BIT  FB29 :  1; //!<[29] Filter bits
      __IO ONE_BIT  FB30 :  1; //!<[30] Filter bits
      __IO ONE_BIT  FB31 :  1; //!<[31] Filter bits
    } B;
    __IO uint32_t  R;
    explicit F0R2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      F0R2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      F0R2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union F1R1_DEF    {  //!< Filter bank 1 register 1
    struct {
      __IO ONE_BIT  FB0  :  1; //!<[00] Filter bits
      __IO ONE_BIT  FB1  :  1; //!<[01] Filter bits
      __IO ONE_BIT  FB2  :  1; //!<[02] Filter bits
      __IO ONE_BIT  FB3  :  1; //!<[03] Filter bits
      __IO ONE_BIT  FB4  :  1; //!<[04] Filter bits
      __IO ONE_BIT  FB5  :  1; //!<[05] Filter bits
      __IO ONE_BIT  FB6  :  1; //!<[06] Filter bits
      __IO ONE_BIT  FB7  :  1; //!<[07] Filter bits
      __IO ONE_BIT  FB8  :  1; //!<[08] Filter bits
      __IO ONE_BIT  FB9  :  1; //!<[09] Filter bits
      __IO ONE_BIT  FB10 :  1; //!<[10] Filter bits
      __IO ONE_BIT  FB11 :  1; //!<[11] Filter bits
      __IO ONE_BIT  FB12 :  1; //!<[12] Filter bits
      __IO ONE_BIT  FB13 :  1; //!<[13] Filter bits
      __IO ONE_BIT  FB14 :  1; //!<[14] Filter bits
      __IO ONE_BIT  FB15 :  1; //!<[15] Filter bits
      __IO ONE_BIT  FB16 :  1; //!<[16] Filter bits
      __IO ONE_BIT  FB17 :  1; //!<[17] Filter bits
      __IO ONE_BIT  FB18 :  1; //!<[18] Filter bits
      __IO ONE_BIT  FB19 :  1; //!<[19] Filter bits
      __IO ONE_BIT  FB20 :  1; //!<[20] Filter bits
      __IO ONE_BIT  FB21 :  1; //!<[21] Filter bits
      __IO ONE_BIT  FB22 :  1; //!<[22] Filter bits
      __IO ONE_BIT  FB23 :  1; //!<[23] Filter bits
      __IO ONE_BIT  FB24 :  1; //!<[24] Filter bits
      __IO ONE_BIT  FB25 :  1; //!<[25] Filter bits
      __IO ONE_BIT  FB26 :  1; //!<[26] Filter bits
      __IO ONE_BIT  FB27 :  1; //!<[27] Filter bits
      __IO ONE_BIT  FB28 :  1; //!<[28] Filter bits
      __IO ONE_BIT  FB29 :  1; //!<[29] Filter bits
      __IO ONE_BIT  FB30 :  1; //!<[30] Filter bits
      __IO ONE_BIT  FB31 :  1; //!<[31] Filter bits
    } B;
    __IO uint32_t  R;
    explicit F1R1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      F1R1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      F1R1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union F1R2_DEF    {  //!< Filter bank 1 register 2
    struct {
      __IO ONE_BIT  FB0  :  1; //!<[00] Filter bits
      __IO ONE_BIT  FB1  :  1; //!<[01] Filter bits
      __IO ONE_BIT  FB2  :  1; //!<[02] Filter bits
      __IO ONE_BIT  FB3  :  1; //!<[03] Filter bits
      __IO ONE_BIT  FB4  :  1; //!<[04] Filter bits
      __IO ONE_BIT  FB5  :  1; //!<[05] Filter bits
      __IO ONE_BIT  FB6  :  1; //!<[06] Filter bits
      __IO ONE_BIT  FB7  :  1; //!<[07] Filter bits
      __IO ONE_BIT  FB8  :  1; //!<[08] Filter bits
      __IO ONE_BIT  FB9  :  1; //!<[09] Filter bits
      __IO ONE_BIT  FB10 :  1; //!<[10] Filter bits
      __IO ONE_BIT  FB11 :  1; //!<[11] Filter bits
      __IO ONE_BIT  FB12 :  1; //!<[12] Filter bits
      __IO ONE_BIT  FB13 :  1; //!<[13] Filter bits
      __IO ONE_BIT  FB14 :  1; //!<[14] Filter bits
      __IO ONE_BIT  FB15 :  1; //!<[15] Filter bits
      __IO ONE_BIT  FB16 :  1; //!<[16] Filter bits
      __IO ONE_BIT  FB17 :  1; //!<[17] Filter bits
      __IO ONE_BIT  FB18 :  1; //!<[18] Filter bits
      __IO ONE_BIT  FB19 :  1; //!<[19] Filter bits
      __IO ONE_BIT  FB20 :  1; //!<[20] Filter bits
      __IO ONE_BIT  FB21 :  1; //!<[21] Filter bits
      __IO ONE_BIT  FB22 :  1; //!<[22] Filter bits
      __IO ONE_BIT  FB23 :  1; //!<[23] Filter bits
      __IO ONE_BIT  FB24 :  1; //!<[24] Filter bits
      __IO ONE_BIT  FB25 :  1; //!<[25] Filter bits
      __IO ONE_BIT  FB26 :  1; //!<[26] Filter bits
      __IO ONE_BIT  FB27 :  1; //!<[27] Filter bits
      __IO ONE_BIT  FB28 :  1; //!<[28] Filter bits
      __IO ONE_BIT  FB29 :  1; //!<[29] Filter bits
      __IO ONE_BIT  FB30 :  1; //!<[30] Filter bits
      __IO ONE_BIT  FB31 :  1; //!<[31] Filter bits
    } B;
    __IO uint32_t  R;
    explicit F1R2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      F1R2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      F1R2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union F2R1_DEF    {  //!< Filter bank 2 register 1
    struct {
      __IO ONE_BIT  FB0  :  1; //!<[00] Filter bits
      __IO ONE_BIT  FB1  :  1; //!<[01] Filter bits
      __IO ONE_BIT  FB2  :  1; //!<[02] Filter bits
      __IO ONE_BIT  FB3  :  1; //!<[03] Filter bits
      __IO ONE_BIT  FB4  :  1; //!<[04] Filter bits
      __IO ONE_BIT  FB5  :  1; //!<[05] Filter bits
      __IO ONE_BIT  FB6  :  1; //!<[06] Filter bits
      __IO ONE_BIT  FB7  :  1; //!<[07] Filter bits
      __IO ONE_BIT  FB8  :  1; //!<[08] Filter bits
      __IO ONE_BIT  FB9  :  1; //!<[09] Filter bits
      __IO ONE_BIT  FB10 :  1; //!<[10] Filter bits
      __IO ONE_BIT  FB11 :  1; //!<[11] Filter bits
      __IO ONE_BIT  FB12 :  1; //!<[12] Filter bits
      __IO ONE_BIT  FB13 :  1; //!<[13] Filter bits
      __IO ONE_BIT  FB14 :  1; //!<[14] Filter bits
      __IO ONE_BIT  FB15 :  1; //!<[15] Filter bits
      __IO ONE_BIT  FB16 :  1; //!<[16] Filter bits
      __IO ONE_BIT  FB17 :  1; //!<[17] Filter bits
      __IO ONE_BIT  FB18 :  1; //!<[18] Filter bits
      __IO ONE_BIT  FB19 :  1; //!<[19] Filter bits
      __IO ONE_BIT  FB20 :  1; //!<[20] Filter bits
      __IO ONE_BIT  FB21 :  1; //!<[21] Filter bits
      __IO ONE_BIT  FB22 :  1; //!<[22] Filter bits
      __IO ONE_BIT  FB23 :  1; //!<[23] Filter bits
      __IO ONE_BIT  FB24 :  1; //!<[24] Filter bits
      __IO ONE_BIT  FB25 :  1; //!<[25] Filter bits
      __IO ONE_BIT  FB26 :  1; //!<[26] Filter bits
      __IO ONE_BIT  FB27 :  1; //!<[27] Filter bits
      __IO ONE_BIT  FB28 :  1; //!<[28] Filter bits
      __IO ONE_BIT  FB29 :  1; //!<[29] Filter bits
      __IO ONE_BIT  FB30 :  1; //!<[30] Filter bits
      __IO ONE_BIT  FB31 :  1; //!<[31] Filter bits
    } B;
    __IO uint32_t  R;
    explicit F2R1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      F2R1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      F2R1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union F2R2_DEF    {  //!< Filter bank 2 register 2
    struct {
      __IO ONE_BIT  FB0  :  1; //!<[00] Filter bits
      __IO ONE_BIT  FB1  :  1; //!<[01] Filter bits
      __IO ONE_BIT  FB2  :  1; //!<[02] Filter bits
      __IO ONE_BIT  FB3  :  1; //!<[03] Filter bits
      __IO ONE_BIT  FB4  :  1; //!<[04] Filter bits
      __IO ONE_BIT  FB5  :  1; //!<[05] Filter bits
      __IO ONE_BIT  FB6  :  1; //!<[06] Filter bits
      __IO ONE_BIT  FB7  :  1; //!<[07] Filter bits
      __IO ONE_BIT  FB8  :  1; //!<[08] Filter bits
      __IO ONE_BIT  FB9  :  1; //!<[09] Filter bits
      __IO ONE_BIT  FB10 :  1; //!<[10] Filter bits
      __IO ONE_BIT  FB11 :  1; //!<[11] Filter bits
      __IO ONE_BIT  FB12 :  1; //!<[12] Filter bits
      __IO ONE_BIT  FB13 :  1; //!<[13] Filter bits
      __IO ONE_BIT  FB14 :  1; //!<[14] Filter bits
      __IO ONE_BIT  FB15 :  1; //!<[15] Filter bits
      __IO ONE_BIT  FB16 :  1; //!<[16] Filter bits
      __IO ONE_BIT  FB17 :  1; //!<[17] Filter bits
      __IO ONE_BIT  FB18 :  1; //!<[18] Filter bits
      __IO ONE_BIT  FB19 :  1; //!<[19] Filter bits
      __IO ONE_BIT  FB20 :  1; //!<[20] Filter bits
      __IO ONE_BIT  FB21 :  1; //!<[21] Filter bits
      __IO ONE_BIT  FB22 :  1; //!<[22] Filter bits
      __IO ONE_BIT  FB23 :  1; //!<[23] Filter bits
      __IO ONE_BIT  FB24 :  1; //!<[24] Filter bits
      __IO ONE_BIT  FB25 :  1; //!<[25] Filter bits
      __IO ONE_BIT  FB26 :  1; //!<[26] Filter bits
      __IO ONE_BIT  FB27 :  1; //!<[27] Filter bits
      __IO ONE_BIT  FB28 :  1; //!<[28] Filter bits
      __IO ONE_BIT  FB29 :  1; //!<[29] Filter bits
      __IO ONE_BIT  FB30 :  1; //!<[30] Filter bits
      __IO ONE_BIT  FB31 :  1; //!<[31] Filter bits
    } B;
    __IO uint32_t  R;
    explicit F2R2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      F2R2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      F2R2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union F3R1_DEF    {  //!< Filter bank 3 register 1
    struct {
      __IO ONE_BIT  FB0  :  1; //!<[00] Filter bits
      __IO ONE_BIT  FB1  :  1; //!<[01] Filter bits
      __IO ONE_BIT  FB2  :  1; //!<[02] Filter bits
      __IO ONE_BIT  FB3  :  1; //!<[03] Filter bits
      __IO ONE_BIT  FB4  :  1; //!<[04] Filter bits
      __IO ONE_BIT  FB5  :  1; //!<[05] Filter bits
      __IO ONE_BIT  FB6  :  1; //!<[06] Filter bits
      __IO ONE_BIT  FB7  :  1; //!<[07] Filter bits
      __IO ONE_BIT  FB8  :  1; //!<[08] Filter bits
      __IO ONE_BIT  FB9  :  1; //!<[09] Filter bits
      __IO ONE_BIT  FB10 :  1; //!<[10] Filter bits
      __IO ONE_BIT  FB11 :  1; //!<[11] Filter bits
      __IO ONE_BIT  FB12 :  1; //!<[12] Filter bits
      __IO ONE_BIT  FB13 :  1; //!<[13] Filter bits
      __IO ONE_BIT  FB14 :  1; //!<[14] Filter bits
      __IO ONE_BIT  FB15 :  1; //!<[15] Filter bits
      __IO ONE_BIT  FB16 :  1; //!<[16] Filter bits
      __IO ONE_BIT  FB17 :  1; //!<[17] Filter bits
      __IO ONE_BIT  FB18 :  1; //!<[18] Filter bits
      __IO ONE_BIT  FB19 :  1; //!<[19] Filter bits
      __IO ONE_BIT  FB20 :  1; //!<[20] Filter bits
      __IO ONE_BIT  FB21 :  1; //!<[21] Filter bits
      __IO ONE_BIT  FB22 :  1; //!<[22] Filter bits
      __IO ONE_BIT  FB23 :  1; //!<[23] Filter bits
      __IO ONE_BIT  FB24 :  1; //!<[24] Filter bits
      __IO ONE_BIT  FB25 :  1; //!<[25] Filter bits
      __IO ONE_BIT  FB26 :  1; //!<[26] Filter bits
      __IO ONE_BIT  FB27 :  1; //!<[27] Filter bits
      __IO ONE_BIT  FB28 :  1; //!<[28] Filter bits
      __IO ONE_BIT  FB29 :  1; //!<[29] Filter bits
      __IO ONE_BIT  FB30 :  1; //!<[30] Filter bits
      __IO ONE_BIT  FB31 :  1; //!<[31] Filter bits
    } B;
    __IO uint32_t  R;
    explicit F3R1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      F3R1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      F3R1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union F3R2_DEF    {  //!< Filter bank 3 register 2
    struct {
      __IO ONE_BIT  FB0  :  1; //!<[00] Filter bits
      __IO ONE_BIT  FB1  :  1; //!<[01] Filter bits
      __IO ONE_BIT  FB2  :  1; //!<[02] Filter bits
      __IO ONE_BIT  FB3  :  1; //!<[03] Filter bits
      __IO ONE_BIT  FB4  :  1; //!<[04] Filter bits
      __IO ONE_BIT  FB5  :  1; //!<[05] Filter bits
      __IO ONE_BIT  FB6  :  1; //!<[06] Filter bits
      __IO ONE_BIT  FB7  :  1; //!<[07] Filter bits
      __IO ONE_BIT  FB8  :  1; //!<[08] Filter bits
      __IO ONE_BIT  FB9  :  1; //!<[09] Filter bits
      __IO ONE_BIT  FB10 :  1; //!<[10] Filter bits
      __IO ONE_BIT  FB11 :  1; //!<[11] Filter bits
      __IO ONE_BIT  FB12 :  1; //!<[12] Filter bits
      __IO ONE_BIT  FB13 :  1; //!<[13] Filter bits
      __IO ONE_BIT  FB14 :  1; //!<[14] Filter bits
      __IO ONE_BIT  FB15 :  1; //!<[15] Filter bits
      __IO ONE_BIT  FB16 :  1; //!<[16] Filter bits
      __IO ONE_BIT  FB17 :  1; //!<[17] Filter bits
      __IO ONE_BIT  FB18 :  1; //!<[18] Filter bits
      __IO ONE_BIT  FB19 :  1; //!<[19] Filter bits
      __IO ONE_BIT  FB20 :  1; //!<[20] Filter bits
      __IO ONE_BIT  FB21 :  1; //!<[21] Filter bits
      __IO ONE_BIT  FB22 :  1; //!<[22] Filter bits
      __IO ONE_BIT  FB23 :  1; //!<[23] Filter bits
      __IO ONE_BIT  FB24 :  1; //!<[24] Filter bits
      __IO ONE_BIT  FB25 :  1; //!<[25] Filter bits
      __IO ONE_BIT  FB26 :  1; //!<[26] Filter bits
      __IO ONE_BIT  FB27 :  1; //!<[27] Filter bits
      __IO ONE_BIT  FB28 :  1; //!<[28] Filter bits
      __IO ONE_BIT  FB29 :  1; //!<[29] Filter bits
      __IO ONE_BIT  FB30 :  1; //!<[30] Filter bits
      __IO ONE_BIT  FB31 :  1; //!<[31] Filter bits
    } B;
    __IO uint32_t  R;
    explicit F3R2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      F3R2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      F3R2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union F4R1_DEF    {  //!< Filter bank 4 register 1
    struct {
      __IO ONE_BIT  FB0  :  1; //!<[00] Filter bits
      __IO ONE_BIT  FB1  :  1; //!<[01] Filter bits
      __IO ONE_BIT  FB2  :  1; //!<[02] Filter bits
      __IO ONE_BIT  FB3  :  1; //!<[03] Filter bits
      __IO ONE_BIT  FB4  :  1; //!<[04] Filter bits
      __IO ONE_BIT  FB5  :  1; //!<[05] Filter bits
      __IO ONE_BIT  FB6  :  1; //!<[06] Filter bits
      __IO ONE_BIT  FB7  :  1; //!<[07] Filter bits
      __IO ONE_BIT  FB8  :  1; //!<[08] Filter bits
      __IO ONE_BIT  FB9  :  1; //!<[09] Filter bits
      __IO ONE_BIT  FB10 :  1; //!<[10] Filter bits
      __IO ONE_BIT  FB11 :  1; //!<[11] Filter bits
      __IO ONE_BIT  FB12 :  1; //!<[12] Filter bits
      __IO ONE_BIT  FB13 :  1; //!<[13] Filter bits
      __IO ONE_BIT  FB14 :  1; //!<[14] Filter bits
      __IO ONE_BIT  FB15 :  1; //!<[15] Filter bits
      __IO ONE_BIT  FB16 :  1; //!<[16] Filter bits
      __IO ONE_BIT  FB17 :  1; //!<[17] Filter bits
      __IO ONE_BIT  FB18 :  1; //!<[18] Filter bits
      __IO ONE_BIT  FB19 :  1; //!<[19] Filter bits
      __IO ONE_BIT  FB20 :  1; //!<[20] Filter bits
      __IO ONE_BIT  FB21 :  1; //!<[21] Filter bits
      __IO ONE_BIT  FB22 :  1; //!<[22] Filter bits
      __IO ONE_BIT  FB23 :  1; //!<[23] Filter bits
      __IO ONE_BIT  FB24 :  1; //!<[24] Filter bits
      __IO ONE_BIT  FB25 :  1; //!<[25] Filter bits
      __IO ONE_BIT  FB26 :  1; //!<[26] Filter bits
      __IO ONE_BIT  FB27 :  1; //!<[27] Filter bits
      __IO ONE_BIT  FB28 :  1; //!<[28] Filter bits
      __IO ONE_BIT  FB29 :  1; //!<[29] Filter bits
      __IO ONE_BIT  FB30 :  1; //!<[30] Filter bits
      __IO ONE_BIT  FB31 :  1; //!<[31] Filter bits
    } B;
    __IO uint32_t  R;
    explicit F4R1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      F4R1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      F4R1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union F4R2_DEF    {  //!< Filter bank 4 register 2
    struct {
      __IO ONE_BIT  FB0  :  1; //!<[00] Filter bits
      __IO ONE_BIT  FB1  :  1; //!<[01] Filter bits
      __IO ONE_BIT  FB2  :  1; //!<[02] Filter bits
      __IO ONE_BIT  FB3  :  1; //!<[03] Filter bits
      __IO ONE_BIT  FB4  :  1; //!<[04] Filter bits
      __IO ONE_BIT  FB5  :  1; //!<[05] Filter bits
      __IO ONE_BIT  FB6  :  1; //!<[06] Filter bits
      __IO ONE_BIT  FB7  :  1; //!<[07] Filter bits
      __IO ONE_BIT  FB8  :  1; //!<[08] Filter bits
      __IO ONE_BIT  FB9  :  1; //!<[09] Filter bits
      __IO ONE_BIT  FB10 :  1; //!<[10] Filter bits
      __IO ONE_BIT  FB11 :  1; //!<[11] Filter bits
      __IO ONE_BIT  FB12 :  1; //!<[12] Filter bits
      __IO ONE_BIT  FB13 :  1; //!<[13] Filter bits
      __IO ONE_BIT  FB14 :  1; //!<[14] Filter bits
      __IO ONE_BIT  FB15 :  1; //!<[15] Filter bits
      __IO ONE_BIT  FB16 :  1; //!<[16] Filter bits
      __IO ONE_BIT  FB17 :  1; //!<[17] Filter bits
      __IO ONE_BIT  FB18 :  1; //!<[18] Filter bits
      __IO ONE_BIT  FB19 :  1; //!<[19] Filter bits
      __IO ONE_BIT  FB20 :  1; //!<[20] Filter bits
      __IO ONE_BIT  FB21 :  1; //!<[21] Filter bits
      __IO ONE_BIT  FB22 :  1; //!<[22] Filter bits
      __IO ONE_BIT  FB23 :  1; //!<[23] Filter bits
      __IO ONE_BIT  FB24 :  1; //!<[24] Filter bits
      __IO ONE_BIT  FB25 :  1; //!<[25] Filter bits
      __IO ONE_BIT  FB26 :  1; //!<[26] Filter bits
      __IO ONE_BIT  FB27 :  1; //!<[27] Filter bits
      __IO ONE_BIT  FB28 :  1; //!<[28] Filter bits
      __IO ONE_BIT  FB29 :  1; //!<[29] Filter bits
      __IO ONE_BIT  FB30 :  1; //!<[30] Filter bits
      __IO ONE_BIT  FB31 :  1; //!<[31] Filter bits
    } B;
    __IO uint32_t  R;
    explicit F4R2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      F4R2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      F4R2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union F5R1_DEF    {  //!< Filter bank 5 register 1
    struct {
      __IO ONE_BIT  FB0  :  1; //!<[00] Filter bits
      __IO ONE_BIT  FB1  :  1; //!<[01] Filter bits
      __IO ONE_BIT  FB2  :  1; //!<[02] Filter bits
      __IO ONE_BIT  FB3  :  1; //!<[03] Filter bits
      __IO ONE_BIT  FB4  :  1; //!<[04] Filter bits
      __IO ONE_BIT  FB5  :  1; //!<[05] Filter bits
      __IO ONE_BIT  FB6  :  1; //!<[06] Filter bits
      __IO ONE_BIT  FB7  :  1; //!<[07] Filter bits
      __IO ONE_BIT  FB8  :  1; //!<[08] Filter bits
      __IO ONE_BIT  FB9  :  1; //!<[09] Filter bits
      __IO ONE_BIT  FB10 :  1; //!<[10] Filter bits
      __IO ONE_BIT  FB11 :  1; //!<[11] Filter bits
      __IO ONE_BIT  FB12 :  1; //!<[12] Filter bits
      __IO ONE_BIT  FB13 :  1; //!<[13] Filter bits
      __IO ONE_BIT  FB14 :  1; //!<[14] Filter bits
      __IO ONE_BIT  FB15 :  1; //!<[15] Filter bits
      __IO ONE_BIT  FB16 :  1; //!<[16] Filter bits
      __IO ONE_BIT  FB17 :  1; //!<[17] Filter bits
      __IO ONE_BIT  FB18 :  1; //!<[18] Filter bits
      __IO ONE_BIT  FB19 :  1; //!<[19] Filter bits
      __IO ONE_BIT  FB20 :  1; //!<[20] Filter bits
      __IO ONE_BIT  FB21 :  1; //!<[21] Filter bits
      __IO ONE_BIT  FB22 :  1; //!<[22] Filter bits
      __IO ONE_BIT  FB23 :  1; //!<[23] Filter bits
      __IO ONE_BIT  FB24 :  1; //!<[24] Filter bits
      __IO ONE_BIT  FB25 :  1; //!<[25] Filter bits
      __IO ONE_BIT  FB26 :  1; //!<[26] Filter bits
      __IO ONE_BIT  FB27 :  1; //!<[27] Filter bits
      __IO ONE_BIT  FB28 :  1; //!<[28] Filter bits
      __IO ONE_BIT  FB29 :  1; //!<[29] Filter bits
      __IO ONE_BIT  FB30 :  1; //!<[30] Filter bits
      __IO ONE_BIT  FB31 :  1; //!<[31] Filter bits
    } B;
    __IO uint32_t  R;
    explicit F5R1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      F5R1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      F5R1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union F5R2_DEF    {  //!< Filter bank 5 register 2
    struct {
      __IO ONE_BIT  FB0  :  1; //!<[00] Filter bits
      __IO ONE_BIT  FB1  :  1; //!<[01] Filter bits
      __IO ONE_BIT  FB2  :  1; //!<[02] Filter bits
      __IO ONE_BIT  FB3  :  1; //!<[03] Filter bits
      __IO ONE_BIT  FB4  :  1; //!<[04] Filter bits
      __IO ONE_BIT  FB5  :  1; //!<[05] Filter bits
      __IO ONE_BIT  FB6  :  1; //!<[06] Filter bits
      __IO ONE_BIT  FB7  :  1; //!<[07] Filter bits
      __IO ONE_BIT  FB8  :  1; //!<[08] Filter bits
      __IO ONE_BIT  FB9  :  1; //!<[09] Filter bits
      __IO ONE_BIT  FB10 :  1; //!<[10] Filter bits
      __IO ONE_BIT  FB11 :  1; //!<[11] Filter bits
      __IO ONE_BIT  FB12 :  1; //!<[12] Filter bits
      __IO ONE_BIT  FB13 :  1; //!<[13] Filter bits
      __IO ONE_BIT  FB14 :  1; //!<[14] Filter bits
      __IO ONE_BIT  FB15 :  1; //!<[15] Filter bits
      __IO ONE_BIT  FB16 :  1; //!<[16] Filter bits
      __IO ONE_BIT  FB17 :  1; //!<[17] Filter bits
      __IO ONE_BIT  FB18 :  1; //!<[18] Filter bits
      __IO ONE_BIT  FB19 :  1; //!<[19] Filter bits
      __IO ONE_BIT  FB20 :  1; //!<[20] Filter bits
      __IO ONE_BIT  FB21 :  1; //!<[21] Filter bits
      __IO ONE_BIT  FB22 :  1; //!<[22] Filter bits
      __IO ONE_BIT  FB23 :  1; //!<[23] Filter bits
      __IO ONE_BIT  FB24 :  1; //!<[24] Filter bits
      __IO ONE_BIT  FB25 :  1; //!<[25] Filter bits
      __IO ONE_BIT  FB26 :  1; //!<[26] Filter bits
      __IO ONE_BIT  FB27 :  1; //!<[27] Filter bits
      __IO ONE_BIT  FB28 :  1; //!<[28] Filter bits
      __IO ONE_BIT  FB29 :  1; //!<[29] Filter bits
      __IO ONE_BIT  FB30 :  1; //!<[30] Filter bits
      __IO ONE_BIT  FB31 :  1; //!<[31] Filter bits
    } B;
    __IO uint32_t  R;
    explicit F5R2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      F5R2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      F5R2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union F6R1_DEF    {  //!< Filter bank 6 register 1
    struct {
      __IO ONE_BIT  FB0  :  1; //!<[00] Filter bits
      __IO ONE_BIT  FB1  :  1; //!<[01] Filter bits
      __IO ONE_BIT  FB2  :  1; //!<[02] Filter bits
      __IO ONE_BIT  FB3  :  1; //!<[03] Filter bits
      __IO ONE_BIT  FB4  :  1; //!<[04] Filter bits
      __IO ONE_BIT  FB5  :  1; //!<[05] Filter bits
      __IO ONE_BIT  FB6  :  1; //!<[06] Filter bits
      __IO ONE_BIT  FB7  :  1; //!<[07] Filter bits
      __IO ONE_BIT  FB8  :  1; //!<[08] Filter bits
      __IO ONE_BIT  FB9  :  1; //!<[09] Filter bits
      __IO ONE_BIT  FB10 :  1; //!<[10] Filter bits
      __IO ONE_BIT  FB11 :  1; //!<[11] Filter bits
      __IO ONE_BIT  FB12 :  1; //!<[12] Filter bits
      __IO ONE_BIT  FB13 :  1; //!<[13] Filter bits
      __IO ONE_BIT  FB14 :  1; //!<[14] Filter bits
      __IO ONE_BIT  FB15 :  1; //!<[15] Filter bits
      __IO ONE_BIT  FB16 :  1; //!<[16] Filter bits
      __IO ONE_BIT  FB17 :  1; //!<[17] Filter bits
      __IO ONE_BIT  FB18 :  1; //!<[18] Filter bits
      __IO ONE_BIT  FB19 :  1; //!<[19] Filter bits
      __IO ONE_BIT  FB20 :  1; //!<[20] Filter bits
      __IO ONE_BIT  FB21 :  1; //!<[21] Filter bits
      __IO ONE_BIT  FB22 :  1; //!<[22] Filter bits
      __IO ONE_BIT  FB23 :  1; //!<[23] Filter bits
      __IO ONE_BIT  FB24 :  1; //!<[24] Filter bits
      __IO ONE_BIT  FB25 :  1; //!<[25] Filter bits
      __IO ONE_BIT  FB26 :  1; //!<[26] Filter bits
      __IO ONE_BIT  FB27 :  1; //!<[27] Filter bits
      __IO ONE_BIT  FB28 :  1; //!<[28] Filter bits
      __IO ONE_BIT  FB29 :  1; //!<[29] Filter bits
      __IO ONE_BIT  FB30 :  1; //!<[30] Filter bits
      __IO ONE_BIT  FB31 :  1; //!<[31] Filter bits
    } B;
    __IO uint32_t  R;
    explicit F6R1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      F6R1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      F6R1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union F6R2_DEF    {  //!< Filter bank 6 register 2
    struct {
      __IO ONE_BIT  FB0  :  1; //!<[00] Filter bits
      __IO ONE_BIT  FB1  :  1; //!<[01] Filter bits
      __IO ONE_BIT  FB2  :  1; //!<[02] Filter bits
      __IO ONE_BIT  FB3  :  1; //!<[03] Filter bits
      __IO ONE_BIT  FB4  :  1; //!<[04] Filter bits
      __IO ONE_BIT  FB5  :  1; //!<[05] Filter bits
      __IO ONE_BIT  FB6  :  1; //!<[06] Filter bits
      __IO ONE_BIT  FB7  :  1; //!<[07] Filter bits
      __IO ONE_BIT  FB8  :  1; //!<[08] Filter bits
      __IO ONE_BIT  FB9  :  1; //!<[09] Filter bits
      __IO ONE_BIT  FB10 :  1; //!<[10] Filter bits
      __IO ONE_BIT  FB11 :  1; //!<[11] Filter bits
      __IO ONE_BIT  FB12 :  1; //!<[12] Filter bits
      __IO ONE_BIT  FB13 :  1; //!<[13] Filter bits
      __IO ONE_BIT  FB14 :  1; //!<[14] Filter bits
      __IO ONE_BIT  FB15 :  1; //!<[15] Filter bits
      __IO ONE_BIT  FB16 :  1; //!<[16] Filter bits
      __IO ONE_BIT  FB17 :  1; //!<[17] Filter bits
      __IO ONE_BIT  FB18 :  1; //!<[18] Filter bits
      __IO ONE_BIT  FB19 :  1; //!<[19] Filter bits
      __IO ONE_BIT  FB20 :  1; //!<[20] Filter bits
      __IO ONE_BIT  FB21 :  1; //!<[21] Filter bits
      __IO ONE_BIT  FB22 :  1; //!<[22] Filter bits
      __IO ONE_BIT  FB23 :  1; //!<[23] Filter bits
      __IO ONE_BIT  FB24 :  1; //!<[24] Filter bits
      __IO ONE_BIT  FB25 :  1; //!<[25] Filter bits
      __IO ONE_BIT  FB26 :  1; //!<[26] Filter bits
      __IO ONE_BIT  FB27 :  1; //!<[27] Filter bits
      __IO ONE_BIT  FB28 :  1; //!<[28] Filter bits
      __IO ONE_BIT  FB29 :  1; //!<[29] Filter bits
      __IO ONE_BIT  FB30 :  1; //!<[30] Filter bits
      __IO ONE_BIT  FB31 :  1; //!<[31] Filter bits
    } B;
    __IO uint32_t  R;
    explicit F6R2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      F6R2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      F6R2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union F7R1_DEF    {  //!< Filter bank 7 register 1
    struct {
      __IO ONE_BIT  FB0  :  1; //!<[00] Filter bits
      __IO ONE_BIT  FB1  :  1; //!<[01] Filter bits
      __IO ONE_BIT  FB2  :  1; //!<[02] Filter bits
      __IO ONE_BIT  FB3  :  1; //!<[03] Filter bits
      __IO ONE_BIT  FB4  :  1; //!<[04] Filter bits
      __IO ONE_BIT  FB5  :  1; //!<[05] Filter bits
      __IO ONE_BIT  FB6  :  1; //!<[06] Filter bits
      __IO ONE_BIT  FB7  :  1; //!<[07] Filter bits
      __IO ONE_BIT  FB8  :  1; //!<[08] Filter bits
      __IO ONE_BIT  FB9  :  1; //!<[09] Filter bits
      __IO ONE_BIT  FB10 :  1; //!<[10] Filter bits
      __IO ONE_BIT  FB11 :  1; //!<[11] Filter bits
      __IO ONE_BIT  FB12 :  1; //!<[12] Filter bits
      __IO ONE_BIT  FB13 :  1; //!<[13] Filter bits
      __IO ONE_BIT  FB14 :  1; //!<[14] Filter bits
      __IO ONE_BIT  FB15 :  1; //!<[15] Filter bits
      __IO ONE_BIT  FB16 :  1; //!<[16] Filter bits
      __IO ONE_BIT  FB17 :  1; //!<[17] Filter bits
      __IO ONE_BIT  FB18 :  1; //!<[18] Filter bits
      __IO ONE_BIT  FB19 :  1; //!<[19] Filter bits
      __IO ONE_BIT  FB20 :  1; //!<[20] Filter bits
      __IO ONE_BIT  FB21 :  1; //!<[21] Filter bits
      __IO ONE_BIT  FB22 :  1; //!<[22] Filter bits
      __IO ONE_BIT  FB23 :  1; //!<[23] Filter bits
      __IO ONE_BIT  FB24 :  1; //!<[24] Filter bits
      __IO ONE_BIT  FB25 :  1; //!<[25] Filter bits
      __IO ONE_BIT  FB26 :  1; //!<[26] Filter bits
      __IO ONE_BIT  FB27 :  1; //!<[27] Filter bits
      __IO ONE_BIT  FB28 :  1; //!<[28] Filter bits
      __IO ONE_BIT  FB29 :  1; //!<[29] Filter bits
      __IO ONE_BIT  FB30 :  1; //!<[30] Filter bits
      __IO ONE_BIT  FB31 :  1; //!<[31] Filter bits
    } B;
    __IO uint32_t  R;
    explicit F7R1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      F7R1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      F7R1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union F7R2_DEF    {  //!< Filter bank 7 register 2
    struct {
      __IO ONE_BIT  FB0  :  1; //!<[00] Filter bits
      __IO ONE_BIT  FB1  :  1; //!<[01] Filter bits
      __IO ONE_BIT  FB2  :  1; //!<[02] Filter bits
      __IO ONE_BIT  FB3  :  1; //!<[03] Filter bits
      __IO ONE_BIT  FB4  :  1; //!<[04] Filter bits
      __IO ONE_BIT  FB5  :  1; //!<[05] Filter bits
      __IO ONE_BIT  FB6  :  1; //!<[06] Filter bits
      __IO ONE_BIT  FB7  :  1; //!<[07] Filter bits
      __IO ONE_BIT  FB8  :  1; //!<[08] Filter bits
      __IO ONE_BIT  FB9  :  1; //!<[09] Filter bits
      __IO ONE_BIT  FB10 :  1; //!<[10] Filter bits
      __IO ONE_BIT  FB11 :  1; //!<[11] Filter bits
      __IO ONE_BIT  FB12 :  1; //!<[12] Filter bits
      __IO ONE_BIT  FB13 :  1; //!<[13] Filter bits
      __IO ONE_BIT  FB14 :  1; //!<[14] Filter bits
      __IO ONE_BIT  FB15 :  1; //!<[15] Filter bits
      __IO ONE_BIT  FB16 :  1; //!<[16] Filter bits
      __IO ONE_BIT  FB17 :  1; //!<[17] Filter bits
      __IO ONE_BIT  FB18 :  1; //!<[18] Filter bits
      __IO ONE_BIT  FB19 :  1; //!<[19] Filter bits
      __IO ONE_BIT  FB20 :  1; //!<[20] Filter bits
      __IO ONE_BIT  FB21 :  1; //!<[21] Filter bits
      __IO ONE_BIT  FB22 :  1; //!<[22] Filter bits
      __IO ONE_BIT  FB23 :  1; //!<[23] Filter bits
      __IO ONE_BIT  FB24 :  1; //!<[24] Filter bits
      __IO ONE_BIT  FB25 :  1; //!<[25] Filter bits
      __IO ONE_BIT  FB26 :  1; //!<[26] Filter bits
      __IO ONE_BIT  FB27 :  1; //!<[27] Filter bits
      __IO ONE_BIT  FB28 :  1; //!<[28] Filter bits
      __IO ONE_BIT  FB29 :  1; //!<[29] Filter bits
      __IO ONE_BIT  FB30 :  1; //!<[30] Filter bits
      __IO ONE_BIT  FB31 :  1; //!<[31] Filter bits
    } B;
    __IO uint32_t  R;
    explicit F7R2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      F7R2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      F7R2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union F8R1_DEF    {  //!< Filter bank 8 register 1
    struct {
      __IO ONE_BIT  FB0  :  1; //!<[00] Filter bits
      __IO ONE_BIT  FB1  :  1; //!<[01] Filter bits
      __IO ONE_BIT  FB2  :  1; //!<[02] Filter bits
      __IO ONE_BIT  FB3  :  1; //!<[03] Filter bits
      __IO ONE_BIT  FB4  :  1; //!<[04] Filter bits
      __IO ONE_BIT  FB5  :  1; //!<[05] Filter bits
      __IO ONE_BIT  FB6  :  1; //!<[06] Filter bits
      __IO ONE_BIT  FB7  :  1; //!<[07] Filter bits
      __IO ONE_BIT  FB8  :  1; //!<[08] Filter bits
      __IO ONE_BIT  FB9  :  1; //!<[09] Filter bits
      __IO ONE_BIT  FB10 :  1; //!<[10] Filter bits
      __IO ONE_BIT  FB11 :  1; //!<[11] Filter bits
      __IO ONE_BIT  FB12 :  1; //!<[12] Filter bits
      __IO ONE_BIT  FB13 :  1; //!<[13] Filter bits
      __IO ONE_BIT  FB14 :  1; //!<[14] Filter bits
      __IO ONE_BIT  FB15 :  1; //!<[15] Filter bits
      __IO ONE_BIT  FB16 :  1; //!<[16] Filter bits
      __IO ONE_BIT  FB17 :  1; //!<[17] Filter bits
      __IO ONE_BIT  FB18 :  1; //!<[18] Filter bits
      __IO ONE_BIT  FB19 :  1; //!<[19] Filter bits
      __IO ONE_BIT  FB20 :  1; //!<[20] Filter bits
      __IO ONE_BIT  FB21 :  1; //!<[21] Filter bits
      __IO ONE_BIT  FB22 :  1; //!<[22] Filter bits
      __IO ONE_BIT  FB23 :  1; //!<[23] Filter bits
      __IO ONE_BIT  FB24 :  1; //!<[24] Filter bits
      __IO ONE_BIT  FB25 :  1; //!<[25] Filter bits
      __IO ONE_BIT  FB26 :  1; //!<[26] Filter bits
      __IO ONE_BIT  FB27 :  1; //!<[27] Filter bits
      __IO ONE_BIT  FB28 :  1; //!<[28] Filter bits
      __IO ONE_BIT  FB29 :  1; //!<[29] Filter bits
      __IO ONE_BIT  FB30 :  1; //!<[30] Filter bits
      __IO ONE_BIT  FB31 :  1; //!<[31] Filter bits
    } B;
    __IO uint32_t  R;
    explicit F8R1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      F8R1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      F8R1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union F8R2_DEF    {  //!< Filter bank 8 register 2
    struct {
      __IO ONE_BIT  FB0  :  1; //!<[00] Filter bits
      __IO ONE_BIT  FB1  :  1; //!<[01] Filter bits
      __IO ONE_BIT  FB2  :  1; //!<[02] Filter bits
      __IO ONE_BIT  FB3  :  1; //!<[03] Filter bits
      __IO ONE_BIT  FB4  :  1; //!<[04] Filter bits
      __IO ONE_BIT  FB5  :  1; //!<[05] Filter bits
      __IO ONE_BIT  FB6  :  1; //!<[06] Filter bits
      __IO ONE_BIT  FB7  :  1; //!<[07] Filter bits
      __IO ONE_BIT  FB8  :  1; //!<[08] Filter bits
      __IO ONE_BIT  FB9  :  1; //!<[09] Filter bits
      __IO ONE_BIT  FB10 :  1; //!<[10] Filter bits
      __IO ONE_BIT  FB11 :  1; //!<[11] Filter bits
      __IO ONE_BIT  FB12 :  1; //!<[12] Filter bits
      __IO ONE_BIT  FB13 :  1; //!<[13] Filter bits
      __IO ONE_BIT  FB14 :  1; //!<[14] Filter bits
      __IO ONE_BIT  FB15 :  1; //!<[15] Filter bits
      __IO ONE_BIT  FB16 :  1; //!<[16] Filter bits
      __IO ONE_BIT  FB17 :  1; //!<[17] Filter bits
      __IO ONE_BIT  FB18 :  1; //!<[18] Filter bits
      __IO ONE_BIT  FB19 :  1; //!<[19] Filter bits
      __IO ONE_BIT  FB20 :  1; //!<[20] Filter bits
      __IO ONE_BIT  FB21 :  1; //!<[21] Filter bits
      __IO ONE_BIT  FB22 :  1; //!<[22] Filter bits
      __IO ONE_BIT  FB23 :  1; //!<[23] Filter bits
      __IO ONE_BIT  FB24 :  1; //!<[24] Filter bits
      __IO ONE_BIT  FB25 :  1; //!<[25] Filter bits
      __IO ONE_BIT  FB26 :  1; //!<[26] Filter bits
      __IO ONE_BIT  FB27 :  1; //!<[27] Filter bits
      __IO ONE_BIT  FB28 :  1; //!<[28] Filter bits
      __IO ONE_BIT  FB29 :  1; //!<[29] Filter bits
      __IO ONE_BIT  FB30 :  1; //!<[30] Filter bits
      __IO ONE_BIT  FB31 :  1; //!<[31] Filter bits
    } B;
    __IO uint32_t  R;
    explicit F8R2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      F8R2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      F8R2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union F9R1_DEF    {  //!< Filter bank 9 register 1
    struct {
      __IO ONE_BIT  FB0  :  1; //!<[00] Filter bits
      __IO ONE_BIT  FB1  :  1; //!<[01] Filter bits
      __IO ONE_BIT  FB2  :  1; //!<[02] Filter bits
      __IO ONE_BIT  FB3  :  1; //!<[03] Filter bits
      __IO ONE_BIT  FB4  :  1; //!<[04] Filter bits
      __IO ONE_BIT  FB5  :  1; //!<[05] Filter bits
      __IO ONE_BIT  FB6  :  1; //!<[06] Filter bits
      __IO ONE_BIT  FB7  :  1; //!<[07] Filter bits
      __IO ONE_BIT  FB8  :  1; //!<[08] Filter bits
      __IO ONE_BIT  FB9  :  1; //!<[09] Filter bits
      __IO ONE_BIT  FB10 :  1; //!<[10] Filter bits
      __IO ONE_BIT  FB11 :  1; //!<[11] Filter bits
      __IO ONE_BIT  FB12 :  1; //!<[12] Filter bits
      __IO ONE_BIT  FB13 :  1; //!<[13] Filter bits
      __IO ONE_BIT  FB14 :  1; //!<[14] Filter bits
      __IO ONE_BIT  FB15 :  1; //!<[15] Filter bits
      __IO ONE_BIT  FB16 :  1; //!<[16] Filter bits
      __IO ONE_BIT  FB17 :  1; //!<[17] Filter bits
      __IO ONE_BIT  FB18 :  1; //!<[18] Filter bits
      __IO ONE_BIT  FB19 :  1; //!<[19] Filter bits
      __IO ONE_BIT  FB20 :  1; //!<[20] Filter bits
      __IO ONE_BIT  FB21 :  1; //!<[21] Filter bits
      __IO ONE_BIT  FB22 :  1; //!<[22] Filter bits
      __IO ONE_BIT  FB23 :  1; //!<[23] Filter bits
      __IO ONE_BIT  FB24 :  1; //!<[24] Filter bits
      __IO ONE_BIT  FB25 :  1; //!<[25] Filter bits
      __IO ONE_BIT  FB26 :  1; //!<[26] Filter bits
      __IO ONE_BIT  FB27 :  1; //!<[27] Filter bits
      __IO ONE_BIT  FB28 :  1; //!<[28] Filter bits
      __IO ONE_BIT  FB29 :  1; //!<[29] Filter bits
      __IO ONE_BIT  FB30 :  1; //!<[30] Filter bits
      __IO ONE_BIT  FB31 :  1; //!<[31] Filter bits
    } B;
    __IO uint32_t  R;
    explicit F9R1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      F9R1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      F9R1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union F9R2_DEF    {  //!< Filter bank 9 register 2
    struct {
      __IO ONE_BIT  FB0  :  1; //!<[00] Filter bits
      __IO ONE_BIT  FB1  :  1; //!<[01] Filter bits
      __IO ONE_BIT  FB2  :  1; //!<[02] Filter bits
      __IO ONE_BIT  FB3  :  1; //!<[03] Filter bits
      __IO ONE_BIT  FB4  :  1; //!<[04] Filter bits
      __IO ONE_BIT  FB5  :  1; //!<[05] Filter bits
      __IO ONE_BIT  FB6  :  1; //!<[06] Filter bits
      __IO ONE_BIT  FB7  :  1; //!<[07] Filter bits
      __IO ONE_BIT  FB8  :  1; //!<[08] Filter bits
      __IO ONE_BIT  FB9  :  1; //!<[09] Filter bits
      __IO ONE_BIT  FB10 :  1; //!<[10] Filter bits
      __IO ONE_BIT  FB11 :  1; //!<[11] Filter bits
      __IO ONE_BIT  FB12 :  1; //!<[12] Filter bits
      __IO ONE_BIT  FB13 :  1; //!<[13] Filter bits
      __IO ONE_BIT  FB14 :  1; //!<[14] Filter bits
      __IO ONE_BIT  FB15 :  1; //!<[15] Filter bits
      __IO ONE_BIT  FB16 :  1; //!<[16] Filter bits
      __IO ONE_BIT  FB17 :  1; //!<[17] Filter bits
      __IO ONE_BIT  FB18 :  1; //!<[18] Filter bits
      __IO ONE_BIT  FB19 :  1; //!<[19] Filter bits
      __IO ONE_BIT  FB20 :  1; //!<[20] Filter bits
      __IO ONE_BIT  FB21 :  1; //!<[21] Filter bits
      __IO ONE_BIT  FB22 :  1; //!<[22] Filter bits
      __IO ONE_BIT  FB23 :  1; //!<[23] Filter bits
      __IO ONE_BIT  FB24 :  1; //!<[24] Filter bits
      __IO ONE_BIT  FB25 :  1; //!<[25] Filter bits
      __IO ONE_BIT  FB26 :  1; //!<[26] Filter bits
      __IO ONE_BIT  FB27 :  1; //!<[27] Filter bits
      __IO ONE_BIT  FB28 :  1; //!<[28] Filter bits
      __IO ONE_BIT  FB29 :  1; //!<[29] Filter bits
      __IO ONE_BIT  FB30 :  1; //!<[30] Filter bits
      __IO ONE_BIT  FB31 :  1; //!<[31] Filter bits
    } B;
    __IO uint32_t  R;
    explicit F9R2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      F9R2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      F9R2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union F10R1_DEF   {  //!< Filter bank 10 register 1
    struct {
      __IO ONE_BIT  FB0  :  1; //!<[00] Filter bits
      __IO ONE_BIT  FB1  :  1; //!<[01] Filter bits
      __IO ONE_BIT  FB2  :  1; //!<[02] Filter bits
      __IO ONE_BIT  FB3  :  1; //!<[03] Filter bits
      __IO ONE_BIT  FB4  :  1; //!<[04] Filter bits
      __IO ONE_BIT  FB5  :  1; //!<[05] Filter bits
      __IO ONE_BIT  FB6  :  1; //!<[06] Filter bits
      __IO ONE_BIT  FB7  :  1; //!<[07] Filter bits
      __IO ONE_BIT  FB8  :  1; //!<[08] Filter bits
      __IO ONE_BIT  FB9  :  1; //!<[09] Filter bits
      __IO ONE_BIT  FB10 :  1; //!<[10] Filter bits
      __IO ONE_BIT  FB11 :  1; //!<[11] Filter bits
      __IO ONE_BIT  FB12 :  1; //!<[12] Filter bits
      __IO ONE_BIT  FB13 :  1; //!<[13] Filter bits
      __IO ONE_BIT  FB14 :  1; //!<[14] Filter bits
      __IO ONE_BIT  FB15 :  1; //!<[15] Filter bits
      __IO ONE_BIT  FB16 :  1; //!<[16] Filter bits
      __IO ONE_BIT  FB17 :  1; //!<[17] Filter bits
      __IO ONE_BIT  FB18 :  1; //!<[18] Filter bits
      __IO ONE_BIT  FB19 :  1; //!<[19] Filter bits
      __IO ONE_BIT  FB20 :  1; //!<[20] Filter bits
      __IO ONE_BIT  FB21 :  1; //!<[21] Filter bits
      __IO ONE_BIT  FB22 :  1; //!<[22] Filter bits
      __IO ONE_BIT  FB23 :  1; //!<[23] Filter bits
      __IO ONE_BIT  FB24 :  1; //!<[24] Filter bits
      __IO ONE_BIT  FB25 :  1; //!<[25] Filter bits
      __IO ONE_BIT  FB26 :  1; //!<[26] Filter bits
      __IO ONE_BIT  FB27 :  1; //!<[27] Filter bits
      __IO ONE_BIT  FB28 :  1; //!<[28] Filter bits
      __IO ONE_BIT  FB29 :  1; //!<[29] Filter bits
      __IO ONE_BIT  FB30 :  1; //!<[30] Filter bits
      __IO ONE_BIT  FB31 :  1; //!<[31] Filter bits
    } B;
    __IO uint32_t  R;
    explicit F10R1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      F10R1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      F10R1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union F10R2_DEF   {  //!< Filter bank 10 register 2
    struct {
      __IO ONE_BIT  FB0  :  1; //!<[00] Filter bits
      __IO ONE_BIT  FB1  :  1; //!<[01] Filter bits
      __IO ONE_BIT  FB2  :  1; //!<[02] Filter bits
      __IO ONE_BIT  FB3  :  1; //!<[03] Filter bits
      __IO ONE_BIT  FB4  :  1; //!<[04] Filter bits
      __IO ONE_BIT  FB5  :  1; //!<[05] Filter bits
      __IO ONE_BIT  FB6  :  1; //!<[06] Filter bits
      __IO ONE_BIT  FB7  :  1; //!<[07] Filter bits
      __IO ONE_BIT  FB8  :  1; //!<[08] Filter bits
      __IO ONE_BIT  FB9  :  1; //!<[09] Filter bits
      __IO ONE_BIT  FB10 :  1; //!<[10] Filter bits
      __IO ONE_BIT  FB11 :  1; //!<[11] Filter bits
      __IO ONE_BIT  FB12 :  1; //!<[12] Filter bits
      __IO ONE_BIT  FB13 :  1; //!<[13] Filter bits
      __IO ONE_BIT  FB14 :  1; //!<[14] Filter bits
      __IO ONE_BIT  FB15 :  1; //!<[15] Filter bits
      __IO ONE_BIT  FB16 :  1; //!<[16] Filter bits
      __IO ONE_BIT  FB17 :  1; //!<[17] Filter bits
      __IO ONE_BIT  FB18 :  1; //!<[18] Filter bits
      __IO ONE_BIT  FB19 :  1; //!<[19] Filter bits
      __IO ONE_BIT  FB20 :  1; //!<[20] Filter bits
      __IO ONE_BIT  FB21 :  1; //!<[21] Filter bits
      __IO ONE_BIT  FB22 :  1; //!<[22] Filter bits
      __IO ONE_BIT  FB23 :  1; //!<[23] Filter bits
      __IO ONE_BIT  FB24 :  1; //!<[24] Filter bits
      __IO ONE_BIT  FB25 :  1; //!<[25] Filter bits
      __IO ONE_BIT  FB26 :  1; //!<[26] Filter bits
      __IO ONE_BIT  FB27 :  1; //!<[27] Filter bits
      __IO ONE_BIT  FB28 :  1; //!<[28] Filter bits
      __IO ONE_BIT  FB29 :  1; //!<[29] Filter bits
      __IO ONE_BIT  FB30 :  1; //!<[30] Filter bits
      __IO ONE_BIT  FB31 :  1; //!<[31] Filter bits
    } B;
    __IO uint32_t  R;
    explicit F10R2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      F10R2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      F10R2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union F11R1_DEF   {  //!< Filter bank 11 register 1
    struct {
      __IO ONE_BIT  FB0  :  1; //!<[00] Filter bits
      __IO ONE_BIT  FB1  :  1; //!<[01] Filter bits
      __IO ONE_BIT  FB2  :  1; //!<[02] Filter bits
      __IO ONE_BIT  FB3  :  1; //!<[03] Filter bits
      __IO ONE_BIT  FB4  :  1; //!<[04] Filter bits
      __IO ONE_BIT  FB5  :  1; //!<[05] Filter bits
      __IO ONE_BIT  FB6  :  1; //!<[06] Filter bits
      __IO ONE_BIT  FB7  :  1; //!<[07] Filter bits
      __IO ONE_BIT  FB8  :  1; //!<[08] Filter bits
      __IO ONE_BIT  FB9  :  1; //!<[09] Filter bits
      __IO ONE_BIT  FB10 :  1; //!<[10] Filter bits
      __IO ONE_BIT  FB11 :  1; //!<[11] Filter bits
      __IO ONE_BIT  FB12 :  1; //!<[12] Filter bits
      __IO ONE_BIT  FB13 :  1; //!<[13] Filter bits
      __IO ONE_BIT  FB14 :  1; //!<[14] Filter bits
      __IO ONE_BIT  FB15 :  1; //!<[15] Filter bits
      __IO ONE_BIT  FB16 :  1; //!<[16] Filter bits
      __IO ONE_BIT  FB17 :  1; //!<[17] Filter bits
      __IO ONE_BIT  FB18 :  1; //!<[18] Filter bits
      __IO ONE_BIT  FB19 :  1; //!<[19] Filter bits
      __IO ONE_BIT  FB20 :  1; //!<[20] Filter bits
      __IO ONE_BIT  FB21 :  1; //!<[21] Filter bits
      __IO ONE_BIT  FB22 :  1; //!<[22] Filter bits
      __IO ONE_BIT  FB23 :  1; //!<[23] Filter bits
      __IO ONE_BIT  FB24 :  1; //!<[24] Filter bits
      __IO ONE_BIT  FB25 :  1; //!<[25] Filter bits
      __IO ONE_BIT  FB26 :  1; //!<[26] Filter bits
      __IO ONE_BIT  FB27 :  1; //!<[27] Filter bits
      __IO ONE_BIT  FB28 :  1; //!<[28] Filter bits
      __IO ONE_BIT  FB29 :  1; //!<[29] Filter bits
      __IO ONE_BIT  FB30 :  1; //!<[30] Filter bits
      __IO ONE_BIT  FB31 :  1; //!<[31] Filter bits
    } B;
    __IO uint32_t  R;
    explicit F11R1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      F11R1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      F11R1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union F11R2_DEF   {  //!< Filter bank 11 register 2
    struct {
      __IO ONE_BIT  FB0  :  1; //!<[00] Filter bits
      __IO ONE_BIT  FB1  :  1; //!<[01] Filter bits
      __IO ONE_BIT  FB2  :  1; //!<[02] Filter bits
      __IO ONE_BIT  FB3  :  1; //!<[03] Filter bits
      __IO ONE_BIT  FB4  :  1; //!<[04] Filter bits
      __IO ONE_BIT  FB5  :  1; //!<[05] Filter bits
      __IO ONE_BIT  FB6  :  1; //!<[06] Filter bits
      __IO ONE_BIT  FB7  :  1; //!<[07] Filter bits
      __IO ONE_BIT  FB8  :  1; //!<[08] Filter bits
      __IO ONE_BIT  FB9  :  1; //!<[09] Filter bits
      __IO ONE_BIT  FB10 :  1; //!<[10] Filter bits
      __IO ONE_BIT  FB11 :  1; //!<[11] Filter bits
      __IO ONE_BIT  FB12 :  1; //!<[12] Filter bits
      __IO ONE_BIT  FB13 :  1; //!<[13] Filter bits
      __IO ONE_BIT  FB14 :  1; //!<[14] Filter bits
      __IO ONE_BIT  FB15 :  1; //!<[15] Filter bits
      __IO ONE_BIT  FB16 :  1; //!<[16] Filter bits
      __IO ONE_BIT  FB17 :  1; //!<[17] Filter bits
      __IO ONE_BIT  FB18 :  1; //!<[18] Filter bits
      __IO ONE_BIT  FB19 :  1; //!<[19] Filter bits
      __IO ONE_BIT  FB20 :  1; //!<[20] Filter bits
      __IO ONE_BIT  FB21 :  1; //!<[21] Filter bits
      __IO ONE_BIT  FB22 :  1; //!<[22] Filter bits
      __IO ONE_BIT  FB23 :  1; //!<[23] Filter bits
      __IO ONE_BIT  FB24 :  1; //!<[24] Filter bits
      __IO ONE_BIT  FB25 :  1; //!<[25] Filter bits
      __IO ONE_BIT  FB26 :  1; //!<[26] Filter bits
      __IO ONE_BIT  FB27 :  1; //!<[27] Filter bits
      __IO ONE_BIT  FB28 :  1; //!<[28] Filter bits
      __IO ONE_BIT  FB29 :  1; //!<[29] Filter bits
      __IO ONE_BIT  FB30 :  1; //!<[30] Filter bits
      __IO ONE_BIT  FB31 :  1; //!<[31] Filter bits
    } B;
    __IO uint32_t  R;
    explicit F11R2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      F11R2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      F11R2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union F12R1_DEF   {  //!< Filter bank 4 register 1
    struct {
      __IO ONE_BIT  FB0  :  1; //!<[00] Filter bits
      __IO ONE_BIT  FB1  :  1; //!<[01] Filter bits
      __IO ONE_BIT  FB2  :  1; //!<[02] Filter bits
      __IO ONE_BIT  FB3  :  1; //!<[03] Filter bits
      __IO ONE_BIT  FB4  :  1; //!<[04] Filter bits
      __IO ONE_BIT  FB5  :  1; //!<[05] Filter bits
      __IO ONE_BIT  FB6  :  1; //!<[06] Filter bits
      __IO ONE_BIT  FB7  :  1; //!<[07] Filter bits
      __IO ONE_BIT  FB8  :  1; //!<[08] Filter bits
      __IO ONE_BIT  FB9  :  1; //!<[09] Filter bits
      __IO ONE_BIT  FB10 :  1; //!<[10] Filter bits
      __IO ONE_BIT  FB11 :  1; //!<[11] Filter bits
      __IO ONE_BIT  FB12 :  1; //!<[12] Filter bits
      __IO ONE_BIT  FB13 :  1; //!<[13] Filter bits
      __IO ONE_BIT  FB14 :  1; //!<[14] Filter bits
      __IO ONE_BIT  FB15 :  1; //!<[15] Filter bits
      __IO ONE_BIT  FB16 :  1; //!<[16] Filter bits
      __IO ONE_BIT  FB17 :  1; //!<[17] Filter bits
      __IO ONE_BIT  FB18 :  1; //!<[18] Filter bits
      __IO ONE_BIT  FB19 :  1; //!<[19] Filter bits
      __IO ONE_BIT  FB20 :  1; //!<[20] Filter bits
      __IO ONE_BIT  FB21 :  1; //!<[21] Filter bits
      __IO ONE_BIT  FB22 :  1; //!<[22] Filter bits
      __IO ONE_BIT  FB23 :  1; //!<[23] Filter bits
      __IO ONE_BIT  FB24 :  1; //!<[24] Filter bits
      __IO ONE_BIT  FB25 :  1; //!<[25] Filter bits
      __IO ONE_BIT  FB26 :  1; //!<[26] Filter bits
      __IO ONE_BIT  FB27 :  1; //!<[27] Filter bits
      __IO ONE_BIT  FB28 :  1; //!<[28] Filter bits
      __IO ONE_BIT  FB29 :  1; //!<[29] Filter bits
      __IO ONE_BIT  FB30 :  1; //!<[30] Filter bits
      __IO ONE_BIT  FB31 :  1; //!<[31] Filter bits
    } B;
    __IO uint32_t  R;
    explicit F12R1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      F12R1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      F12R1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union F12R2_DEF   {  //!< Filter bank 12 register 2
    struct {
      __IO ONE_BIT  FB0  :  1; //!<[00] Filter bits
      __IO ONE_BIT  FB1  :  1; //!<[01] Filter bits
      __IO ONE_BIT  FB2  :  1; //!<[02] Filter bits
      __IO ONE_BIT  FB3  :  1; //!<[03] Filter bits
      __IO ONE_BIT  FB4  :  1; //!<[04] Filter bits
      __IO ONE_BIT  FB5  :  1; //!<[05] Filter bits
      __IO ONE_BIT  FB6  :  1; //!<[06] Filter bits
      __IO ONE_BIT  FB7  :  1; //!<[07] Filter bits
      __IO ONE_BIT  FB8  :  1; //!<[08] Filter bits
      __IO ONE_BIT  FB9  :  1; //!<[09] Filter bits
      __IO ONE_BIT  FB10 :  1; //!<[10] Filter bits
      __IO ONE_BIT  FB11 :  1; //!<[11] Filter bits
      __IO ONE_BIT  FB12 :  1; //!<[12] Filter bits
      __IO ONE_BIT  FB13 :  1; //!<[13] Filter bits
      __IO ONE_BIT  FB14 :  1; //!<[14] Filter bits
      __IO ONE_BIT  FB15 :  1; //!<[15] Filter bits
      __IO ONE_BIT  FB16 :  1; //!<[16] Filter bits
      __IO ONE_BIT  FB17 :  1; //!<[17] Filter bits
      __IO ONE_BIT  FB18 :  1; //!<[18] Filter bits
      __IO ONE_BIT  FB19 :  1; //!<[19] Filter bits
      __IO ONE_BIT  FB20 :  1; //!<[20] Filter bits
      __IO ONE_BIT  FB21 :  1; //!<[21] Filter bits
      __IO ONE_BIT  FB22 :  1; //!<[22] Filter bits
      __IO ONE_BIT  FB23 :  1; //!<[23] Filter bits
      __IO ONE_BIT  FB24 :  1; //!<[24] Filter bits
      __IO ONE_BIT  FB25 :  1; //!<[25] Filter bits
      __IO ONE_BIT  FB26 :  1; //!<[26] Filter bits
      __IO ONE_BIT  FB27 :  1; //!<[27] Filter bits
      __IO ONE_BIT  FB28 :  1; //!<[28] Filter bits
      __IO ONE_BIT  FB29 :  1; //!<[29] Filter bits
      __IO ONE_BIT  FB30 :  1; //!<[30] Filter bits
      __IO ONE_BIT  FB31 :  1; //!<[31] Filter bits
    } B;
    __IO uint32_t  R;
    explicit F12R2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      F12R2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      F12R2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union F13R1_DEF   {  //!< Filter bank 13 register 1
    struct {
      __IO ONE_BIT  FB0  :  1; //!<[00] Filter bits
      __IO ONE_BIT  FB1  :  1; //!<[01] Filter bits
      __IO ONE_BIT  FB2  :  1; //!<[02] Filter bits
      __IO ONE_BIT  FB3  :  1; //!<[03] Filter bits
      __IO ONE_BIT  FB4  :  1; //!<[04] Filter bits
      __IO ONE_BIT  FB5  :  1; //!<[05] Filter bits
      __IO ONE_BIT  FB6  :  1; //!<[06] Filter bits
      __IO ONE_BIT  FB7  :  1; //!<[07] Filter bits
      __IO ONE_BIT  FB8  :  1; //!<[08] Filter bits
      __IO ONE_BIT  FB9  :  1; //!<[09] Filter bits
      __IO ONE_BIT  FB10 :  1; //!<[10] Filter bits
      __IO ONE_BIT  FB11 :  1; //!<[11] Filter bits
      __IO ONE_BIT  FB12 :  1; //!<[12] Filter bits
      __IO ONE_BIT  FB13 :  1; //!<[13] Filter bits
      __IO ONE_BIT  FB14 :  1; //!<[14] Filter bits
      __IO ONE_BIT  FB15 :  1; //!<[15] Filter bits
      __IO ONE_BIT  FB16 :  1; //!<[16] Filter bits
      __IO ONE_BIT  FB17 :  1; //!<[17] Filter bits
      __IO ONE_BIT  FB18 :  1; //!<[18] Filter bits
      __IO ONE_BIT  FB19 :  1; //!<[19] Filter bits
      __IO ONE_BIT  FB20 :  1; //!<[20] Filter bits
      __IO ONE_BIT  FB21 :  1; //!<[21] Filter bits
      __IO ONE_BIT  FB22 :  1; //!<[22] Filter bits
      __IO ONE_BIT  FB23 :  1; //!<[23] Filter bits
      __IO ONE_BIT  FB24 :  1; //!<[24] Filter bits
      __IO ONE_BIT  FB25 :  1; //!<[25] Filter bits
      __IO ONE_BIT  FB26 :  1; //!<[26] Filter bits
      __IO ONE_BIT  FB27 :  1; //!<[27] Filter bits
      __IO ONE_BIT  FB28 :  1; //!<[28] Filter bits
      __IO ONE_BIT  FB29 :  1; //!<[29] Filter bits
      __IO ONE_BIT  FB30 :  1; //!<[30] Filter bits
      __IO ONE_BIT  FB31 :  1; //!<[31] Filter bits
    } B;
    __IO uint32_t  R;
    explicit F13R1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      F13R1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      F13R1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union F13R2_DEF   {  //!< Filter bank 13 register 2
    struct {
      __IO ONE_BIT  FB0  :  1; //!<[00] Filter bits
      __IO ONE_BIT  FB1  :  1; //!<[01] Filter bits
      __IO ONE_BIT  FB2  :  1; //!<[02] Filter bits
      __IO ONE_BIT  FB3  :  1; //!<[03] Filter bits
      __IO ONE_BIT  FB4  :  1; //!<[04] Filter bits
      __IO ONE_BIT  FB5  :  1; //!<[05] Filter bits
      __IO ONE_BIT  FB6  :  1; //!<[06] Filter bits
      __IO ONE_BIT  FB7  :  1; //!<[07] Filter bits
      __IO ONE_BIT  FB8  :  1; //!<[08] Filter bits
      __IO ONE_BIT  FB9  :  1; //!<[09] Filter bits
      __IO ONE_BIT  FB10 :  1; //!<[10] Filter bits
      __IO ONE_BIT  FB11 :  1; //!<[11] Filter bits
      __IO ONE_BIT  FB12 :  1; //!<[12] Filter bits
      __IO ONE_BIT  FB13 :  1; //!<[13] Filter bits
      __IO ONE_BIT  FB14 :  1; //!<[14] Filter bits
      __IO ONE_BIT  FB15 :  1; //!<[15] Filter bits
      __IO ONE_BIT  FB16 :  1; //!<[16] Filter bits
      __IO ONE_BIT  FB17 :  1; //!<[17] Filter bits
      __IO ONE_BIT  FB18 :  1; //!<[18] Filter bits
      __IO ONE_BIT  FB19 :  1; //!<[19] Filter bits
      __IO ONE_BIT  FB20 :  1; //!<[20] Filter bits
      __IO ONE_BIT  FB21 :  1; //!<[21] Filter bits
      __IO ONE_BIT  FB22 :  1; //!<[22] Filter bits
      __IO ONE_BIT  FB23 :  1; //!<[23] Filter bits
      __IO ONE_BIT  FB24 :  1; //!<[24] Filter bits
      __IO ONE_BIT  FB25 :  1; //!<[25] Filter bits
      __IO ONE_BIT  FB26 :  1; //!<[26] Filter bits
      __IO ONE_BIT  FB27 :  1; //!<[27] Filter bits
      __IO ONE_BIT  FB28 :  1; //!<[28] Filter bits
      __IO ONE_BIT  FB29 :  1; //!<[29] Filter bits
      __IO ONE_BIT  FB30 :  1; //!<[30] Filter bits
      __IO ONE_BIT  FB31 :  1; //!<[31] Filter bits
    } B;
    __IO uint32_t  R;
    explicit F13R2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      F13R2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      F13R2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union F14R1_DEF   {  //!< Filter bank 14 register 1
    struct {
      __IO ONE_BIT  FB0  :  1; //!<[00] Filter bits
      __IO ONE_BIT  FB1  :  1; //!<[01] Filter bits
      __IO ONE_BIT  FB2  :  1; //!<[02] Filter bits
      __IO ONE_BIT  FB3  :  1; //!<[03] Filter bits
      __IO ONE_BIT  FB4  :  1; //!<[04] Filter bits
      __IO ONE_BIT  FB5  :  1; //!<[05] Filter bits
      __IO ONE_BIT  FB6  :  1; //!<[06] Filter bits
      __IO ONE_BIT  FB7  :  1; //!<[07] Filter bits
      __IO ONE_BIT  FB8  :  1; //!<[08] Filter bits
      __IO ONE_BIT  FB9  :  1; //!<[09] Filter bits
      __IO ONE_BIT  FB10 :  1; //!<[10] Filter bits
      __IO ONE_BIT  FB11 :  1; //!<[11] Filter bits
      __IO ONE_BIT  FB12 :  1; //!<[12] Filter bits
      __IO ONE_BIT  FB13 :  1; //!<[13] Filter bits
      __IO ONE_BIT  FB14 :  1; //!<[14] Filter bits
      __IO ONE_BIT  FB15 :  1; //!<[15] Filter bits
      __IO ONE_BIT  FB16 :  1; //!<[16] Filter bits
      __IO ONE_BIT  FB17 :  1; //!<[17] Filter bits
      __IO ONE_BIT  FB18 :  1; //!<[18] Filter bits
      __IO ONE_BIT  FB19 :  1; //!<[19] Filter bits
      __IO ONE_BIT  FB20 :  1; //!<[20] Filter bits
      __IO ONE_BIT  FB21 :  1; //!<[21] Filter bits
      __IO ONE_BIT  FB22 :  1; //!<[22] Filter bits
      __IO ONE_BIT  FB23 :  1; //!<[23] Filter bits
      __IO ONE_BIT  FB24 :  1; //!<[24] Filter bits
      __IO ONE_BIT  FB25 :  1; //!<[25] Filter bits
      __IO ONE_BIT  FB26 :  1; //!<[26] Filter bits
      __IO ONE_BIT  FB27 :  1; //!<[27] Filter bits
      __IO ONE_BIT  FB28 :  1; //!<[28] Filter bits
      __IO ONE_BIT  FB29 :  1; //!<[29] Filter bits
      __IO ONE_BIT  FB30 :  1; //!<[30] Filter bits
      __IO ONE_BIT  FB31 :  1; //!<[31] Filter bits
    } B;
    __IO uint32_t  R;
    explicit F14R1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      F14R1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      F14R1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union F14R2_DEF   {  //!< Filter bank 14 register 2
    struct {
      __IO ONE_BIT  FB0  :  1; //!<[00] Filter bits
      __IO ONE_BIT  FB1  :  1; //!<[01] Filter bits
      __IO ONE_BIT  FB2  :  1; //!<[02] Filter bits
      __IO ONE_BIT  FB3  :  1; //!<[03] Filter bits
      __IO ONE_BIT  FB4  :  1; //!<[04] Filter bits
      __IO ONE_BIT  FB5  :  1; //!<[05] Filter bits
      __IO ONE_BIT  FB6  :  1; //!<[06] Filter bits
      __IO ONE_BIT  FB7  :  1; //!<[07] Filter bits
      __IO ONE_BIT  FB8  :  1; //!<[08] Filter bits
      __IO ONE_BIT  FB9  :  1; //!<[09] Filter bits
      __IO ONE_BIT  FB10 :  1; //!<[10] Filter bits
      __IO ONE_BIT  FB11 :  1; //!<[11] Filter bits
      __IO ONE_BIT  FB12 :  1; //!<[12] Filter bits
      __IO ONE_BIT  FB13 :  1; //!<[13] Filter bits
      __IO ONE_BIT  FB14 :  1; //!<[14] Filter bits
      __IO ONE_BIT  FB15 :  1; //!<[15] Filter bits
      __IO ONE_BIT  FB16 :  1; //!<[16] Filter bits
      __IO ONE_BIT  FB17 :  1; //!<[17] Filter bits
      __IO ONE_BIT  FB18 :  1; //!<[18] Filter bits
      __IO ONE_BIT  FB19 :  1; //!<[19] Filter bits
      __IO ONE_BIT  FB20 :  1; //!<[20] Filter bits
      __IO ONE_BIT  FB21 :  1; //!<[21] Filter bits
      __IO ONE_BIT  FB22 :  1; //!<[22] Filter bits
      __IO ONE_BIT  FB23 :  1; //!<[23] Filter bits
      __IO ONE_BIT  FB24 :  1; //!<[24] Filter bits
      __IO ONE_BIT  FB25 :  1; //!<[25] Filter bits
      __IO ONE_BIT  FB26 :  1; //!<[26] Filter bits
      __IO ONE_BIT  FB27 :  1; //!<[27] Filter bits
      __IO ONE_BIT  FB28 :  1; //!<[28] Filter bits
      __IO ONE_BIT  FB29 :  1; //!<[29] Filter bits
      __IO ONE_BIT  FB30 :  1; //!<[30] Filter bits
      __IO ONE_BIT  FB31 :  1; //!<[31] Filter bits
    } B;
    __IO uint32_t  R;
    explicit F14R2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      F14R2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      F14R2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union F15R1_DEF   {  //!< Filter bank 15 register 1
    struct {
      __IO ONE_BIT  FB0  :  1; //!<[00] Filter bits
      __IO ONE_BIT  FB1  :  1; //!<[01] Filter bits
      __IO ONE_BIT  FB2  :  1; //!<[02] Filter bits
      __IO ONE_BIT  FB3  :  1; //!<[03] Filter bits
      __IO ONE_BIT  FB4  :  1; //!<[04] Filter bits
      __IO ONE_BIT  FB5  :  1; //!<[05] Filter bits
      __IO ONE_BIT  FB6  :  1; //!<[06] Filter bits
      __IO ONE_BIT  FB7  :  1; //!<[07] Filter bits
      __IO ONE_BIT  FB8  :  1; //!<[08] Filter bits
      __IO ONE_BIT  FB9  :  1; //!<[09] Filter bits
      __IO ONE_BIT  FB10 :  1; //!<[10] Filter bits
      __IO ONE_BIT  FB11 :  1; //!<[11] Filter bits
      __IO ONE_BIT  FB12 :  1; //!<[12] Filter bits
      __IO ONE_BIT  FB13 :  1; //!<[13] Filter bits
      __IO ONE_BIT  FB14 :  1; //!<[14] Filter bits
      __IO ONE_BIT  FB15 :  1; //!<[15] Filter bits
      __IO ONE_BIT  FB16 :  1; //!<[16] Filter bits
      __IO ONE_BIT  FB17 :  1; //!<[17] Filter bits
      __IO ONE_BIT  FB18 :  1; //!<[18] Filter bits
      __IO ONE_BIT  FB19 :  1; //!<[19] Filter bits
      __IO ONE_BIT  FB20 :  1; //!<[20] Filter bits
      __IO ONE_BIT  FB21 :  1; //!<[21] Filter bits
      __IO ONE_BIT  FB22 :  1; //!<[22] Filter bits
      __IO ONE_BIT  FB23 :  1; //!<[23] Filter bits
      __IO ONE_BIT  FB24 :  1; //!<[24] Filter bits
      __IO ONE_BIT  FB25 :  1; //!<[25] Filter bits
      __IO ONE_BIT  FB26 :  1; //!<[26] Filter bits
      __IO ONE_BIT  FB27 :  1; //!<[27] Filter bits
      __IO ONE_BIT  FB28 :  1; //!<[28] Filter bits
      __IO ONE_BIT  FB29 :  1; //!<[29] Filter bits
      __IO ONE_BIT  FB30 :  1; //!<[30] Filter bits
      __IO ONE_BIT  FB31 :  1; //!<[31] Filter bits
    } B;
    __IO uint32_t  R;
    explicit F15R1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      F15R1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      F15R1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union F15R2_DEF   {  //!< Filter bank 15 register 2
    struct {
      __IO ONE_BIT  FB0  :  1; //!<[00] Filter bits
      __IO ONE_BIT  FB1  :  1; //!<[01] Filter bits
      __IO ONE_BIT  FB2  :  1; //!<[02] Filter bits
      __IO ONE_BIT  FB3  :  1; //!<[03] Filter bits
      __IO ONE_BIT  FB4  :  1; //!<[04] Filter bits
      __IO ONE_BIT  FB5  :  1; //!<[05] Filter bits
      __IO ONE_BIT  FB6  :  1; //!<[06] Filter bits
      __IO ONE_BIT  FB7  :  1; //!<[07] Filter bits
      __IO ONE_BIT  FB8  :  1; //!<[08] Filter bits
      __IO ONE_BIT  FB9  :  1; //!<[09] Filter bits
      __IO ONE_BIT  FB10 :  1; //!<[10] Filter bits
      __IO ONE_BIT  FB11 :  1; //!<[11] Filter bits
      __IO ONE_BIT  FB12 :  1; //!<[12] Filter bits
      __IO ONE_BIT  FB13 :  1; //!<[13] Filter bits
      __IO ONE_BIT  FB14 :  1; //!<[14] Filter bits
      __IO ONE_BIT  FB15 :  1; //!<[15] Filter bits
      __IO ONE_BIT  FB16 :  1; //!<[16] Filter bits
      __IO ONE_BIT  FB17 :  1; //!<[17] Filter bits
      __IO ONE_BIT  FB18 :  1; //!<[18] Filter bits
      __IO ONE_BIT  FB19 :  1; //!<[19] Filter bits
      __IO ONE_BIT  FB20 :  1; //!<[20] Filter bits
      __IO ONE_BIT  FB21 :  1; //!<[21] Filter bits
      __IO ONE_BIT  FB22 :  1; //!<[22] Filter bits
      __IO ONE_BIT  FB23 :  1; //!<[23] Filter bits
      __IO ONE_BIT  FB24 :  1; //!<[24] Filter bits
      __IO ONE_BIT  FB25 :  1; //!<[25] Filter bits
      __IO ONE_BIT  FB26 :  1; //!<[26] Filter bits
      __IO ONE_BIT  FB27 :  1; //!<[27] Filter bits
      __IO ONE_BIT  FB28 :  1; //!<[28] Filter bits
      __IO ONE_BIT  FB29 :  1; //!<[29] Filter bits
      __IO ONE_BIT  FB30 :  1; //!<[30] Filter bits
      __IO ONE_BIT  FB31 :  1; //!<[31] Filter bits
    } B;
    __IO uint32_t  R;
    explicit F15R2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      F15R2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      F15R2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union F16R1_DEF   {  //!< Filter bank 16 register 1
    struct {
      __IO ONE_BIT  FB0  :  1; //!<[00] Filter bits
      __IO ONE_BIT  FB1  :  1; //!<[01] Filter bits
      __IO ONE_BIT  FB2  :  1; //!<[02] Filter bits
      __IO ONE_BIT  FB3  :  1; //!<[03] Filter bits
      __IO ONE_BIT  FB4  :  1; //!<[04] Filter bits
      __IO ONE_BIT  FB5  :  1; //!<[05] Filter bits
      __IO ONE_BIT  FB6  :  1; //!<[06] Filter bits
      __IO ONE_BIT  FB7  :  1; //!<[07] Filter bits
      __IO ONE_BIT  FB8  :  1; //!<[08] Filter bits
      __IO ONE_BIT  FB9  :  1; //!<[09] Filter bits
      __IO ONE_BIT  FB10 :  1; //!<[10] Filter bits
      __IO ONE_BIT  FB11 :  1; //!<[11] Filter bits
      __IO ONE_BIT  FB12 :  1; //!<[12] Filter bits
      __IO ONE_BIT  FB13 :  1; //!<[13] Filter bits
      __IO ONE_BIT  FB14 :  1; //!<[14] Filter bits
      __IO ONE_BIT  FB15 :  1; //!<[15] Filter bits
      __IO ONE_BIT  FB16 :  1; //!<[16] Filter bits
      __IO ONE_BIT  FB17 :  1; //!<[17] Filter bits
      __IO ONE_BIT  FB18 :  1; //!<[18] Filter bits
      __IO ONE_BIT  FB19 :  1; //!<[19] Filter bits
      __IO ONE_BIT  FB20 :  1; //!<[20] Filter bits
      __IO ONE_BIT  FB21 :  1; //!<[21] Filter bits
      __IO ONE_BIT  FB22 :  1; //!<[22] Filter bits
      __IO ONE_BIT  FB23 :  1; //!<[23] Filter bits
      __IO ONE_BIT  FB24 :  1; //!<[24] Filter bits
      __IO ONE_BIT  FB25 :  1; //!<[25] Filter bits
      __IO ONE_BIT  FB26 :  1; //!<[26] Filter bits
      __IO ONE_BIT  FB27 :  1; //!<[27] Filter bits
      __IO ONE_BIT  FB28 :  1; //!<[28] Filter bits
      __IO ONE_BIT  FB29 :  1; //!<[29] Filter bits
      __IO ONE_BIT  FB30 :  1; //!<[30] Filter bits
      __IO ONE_BIT  FB31 :  1; //!<[31] Filter bits
    } B;
    __IO uint32_t  R;
    explicit F16R1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      F16R1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      F16R1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union F16R2_DEF   {  //!< Filter bank 16 register 2
    struct {
      __IO ONE_BIT  FB0  :  1; //!<[00] Filter bits
      __IO ONE_BIT  FB1  :  1; //!<[01] Filter bits
      __IO ONE_BIT  FB2  :  1; //!<[02] Filter bits
      __IO ONE_BIT  FB3  :  1; //!<[03] Filter bits
      __IO ONE_BIT  FB4  :  1; //!<[04] Filter bits
      __IO ONE_BIT  FB5  :  1; //!<[05] Filter bits
      __IO ONE_BIT  FB6  :  1; //!<[06] Filter bits
      __IO ONE_BIT  FB7  :  1; //!<[07] Filter bits
      __IO ONE_BIT  FB8  :  1; //!<[08] Filter bits
      __IO ONE_BIT  FB9  :  1; //!<[09] Filter bits
      __IO ONE_BIT  FB10 :  1; //!<[10] Filter bits
      __IO ONE_BIT  FB11 :  1; //!<[11] Filter bits
      __IO ONE_BIT  FB12 :  1; //!<[12] Filter bits
      __IO ONE_BIT  FB13 :  1; //!<[13] Filter bits
      __IO ONE_BIT  FB14 :  1; //!<[14] Filter bits
      __IO ONE_BIT  FB15 :  1; //!<[15] Filter bits
      __IO ONE_BIT  FB16 :  1; //!<[16] Filter bits
      __IO ONE_BIT  FB17 :  1; //!<[17] Filter bits
      __IO ONE_BIT  FB18 :  1; //!<[18] Filter bits
      __IO ONE_BIT  FB19 :  1; //!<[19] Filter bits
      __IO ONE_BIT  FB20 :  1; //!<[20] Filter bits
      __IO ONE_BIT  FB21 :  1; //!<[21] Filter bits
      __IO ONE_BIT  FB22 :  1; //!<[22] Filter bits
      __IO ONE_BIT  FB23 :  1; //!<[23] Filter bits
      __IO ONE_BIT  FB24 :  1; //!<[24] Filter bits
      __IO ONE_BIT  FB25 :  1; //!<[25] Filter bits
      __IO ONE_BIT  FB26 :  1; //!<[26] Filter bits
      __IO ONE_BIT  FB27 :  1; //!<[27] Filter bits
      __IO ONE_BIT  FB28 :  1; //!<[28] Filter bits
      __IO ONE_BIT  FB29 :  1; //!<[29] Filter bits
      __IO ONE_BIT  FB30 :  1; //!<[30] Filter bits
      __IO ONE_BIT  FB31 :  1; //!<[31] Filter bits
    } B;
    __IO uint32_t  R;
    explicit F16R2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      F16R2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      F16R2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union F17R1_DEF   {  //!< Filter bank 17 register 1
    struct {
      __IO ONE_BIT  FB0  :  1; //!<[00] Filter bits
      __IO ONE_BIT  FB1  :  1; //!<[01] Filter bits
      __IO ONE_BIT  FB2  :  1; //!<[02] Filter bits
      __IO ONE_BIT  FB3  :  1; //!<[03] Filter bits
      __IO ONE_BIT  FB4  :  1; //!<[04] Filter bits
      __IO ONE_BIT  FB5  :  1; //!<[05] Filter bits
      __IO ONE_BIT  FB6  :  1; //!<[06] Filter bits
      __IO ONE_BIT  FB7  :  1; //!<[07] Filter bits
      __IO ONE_BIT  FB8  :  1; //!<[08] Filter bits
      __IO ONE_BIT  FB9  :  1; //!<[09] Filter bits
      __IO ONE_BIT  FB10 :  1; //!<[10] Filter bits
      __IO ONE_BIT  FB11 :  1; //!<[11] Filter bits
      __IO ONE_BIT  FB12 :  1; //!<[12] Filter bits
      __IO ONE_BIT  FB13 :  1; //!<[13] Filter bits
      __IO ONE_BIT  FB14 :  1; //!<[14] Filter bits
      __IO ONE_BIT  FB15 :  1; //!<[15] Filter bits
      __IO ONE_BIT  FB16 :  1; //!<[16] Filter bits
      __IO ONE_BIT  FB17 :  1; //!<[17] Filter bits
      __IO ONE_BIT  FB18 :  1; //!<[18] Filter bits
      __IO ONE_BIT  FB19 :  1; //!<[19] Filter bits
      __IO ONE_BIT  FB20 :  1; //!<[20] Filter bits
      __IO ONE_BIT  FB21 :  1; //!<[21] Filter bits
      __IO ONE_BIT  FB22 :  1; //!<[22] Filter bits
      __IO ONE_BIT  FB23 :  1; //!<[23] Filter bits
      __IO ONE_BIT  FB24 :  1; //!<[24] Filter bits
      __IO ONE_BIT  FB25 :  1; //!<[25] Filter bits
      __IO ONE_BIT  FB26 :  1; //!<[26] Filter bits
      __IO ONE_BIT  FB27 :  1; //!<[27] Filter bits
      __IO ONE_BIT  FB28 :  1; //!<[28] Filter bits
      __IO ONE_BIT  FB29 :  1; //!<[29] Filter bits
      __IO ONE_BIT  FB30 :  1; //!<[30] Filter bits
      __IO ONE_BIT  FB31 :  1; //!<[31] Filter bits
    } B;
    __IO uint32_t  R;
    explicit F17R1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      F17R1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      F17R1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union F17R2_DEF   {  //!< Filter bank 17 register 2
    struct {
      __IO ONE_BIT  FB0  :  1; //!<[00] Filter bits
      __IO ONE_BIT  FB1  :  1; //!<[01] Filter bits
      __IO ONE_BIT  FB2  :  1; //!<[02] Filter bits
      __IO ONE_BIT  FB3  :  1; //!<[03] Filter bits
      __IO ONE_BIT  FB4  :  1; //!<[04] Filter bits
      __IO ONE_BIT  FB5  :  1; //!<[05] Filter bits
      __IO ONE_BIT  FB6  :  1; //!<[06] Filter bits
      __IO ONE_BIT  FB7  :  1; //!<[07] Filter bits
      __IO ONE_BIT  FB8  :  1; //!<[08] Filter bits
      __IO ONE_BIT  FB9  :  1; //!<[09] Filter bits
      __IO ONE_BIT  FB10 :  1; //!<[10] Filter bits
      __IO ONE_BIT  FB11 :  1; //!<[11] Filter bits
      __IO ONE_BIT  FB12 :  1; //!<[12] Filter bits
      __IO ONE_BIT  FB13 :  1; //!<[13] Filter bits
      __IO ONE_BIT  FB14 :  1; //!<[14] Filter bits
      __IO ONE_BIT  FB15 :  1; //!<[15] Filter bits
      __IO ONE_BIT  FB16 :  1; //!<[16] Filter bits
      __IO ONE_BIT  FB17 :  1; //!<[17] Filter bits
      __IO ONE_BIT  FB18 :  1; //!<[18] Filter bits
      __IO ONE_BIT  FB19 :  1; //!<[19] Filter bits
      __IO ONE_BIT  FB20 :  1; //!<[20] Filter bits
      __IO ONE_BIT  FB21 :  1; //!<[21] Filter bits
      __IO ONE_BIT  FB22 :  1; //!<[22] Filter bits
      __IO ONE_BIT  FB23 :  1; //!<[23] Filter bits
      __IO ONE_BIT  FB24 :  1; //!<[24] Filter bits
      __IO ONE_BIT  FB25 :  1; //!<[25] Filter bits
      __IO ONE_BIT  FB26 :  1; //!<[26] Filter bits
      __IO ONE_BIT  FB27 :  1; //!<[27] Filter bits
      __IO ONE_BIT  FB28 :  1; //!<[28] Filter bits
      __IO ONE_BIT  FB29 :  1; //!<[29] Filter bits
      __IO ONE_BIT  FB30 :  1; //!<[30] Filter bits
      __IO ONE_BIT  FB31 :  1; //!<[31] Filter bits
    } B;
    __IO uint32_t  R;
    explicit F17R2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      F17R2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      F17R2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union F18R1_DEF   {  //!< Filter bank 18 register 1
    struct {
      __IO ONE_BIT  FB0  :  1; //!<[00] Filter bits
      __IO ONE_BIT  FB1  :  1; //!<[01] Filter bits
      __IO ONE_BIT  FB2  :  1; //!<[02] Filter bits
      __IO ONE_BIT  FB3  :  1; //!<[03] Filter bits
      __IO ONE_BIT  FB4  :  1; //!<[04] Filter bits
      __IO ONE_BIT  FB5  :  1; //!<[05] Filter bits
      __IO ONE_BIT  FB6  :  1; //!<[06] Filter bits
      __IO ONE_BIT  FB7  :  1; //!<[07] Filter bits
      __IO ONE_BIT  FB8  :  1; //!<[08] Filter bits
      __IO ONE_BIT  FB9  :  1; //!<[09] Filter bits
      __IO ONE_BIT  FB10 :  1; //!<[10] Filter bits
      __IO ONE_BIT  FB11 :  1; //!<[11] Filter bits
      __IO ONE_BIT  FB12 :  1; //!<[12] Filter bits
      __IO ONE_BIT  FB13 :  1; //!<[13] Filter bits
      __IO ONE_BIT  FB14 :  1; //!<[14] Filter bits
      __IO ONE_BIT  FB15 :  1; //!<[15] Filter bits
      __IO ONE_BIT  FB16 :  1; //!<[16] Filter bits
      __IO ONE_BIT  FB17 :  1; //!<[17] Filter bits
      __IO ONE_BIT  FB18 :  1; //!<[18] Filter bits
      __IO ONE_BIT  FB19 :  1; //!<[19] Filter bits
      __IO ONE_BIT  FB20 :  1; //!<[20] Filter bits
      __IO ONE_BIT  FB21 :  1; //!<[21] Filter bits
      __IO ONE_BIT  FB22 :  1; //!<[22] Filter bits
      __IO ONE_BIT  FB23 :  1; //!<[23] Filter bits
      __IO ONE_BIT  FB24 :  1; //!<[24] Filter bits
      __IO ONE_BIT  FB25 :  1; //!<[25] Filter bits
      __IO ONE_BIT  FB26 :  1; //!<[26] Filter bits
      __IO ONE_BIT  FB27 :  1; //!<[27] Filter bits
      __IO ONE_BIT  FB28 :  1; //!<[28] Filter bits
      __IO ONE_BIT  FB29 :  1; //!<[29] Filter bits
      __IO ONE_BIT  FB30 :  1; //!<[30] Filter bits
      __IO ONE_BIT  FB31 :  1; //!<[31] Filter bits
    } B;
    __IO uint32_t  R;
    explicit F18R1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      F18R1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      F18R1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union F18R2_DEF   {  //!< Filter bank 18 register 2
    struct {
      __IO ONE_BIT  FB0  :  1; //!<[00] Filter bits
      __IO ONE_BIT  FB1  :  1; //!<[01] Filter bits
      __IO ONE_BIT  FB2  :  1; //!<[02] Filter bits
      __IO ONE_BIT  FB3  :  1; //!<[03] Filter bits
      __IO ONE_BIT  FB4  :  1; //!<[04] Filter bits
      __IO ONE_BIT  FB5  :  1; //!<[05] Filter bits
      __IO ONE_BIT  FB6  :  1; //!<[06] Filter bits
      __IO ONE_BIT  FB7  :  1; //!<[07] Filter bits
      __IO ONE_BIT  FB8  :  1; //!<[08] Filter bits
      __IO ONE_BIT  FB9  :  1; //!<[09] Filter bits
      __IO ONE_BIT  FB10 :  1; //!<[10] Filter bits
      __IO ONE_BIT  FB11 :  1; //!<[11] Filter bits
      __IO ONE_BIT  FB12 :  1; //!<[12] Filter bits
      __IO ONE_BIT  FB13 :  1; //!<[13] Filter bits
      __IO ONE_BIT  FB14 :  1; //!<[14] Filter bits
      __IO ONE_BIT  FB15 :  1; //!<[15] Filter bits
      __IO ONE_BIT  FB16 :  1; //!<[16] Filter bits
      __IO ONE_BIT  FB17 :  1; //!<[17] Filter bits
      __IO ONE_BIT  FB18 :  1; //!<[18] Filter bits
      __IO ONE_BIT  FB19 :  1; //!<[19] Filter bits
      __IO ONE_BIT  FB20 :  1; //!<[20] Filter bits
      __IO ONE_BIT  FB21 :  1; //!<[21] Filter bits
      __IO ONE_BIT  FB22 :  1; //!<[22] Filter bits
      __IO ONE_BIT  FB23 :  1; //!<[23] Filter bits
      __IO ONE_BIT  FB24 :  1; //!<[24] Filter bits
      __IO ONE_BIT  FB25 :  1; //!<[25] Filter bits
      __IO ONE_BIT  FB26 :  1; //!<[26] Filter bits
      __IO ONE_BIT  FB27 :  1; //!<[27] Filter bits
      __IO ONE_BIT  FB28 :  1; //!<[28] Filter bits
      __IO ONE_BIT  FB29 :  1; //!<[29] Filter bits
      __IO ONE_BIT  FB30 :  1; //!<[30] Filter bits
      __IO ONE_BIT  FB31 :  1; //!<[31] Filter bits
    } B;
    __IO uint32_t  R;
    explicit F18R2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      F18R2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      F18R2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union F19R1_DEF   {  //!< Filter bank 19 register 1
    struct {
      __IO ONE_BIT  FB0  :  1; //!<[00] Filter bits
      __IO ONE_BIT  FB1  :  1; //!<[01] Filter bits
      __IO ONE_BIT  FB2  :  1; //!<[02] Filter bits
      __IO ONE_BIT  FB3  :  1; //!<[03] Filter bits
      __IO ONE_BIT  FB4  :  1; //!<[04] Filter bits
      __IO ONE_BIT  FB5  :  1; //!<[05] Filter bits
      __IO ONE_BIT  FB6  :  1; //!<[06] Filter bits
      __IO ONE_BIT  FB7  :  1; //!<[07] Filter bits
      __IO ONE_BIT  FB8  :  1; //!<[08] Filter bits
      __IO ONE_BIT  FB9  :  1; //!<[09] Filter bits
      __IO ONE_BIT  FB10 :  1; //!<[10] Filter bits
      __IO ONE_BIT  FB11 :  1; //!<[11] Filter bits
      __IO ONE_BIT  FB12 :  1; //!<[12] Filter bits
      __IO ONE_BIT  FB13 :  1; //!<[13] Filter bits
      __IO ONE_BIT  FB14 :  1; //!<[14] Filter bits
      __IO ONE_BIT  FB15 :  1; //!<[15] Filter bits
      __IO ONE_BIT  FB16 :  1; //!<[16] Filter bits
      __IO ONE_BIT  FB17 :  1; //!<[17] Filter bits
      __IO ONE_BIT  FB18 :  1; //!<[18] Filter bits
      __IO ONE_BIT  FB19 :  1; //!<[19] Filter bits
      __IO ONE_BIT  FB20 :  1; //!<[20] Filter bits
      __IO ONE_BIT  FB21 :  1; //!<[21] Filter bits
      __IO ONE_BIT  FB22 :  1; //!<[22] Filter bits
      __IO ONE_BIT  FB23 :  1; //!<[23] Filter bits
      __IO ONE_BIT  FB24 :  1; //!<[24] Filter bits
      __IO ONE_BIT  FB25 :  1; //!<[25] Filter bits
      __IO ONE_BIT  FB26 :  1; //!<[26] Filter bits
      __IO ONE_BIT  FB27 :  1; //!<[27] Filter bits
      __IO ONE_BIT  FB28 :  1; //!<[28] Filter bits
      __IO ONE_BIT  FB29 :  1; //!<[29] Filter bits
      __IO ONE_BIT  FB30 :  1; //!<[30] Filter bits
      __IO ONE_BIT  FB31 :  1; //!<[31] Filter bits
    } B;
    __IO uint32_t  R;
    explicit F19R1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      F19R1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      F19R1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union F19R2_DEF   {  //!< Filter bank 19 register 2
    struct {
      __IO ONE_BIT  FB0  :  1; //!<[00] Filter bits
      __IO ONE_BIT  FB1  :  1; //!<[01] Filter bits
      __IO ONE_BIT  FB2  :  1; //!<[02] Filter bits
      __IO ONE_BIT  FB3  :  1; //!<[03] Filter bits
      __IO ONE_BIT  FB4  :  1; //!<[04] Filter bits
      __IO ONE_BIT  FB5  :  1; //!<[05] Filter bits
      __IO ONE_BIT  FB6  :  1; //!<[06] Filter bits
      __IO ONE_BIT  FB7  :  1; //!<[07] Filter bits
      __IO ONE_BIT  FB8  :  1; //!<[08] Filter bits
      __IO ONE_BIT  FB9  :  1; //!<[09] Filter bits
      __IO ONE_BIT  FB10 :  1; //!<[10] Filter bits
      __IO ONE_BIT  FB11 :  1; //!<[11] Filter bits
      __IO ONE_BIT  FB12 :  1; //!<[12] Filter bits
      __IO ONE_BIT  FB13 :  1; //!<[13] Filter bits
      __IO ONE_BIT  FB14 :  1; //!<[14] Filter bits
      __IO ONE_BIT  FB15 :  1; //!<[15] Filter bits
      __IO ONE_BIT  FB16 :  1; //!<[16] Filter bits
      __IO ONE_BIT  FB17 :  1; //!<[17] Filter bits
      __IO ONE_BIT  FB18 :  1; //!<[18] Filter bits
      __IO ONE_BIT  FB19 :  1; //!<[19] Filter bits
      __IO ONE_BIT  FB20 :  1; //!<[20] Filter bits
      __IO ONE_BIT  FB21 :  1; //!<[21] Filter bits
      __IO ONE_BIT  FB22 :  1; //!<[22] Filter bits
      __IO ONE_BIT  FB23 :  1; //!<[23] Filter bits
      __IO ONE_BIT  FB24 :  1; //!<[24] Filter bits
      __IO ONE_BIT  FB25 :  1; //!<[25] Filter bits
      __IO ONE_BIT  FB26 :  1; //!<[26] Filter bits
      __IO ONE_BIT  FB27 :  1; //!<[27] Filter bits
      __IO ONE_BIT  FB28 :  1; //!<[28] Filter bits
      __IO ONE_BIT  FB29 :  1; //!<[29] Filter bits
      __IO ONE_BIT  FB30 :  1; //!<[30] Filter bits
      __IO ONE_BIT  FB31 :  1; //!<[31] Filter bits
    } B;
    __IO uint32_t  R;
    explicit F19R2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      F19R2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      F19R2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union F20R1_DEF   {  //!< Filter bank 20 register 1
    struct {
      __IO ONE_BIT  FB0  :  1; //!<[00] Filter bits
      __IO ONE_BIT  FB1  :  1; //!<[01] Filter bits
      __IO ONE_BIT  FB2  :  1; //!<[02] Filter bits
      __IO ONE_BIT  FB3  :  1; //!<[03] Filter bits
      __IO ONE_BIT  FB4  :  1; //!<[04] Filter bits
      __IO ONE_BIT  FB5  :  1; //!<[05] Filter bits
      __IO ONE_BIT  FB6  :  1; //!<[06] Filter bits
      __IO ONE_BIT  FB7  :  1; //!<[07] Filter bits
      __IO ONE_BIT  FB8  :  1; //!<[08] Filter bits
      __IO ONE_BIT  FB9  :  1; //!<[09] Filter bits
      __IO ONE_BIT  FB10 :  1; //!<[10] Filter bits
      __IO ONE_BIT  FB11 :  1; //!<[11] Filter bits
      __IO ONE_BIT  FB12 :  1; //!<[12] Filter bits
      __IO ONE_BIT  FB13 :  1; //!<[13] Filter bits
      __IO ONE_BIT  FB14 :  1; //!<[14] Filter bits
      __IO ONE_BIT  FB15 :  1; //!<[15] Filter bits
      __IO ONE_BIT  FB16 :  1; //!<[16] Filter bits
      __IO ONE_BIT  FB17 :  1; //!<[17] Filter bits
      __IO ONE_BIT  FB18 :  1; //!<[18] Filter bits
      __IO ONE_BIT  FB19 :  1; //!<[19] Filter bits
      __IO ONE_BIT  FB20 :  1; //!<[20] Filter bits
      __IO ONE_BIT  FB21 :  1; //!<[21] Filter bits
      __IO ONE_BIT  FB22 :  1; //!<[22] Filter bits
      __IO ONE_BIT  FB23 :  1; //!<[23] Filter bits
      __IO ONE_BIT  FB24 :  1; //!<[24] Filter bits
      __IO ONE_BIT  FB25 :  1; //!<[25] Filter bits
      __IO ONE_BIT  FB26 :  1; //!<[26] Filter bits
      __IO ONE_BIT  FB27 :  1; //!<[27] Filter bits
      __IO ONE_BIT  FB28 :  1; //!<[28] Filter bits
      __IO ONE_BIT  FB29 :  1; //!<[29] Filter bits
      __IO ONE_BIT  FB30 :  1; //!<[30] Filter bits
      __IO ONE_BIT  FB31 :  1; //!<[31] Filter bits
    } B;
    __IO uint32_t  R;
    explicit F20R1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      F20R1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      F20R1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union F20R2_DEF   {  //!< Filter bank 20 register 2
    struct {
      __IO ONE_BIT  FB0  :  1; //!<[00] Filter bits
      __IO ONE_BIT  FB1  :  1; //!<[01] Filter bits
      __IO ONE_BIT  FB2  :  1; //!<[02] Filter bits
      __IO ONE_BIT  FB3  :  1; //!<[03] Filter bits
      __IO ONE_BIT  FB4  :  1; //!<[04] Filter bits
      __IO ONE_BIT  FB5  :  1; //!<[05] Filter bits
      __IO ONE_BIT  FB6  :  1; //!<[06] Filter bits
      __IO ONE_BIT  FB7  :  1; //!<[07] Filter bits
      __IO ONE_BIT  FB8  :  1; //!<[08] Filter bits
      __IO ONE_BIT  FB9  :  1; //!<[09] Filter bits
      __IO ONE_BIT  FB10 :  1; //!<[10] Filter bits
      __IO ONE_BIT  FB11 :  1; //!<[11] Filter bits
      __IO ONE_BIT  FB12 :  1; //!<[12] Filter bits
      __IO ONE_BIT  FB13 :  1; //!<[13] Filter bits
      __IO ONE_BIT  FB14 :  1; //!<[14] Filter bits
      __IO ONE_BIT  FB15 :  1; //!<[15] Filter bits
      __IO ONE_BIT  FB16 :  1; //!<[16] Filter bits
      __IO ONE_BIT  FB17 :  1; //!<[17] Filter bits
      __IO ONE_BIT  FB18 :  1; //!<[18] Filter bits
      __IO ONE_BIT  FB19 :  1; //!<[19] Filter bits
      __IO ONE_BIT  FB20 :  1; //!<[20] Filter bits
      __IO ONE_BIT  FB21 :  1; //!<[21] Filter bits
      __IO ONE_BIT  FB22 :  1; //!<[22] Filter bits
      __IO ONE_BIT  FB23 :  1; //!<[23] Filter bits
      __IO ONE_BIT  FB24 :  1; //!<[24] Filter bits
      __IO ONE_BIT  FB25 :  1; //!<[25] Filter bits
      __IO ONE_BIT  FB26 :  1; //!<[26] Filter bits
      __IO ONE_BIT  FB27 :  1; //!<[27] Filter bits
      __IO ONE_BIT  FB28 :  1; //!<[28] Filter bits
      __IO ONE_BIT  FB29 :  1; //!<[29] Filter bits
      __IO ONE_BIT  FB30 :  1; //!<[30] Filter bits
      __IO ONE_BIT  FB31 :  1; //!<[31] Filter bits
    } B;
    __IO uint32_t  R;
    explicit F20R2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      F20R2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      F20R2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union F21R1_DEF   {  //!< Filter bank 21 register 1
    struct {
      __IO ONE_BIT  FB0  :  1; //!<[00] Filter bits
      __IO ONE_BIT  FB1  :  1; //!<[01] Filter bits
      __IO ONE_BIT  FB2  :  1; //!<[02] Filter bits
      __IO ONE_BIT  FB3  :  1; //!<[03] Filter bits
      __IO ONE_BIT  FB4  :  1; //!<[04] Filter bits
      __IO ONE_BIT  FB5  :  1; //!<[05] Filter bits
      __IO ONE_BIT  FB6  :  1; //!<[06] Filter bits
      __IO ONE_BIT  FB7  :  1; //!<[07] Filter bits
      __IO ONE_BIT  FB8  :  1; //!<[08] Filter bits
      __IO ONE_BIT  FB9  :  1; //!<[09] Filter bits
      __IO ONE_BIT  FB10 :  1; //!<[10] Filter bits
      __IO ONE_BIT  FB11 :  1; //!<[11] Filter bits
      __IO ONE_BIT  FB12 :  1; //!<[12] Filter bits
      __IO ONE_BIT  FB13 :  1; //!<[13] Filter bits
      __IO ONE_BIT  FB14 :  1; //!<[14] Filter bits
      __IO ONE_BIT  FB15 :  1; //!<[15] Filter bits
      __IO ONE_BIT  FB16 :  1; //!<[16] Filter bits
      __IO ONE_BIT  FB17 :  1; //!<[17] Filter bits
      __IO ONE_BIT  FB18 :  1; //!<[18] Filter bits
      __IO ONE_BIT  FB19 :  1; //!<[19] Filter bits
      __IO ONE_BIT  FB20 :  1; //!<[20] Filter bits
      __IO ONE_BIT  FB21 :  1; //!<[21] Filter bits
      __IO ONE_BIT  FB22 :  1; //!<[22] Filter bits
      __IO ONE_BIT  FB23 :  1; //!<[23] Filter bits
      __IO ONE_BIT  FB24 :  1; //!<[24] Filter bits
      __IO ONE_BIT  FB25 :  1; //!<[25] Filter bits
      __IO ONE_BIT  FB26 :  1; //!<[26] Filter bits
      __IO ONE_BIT  FB27 :  1; //!<[27] Filter bits
      __IO ONE_BIT  FB28 :  1; //!<[28] Filter bits
      __IO ONE_BIT  FB29 :  1; //!<[29] Filter bits
      __IO ONE_BIT  FB30 :  1; //!<[30] Filter bits
      __IO ONE_BIT  FB31 :  1; //!<[31] Filter bits
    } B;
    __IO uint32_t  R;
    explicit F21R1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      F21R1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      F21R1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union F21R2_DEF   {  //!< Filter bank 21 register 2
    struct {
      __IO ONE_BIT  FB0  :  1; //!<[00] Filter bits
      __IO ONE_BIT  FB1  :  1; //!<[01] Filter bits
      __IO ONE_BIT  FB2  :  1; //!<[02] Filter bits
      __IO ONE_BIT  FB3  :  1; //!<[03] Filter bits
      __IO ONE_BIT  FB4  :  1; //!<[04] Filter bits
      __IO ONE_BIT  FB5  :  1; //!<[05] Filter bits
      __IO ONE_BIT  FB6  :  1; //!<[06] Filter bits
      __IO ONE_BIT  FB7  :  1; //!<[07] Filter bits
      __IO ONE_BIT  FB8  :  1; //!<[08] Filter bits
      __IO ONE_BIT  FB9  :  1; //!<[09] Filter bits
      __IO ONE_BIT  FB10 :  1; //!<[10] Filter bits
      __IO ONE_BIT  FB11 :  1; //!<[11] Filter bits
      __IO ONE_BIT  FB12 :  1; //!<[12] Filter bits
      __IO ONE_BIT  FB13 :  1; //!<[13] Filter bits
      __IO ONE_BIT  FB14 :  1; //!<[14] Filter bits
      __IO ONE_BIT  FB15 :  1; //!<[15] Filter bits
      __IO ONE_BIT  FB16 :  1; //!<[16] Filter bits
      __IO ONE_BIT  FB17 :  1; //!<[17] Filter bits
      __IO ONE_BIT  FB18 :  1; //!<[18] Filter bits
      __IO ONE_BIT  FB19 :  1; //!<[19] Filter bits
      __IO ONE_BIT  FB20 :  1; //!<[20] Filter bits
      __IO ONE_BIT  FB21 :  1; //!<[21] Filter bits
      __IO ONE_BIT  FB22 :  1; //!<[22] Filter bits
      __IO ONE_BIT  FB23 :  1; //!<[23] Filter bits
      __IO ONE_BIT  FB24 :  1; //!<[24] Filter bits
      __IO ONE_BIT  FB25 :  1; //!<[25] Filter bits
      __IO ONE_BIT  FB26 :  1; //!<[26] Filter bits
      __IO ONE_BIT  FB27 :  1; //!<[27] Filter bits
      __IO ONE_BIT  FB28 :  1; //!<[28] Filter bits
      __IO ONE_BIT  FB29 :  1; //!<[29] Filter bits
      __IO ONE_BIT  FB30 :  1; //!<[30] Filter bits
      __IO ONE_BIT  FB31 :  1; //!<[31] Filter bits
    } B;
    __IO uint32_t  R;
    explicit F21R2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      F21R2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      F21R2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union F22R1_DEF   {  //!< Filter bank 22 register 1
    struct {
      __IO ONE_BIT  FB0  :  1; //!<[00] Filter bits
      __IO ONE_BIT  FB1  :  1; //!<[01] Filter bits
      __IO ONE_BIT  FB2  :  1; //!<[02] Filter bits
      __IO ONE_BIT  FB3  :  1; //!<[03] Filter bits
      __IO ONE_BIT  FB4  :  1; //!<[04] Filter bits
      __IO ONE_BIT  FB5  :  1; //!<[05] Filter bits
      __IO ONE_BIT  FB6  :  1; //!<[06] Filter bits
      __IO ONE_BIT  FB7  :  1; //!<[07] Filter bits
      __IO ONE_BIT  FB8  :  1; //!<[08] Filter bits
      __IO ONE_BIT  FB9  :  1; //!<[09] Filter bits
      __IO ONE_BIT  FB10 :  1; //!<[10] Filter bits
      __IO ONE_BIT  FB11 :  1; //!<[11] Filter bits
      __IO ONE_BIT  FB12 :  1; //!<[12] Filter bits
      __IO ONE_BIT  FB13 :  1; //!<[13] Filter bits
      __IO ONE_BIT  FB14 :  1; //!<[14] Filter bits
      __IO ONE_BIT  FB15 :  1; //!<[15] Filter bits
      __IO ONE_BIT  FB16 :  1; //!<[16] Filter bits
      __IO ONE_BIT  FB17 :  1; //!<[17] Filter bits
      __IO ONE_BIT  FB18 :  1; //!<[18] Filter bits
      __IO ONE_BIT  FB19 :  1; //!<[19] Filter bits
      __IO ONE_BIT  FB20 :  1; //!<[20] Filter bits
      __IO ONE_BIT  FB21 :  1; //!<[21] Filter bits
      __IO ONE_BIT  FB22 :  1; //!<[22] Filter bits
      __IO ONE_BIT  FB23 :  1; //!<[23] Filter bits
      __IO ONE_BIT  FB24 :  1; //!<[24] Filter bits
      __IO ONE_BIT  FB25 :  1; //!<[25] Filter bits
      __IO ONE_BIT  FB26 :  1; //!<[26] Filter bits
      __IO ONE_BIT  FB27 :  1; //!<[27] Filter bits
      __IO ONE_BIT  FB28 :  1; //!<[28] Filter bits
      __IO ONE_BIT  FB29 :  1; //!<[29] Filter bits
      __IO ONE_BIT  FB30 :  1; //!<[30] Filter bits
      __IO ONE_BIT  FB31 :  1; //!<[31] Filter bits
    } B;
    __IO uint32_t  R;
    explicit F22R1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      F22R1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      F22R1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union F22R2_DEF   {  //!< Filter bank 22 register 2
    struct {
      __IO ONE_BIT  FB0  :  1; //!<[00] Filter bits
      __IO ONE_BIT  FB1  :  1; //!<[01] Filter bits
      __IO ONE_BIT  FB2  :  1; //!<[02] Filter bits
      __IO ONE_BIT  FB3  :  1; //!<[03] Filter bits
      __IO ONE_BIT  FB4  :  1; //!<[04] Filter bits
      __IO ONE_BIT  FB5  :  1; //!<[05] Filter bits
      __IO ONE_BIT  FB6  :  1; //!<[06] Filter bits
      __IO ONE_BIT  FB7  :  1; //!<[07] Filter bits
      __IO ONE_BIT  FB8  :  1; //!<[08] Filter bits
      __IO ONE_BIT  FB9  :  1; //!<[09] Filter bits
      __IO ONE_BIT  FB10 :  1; //!<[10] Filter bits
      __IO ONE_BIT  FB11 :  1; //!<[11] Filter bits
      __IO ONE_BIT  FB12 :  1; //!<[12] Filter bits
      __IO ONE_BIT  FB13 :  1; //!<[13] Filter bits
      __IO ONE_BIT  FB14 :  1; //!<[14] Filter bits
      __IO ONE_BIT  FB15 :  1; //!<[15] Filter bits
      __IO ONE_BIT  FB16 :  1; //!<[16] Filter bits
      __IO ONE_BIT  FB17 :  1; //!<[17] Filter bits
      __IO ONE_BIT  FB18 :  1; //!<[18] Filter bits
      __IO ONE_BIT  FB19 :  1; //!<[19] Filter bits
      __IO ONE_BIT  FB20 :  1; //!<[20] Filter bits
      __IO ONE_BIT  FB21 :  1; //!<[21] Filter bits
      __IO ONE_BIT  FB22 :  1; //!<[22] Filter bits
      __IO ONE_BIT  FB23 :  1; //!<[23] Filter bits
      __IO ONE_BIT  FB24 :  1; //!<[24] Filter bits
      __IO ONE_BIT  FB25 :  1; //!<[25] Filter bits
      __IO ONE_BIT  FB26 :  1; //!<[26] Filter bits
      __IO ONE_BIT  FB27 :  1; //!<[27] Filter bits
      __IO ONE_BIT  FB28 :  1; //!<[28] Filter bits
      __IO ONE_BIT  FB29 :  1; //!<[29] Filter bits
      __IO ONE_BIT  FB30 :  1; //!<[30] Filter bits
      __IO ONE_BIT  FB31 :  1; //!<[31] Filter bits
    } B;
    __IO uint32_t  R;
    explicit F22R2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      F22R2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      F22R2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union F23R1_DEF   {  //!< Filter bank 23 register 1
    struct {
      __IO ONE_BIT  FB0  :  1; //!<[00] Filter bits
      __IO ONE_BIT  FB1  :  1; //!<[01] Filter bits
      __IO ONE_BIT  FB2  :  1; //!<[02] Filter bits
      __IO ONE_BIT  FB3  :  1; //!<[03] Filter bits
      __IO ONE_BIT  FB4  :  1; //!<[04] Filter bits
      __IO ONE_BIT  FB5  :  1; //!<[05] Filter bits
      __IO ONE_BIT  FB6  :  1; //!<[06] Filter bits
      __IO ONE_BIT  FB7  :  1; //!<[07] Filter bits
      __IO ONE_BIT  FB8  :  1; //!<[08] Filter bits
      __IO ONE_BIT  FB9  :  1; //!<[09] Filter bits
      __IO ONE_BIT  FB10 :  1; //!<[10] Filter bits
      __IO ONE_BIT  FB11 :  1; //!<[11] Filter bits
      __IO ONE_BIT  FB12 :  1; //!<[12] Filter bits
      __IO ONE_BIT  FB13 :  1; //!<[13] Filter bits
      __IO ONE_BIT  FB14 :  1; //!<[14] Filter bits
      __IO ONE_BIT  FB15 :  1; //!<[15] Filter bits
      __IO ONE_BIT  FB16 :  1; //!<[16] Filter bits
      __IO ONE_BIT  FB17 :  1; //!<[17] Filter bits
      __IO ONE_BIT  FB18 :  1; //!<[18] Filter bits
      __IO ONE_BIT  FB19 :  1; //!<[19] Filter bits
      __IO ONE_BIT  FB20 :  1; //!<[20] Filter bits
      __IO ONE_BIT  FB21 :  1; //!<[21] Filter bits
      __IO ONE_BIT  FB22 :  1; //!<[22] Filter bits
      __IO ONE_BIT  FB23 :  1; //!<[23] Filter bits
      __IO ONE_BIT  FB24 :  1; //!<[24] Filter bits
      __IO ONE_BIT  FB25 :  1; //!<[25] Filter bits
      __IO ONE_BIT  FB26 :  1; //!<[26] Filter bits
      __IO ONE_BIT  FB27 :  1; //!<[27] Filter bits
      __IO ONE_BIT  FB28 :  1; //!<[28] Filter bits
      __IO ONE_BIT  FB29 :  1; //!<[29] Filter bits
      __IO ONE_BIT  FB30 :  1; //!<[30] Filter bits
      __IO ONE_BIT  FB31 :  1; //!<[31] Filter bits
    } B;
    __IO uint32_t  R;
    explicit F23R1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      F23R1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      F23R1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union F23R2_DEF   {  //!< Filter bank 23 register 2
    struct {
      __IO ONE_BIT  FB0  :  1; //!<[00] Filter bits
      __IO ONE_BIT  FB1  :  1; //!<[01] Filter bits
      __IO ONE_BIT  FB2  :  1; //!<[02] Filter bits
      __IO ONE_BIT  FB3  :  1; //!<[03] Filter bits
      __IO ONE_BIT  FB4  :  1; //!<[04] Filter bits
      __IO ONE_BIT  FB5  :  1; //!<[05] Filter bits
      __IO ONE_BIT  FB6  :  1; //!<[06] Filter bits
      __IO ONE_BIT  FB7  :  1; //!<[07] Filter bits
      __IO ONE_BIT  FB8  :  1; //!<[08] Filter bits
      __IO ONE_BIT  FB9  :  1; //!<[09] Filter bits
      __IO ONE_BIT  FB10 :  1; //!<[10] Filter bits
      __IO ONE_BIT  FB11 :  1; //!<[11] Filter bits
      __IO ONE_BIT  FB12 :  1; //!<[12] Filter bits
      __IO ONE_BIT  FB13 :  1; //!<[13] Filter bits
      __IO ONE_BIT  FB14 :  1; //!<[14] Filter bits
      __IO ONE_BIT  FB15 :  1; //!<[15] Filter bits
      __IO ONE_BIT  FB16 :  1; //!<[16] Filter bits
      __IO ONE_BIT  FB17 :  1; //!<[17] Filter bits
      __IO ONE_BIT  FB18 :  1; //!<[18] Filter bits
      __IO ONE_BIT  FB19 :  1; //!<[19] Filter bits
      __IO ONE_BIT  FB20 :  1; //!<[20] Filter bits
      __IO ONE_BIT  FB21 :  1; //!<[21] Filter bits
      __IO ONE_BIT  FB22 :  1; //!<[22] Filter bits
      __IO ONE_BIT  FB23 :  1; //!<[23] Filter bits
      __IO ONE_BIT  FB24 :  1; //!<[24] Filter bits
      __IO ONE_BIT  FB25 :  1; //!<[25] Filter bits
      __IO ONE_BIT  FB26 :  1; //!<[26] Filter bits
      __IO ONE_BIT  FB27 :  1; //!<[27] Filter bits
      __IO ONE_BIT  FB28 :  1; //!<[28] Filter bits
      __IO ONE_BIT  FB29 :  1; //!<[29] Filter bits
      __IO ONE_BIT  FB30 :  1; //!<[30] Filter bits
      __IO ONE_BIT  FB31 :  1; //!<[31] Filter bits
    } B;
    __IO uint32_t  R;
    explicit F23R2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      F23R2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      F23R2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union F24R1_DEF   {  //!< Filter bank 24 register 1
    struct {
      __IO ONE_BIT  FB0  :  1; //!<[00] Filter bits
      __IO ONE_BIT  FB1  :  1; //!<[01] Filter bits
      __IO ONE_BIT  FB2  :  1; //!<[02] Filter bits
      __IO ONE_BIT  FB3  :  1; //!<[03] Filter bits
      __IO ONE_BIT  FB4  :  1; //!<[04] Filter bits
      __IO ONE_BIT  FB5  :  1; //!<[05] Filter bits
      __IO ONE_BIT  FB6  :  1; //!<[06] Filter bits
      __IO ONE_BIT  FB7  :  1; //!<[07] Filter bits
      __IO ONE_BIT  FB8  :  1; //!<[08] Filter bits
      __IO ONE_BIT  FB9  :  1; //!<[09] Filter bits
      __IO ONE_BIT  FB10 :  1; //!<[10] Filter bits
      __IO ONE_BIT  FB11 :  1; //!<[11] Filter bits
      __IO ONE_BIT  FB12 :  1; //!<[12] Filter bits
      __IO ONE_BIT  FB13 :  1; //!<[13] Filter bits
      __IO ONE_BIT  FB14 :  1; //!<[14] Filter bits
      __IO ONE_BIT  FB15 :  1; //!<[15] Filter bits
      __IO ONE_BIT  FB16 :  1; //!<[16] Filter bits
      __IO ONE_BIT  FB17 :  1; //!<[17] Filter bits
      __IO ONE_BIT  FB18 :  1; //!<[18] Filter bits
      __IO ONE_BIT  FB19 :  1; //!<[19] Filter bits
      __IO ONE_BIT  FB20 :  1; //!<[20] Filter bits
      __IO ONE_BIT  FB21 :  1; //!<[21] Filter bits
      __IO ONE_BIT  FB22 :  1; //!<[22] Filter bits
      __IO ONE_BIT  FB23 :  1; //!<[23] Filter bits
      __IO ONE_BIT  FB24 :  1; //!<[24] Filter bits
      __IO ONE_BIT  FB25 :  1; //!<[25] Filter bits
      __IO ONE_BIT  FB26 :  1; //!<[26] Filter bits
      __IO ONE_BIT  FB27 :  1; //!<[27] Filter bits
      __IO ONE_BIT  FB28 :  1; //!<[28] Filter bits
      __IO ONE_BIT  FB29 :  1; //!<[29] Filter bits
      __IO ONE_BIT  FB30 :  1; //!<[30] Filter bits
      __IO ONE_BIT  FB31 :  1; //!<[31] Filter bits
    } B;
    __IO uint32_t  R;
    explicit F24R1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      F24R1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      F24R1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union F24R2_DEF   {  //!< Filter bank 24 register 2
    struct {
      __IO ONE_BIT  FB0  :  1; //!<[00] Filter bits
      __IO ONE_BIT  FB1  :  1; //!<[01] Filter bits
      __IO ONE_BIT  FB2  :  1; //!<[02] Filter bits
      __IO ONE_BIT  FB3  :  1; //!<[03] Filter bits
      __IO ONE_BIT  FB4  :  1; //!<[04] Filter bits
      __IO ONE_BIT  FB5  :  1; //!<[05] Filter bits
      __IO ONE_BIT  FB6  :  1; //!<[06] Filter bits
      __IO ONE_BIT  FB7  :  1; //!<[07] Filter bits
      __IO ONE_BIT  FB8  :  1; //!<[08] Filter bits
      __IO ONE_BIT  FB9  :  1; //!<[09] Filter bits
      __IO ONE_BIT  FB10 :  1; //!<[10] Filter bits
      __IO ONE_BIT  FB11 :  1; //!<[11] Filter bits
      __IO ONE_BIT  FB12 :  1; //!<[12] Filter bits
      __IO ONE_BIT  FB13 :  1; //!<[13] Filter bits
      __IO ONE_BIT  FB14 :  1; //!<[14] Filter bits
      __IO ONE_BIT  FB15 :  1; //!<[15] Filter bits
      __IO ONE_BIT  FB16 :  1; //!<[16] Filter bits
      __IO ONE_BIT  FB17 :  1; //!<[17] Filter bits
      __IO ONE_BIT  FB18 :  1; //!<[18] Filter bits
      __IO ONE_BIT  FB19 :  1; //!<[19] Filter bits
      __IO ONE_BIT  FB20 :  1; //!<[20] Filter bits
      __IO ONE_BIT  FB21 :  1; //!<[21] Filter bits
      __IO ONE_BIT  FB22 :  1; //!<[22] Filter bits
      __IO ONE_BIT  FB23 :  1; //!<[23] Filter bits
      __IO ONE_BIT  FB24 :  1; //!<[24] Filter bits
      __IO ONE_BIT  FB25 :  1; //!<[25] Filter bits
      __IO ONE_BIT  FB26 :  1; //!<[26] Filter bits
      __IO ONE_BIT  FB27 :  1; //!<[27] Filter bits
      __IO ONE_BIT  FB28 :  1; //!<[28] Filter bits
      __IO ONE_BIT  FB29 :  1; //!<[29] Filter bits
      __IO ONE_BIT  FB30 :  1; //!<[30] Filter bits
      __IO ONE_BIT  FB31 :  1; //!<[31] Filter bits
    } B;
    __IO uint32_t  R;
    explicit F24R2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      F24R2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      F24R2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union F25R1_DEF   {  //!< Filter bank 25 register 1
    struct {
      __IO ONE_BIT  FB0  :  1; //!<[00] Filter bits
      __IO ONE_BIT  FB1  :  1; //!<[01] Filter bits
      __IO ONE_BIT  FB2  :  1; //!<[02] Filter bits
      __IO ONE_BIT  FB3  :  1; //!<[03] Filter bits
      __IO ONE_BIT  FB4  :  1; //!<[04] Filter bits
      __IO ONE_BIT  FB5  :  1; //!<[05] Filter bits
      __IO ONE_BIT  FB6  :  1; //!<[06] Filter bits
      __IO ONE_BIT  FB7  :  1; //!<[07] Filter bits
      __IO ONE_BIT  FB8  :  1; //!<[08] Filter bits
      __IO ONE_BIT  FB9  :  1; //!<[09] Filter bits
      __IO ONE_BIT  FB10 :  1; //!<[10] Filter bits
      __IO ONE_BIT  FB11 :  1; //!<[11] Filter bits
      __IO ONE_BIT  FB12 :  1; //!<[12] Filter bits
      __IO ONE_BIT  FB13 :  1; //!<[13] Filter bits
      __IO ONE_BIT  FB14 :  1; //!<[14] Filter bits
      __IO ONE_BIT  FB15 :  1; //!<[15] Filter bits
      __IO ONE_BIT  FB16 :  1; //!<[16] Filter bits
      __IO ONE_BIT  FB17 :  1; //!<[17] Filter bits
      __IO ONE_BIT  FB18 :  1; //!<[18] Filter bits
      __IO ONE_BIT  FB19 :  1; //!<[19] Filter bits
      __IO ONE_BIT  FB20 :  1; //!<[20] Filter bits
      __IO ONE_BIT  FB21 :  1; //!<[21] Filter bits
      __IO ONE_BIT  FB22 :  1; //!<[22] Filter bits
      __IO ONE_BIT  FB23 :  1; //!<[23] Filter bits
      __IO ONE_BIT  FB24 :  1; //!<[24] Filter bits
      __IO ONE_BIT  FB25 :  1; //!<[25] Filter bits
      __IO ONE_BIT  FB26 :  1; //!<[26] Filter bits
      __IO ONE_BIT  FB27 :  1; //!<[27] Filter bits
      __IO ONE_BIT  FB28 :  1; //!<[28] Filter bits
      __IO ONE_BIT  FB29 :  1; //!<[29] Filter bits
      __IO ONE_BIT  FB30 :  1; //!<[30] Filter bits
      __IO ONE_BIT  FB31 :  1; //!<[31] Filter bits
    } B;
    __IO uint32_t  R;
    explicit F25R1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      F25R1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      F25R1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union F25R2_DEF   {  //!< Filter bank 25 register 2
    struct {
      __IO ONE_BIT  FB0  :  1; //!<[00] Filter bits
      __IO ONE_BIT  FB1  :  1; //!<[01] Filter bits
      __IO ONE_BIT  FB2  :  1; //!<[02] Filter bits
      __IO ONE_BIT  FB3  :  1; //!<[03] Filter bits
      __IO ONE_BIT  FB4  :  1; //!<[04] Filter bits
      __IO ONE_BIT  FB5  :  1; //!<[05] Filter bits
      __IO ONE_BIT  FB6  :  1; //!<[06] Filter bits
      __IO ONE_BIT  FB7  :  1; //!<[07] Filter bits
      __IO ONE_BIT  FB8  :  1; //!<[08] Filter bits
      __IO ONE_BIT  FB9  :  1; //!<[09] Filter bits
      __IO ONE_BIT  FB10 :  1; //!<[10] Filter bits
      __IO ONE_BIT  FB11 :  1; //!<[11] Filter bits
      __IO ONE_BIT  FB12 :  1; //!<[12] Filter bits
      __IO ONE_BIT  FB13 :  1; //!<[13] Filter bits
      __IO ONE_BIT  FB14 :  1; //!<[14] Filter bits
      __IO ONE_BIT  FB15 :  1; //!<[15] Filter bits
      __IO ONE_BIT  FB16 :  1; //!<[16] Filter bits
      __IO ONE_BIT  FB17 :  1; //!<[17] Filter bits
      __IO ONE_BIT  FB18 :  1; //!<[18] Filter bits
      __IO ONE_BIT  FB19 :  1; //!<[19] Filter bits
      __IO ONE_BIT  FB20 :  1; //!<[20] Filter bits
      __IO ONE_BIT  FB21 :  1; //!<[21] Filter bits
      __IO ONE_BIT  FB22 :  1; //!<[22] Filter bits
      __IO ONE_BIT  FB23 :  1; //!<[23] Filter bits
      __IO ONE_BIT  FB24 :  1; //!<[24] Filter bits
      __IO ONE_BIT  FB25 :  1; //!<[25] Filter bits
      __IO ONE_BIT  FB26 :  1; //!<[26] Filter bits
      __IO ONE_BIT  FB27 :  1; //!<[27] Filter bits
      __IO ONE_BIT  FB28 :  1; //!<[28] Filter bits
      __IO ONE_BIT  FB29 :  1; //!<[29] Filter bits
      __IO ONE_BIT  FB30 :  1; //!<[30] Filter bits
      __IO ONE_BIT  FB31 :  1; //!<[31] Filter bits
    } B;
    __IO uint32_t  R;
    explicit F25R2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      F25R2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      F25R2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union F26R1_DEF   {  //!< Filter bank 26 register 1
    struct {
      __IO ONE_BIT  FB0  :  1; //!<[00] Filter bits
      __IO ONE_BIT  FB1  :  1; //!<[01] Filter bits
      __IO ONE_BIT  FB2  :  1; //!<[02] Filter bits
      __IO ONE_BIT  FB3  :  1; //!<[03] Filter bits
      __IO ONE_BIT  FB4  :  1; //!<[04] Filter bits
      __IO ONE_BIT  FB5  :  1; //!<[05] Filter bits
      __IO ONE_BIT  FB6  :  1; //!<[06] Filter bits
      __IO ONE_BIT  FB7  :  1; //!<[07] Filter bits
      __IO ONE_BIT  FB8  :  1; //!<[08] Filter bits
      __IO ONE_BIT  FB9  :  1; //!<[09] Filter bits
      __IO ONE_BIT  FB10 :  1; //!<[10] Filter bits
      __IO ONE_BIT  FB11 :  1; //!<[11] Filter bits
      __IO ONE_BIT  FB12 :  1; //!<[12] Filter bits
      __IO ONE_BIT  FB13 :  1; //!<[13] Filter bits
      __IO ONE_BIT  FB14 :  1; //!<[14] Filter bits
      __IO ONE_BIT  FB15 :  1; //!<[15] Filter bits
      __IO ONE_BIT  FB16 :  1; //!<[16] Filter bits
      __IO ONE_BIT  FB17 :  1; //!<[17] Filter bits
      __IO ONE_BIT  FB18 :  1; //!<[18] Filter bits
      __IO ONE_BIT  FB19 :  1; //!<[19] Filter bits
      __IO ONE_BIT  FB20 :  1; //!<[20] Filter bits
      __IO ONE_BIT  FB21 :  1; //!<[21] Filter bits
      __IO ONE_BIT  FB22 :  1; //!<[22] Filter bits
      __IO ONE_BIT  FB23 :  1; //!<[23] Filter bits
      __IO ONE_BIT  FB24 :  1; //!<[24] Filter bits
      __IO ONE_BIT  FB25 :  1; //!<[25] Filter bits
      __IO ONE_BIT  FB26 :  1; //!<[26] Filter bits
      __IO ONE_BIT  FB27 :  1; //!<[27] Filter bits
      __IO ONE_BIT  FB28 :  1; //!<[28] Filter bits
      __IO ONE_BIT  FB29 :  1; //!<[29] Filter bits
      __IO ONE_BIT  FB30 :  1; //!<[30] Filter bits
      __IO ONE_BIT  FB31 :  1; //!<[31] Filter bits
    } B;
    __IO uint32_t  R;
    explicit F26R1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      F26R1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      F26R1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union F26R2_DEF   {  //!< Filter bank 26 register 2
    struct {
      __IO ONE_BIT  FB0  :  1; //!<[00] Filter bits
      __IO ONE_BIT  FB1  :  1; //!<[01] Filter bits
      __IO ONE_BIT  FB2  :  1; //!<[02] Filter bits
      __IO ONE_BIT  FB3  :  1; //!<[03] Filter bits
      __IO ONE_BIT  FB4  :  1; //!<[04] Filter bits
      __IO ONE_BIT  FB5  :  1; //!<[05] Filter bits
      __IO ONE_BIT  FB6  :  1; //!<[06] Filter bits
      __IO ONE_BIT  FB7  :  1; //!<[07] Filter bits
      __IO ONE_BIT  FB8  :  1; //!<[08] Filter bits
      __IO ONE_BIT  FB9  :  1; //!<[09] Filter bits
      __IO ONE_BIT  FB10 :  1; //!<[10] Filter bits
      __IO ONE_BIT  FB11 :  1; //!<[11] Filter bits
      __IO ONE_BIT  FB12 :  1; //!<[12] Filter bits
      __IO ONE_BIT  FB13 :  1; //!<[13] Filter bits
      __IO ONE_BIT  FB14 :  1; //!<[14] Filter bits
      __IO ONE_BIT  FB15 :  1; //!<[15] Filter bits
      __IO ONE_BIT  FB16 :  1; //!<[16] Filter bits
      __IO ONE_BIT  FB17 :  1; //!<[17] Filter bits
      __IO ONE_BIT  FB18 :  1; //!<[18] Filter bits
      __IO ONE_BIT  FB19 :  1; //!<[19] Filter bits
      __IO ONE_BIT  FB20 :  1; //!<[20] Filter bits
      __IO ONE_BIT  FB21 :  1; //!<[21] Filter bits
      __IO ONE_BIT  FB22 :  1; //!<[22] Filter bits
      __IO ONE_BIT  FB23 :  1; //!<[23] Filter bits
      __IO ONE_BIT  FB24 :  1; //!<[24] Filter bits
      __IO ONE_BIT  FB25 :  1; //!<[25] Filter bits
      __IO ONE_BIT  FB26 :  1; //!<[26] Filter bits
      __IO ONE_BIT  FB27 :  1; //!<[27] Filter bits
      __IO ONE_BIT  FB28 :  1; //!<[28] Filter bits
      __IO ONE_BIT  FB29 :  1; //!<[29] Filter bits
      __IO ONE_BIT  FB30 :  1; //!<[30] Filter bits
      __IO ONE_BIT  FB31 :  1; //!<[31] Filter bits
    } B;
    __IO uint32_t  R;
    explicit F26R2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      F26R2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      F26R2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union F27R1_DEF   {  //!< Filter bank 27 register 1
    struct {
      __IO ONE_BIT  FB0  :  1; //!<[00] Filter bits
      __IO ONE_BIT  FB1  :  1; //!<[01] Filter bits
      __IO ONE_BIT  FB2  :  1; //!<[02] Filter bits
      __IO ONE_BIT  FB3  :  1; //!<[03] Filter bits
      __IO ONE_BIT  FB4  :  1; //!<[04] Filter bits
      __IO ONE_BIT  FB5  :  1; //!<[05] Filter bits
      __IO ONE_BIT  FB6  :  1; //!<[06] Filter bits
      __IO ONE_BIT  FB7  :  1; //!<[07] Filter bits
      __IO ONE_BIT  FB8  :  1; //!<[08] Filter bits
      __IO ONE_BIT  FB9  :  1; //!<[09] Filter bits
      __IO ONE_BIT  FB10 :  1; //!<[10] Filter bits
      __IO ONE_BIT  FB11 :  1; //!<[11] Filter bits
      __IO ONE_BIT  FB12 :  1; //!<[12] Filter bits
      __IO ONE_BIT  FB13 :  1; //!<[13] Filter bits
      __IO ONE_BIT  FB14 :  1; //!<[14] Filter bits
      __IO ONE_BIT  FB15 :  1; //!<[15] Filter bits
      __IO ONE_BIT  FB16 :  1; //!<[16] Filter bits
      __IO ONE_BIT  FB17 :  1; //!<[17] Filter bits
      __IO ONE_BIT  FB18 :  1; //!<[18] Filter bits
      __IO ONE_BIT  FB19 :  1; //!<[19] Filter bits
      __IO ONE_BIT  FB20 :  1; //!<[20] Filter bits
      __IO ONE_BIT  FB21 :  1; //!<[21] Filter bits
      __IO ONE_BIT  FB22 :  1; //!<[22] Filter bits
      __IO ONE_BIT  FB23 :  1; //!<[23] Filter bits
      __IO ONE_BIT  FB24 :  1; //!<[24] Filter bits
      __IO ONE_BIT  FB25 :  1; //!<[25] Filter bits
      __IO ONE_BIT  FB26 :  1; //!<[26] Filter bits
      __IO ONE_BIT  FB27 :  1; //!<[27] Filter bits
      __IO ONE_BIT  FB28 :  1; //!<[28] Filter bits
      __IO ONE_BIT  FB29 :  1; //!<[29] Filter bits
      __IO ONE_BIT  FB30 :  1; //!<[30] Filter bits
      __IO ONE_BIT  FB31 :  1; //!<[31] Filter bits
    } B;
    __IO uint32_t  R;
    explicit F27R1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      F27R1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      F27R1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union F27R2_DEF   {  //!< Filter bank 27 register 2
    struct {
      __IO ONE_BIT  FB0  :  1; //!<[00] Filter bits
      __IO ONE_BIT  FB1  :  1; //!<[01] Filter bits
      __IO ONE_BIT  FB2  :  1; //!<[02] Filter bits
      __IO ONE_BIT  FB3  :  1; //!<[03] Filter bits
      __IO ONE_BIT  FB4  :  1; //!<[04] Filter bits
      __IO ONE_BIT  FB5  :  1; //!<[05] Filter bits
      __IO ONE_BIT  FB6  :  1; //!<[06] Filter bits
      __IO ONE_BIT  FB7  :  1; //!<[07] Filter bits
      __IO ONE_BIT  FB8  :  1; //!<[08] Filter bits
      __IO ONE_BIT  FB9  :  1; //!<[09] Filter bits
      __IO ONE_BIT  FB10 :  1; //!<[10] Filter bits
      __IO ONE_BIT  FB11 :  1; //!<[11] Filter bits
      __IO ONE_BIT  FB12 :  1; //!<[12] Filter bits
      __IO ONE_BIT  FB13 :  1; //!<[13] Filter bits
      __IO ONE_BIT  FB14 :  1; //!<[14] Filter bits
      __IO ONE_BIT  FB15 :  1; //!<[15] Filter bits
      __IO ONE_BIT  FB16 :  1; //!<[16] Filter bits
      __IO ONE_BIT  FB17 :  1; //!<[17] Filter bits
      __IO ONE_BIT  FB18 :  1; //!<[18] Filter bits
      __IO ONE_BIT  FB19 :  1; //!<[19] Filter bits
      __IO ONE_BIT  FB20 :  1; //!<[20] Filter bits
      __IO ONE_BIT  FB21 :  1; //!<[21] Filter bits
      __IO ONE_BIT  FB22 :  1; //!<[22] Filter bits
      __IO ONE_BIT  FB23 :  1; //!<[23] Filter bits
      __IO ONE_BIT  FB24 :  1; //!<[24] Filter bits
      __IO ONE_BIT  FB25 :  1; //!<[25] Filter bits
      __IO ONE_BIT  FB26 :  1; //!<[26] Filter bits
      __IO ONE_BIT  FB27 :  1; //!<[27] Filter bits
      __IO ONE_BIT  FB28 :  1; //!<[28] Filter bits
      __IO ONE_BIT  FB29 :  1; //!<[29] Filter bits
      __IO ONE_BIT  FB30 :  1; //!<[30] Filter bits
      __IO ONE_BIT  FB31 :  1; //!<[31] Filter bits
    } B;
    __IO uint32_t  R;
    explicit F27R2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      F27R2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      F27R2_DEF r; r.R = R;
      R = f (r);
    }
  };
  // PERIPHERAL CAN1 REGISTERS INSTANCES
  __IO CTLR_DEF               CTLR ;  //!< [0000](04)[0x00010002]
  __IO STATR_DEF             STATR ;  //!< [0004](04)[0x00000C02]
  __IO TSTATR_DEF           TSTATR ;  //!< [0008](04)[0x1C000000]
  __IO RFIFO0_DEF           RFIFO0 ;  //!< [000c](04)[0x00000000]
  __IO RFIFO1_DEF           RFIFO1 ;  //!< [0010](04)[0x00000000]
  __IO INTENR_DEF           INTENR ;  //!< [0014](04)[0x00000000]
  __IO ERRSR_DEF             ERRSR ;  //!< [0018](04)[0x00000000]
  __IO BTIMR_DEF             BTIMR ;  //!< [001c](04)[0x01230000]
       uint32_t          UNUSED0 [88];  //!< [0020](160)[0xFFFFFFFF]
  __IO TXMIR0_DEF           TXMIR0 ;  //!< [0180](04)[0x00000000]
  __IO TXMDTR0_DEF         TXMDTR0 ;  //!< [0184](04)[0x00000000]
  __IO TXMDLR0_DEF         TXMDLR0 ;  //!< [0188](04)[0x00000000]
  __IO TXMDHR0_DEF         TXMDHR0 ;  //!< [018c](04)[0x00000000]
  __IO TXMIR1_DEF           TXMIR1 ;  //!< [0190](04)[0x00000000]
  __IO TXMDTR1_DEF         TXMDTR1 ;  //!< [0194](04)[0x00000000]
  __IO TXMDLR1_DEF         TXMDLR1 ;  //!< [0198](04)[0x00000000]
  __IO TXMDHR1_DEF         TXMDHR1 ;  //!< [019c](04)[0x00000000]
  __IO TXMIR2_DEF           TXMIR2 ;  //!< [01a0](04)[0x00000000]
  __IO TXMDTR2_DEF         TXMDTR2 ;  //!< [01a4](04)[0x00000000]
  __IO TXMDLR2_DEF         TXMDLR2 ;  //!< [01a8](04)[0x00000000]
  __IO TXMDHR2_DEF         TXMDHR2 ;  //!< [01ac](04)[0x00000000]
  __I  RXMIR0_DEF           RXMIR0 ;  //!< [01b0](04)[0x00000000]
  __I  RXMDTR0_DEF         RXMDTR0 ;  //!< [01b4](04)[0x00000000]
  __I  RXMDLR0_DEF         RXMDLR0 ;  //!< [01b8](04)[0x00000000]
  __I  RXMDHR0_DEF         RXMDHR0 ;  //!< [01bc](04)[0x00000000]
  __I  RXMIR1_DEF           RXMIR1 ;  //!< [01c0](04)[0x00000000]
  __I  RXMDTR1_DEF         RXMDTR1 ;  //!< [01c4](04)[0x00000000]
  __I  RXMDLR1_DEF         RXMDLR1 ;  //!< [01c8](04)[0x00000000]
  __I  RXMDHR1_DEF         RXMDHR1 ;  //!< [01cc](04)[0x00000000]
       uint32_t          UNUSED1 [12];  //!< [01d0](30)[0xFFFFFFFF]
  __IO FCTLR_DEF             FCTLR ;  //!< [0200](04)[0x2A1C0E01]
  __IO FMCFGR_DEF           FMCFGR ;  //!< [0204](04)[0x00000000]
       uint32_t          UNUSED2 ;  //!< [0208](04)[0xFFFFFFFF]
  __IO FSCFGR_DEF           FSCFGR ;  //!< [020c](04)[0x00000000]
       uint32_t          UNUSED3 ;  //!< [0210](04)[0xFFFFFFFF]
  __IO FAFIFOR_DEF         FAFIFOR ;  //!< [0214](04)[0x00000000]
       uint32_t          UNUSED4 ;  //!< [0218](04)[0xFFFFFFFF]
  __IO FWR_DEF                 FWR ;  //!< [021c](04)[0x00000000]
       uint32_t          UNUSED5 [8];  //!< [0220](20)[0xFFFFFFFF]
  __IO F0R1_DEF               F0R1 ;  //!< [0240](04)[0x00000000]
  __IO F0R2_DEF               F0R2 ;  //!< [0244](04)[0x00000000]
  __IO F1R1_DEF               F1R1 ;  //!< [0248](04)[0x00000000]
  __IO F1R2_DEF               F1R2 ;  //!< [024c](04)[0x00000000]
  __IO F2R1_DEF               F2R1 ;  //!< [0250](04)[0x00000000]
  __IO F2R2_DEF               F2R2 ;  //!< [0254](04)[0x00000000]
  __IO F3R1_DEF               F3R1 ;  //!< [0258](04)[0x00000000]
  __IO F3R2_DEF               F3R2 ;  //!< [025c](04)[0x00000000]
  __IO F4R1_DEF               F4R1 ;  //!< [0260](04)[0x00000000]
  __IO F4R2_DEF               F4R2 ;  //!< [0264](04)[0x00000000]
  __IO F5R1_DEF               F5R1 ;  //!< [0268](04)[0x00000000]
  __IO F5R2_DEF               F5R2 ;  //!< [026c](04)[0x00000000]
  __IO F6R1_DEF               F6R1 ;  //!< [0270](04)[0x00000000]
  __IO F6R2_DEF               F6R2 ;  //!< [0274](04)[0x00000000]
  __IO F7R1_DEF               F7R1 ;  //!< [0278](04)[0x00000000]
  __IO F7R2_DEF               F7R2 ;  //!< [027c](04)[0x00000000]
  __IO F8R1_DEF               F8R1 ;  //!< [0280](04)[0x00000000]
  __IO F8R2_DEF               F8R2 ;  //!< [0284](04)[0x00000000]
  __IO F9R1_DEF               F9R1 ;  //!< [0288](04)[0x00000000]
  __IO F9R2_DEF               F9R2 ;  //!< [028c](04)[0x00000000]
  __IO F10R1_DEF             F10R1 ;  //!< [0290](04)[0x00000000]
  __IO F10R2_DEF             F10R2 ;  //!< [0294](04)[0x00000000]
  __IO F11R1_DEF             F11R1 ;  //!< [0298](04)[0x00000000]
  __IO F11R2_DEF             F11R2 ;  //!< [029c](04)[0x00000000]
  __IO F12R1_DEF             F12R1 ;  //!< [02a0](04)[0x00000000]
  __IO F12R2_DEF             F12R2 ;  //!< [02a4](04)[0x00000000]
  __IO F13R1_DEF             F13R1 ;  //!< [02a8](04)[0x00000000]
  __IO F13R2_DEF             F13R2 ;  //!< [02ac](04)[0x00000000]
  __IO F14R1_DEF             F14R1 ;  //!< [02b0](04)[0x00000000]
  __IO F14R2_DEF             F14R2 ;  //!< [02b4](04)[0x00000000]
  __IO F15R1_DEF             F15R1 ;  //!< [02b8](04)[0x00000000]
  __IO F15R2_DEF             F15R2 ;  //!< [02bc](04)[0x00000000]
  __IO F16R1_DEF             F16R1 ;  //!< [02c0](04)[0x00000000]
  __IO F16R2_DEF             F16R2 ;  //!< [02c4](04)[0x00000000]
  __IO F17R1_DEF             F17R1 ;  //!< [02c8](04)[0x00000000]
  __IO F17R2_DEF             F17R2 ;  //!< [02cc](04)[0x00000000]
  __IO F18R1_DEF             F18R1 ;  //!< [02d0](04)[0x00000000]
  __IO F18R2_DEF             F18R2 ;  //!< [02d4](04)[0x00000000]
  __IO F19R1_DEF             F19R1 ;  //!< [02d8](04)[0x00000000]
  __IO F19R2_DEF             F19R2 ;  //!< [02dc](04)[0x00000000]
  __IO F20R1_DEF             F20R1 ;  //!< [02e0](04)[0x00000000]
  __IO F20R2_DEF             F20R2 ;  //!< [02e4](04)[0x00000000]
  __IO F21R1_DEF             F21R1 ;  //!< [02e8](04)[0x00000000]
  __IO F21R2_DEF             F21R2 ;  //!< [02ec](04)[0x00000000]
  __IO F22R1_DEF             F22R1 ;  //!< [02f0](04)[0x00000000]
  __IO F22R2_DEF             F22R2 ;  //!< [02f4](04)[0x00000000]
  __IO F23R1_DEF             F23R1 ;  //!< [02f8](04)[0x00000000]
  __IO F23R2_DEF             F23R2 ;  //!< [02fc](04)[0x00000000]
  __IO F24R1_DEF             F24R1 ;  //!< [0300](04)[0x00000000]
  __IO F24R2_DEF             F24R2 ;  //!< [0304](04)[0x00000000]
  __IO F25R1_DEF             F25R1 ;  //!< [0308](04)[0x00000000]
  __IO F25R2_DEF             F25R2 ;  //!< [030c](04)[0x00000000]
  __IO F26R1_DEF             F26R1 ;  //!< [0310](04)[0x00000000]
  __IO F26R2_DEF             F26R2 ;  //!< [0314](04)[0x00000000]
  __IO F27R1_DEF             F27R1 ;  //!< [0318](04)[0x00000000]
  __IO F27R2_DEF             F27R2 ;  //!< [031c](04)[0x00000000]
}; /* total size = 0x0400, struct size = 0x0320 */

// ////////////////////+++ ETHERNET_MAC +-+//////////////////// //
struct ETHERNET_MAC_Type { /*!< Ethernet: media access control */
  union MACCR_DEF     {  //!< Ethernet MAC configuration register (ETH_MACCR)
    struct {
      __IO ONE_BIT    TCES    :  1; //!<[00] Send clock selection bit
      __IO ONE_BIT    TCF     :  1; //!<[01] Send clock reversal
      __IO ONE_BIT    RE      :  1; //!<[02] Receiver enable
      __IO ONE_BIT    TE      :  1; //!<[03] Transmitter enable
      __IO ONE_BIT    DC      :  1; //!<[04] Deferral check
      __IO uint32_t   BL      :  2; //!<[05] Back-off limit
      __IO ONE_BIT    APCS    :  1; //!<[07] Automatic pad/CRC stripping
           ONE_BIT    UNUSED0 :  1; //!<[08] 
      __IO ONE_BIT    RD      :  1; //!<[09] Retry disable
      __IO ONE_BIT    IPCO    :  1; //!<[10] IPv4 checksum offload
      __IO ONE_BIT    DM      :  1; //!<[11] Duplex mode
      __IO ONE_BIT    LM      :  1; //!<[12] Loopback mode
      __IO ONE_BIT    ROD     :  1; //!<[13] Receive own disable
      __IO ONE_BIT    FES     :  1; //!<[14] Fast Ethernet speed
           ONE_BIT    UNUSED1 :  1; //!<[15] 
      __IO ONE_BIT    CSD     :  1; //!<[16] Carrier sense disable
      __IO uint32_t   IFG     :  3; //!<[17] Interframe gap
      __IO ONE_BIT    IRE     :  1; //!<[20] 10MPHY 50Ω set
      __IO ONE_BIT    PDI     :  1; //!<[21] 10MPHY TX DRIVER bisa current
      __IO ONE_BIT    JD      :  1; //!<[22] Jabber disable
      __IO ONE_BIT    WD      :  1; //!<[23] Watchdog disable
           uint32_t   UNUSED2 :  5; //!<[24] 
      __IO uint32_t   TCD     :  3; //!<[29] SEND clock delay
    } B;
    __IO uint32_t  R;
    explicit MACCR_DEF () noexcept { R = 0x00008000u; }
    template<typename F> void setbit (F f) volatile {
      MACCR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      MACCR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union MACFFR_DEF    {  //!< Ethernet MAC frame filter register (ETH_MACCFFR)
    struct {
      __IO ONE_BIT    PM      :  1; //!<[00] Promiscuous mode
      __IO ONE_BIT    HU      :  1; //!<[01] Hash unicast
      __IO ONE_BIT    HM      :  1; //!<[02] Hash multicast
      __IO ONE_BIT    DAIF    :  1; //!<[03] Destination address inverse filtering
      __IO ONE_BIT    PAM     :  1; //!<[04] Pass all multicast
      __IO ONE_BIT    BFD     :  1; //!<[05] Broadcast frames disable
      __IO uint32_t   PCF     :  2; //!<[06] Pass control frames
      __IO ONE_BIT    SAIF    :  1; //!<[08] Source address inverse filtering
      __IO ONE_BIT    SAF     :  1; //!<[09] Source address filter
      __IO ONE_BIT    HPF     :  1; //!<[10] Hash or perfect filter
           uint32_t   UNUSED0 : 20; //!<[11] 
      __IO ONE_BIT    RA      :  1; //!<[31] Receive all
    } B;
    __IO uint32_t  R;
    explicit MACFFR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      MACFFR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      MACFFR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union MACHTHR_DEF   {  //!< Ethernet MAC hash table high register
    struct {
      __IO uint32_t   HTH : 32; //!<[00] Hash table high
    } B;
    __IO uint32_t  R;
    explicit MACHTHR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      MACHTHR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      MACHTHR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union MACHTLR_DEF   {  //!< Ethernet MAC hash table low register
    struct {
      __IO uint32_t   HTL : 32; //!<[00] Hash table low
    } B;
    __IO uint32_t  R;
    explicit MACHTLR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      MACHTLR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      MACHTLR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union MACMIIAR_DEF  {  //!< Ethernet MAC MII address register (ETH_MACMIIAR)
    struct {
      __IO ONE_BIT    MB      :  1; //!<[00] MII busy
      __IO ONE_BIT    MW      :  1; //!<[01] MII write
      __IO uint32_t   CR      :  3; //!<[02] Clock range
           ONE_BIT    UNUSED0 :  1; //!<[05] 
      __IO uint32_t   MR      :  5; //!<[06] MII register
      __IO uint32_t   PA      :  5; //!<[11] PHY address
    } B;
    __IO uint32_t  R;
    explicit MACMIIAR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      MACMIIAR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      MACMIIAR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union MACMIIDR_DEF  {  //!< Ethernet MAC MII data register (ETH_MACMIIDR)
    struct {
      __IO uint32_t   MD : 16; //!<[00] MII data
    } B;
    __IO uint32_t  R;
    explicit MACMIIDR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      MACMIIDR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      MACMIIDR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union MACFCR_DEF    {  //!< Ethernet MAC flow control register (ETH_MACFCR)
    struct {
      __IO ONE_BIT    FCB_BPA :  1; //!<[00] Flow control busy/back pressure activate
      __IO ONE_BIT    TFCE    :  1; //!<[01] Transmit flow control enable
      __IO ONE_BIT    RFCE    :  1; //!<[02] Receive flow control enable
      __IO ONE_BIT    UPFD    :  1; //!<[03] Unicast pause frame detect
      __IO uint32_t   PLT     :  2; //!<[04] Pause low threshold
           ONE_BIT    UNUSED0 :  1; //!<[06] 
      __IO ONE_BIT    ZQPD    :  1; //!<[07] Zero-quanta pause disable
           uint32_t   UNUSED1 :  8; //!<[08] 
      __IO uint32_t   PT      : 16; //!<[16] Pass control frames
    } B;
    __IO uint32_t  R;
    explicit MACFCR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      MACFCR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      MACFCR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union MACVLANTR_DEF {  //!< Ethernet MAC VLAN tag register (ETH_MACVLANTR)
    struct {
      __IO uint32_t   VLANTI : 16; //!<[00] VLAN tag identifier (for receive frames)
      __IO ONE_BIT    VLANTC :  1; //!<[16] 12-bit VLAN tag comparison
    } B;
    __IO uint32_t  R;
    explicit MACVLANTR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      MACVLANTR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      MACVLANTR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union MACPMTCSR_DEF {  //!< Ethernet MAC PMT control and status register (ETH_MACPMTCSR)
    struct {
      __IO ONE_BIT    PD      :  1; //!<[00] Power down
      __IO ONE_BIT    MPE     :  1; //!<[01] Magic Packet enable
      __IO ONE_BIT    WFE     :  1; //!<[02] Wakeup frame enable
           uint32_t   UNUSED0 :  2; //!<[03] 
      __IO ONE_BIT    MPR     :  1; //!<[05] Magic packet received
      __IO ONE_BIT    WFR     :  1; //!<[06] Wakeup frame received
           uint32_t   UNUSED1 :  2; //!<[07] 
      __IO ONE_BIT    GU      :  1; //!<[09] Global unicast
           uint32_t   UNUSED2 : 21; //!<[10] 
      __IO ONE_BIT    WFFRPR  :  1; //!<[31] Wakeup frame filter register pointer reset
    } B;
    __IO uint32_t  R;
    explicit MACPMTCSR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      MACPMTCSR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      MACPMTCSR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union MACSR_DEF     {  //!< Ethernet MAC interrupt status register (ETH_MACSR)
    struct {
           uint32_t   UNUSED0 :  3; //!<[00] 
      __IO ONE_BIT    PMTS    :  1; //!<[03] PMT status
      __IO ONE_BIT    MMCS    :  1; //!<[04] MMC status
      __IO ONE_BIT    MMCRS   :  1; //!<[05] MMC receive status
      __IO ONE_BIT    MMCTS   :  1; //!<[06] MMC transmit status
           uint32_t   UNUSED1 :  2; //!<[07] 
      __IO ONE_BIT    TSTS    :  1; //!<[09] Time stamp trigger status
    } B;
    __IO uint32_t  R;
    explicit MACSR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      MACSR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      MACSR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union MACIMR_DEF    {  //!< Ethernet MAC interrupt mask register (ETH_MACIMR)
    struct {
           uint32_t   UNUSED0 :  3; //!<[00] 
      __IO ONE_BIT    PMTIM   :  1; //!<[03] PMT interrupt mask
           uint32_t   UNUSED1 :  5; //!<[04] 
      __IO ONE_BIT    TSTIM   :  1; //!<[09] Time stamp trigger interrupt mask
    } B;
    __IO uint32_t  R;
    explicit MACIMR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      MACIMR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      MACIMR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union MACA0HR_DEF   {  //!< Ethernet MAC address 0 high register (ETH_MACA0HR)
    struct {
      __IO uint32_t   MACA0H  : 16; //!<[00] MAC address0 high
           uint32_t   UNUSED0 : 15; //!<[16] 
      __I  ONE_BIT    MO      :  1; //!<[31] Always 1
    } B;
    __IO uint32_t  R;
    explicit MACA0HR_DEF () noexcept { R = 0x0010ffffu; }
    template<typename F> void setbit (F f) volatile {
      MACA0HR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      MACA0HR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union MACA0LR_DEF   {  //!< Ethernet MAC address 0 low register
    struct {
      __IO uint32_t   MACA0L : 32; //!<[00] MAC address0 low
    } B;
    __IO uint32_t  R;
    explicit MACA0LR_DEF () noexcept { R = 0xffffffffu; }
    template<typename F> void setbit (F f) volatile {
      MACA0LR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      MACA0LR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union MACA1HR_DEF   {  //!< Ethernet MAC address 1 high register (ETH_MACA1HR)
    struct {
      __IO uint32_t   MACA1H  : 16; //!<[00] MAC address1 high
           uint32_t   UNUSED0 :  8; //!<[16] 
      __IO uint32_t   MBC     :  6; //!<[24] Mask byte control
      __IO ONE_BIT    SA      :  1; //!<[30] Source address
      __IO ONE_BIT    AE      :  1; //!<[31] Address enable
    } B;
    __IO uint32_t  R;
    explicit MACA1HR_DEF () noexcept { R = 0x0000ffffu; }
    template<typename F> void setbit (F f) volatile {
      MACA1HR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      MACA1HR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union MACA1LR_DEF   {  //!< Ethernet MAC address1 low register
    struct {
      __IO uint32_t   MACA1L : 32; //!<[00] MAC address1 low
    } B;
    __IO uint32_t  R;
    explicit MACA1LR_DEF () noexcept { R = 0xffffffffu; }
    template<typename F> void setbit (F f) volatile {
      MACA1LR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      MACA1LR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union MACA2HR_DEF   {  //!< Ethernet MAC address 2 high register (ETH_MACA2HR)
    struct {
      __IO uint32_t   ETH_MACA2HR : 16; //!<[00] Ethernet MAC address 2 high register
           uint32_t   UNUSED0     :  8; //!<[16] 
      __IO uint32_t   MBC         :  6; //!<[24] Mask byte control
      __IO ONE_BIT    SA          :  1; //!<[30] Source address
      __IO ONE_BIT    AE          :  1; //!<[31] Address enable
    } B;
    __IO uint32_t  R;
    explicit MACA2HR_DEF () noexcept { R = 0x0000ffffu; }
    template<typename F> void setbit (F f) volatile {
      MACA2HR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      MACA2HR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union MACA2LR_DEF   {  //!< Ethernet MAC address 2 low register
    struct {
      __IO uint32_t   MACA2L : 31; //!<[00] MAC address2 low
    } B;
    __IO uint32_t  R;
    explicit MACA2LR_DEF () noexcept { R = 0xffffffffu; }
    template<typename F> void setbit (F f) volatile {
      MACA2LR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      MACA2LR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union MACA3HR_DEF   {  //!< Ethernet MAC address 3 high register (ETH_MACA3HR)
    struct {
      __IO uint32_t   MACA3H  : 16; //!<[00] MAC address3 high
           uint32_t   UNUSED0 :  8; //!<[16] 
      __IO uint32_t   MBC     :  6; //!<[24] Mask byte control
      __IO ONE_BIT    SA      :  1; //!<[30] Source address
      __IO ONE_BIT    AE      :  1; //!<[31] Address enable
    } B;
    __IO uint32_t  R;
    explicit MACA3HR_DEF () noexcept { R = 0x0000ffffu; }
    template<typename F> void setbit (F f) volatile {
      MACA3HR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      MACA3HR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union MACA3LR_DEF   {  //!< Ethernet MAC address 3 low register
    struct {
      __IO uint32_t   MBCA3L : 32; //!<[00] MAC address3 low
    } B;
    __IO uint32_t  R;
    explicit MACA3LR_DEF () noexcept { R = 0xffffffffu; }
    template<typename F> void setbit (F f) volatile {
      MACA3LR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      MACA3LR_DEF r; r.R = R;
      R = f (r);
    }
  };
  // PERIPHERAL ETHERNET_MAC REGISTERS INSTANCES
  __IO MACCR_DEF               MACCR ;  //!< [0000](04)[0x00008000]
  __IO MACFFR_DEF             MACFFR ;  //!< [0004](04)[0x00000000]
  __IO MACHTHR_DEF           MACHTHR ;  //!< [0008](04)[0x00000000]
  __IO MACHTLR_DEF           MACHTLR ;  //!< [000c](04)[0x00000000]
  __IO MACMIIAR_DEF         MACMIIAR ;  //!< [0010](04)[0x00000000]
  __IO MACMIIDR_DEF         MACMIIDR ;  //!< [0014](04)[0x00000000]
  __IO MACFCR_DEF             MACFCR ;  //!< [0018](04)[0x00000000]
  __IO MACVLANTR_DEF       MACVLANTR ;  //!< [001c](04)[0x00000000]
       uint32_t            UNUSED0 [2];  //!< [0020](08)[0xFFFFFFFF]
  __IO uint32_t        MACRWUFFR ;  //!< [0028](04)[0x00000000]
  __IO MACPMTCSR_DEF       MACPMTCSR ;  //!< [002c](04)[0x00000000]
       uint32_t            UNUSED1 [2];  //!< [0030](08)[0xFFFFFFFF]
  __IO MACSR_DEF               MACSR ;  //!< [0038](04)[0x00000000]
  __IO MACIMR_DEF             MACIMR ;  //!< [003c](04)[0x00000000]
  __IO MACA0HR_DEF           MACA0HR ;  //!< [0040](04)[0x0010FFFF]
  __IO MACA0LR_DEF           MACA0LR ;  //!< [0044](04)[0xFFFFFFFF]
  __IO MACA1HR_DEF           MACA1HR ;  //!< [0048](04)[0x0000FFFF]
  __IO MACA1LR_DEF           MACA1LR ;  //!< [004c](04)[0xFFFFFFFF]
  __IO MACA2HR_DEF           MACA2HR ;  //!< [0050](04)[0x0000FFFF]
  __IO MACA2LR_DEF           MACA2LR ;  //!< [0054](04)[0xFFFFFFFF]
  __IO MACA3HR_DEF           MACA3HR ;  //!< [0058](04)[0x0000FFFF]
  __IO MACA3LR_DEF           MACA3LR ;  //!< [005c](04)[0xFFFFFFFF]
}; /* total size = 0x0400, struct size = 0x0060 */

// ////////////////////+++ ETHERNET_MMC +-+//////////////////// //
struct ETHERNET_MMC_Type { /*!< Ethernet: MAC management counters */
  union MMCCR_DEF       {  //!< Ethernet MMC control register (ETH_MMCCR)
    struct {
      __IO ONE_BIT    CR      :  1; //!<[00] Counter reset
      __IO ONE_BIT    CSR     :  1; //!<[01] Counter stop rollover
      __IO ONE_BIT    ROR     :  1; //!<[02] Reset on read
           uint32_t   UNUSED0 : 28; //!<[03] 
      __IO ONE_BIT    MCF     :  1; //!<[31] MMC counter freeze
    } B;
    __IO uint32_t  R;
    explicit MMCCR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      MMCCR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      MMCCR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union MMCRIR_DEF      {  //!< Ethernet MMC receive interrupt register (ETH_MMCRIR)
    struct {
           uint32_t   UNUSED0 :  5; //!<[00] 
      __IO ONE_BIT    RFCES   :  1; //!<[05] Received frames CRC error status
      __IO ONE_BIT    RFAES   :  1; //!<[06] Received frames alignment error status
           uint32_t   UNUSED1 : 10; //!<[07] 
      __IO ONE_BIT    RGUFS   :  1; //!<[17] Received Good Unicast Frames Status
    } B;
    __IO uint32_t  R;
    explicit MMCRIR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      MMCRIR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      MMCRIR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union MMCTIR_DEF      {  //!< Ethernet MMC transmit interrupt register (ETH_MMCTIR)
    struct {
           uint32_t   UNUSED0 : 14; //!<[00] 
      __IO ONE_BIT    TGFSCS  :  1; //!<[14] Transmitted good frames single collision status
      __IO ONE_BIT    TGFMSCS :  1; //!<[15] Transmitted good frames more single collision status
           uint32_t   UNUSED1 :  5; //!<[16] 
      __IO ONE_BIT    TGFS    :  1; //!<[21] Transmitted good frames status
    } B;
    __IO uint32_t  R;
    explicit MMCTIR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      MMCTIR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      MMCTIR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union MMCRIMR_DEF     {  //!< Ethernet MMC receive interrupt mask register (ETH_MMCRIMR)
    struct {
           uint32_t   UNUSED0 :  5; //!<[00] 
      __IO ONE_BIT    RFCEM   :  1; //!<[05] Received frame CRC error mask
      __IO ONE_BIT    RFAEM   :  1; //!<[06] Received frames alignment error mask
           uint32_t   UNUSED1 : 10; //!<[07] 
      __IO ONE_BIT    RGUFM   :  1; //!<[17] Received good unicast frames mask
    } B;
    __IO uint32_t  R;
    explicit MMCRIMR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      MMCRIMR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      MMCRIMR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union MMCTIMR_DEF     {  //!< Ethernet MMC transmit interrupt mask register (ETH_MMCTIMR)
    struct {
           uint32_t   UNUSED0 : 14; //!<[00] 
      __IO ONE_BIT    TGFSCM  :  1; //!<[14] Transmitted good frames single collision mask
      __IO ONE_BIT    TGFMSCM :  1; //!<[15] Transmitted good frames more single collision mask
           uint32_t   UNUSED1 :  5; //!<[16] 
      __IO ONE_BIT    TGFM    :  1; //!<[21] Transmitted good frames mask
    } B;
    __IO uint32_t  R;
    explicit MMCTIMR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      MMCTIMR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      MMCTIMR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union MMCTGFSCCR_DEF  {  //!< Ethernet MMC transmitted good frames after a single collision counter
    struct {
      __I  uint32_t   TGFSCC : 32; //!<[00] Transmitted good frames after a single collision counter
    } B;
    __I  uint32_t  R;

    explicit MMCTGFSCCR_DEF (volatile MMCTGFSCCR_DEF & o) noexcept { R = o.R; };
  };
  union MMCTGFMSCCR_DEF {  //!< Ethernet MMC transmitted good frames after more than a single collision
    struct {
      __I  uint32_t   TGFMSCC : 32; //!<[00] Transmitted good frames after more than a single collision counter
    } B;
    __I  uint32_t  R;

    explicit MMCTGFMSCCR_DEF (volatile MMCTGFMSCCR_DEF & o) noexcept { R = o.R; };
  };
  union MMCTGFCR_DEF    {  //!< Ethernet MMC transmitted good frames counter register
    struct {
      __I  uint32_t   TGFC : 32; //!<[00] Transmitted good frames counter
    } B;
    __I  uint32_t  R;

    explicit MMCTGFCR_DEF (volatile MMCTGFCR_DEF & o) noexcept { R = o.R; };
  };
  union MMCRFCECR_DEF   {  //!< Ethernet MMC received frames with CRC error counter register
    struct {
      __I  uint32_t   RFCFC : 32; //!<[00] Received frames with CRC error counter
    } B;
    __I  uint32_t  R;

    explicit MMCRFCECR_DEF (volatile MMCRFCECR_DEF & o) noexcept { R = o.R; };
  };
  union MMCRFAECR_DEF   {  //!< Ethernet MMC received frames with alignment error counter register
    struct {
      __I  uint32_t   RFAEC : 32; //!<[00] Received frames with alignment error counter
    } B;
    __I  uint32_t  R;

    explicit MMCRFAECR_DEF (volatile MMCRFAECR_DEF & o) noexcept { R = o.R; };
  };
  union MMCRGUFCR_DEF   {  //!< MMC received good unicast frames counter register
    struct {
      __I  uint32_t   RGUFC : 32; //!<[00] Received good unicast frames counter
    } B;
    __I  uint32_t  R;

    explicit MMCRGUFCR_DEF (volatile MMCRGUFCR_DEF & o) noexcept { R = o.R; };
  };
  // PERIPHERAL ETHERNET_MMC REGISTERS INSTANCES
  __IO MMCCR_DEF                 MMCCR ;  //!< [0000](04)[0x00000000]
  __IO MMCRIR_DEF               MMCRIR ;  //!< [0004](04)[0x00000000]
  __IO MMCTIR_DEF               MMCTIR ;  //!< [0008](04)[0x00000000]
  __IO MMCRIMR_DEF             MMCRIMR ;  //!< [000c](04)[0x00000000]
  __IO MMCTIMR_DEF             MMCTIMR ;  //!< [0010](04)[0x00000000]
       uint32_t              UNUSED0 [14];  //!< [0014](38)[0xFFFFFFFF]
  __I  MMCTGFSCCR_DEF       MMCTGFSCCR ;  //!< [004c](04)[0x00000000]
  __I  MMCTGFMSCCR_DEF     MMCTGFMSCCR ;  //!< [0050](04)[0x00000000]
       uint32_t              UNUSED1 [5];  //!< [0054](14)[0xFFFFFFFF]
  __I  MMCTGFCR_DEF           MMCTGFCR ;  //!< [0068](04)[0x00000000]
       uint32_t              UNUSED2 [10];  //!< [006c](28)[0xFFFFFFFF]
  __I  MMCRFCECR_DEF         MMCRFCECR ;  //!< [0094](04)[0x00000000]
  __I  MMCRFAECR_DEF         MMCRFAECR ;  //!< [0098](04)[0x00000000]
       uint32_t              UNUSED3 [10];  //!< [009c](28)[0xFFFFFFFF]
  __I  MMCRGUFCR_DEF         MMCRGUFCR ;  //!< [00c4](04)[0x00000000]
}; /* total size = 0x0400, struct size = 0x00C8 */

// ////////////////////+++ ETHERNET_PTP +-+//////////////////// //
struct ETHERNET_PTP_Type { /*!< Ethernet: Precision time protocol */
  union PTPTSCR_DEF  {  //!< Ethernet PTP time stamp control register (ETH_PTPTSCR)
    struct {
      __IO ONE_BIT  TSE   :  1; //!<[00] Time stamp enable
      __IO ONE_BIT  TSFCU :  1; //!<[01] Time stamp fine or coarse update
      __IO ONE_BIT  TSSTI :  1; //!<[02] Time stamp system time initialize
      __IO ONE_BIT  TSSTU :  1; //!<[03] Time stamp system time update
      __IO ONE_BIT  TSITE :  1; //!<[04] Time stamp interrupt trigger enable
      __IO ONE_BIT  TSARU :  1; //!<[05] Time stamp addend register update
    } B;
    __IO uint32_t  R;
    explicit PTPTSCR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      PTPTSCR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      PTPTSCR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union PTPSSIR_DEF  {  //!< Ethernet PTP subsecond increment register
    struct {
      __IO uint32_t   STSSI :  8; //!<[00] System time subsecond increment
    } B;
    __IO uint32_t  R;
    explicit PTPSSIR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      PTPSSIR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      PTPSSIR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union PTPTSHR_DEF  {  //!< Ethernet PTP time stamp high register
    struct {
      __I  uint32_t   STS : 32; //!<[00] System time second
    } B;
    __I  uint32_t  R;

    explicit PTPTSHR_DEF (volatile PTPTSHR_DEF & o) noexcept { R = o.R; };
  };
  union PTPTSLR_DEF  {  //!< Ethernet PTP time stamp low register (ETH_PTPTSLR)
    struct {
      __I  uint32_t   STSS  : 31; //!<[00] System time subseconds
      __I  ONE_BIT    STPNS :  1; //!<[31] System time positive or negative sign
    } B;
    __I  uint32_t  R;

    explicit PTPTSLR_DEF (volatile PTPTSLR_DEF & o) noexcept { R = o.R; };
  };
  union PTPTSHUR_DEF {  //!< Ethernet PTP time stamp high update register
    struct {
      __IO uint32_t   TSUS : 32; //!<[00] Time stamp update second
    } B;
    __IO uint32_t  R;
    explicit PTPTSHUR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      PTPTSHUR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      PTPTSHUR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union PTPTSLUR_DEF {  //!< Ethernet PTP time stamp low update register (ETH_PTPTSLUR)
    struct {
      __IO uint32_t   TSUSS  : 31; //!<[00] Time stamp update subseconds
      __IO ONE_BIT    TSUPNS :  1; //!<[31] Time stamp update positive or negative sign
    } B;
    __IO uint32_t  R;
    explicit PTPTSLUR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      PTPTSLUR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      PTPTSLUR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union PTPTSAR_DEF  {  //!< Ethernet PTP time stamp addend register
    struct {
      __IO uint32_t   TSA : 32; //!<[00] Time stamp addend
    } B;
    __IO uint32_t  R;
    explicit PTPTSAR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      PTPTSAR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      PTPTSAR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union PTPTTHR_DEF  {  //!< Ethernet PTP target time high register
    struct {
      __IO uint32_t   TTSH : 32; //!<[00] Target time stamp high
    } B;
    __IO uint32_t  R;
    explicit PTPTTHR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      PTPTTHR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      PTPTTHR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union PTPTTLR_DEF  {  //!< Ethernet PTP target time low register
    struct {
      __IO uint32_t   TTSL : 32; //!<[00] Target time stamp low
    } B;
    __IO uint32_t  R;
    explicit PTPTTLR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      PTPTTLR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      PTPTTLR_DEF r; r.R = R;
      R = f (r);
    }
  };
  // PERIPHERAL ETHERNET_PTP REGISTERS INSTANCES
  __IO PTPTSCR_DEF          PTPTSCR ;  //!< [0000](04)[0x00000000]
  __IO PTPSSIR_DEF          PTPSSIR ;  //!< [0004](04)[0x00000000]
  __I  PTPTSHR_DEF          PTPTSHR ;  //!< [0008](04)[0x00000000]
  __I  PTPTSLR_DEF          PTPTSLR ;  //!< [000c](04)[0x00000000]
  __IO PTPTSHUR_DEF        PTPTSHUR ;  //!< [0010](04)[0x00000000]
  __IO PTPTSLUR_DEF        PTPTSLUR ;  //!< [0014](04)[0x00000000]
  __IO PTPTSAR_DEF          PTPTSAR ;  //!< [0018](04)[0x00000000]
  __IO PTPTTHR_DEF          PTPTTHR ;  //!< [001c](04)[0x00000000]
  __IO PTPTTLR_DEF          PTPTTLR ;  //!< [0020](04)[0x00000000]
}; /* total size = 0x0400, struct size = 0x0024 */

// ////////////////////+++ ETHERNET_DMA +-+//////////////////// //
struct ETHERNET_DMA_Type { /*!< Ethernet: DMA controller operation */
  union DMABMR_DEF    {  //!< Ethernet DMA bus mode register
    struct {
      __IO ONE_BIT    SR      :  1; //!<[00] Software reset
      __IO ONE_BIT    DA      :  1; //!<[01] DMA Arbitration
      __IO uint32_t   DSL     :  5; //!<[02] Descriptor skip length
           ONE_BIT    UNUSED0 :  1; //!<[07] 
      __IO uint32_t   PBL     :  6; //!<[08] Programmable burst length
      __IO uint32_t   RTPR    :  2; //!<[14] Rx Tx priority ratio
      __IO ONE_BIT    FB      :  1; //!<[16] Fixed burst
      __IO uint32_t   RDP     :  6; //!<[17] Rx DMA PBL
      __IO ONE_BIT    USP     :  1; //!<[23] Use separate PBL
      __IO ONE_BIT    FPM     :  1; //!<[24] 4xPBL mode
      __IO ONE_BIT    AAB     :  1; //!<[25] Address-aligned beats
    } B;
    __IO uint32_t  R;
    explicit DMABMR_DEF () noexcept { R = 0x00002101u; }
    template<typename F> void setbit (F f) volatile {
      DMABMR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DMABMR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DMATPDR_DEF   {  //!< Ethernet DMA transmit poll demand register
    struct {
      __IO uint32_t   TPD : 32; //!<[00] Transmit poll demand
    } B;
    __IO uint32_t  R;
    explicit DMATPDR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DMATPDR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DMATPDR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DMARPDR_DEF   {  //!< EHERNET DMA receive poll demand register
    struct {
      __IO uint32_t   RPD : 32; //!<[00] Receive poll demand
    } B;
    __IO uint32_t  R;
    explicit DMARPDR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DMARPDR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DMARPDR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DMARDLAR_DEF  {  //!< Ethernet DMA receive descriptor list address register
    struct {
      __IO uint32_t   SRL : 32; //!<[00] Start of receive list
    } B;
    __IO uint32_t  R;
    explicit DMARDLAR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DMARDLAR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DMARDLAR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DMATDLAR_DEF  {  //!< Ethernet DMA transmit descriptor list address register
    struct {
      __IO uint32_t   STL : 32; //!<[00] Start of transmit list
    } B;
    __IO uint32_t  R;
    explicit DMATDLAR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DMATDLAR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DMATDLAR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DMASR_DEF     {  //!< Ethernet DMA status register
    struct {
      __IO ONE_BIT    TS      :  1; //!<[00] Transmit status
      __IO ONE_BIT    TPSS    :  1; //!<[01] Transmit process stopped status
      __IO ONE_BIT    TBUS    :  1; //!<[02] Transmit buffer unavailable status
      __IO ONE_BIT    TJTS    :  1; //!<[03] Transmit jabber timeout status
      __IO ONE_BIT    ROS     :  1; //!<[04] Receive overflow status
      __IO ONE_BIT    TUS     :  1; //!<[05] Transmit underflow status
      __IO ONE_BIT    RS      :  1; //!<[06] Receive status
      __IO ONE_BIT    RBUS    :  1; //!<[07] Receive buffer unavailable status
      __IO ONE_BIT    RPSS    :  1; //!<[08] Receive process stopped status
      __IO ONE_BIT    PWTS    :  1; //!<[09] Receive watchdog timeout status
      __IO ONE_BIT    ETS     :  1; //!<[10] Early transmit status
           uint32_t   UNUSED0 :  2; //!<[11] 
      __IO ONE_BIT    FBES    :  1; //!<[13] Fatal bus error status
      __IO ONE_BIT    ERS     :  1; //!<[14] Early receive status
      __IO ONE_BIT    AIS     :  1; //!<[15] Abnormal interrupt summary
      __IO ONE_BIT    NIS     :  1; //!<[16] Normal interrupt summary
      __I  uint32_t   RPS     :  3; //!<[17] Receive process state
      __I  uint32_t   TPS     :  3; //!<[20] Transmit process state
      __I  uint32_t   EBS     :  3; //!<[23] Error bits status
           ONE_BIT    UNUSED1 :  1; //!<[26] 
      __I  ONE_BIT    MMCS    :  1; //!<[27] MMC status
      __I  ONE_BIT    PMTS    :  1; //!<[28] PMT status
      __I  ONE_BIT    TSTS    :  1; //!<[29] Time stamp trigger status
           ONE_BIT    UNUSED2 :  1; //!<[30] 
      __I  ONE_BIT    IPLS    :  1; //!<[31] 10MPHY Physical layer variation
    } B;
    __IO uint32_t  R;
    explicit DMASR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DMASR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DMASR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DMAOMR_DEF    {  //!< Ethernet DMA operation mode register
    struct {
           ONE_BIT    UNUSED0 :  1; //!<[00] 
      __IO ONE_BIT    SR      :  1; //!<[01] SR
      __IO ONE_BIT    OSF     :  1; //!<[02] OSF
      __IO uint32_t   RTC     :  2; //!<[03] RTC
           ONE_BIT    UNUSED1 :  1; //!<[05] 
      __IO ONE_BIT    FUGF    :  1; //!<[06] FUGF
      __IO ONE_BIT    FEF     :  1; //!<[07] FEF
           uint32_t   UNUSED2 :  5; //!<[08] 
      __IO ONE_BIT    ST      :  1; //!<[13] ST
      __IO uint32_t   TTC     :  3; //!<[14] TTC
           uint32_t   UNUSED3 :  3; //!<[17] 
      __IO ONE_BIT    FTF     :  1; //!<[20] FTF
      __IO ONE_BIT    TSF     :  1; //!<[21] TSF
           uint32_t   UNUSED4 :  2; //!<[22] 
      __IO ONE_BIT    DFRF    :  1; //!<[24] DFRF
      __IO ONE_BIT    RSF     :  1; //!<[25] RSF
      __IO ONE_BIT    DTCEFD  :  1; //!<[26] DTCEFD
    } B;
    __IO uint32_t  R;
    explicit DMAOMR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DMAOMR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DMAOMR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DMAIER_DEF    {  //!< Ethernet DMA interrupt enable register
    struct {
      __IO ONE_BIT    TIE     :  1; //!<[00] Transmit interrupt enable
      __IO ONE_BIT    TPSIE   :  1; //!<[01] Transmit process stopped interrupt enable
      __IO ONE_BIT    TBUIE   :  1; //!<[02] Transmit buffer unavailable interrupt enable
      __IO ONE_BIT    TJTIE   :  1; //!<[03] Transmit jabber timeout interrupt enable
      __IO ONE_BIT    ROIE    :  1; //!<[04] Overflow interrupt enable
      __IO ONE_BIT    TUIE    :  1; //!<[05] Underflow interrupt enable
      __IO ONE_BIT    RIE     :  1; //!<[06] Receive interrupt enable
      __IO ONE_BIT    RBUIE   :  1; //!<[07] Receive buffer unavailable interrupt enable
      __IO ONE_BIT    RPSIE   :  1; //!<[08] Receive process stopped interrupt enable
      __IO ONE_BIT    RWTIE   :  1; //!<[09] receive watchdog timeout interrupt enable
      __IO ONE_BIT    ETIE    :  1; //!<[10] Early transmit interrupt enable
           uint32_t   UNUSED0 :  2; //!<[11] 
      __IO ONE_BIT    FBEIE   :  1; //!<[13] Fatal bus error interrupt enable
      __IO ONE_BIT    ERIE    :  1; //!<[14] Early receive interrupt enable
      __IO ONE_BIT    AISE    :  1; //!<[15] Abnormal interrupt summary enable
      __IO ONE_BIT    NISE    :  1; //!<[16] Normal interrupt summary enable
           uint32_t   UNUSED1 : 14; //!<[17] 
      __IO ONE_BIT    IPLE    :  1; //!<[31] 10M Physical layer connection
    } B;
    __IO uint32_t  R;
    explicit DMAIER_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DMAIER_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DMAIER_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DMAMFBOCR_DEF {  //!< Ethernet DMA missed frame and buffer overflow counter register
    struct {
      __I  uint32_t   MFC  : 16; //!<[00] Missed frames by the controller
      __I  ONE_BIT    OMFC :  1; //!<[16] Overflow bit for missed frame counter
      __I  uint32_t   MFA  : 11; //!<[17] Missed frames by the application
      __I  ONE_BIT    OFOC :  1; //!<[28] Overflow bit for FIFO overflow counter
    } B;
    __I  uint32_t  R;

    explicit DMAMFBOCR_DEF (volatile DMAMFBOCR_DEF & o) noexcept { R = o.R; };
  };
  union DMACHTDR_DEF  {  //!< Ethernet DMA current host transmit descriptor register
    struct {
      __I  uint32_t   HTDAP : 32; //!<[00] Host transmit descriptor address pointer
    } B;
    __I  uint32_t  R;

    explicit DMACHTDR_DEF (volatile DMACHTDR_DEF & o) noexcept { R = o.R; };
  };
  union DMACHRDR_DEF  {  //!< Ethernet DMA current host receive descriptor register
    struct {
      __I  uint32_t   HRDAP : 32; //!<[00] Host receive descriptor address pointer
    } B;
    __I  uint32_t  R;

    explicit DMACHRDR_DEF (volatile DMACHRDR_DEF & o) noexcept { R = o.R; };
  };
  union DMACHTBAR_DEF {  //!< Ethernet DMA current host transmit buffer address register
    struct {
      __I  uint32_t   HTBAP : 32; //!<[00] Host transmit buffer address pointer
    } B;
    __I  uint32_t  R;

    explicit DMACHTBAR_DEF (volatile DMACHTBAR_DEF & o) noexcept { R = o.R; };
  };
  union DMACHRBAR_DEF {  //!< Ethernet DMA current host receive buffer address register
    struct {
      __I  uint32_t   HRBAP : 32; //!<[00] Host receive buffer address pointer
    } B;
    __I  uint32_t  R;

    explicit DMACHRBAR_DEF (volatile DMACHRBAR_DEF & o) noexcept { R = o.R; };
  };
  // PERIPHERAL ETHERNET_DMA REGISTERS INSTANCES
  __IO DMABMR_DEF             DMABMR ;  //!< [0000](04)[0x00002101]
  __IO DMATPDR_DEF           DMATPDR ;  //!< [0004](04)[0x00000000]
  __IO DMARPDR_DEF           DMARPDR ;  //!< [0008](04)[0x00000000]
  __IO DMARDLAR_DEF         DMARDLAR ;  //!< [000c](04)[0x00000000]
  __IO DMATDLAR_DEF         DMATDLAR ;  //!< [0010](04)[0x00000000]
  __IO DMASR_DEF               DMASR ;  //!< [0014](04)[0x00000000]
  __IO DMAOMR_DEF             DMAOMR ;  //!< [0018](04)[0x00000000]
  __IO DMAIER_DEF             DMAIER ;  //!< [001c](04)[0x00000000]
  __I  DMAMFBOCR_DEF       DMAMFBOCR ;  //!< [0020](04)[0x00000000]
       uint32_t            UNUSED0 [9];  //!< [0024](24)[0xFFFFFFFF]
  __I  DMACHTDR_DEF         DMACHTDR ;  //!< [0048](04)[0x00000000]
  __I  DMACHRDR_DEF         DMACHRDR ;  //!< [004c](04)[0x00000000]
  __I  DMACHTBAR_DEF       DMACHTBAR ;  //!< [0050](04)[0x00000000]
  __I  DMACHRBAR_DEF       DMACHRBAR ;  //!< [0054](04)[0x00000000]
}; /* total size = 0x0400, struct size = 0x0058 */

// ////////////////////+++ DAC +-+//////////////////// //
struct DAC_Type          { /*!< Digital to analog converter */
  union CTLR_DEF     {  //!< Control register (DAC_CR)
    struct {
      __IO ONE_BIT    EN1     :  1; //!<[00] DAC channel1 enable
      __IO ONE_BIT    BOFF1   :  1; //!<[01] DAC channel1 output buffer disable
      __IO ONE_BIT    TEN1    :  1; //!<[02] DAC channel1 trigger enable
      __IO uint32_t   TSEL1   :  3; //!<[03] DAC channel1 trigger selection
      __IO uint32_t   WAVE1   :  2; //!<[06] DAC channel1 noise/triangle wave generation enable
      __IO uint32_t   MAMP1   :  4; //!<[08] DAC channel1 mask/amplitude selector
      __IO ONE_BIT    DMAEN1  :  1; //!<[12] DAC channel1 DMA enable
           uint32_t   UNUSED0 :  3; //!<[13] 
      __IO ONE_BIT    EN2     :  1; //!<[16] DAC channel2 enable
      __IO ONE_BIT    BOFF2   :  1; //!<[17] DAC channel2 output buffer disable
      __IO ONE_BIT    TEN2    :  1; //!<[18] DAC channel2 trigger enable
      __IO uint32_t   TSEL2   :  3; //!<[19] DAC channel2 trigger selection
      __IO uint32_t   WAVE2   :  2; //!<[22] DAC channel2 noise/triangle wave generation enable
      __IO uint32_t   MAMP2   :  4; //!<[24] DAC channel2 mask/amplitude selector
      __IO ONE_BIT    DMAEN2  :  1; //!<[28] DAC channel2 DMA enable
    } B;
    __IO uint32_t  R;
    explicit CTLR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CTLR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CTLR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union SWTR_DEF     {  //!< DAC software trigger register (DAC_SWTRIGR)
    struct {
      __O  ONE_BIT  SWTRIG1 :  1; //!<[00] DAC channel1 software trigger
      __O  ONE_BIT  SWTRIG2 :  1; //!<[01] DAC channel2 software trigger
    } B;
    __O  uint32_t  R;
    explicit SWTR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      SWTR_DEF r;
      R = f (r);
    }
  };
  union R12BDHR1_DEF {  //!< DAC channel1 12-bit right-aligned data holding register(DAC_DHR12R1)
    struct {
      __IO uint32_t   DACC1DHR : 12; //!<[00] DAC channel1 12-bit right-aligned data
    } B;
    __IO uint32_t  R;
    explicit R12BDHR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      R12BDHR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      R12BDHR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union L12BDHR1_DEF {  //!< DAC channel1 12-bit left aligned data holding register (DAC_DHR12L1)
    struct {
           uint32_t   UNUSED0  :  4; //!<[00] 
      __IO uint32_t   DACC1DHR : 12; //!<[04] DAC channel1 12-bit left-aligned data
    } B;
    __IO uint32_t  R;
    explicit L12BDHR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      L12BDHR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      L12BDHR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union R8BDHR1_DEF  {  //!< DAC channel1 8-bit right aligned data holding register (DAC_DHR8R1)
    struct {
      __IO uint32_t   DACC1DHR :  8; //!<[00] DAC channel1 8-bit right-aligned data
    } B;
    __IO uint32_t  R;
    explicit R8BDHR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      R8BDHR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      R8BDHR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union R12BDHR2_DEF {  //!< DAC channel2 12-bit right aligned data holding register (DAC_DHR12R2)
    struct {
      __IO uint32_t   DACC2DHR : 12; //!<[00] DAC channel2 12-bit right-aligned data
    } B;
    __IO uint32_t  R;
    explicit R12BDHR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      R12BDHR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      R12BDHR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union L12BDHR2_DEF {  //!< DAC channel2 12-bit left aligned data holding register (DAC_DHR12L2)
    struct {
           uint32_t   UNUSED0  :  4; //!<[00] 
      __IO uint32_t   DACC2DHR : 12; //!<[04] DAC channel2 12-bit left-aligned data
    } B;
    __IO uint32_t  R;
    explicit L12BDHR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      L12BDHR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      L12BDHR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union R8BDHR2_DEF  {  //!< DAC channel2 8-bit right-aligned data holding register (DAC_DHR8R2)
    struct {
      __IO uint32_t   DACC2DHR :  8; //!<[00] DAC channel2 8-bit right-aligned data
    } B;
    __IO uint32_t  R;
    explicit R8BDHR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      R8BDHR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      R8BDHR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union RD12BDHR_DEF {  //!< Dual DAC 12-bit right-aligned data holding register (DAC_DHR12RD), Bits 31:28 Reserved, Bits 15:12 Reserved
    struct {
      __IO uint32_t   DACC1DHR : 12; //!<[00] DAC channel1 12-bit right-aligned data
           uint32_t   UNUSED0  :  4; //!<[12] 
      __IO uint32_t   DACC2DHR : 12; //!<[16] DAC channel2 12-bit right-aligned data
    } B;
    __IO uint32_t  R;
    explicit RD12BDHR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      RD12BDHR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      RD12BDHR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union LD12BDHR_DEF {  //!< DUAL DAC 12-bit left aligned data holding register (DAC_DHR12LD), Bits 19:16 Reserved, Bits 3:0 Reserved
    struct {
           uint32_t   UNUSED0  :  4; //!<[00] 
      __IO uint32_t   DACC1DHR : 12; //!<[04] DAC channel1 12-bit left-aligned data
           uint32_t   UNUSED1  :  4; //!<[16] 
      __IO uint32_t   DACC2DHR : 12; //!<[20] DAC channel2 12-bit right-aligned data
    } B;
    __IO uint32_t  R;
    explicit LD12BDHR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      LD12BDHR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      LD12BDHR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union RD8BDHR_DEF  {  //!< DUAL DAC 8-bit right aligned data holding register (DAC_DHR8RD), Bits 31:16 Reserved
    struct {
      __IO uint32_t   DACC1DHR :  8; //!<[00] DAC channel1 8-bit right-aligned data
      __IO uint32_t   DACC2DHR :  8; //!<[08] DAC channel2 8-bit right-aligned data
    } B;
    __IO uint32_t  R;
    explicit RD8BDHR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      RD8BDHR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      RD8BDHR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DOR1_DEF     {  //!< DAC channel1 data output register (DAC_DOR1)
    struct {
      __I  uint32_t   DACC1DOR : 12; //!<[00] DAC channel1 data output
    } B;
    __I  uint32_t  R;

    explicit DOR1_DEF (volatile DOR1_DEF & o) noexcept { R = o.R; };
  };
  union DOR2_DEF     {  //!< DAC channel2 data output register (DAC_DOR2)
    struct {
      __I  uint32_t   DACC2DOR : 12; //!<[00] DAC channel2 data output
    } B;
    __I  uint32_t  R;

    explicit DOR2_DEF (volatile DOR2_DEF & o) noexcept { R = o.R; };
  };
  // PERIPHERAL DAC REGISTERS INSTANCES
  __IO CTLR_DEF                CTLR ;  //!< [0000](04)[0x00000000]
  __O  SWTR_DEF                SWTR ;  //!< [0004](04)[0x00000000]
  __IO R12BDHR1_DEF        R12BDHR1 ;  //!< [0008](04)[0x00000000]
  __IO L12BDHR1_DEF        L12BDHR1 ;  //!< [000c](04)[0x00000000]
  __IO R8BDHR1_DEF          R8BDHR1 ;  //!< [0010](04)[0x00000000]
  __IO R12BDHR2_DEF        R12BDHR2 ;  //!< [0014](04)[0x00000000]
  __IO L12BDHR2_DEF        L12BDHR2 ;  //!< [0018](04)[0x00000000]
  __IO R8BDHR2_DEF          R8BDHR2 ;  //!< [001c](04)[0x00000000]
  __IO RD12BDHR_DEF        RD12BDHR ;  //!< [0020](04)[0x00000000]
  __IO LD12BDHR_DEF        LD12BDHR ;  //!< [0024](04)[0x00000000]
  __IO RD8BDHR_DEF          RD8BDHR ;  //!< [0028](04)[0x00000000]
  __I  DOR1_DEF                DOR1 ;  //!< [002c](04)[0x00000000]
  __I  DOR2_DEF                DOR2 ;  //!< [0030](04)[0x00000000]
}; /* total size = 0x0400, struct size = 0x0034 */

// ////////////////////+++ PWR +-+//////////////////// //
struct PWR_Type          { /*!< Power control */
  union CTLR_DEF {  //!< Power control register (PWR_CTRL)
    struct {
      __IO ONE_BIT    LPDS        :  1; //!<[00] Low Power Deep Sleep
      __IO ONE_BIT    PDDS        :  1; //!<[01] Power Down Deep Sleep
      __IO ONE_BIT    CWUF        :  1; //!<[02] Clear Wake-up Flag
      __IO ONE_BIT    CSBF        :  1; //!<[03] Clear STANDBY Flag
      __IO ONE_BIT    PVDE        :  1; //!<[04] Power Voltage Detector Enable
      __IO uint32_t   PLS         :  3; //!<[05] PVD Level Selection
      __IO ONE_BIT    DBP         :  1; //!<[08] Disable Backup Domain write protection
           uint32_t   UNUSED0     :  7; //!<[09] 
      __IO ONE_BIT    R2K_STYEN   :  1; //!<[16] standby 2k ram enable
      __IO ONE_BIT    R30K_STYEN  :  1; //!<[17] standby 30k ram enable
      __IO ONE_BIT    R2K_VBATEN  :  1; //!<[18] VBAT 30k ram enable
      __IO ONE_BIT    R30K_VBATEN :  1; //!<[19] VBAT 30k ram enable
      __IO ONE_BIT    RAM_LVEN    :  1; //!<[20] Ram LV Enable
    } B;
    __IO uint32_t  R;
    explicit CTLR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CTLR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CTLR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CSR_DEF  {  //!< Power control register (PWR_CSR)
    struct {
      __I  ONE_BIT    WUF     :  1; //!<[00] Wake-Up Flag
      __I  ONE_BIT    SBF     :  1; //!<[01] STANDBY Flag
      __I  ONE_BIT    PVDO    :  1; //!<[02] PVD Output
           uint32_t   UNUSED0 :  5; //!<[03] 
      __IO ONE_BIT    EWUP    :  1; //!<[08] Enable WKUP pin
    } B;
    __IO uint32_t  R;
    explicit CSR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CSR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CSR_DEF r; r.R = R;
      R = f (r);
    }
  };
  // PERIPHERAL PWR REGISTERS INSTANCES
  __IO CTLR_DEF            CTLR ;  //!< [0000](04)[0x00000000]
  __IO CSR_DEF              CSR ;  //!< [0004](04)[0x00000000]
}; /* total size = 0x0400, struct size = 0x0008 */

// ////////////////////+++ RCC +-+//////////////////// //
struct RCC_Type          { /*!< Reset and clock control */
  union CTLR_DEF      {  //!< Clock control register
    struct {
      __IO ONE_BIT    HSION   :  1; //!<[00] Internal High Speed clock enable
      __I  ONE_BIT    HSIRDY  :  1; //!<[01] Internal High Speed clock ready flag
           ONE_BIT    UNUSED0 :  1; //!<[02] 
      __IO uint32_t   HSITRIM :  5; //!<[03] Internal High Speed clock trimming
      __I  uint32_t   HSICAL  :  8; //!<[08] Internal High Speed clock Calibration
      __IO ONE_BIT    HSEON   :  1; //!<[16] External High Speed clock enable
      __I  ONE_BIT    HSERDY  :  1; //!<[17] External High Speed clock ready flag
      __IO ONE_BIT    HSEBYP  :  1; //!<[18] External High Speed clock Bypass
      __IO ONE_BIT    CSSON   :  1; //!<[19] Clock Security System enable
           uint32_t   UNUSED1 :  4; //!<[20] 
      __IO ONE_BIT    PLLON   :  1; //!<[24] PLL enable
      __I  ONE_BIT    PLLRDY  :  1; //!<[25] PLL clock ready flag
    } B;
    __IO uint32_t  R;
    explicit CTLR_DEF () noexcept { R = 0x00000083u; }
    template<typename F> void setbit (F f) volatile {
      CTLR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CTLR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CFGR0_DEF     {  //!< Clock configuration register (RCC_CFGR0)
    struct {
      __IO uint32_t   SW          :  2; //!<[00] System clock Switch
      __I  uint32_t   SWS         :  2; //!<[02] System Clock Switch Status
      __IO uint32_t   HPRE        :  4; //!<[04] AHB prescaler
      __IO uint32_t   PPRE1       :  3; //!<[08] APB Low speed prescaler (APB1)
      __IO uint32_t   PPRE2       :  3; //!<[11] APB High speed prescaler (APB2)
      __IO uint32_t   ADCPRE      :  2; //!<[14] ADC prescaler
      __IO ONE_BIT    PLLSRC      :  1; //!<[16] PLL entry clock source
      __IO ONE_BIT    PLLXTPRE    :  1; //!<[17] HSE divider for PLL entry
      __IO uint32_t   PLLMUL      :  4; //!<[18] PLL Multiplication Factor
      __IO uint32_t   USBPRE      :  2; //!<[22] USB prescaler
      __IO uint32_t   MCO         :  4; //!<[24] Microcontroller clock output
      __IO ONE_BIT    ETHPRE      :  1; //!<[28] ETH prescaler
           uint32_t   UNUSED0     :  2; //!<[29] 
      __IO ONE_BIT    ADC_CLK_ADJ :  1; //!<[31] ADC clock ADJ
    } B;
    __IO uint32_t  R;
    explicit CFGR0_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CFGR0_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CFGR0_DEF r; r.R = R;
      R = f (r);
    }
  };
  union INTR_DEF      {  //!< Clock interrupt register (RCC_INTR)
    struct {
      __I  ONE_BIT    LSIRDYF  :  1; //!<[00] LSI Ready Interrupt flag
      __I  ONE_BIT    LSERDYF  :  1; //!<[01] LSE Ready Interrupt flag
      __I  ONE_BIT    HSIRDYF  :  1; //!<[02] HSI Ready Interrupt flag
      __I  ONE_BIT    HSERDYF  :  1; //!<[03] HSE Ready Interrupt flag
      __I  ONE_BIT    PLLRDYF  :  1; //!<[04] PLL Ready Interrupt flag
           uint32_t   UNUSED0  :  2; //!<[05] 
      __I  ONE_BIT    CSSF     :  1; //!<[07] Clock Security System Interrupt flag
      __IO ONE_BIT    LSIRDYIE :  1; //!<[08] LSI Ready Interrupt Enable
      __IO ONE_BIT    LSERDYIE :  1; //!<[09] LSE Ready Interrupt Enable
      __IO ONE_BIT    HSIRDYIE :  1; //!<[10] HSI Ready Interrupt Enable
      __IO ONE_BIT    HSERDYIE :  1; //!<[11] HSE Ready Interrupt Enable
      __IO ONE_BIT    PLLRDYIE :  1; //!<[12] PLL Ready Interrupt Enable
           uint32_t   UNUSED1  :  3; //!<[13] 
      __O  ONE_BIT    LSIRDYC  :  1; //!<[16] LSI Ready Interrupt Clear
      __O  ONE_BIT    LSERDYC  :  1; //!<[17] LSE Ready Interrupt Clear
      __O  ONE_BIT    HSIRDYC  :  1; //!<[18] HSI Ready Interrupt Clear
      __O  ONE_BIT    HSERDYC  :  1; //!<[19] HSE Ready Interrupt Clear
      __O  ONE_BIT    PLLRDYC  :  1; //!<[20] PLL Ready Interrupt Clear
           uint32_t   UNUSED2  :  2; //!<[21] 
      __O  ONE_BIT    CSSC     :  1; //!<[23] Clock security system interrupt clear
    } B;
    __IO uint32_t  R;
    explicit INTR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      INTR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      INTR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union APB2PRSTR_DEF {  //!< APB2 peripheral reset register (RCC_APB2PRSTR)
    struct {
      __IO ONE_BIT    AFIORST   :  1; //!<[00] Alternate function I/O reset
           ONE_BIT    UNUSED0   :  1; //!<[01] 
      __IO ONE_BIT    IOPARST   :  1; //!<[02] IO port A reset
      __IO ONE_BIT    IOPBRST   :  1; //!<[03] IO port B reset
      __IO ONE_BIT    IOPCRST   :  1; //!<[04] IO port C reset
      __IO ONE_BIT    IOPDRST   :  1; //!<[05] IO port D reset
      __IO ONE_BIT    IOPERST   :  1; //!<[06] IO port E reset
           uint32_t   UNUSED1   :  2; //!<[07] 
      __IO ONE_BIT    ADC1RST   :  1; //!<[09] ADC 1 interface reset
      __IO ONE_BIT    ADC2RST   :  1; //!<[10] ADC 2 interface reset
      __IO ONE_BIT    TIM1RST   :  1; //!<[11] TIM1 timer reset
      __IO ONE_BIT    SPI1RST   :  1; //!<[12] SPI 1 reset
      __IO ONE_BIT    TIM8RST   :  1; //!<[13] TIM8 timer reset
      __IO ONE_BIT    USART1RST :  1; //!<[14] USART1 reset
           uint32_t   UNUSED2   :  4; //!<[15] 
      __IO ONE_BIT    TIM9RST   :  1; //!<[19] TIM9 timer reset
      __IO ONE_BIT    TIM10RST  :  1; //!<[20] TIM10 timer reset
    } B;
    __IO uint32_t  R;
    explicit APB2PRSTR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      APB2PRSTR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      APB2PRSTR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union APB1PRSTR_DEF {  //!< APB1 peripheral reset register (RCC_APB1PRSTR)
    struct {
      __IO ONE_BIT    TIM2RST   :  1; //!<[00] Timer 2 reset
      __IO ONE_BIT    TIM3RST   :  1; //!<[01] Timer 3 reset
      __IO ONE_BIT    TIM4RST   :  1; //!<[02] Timer 4 reset
      __IO ONE_BIT    TIM5RST   :  1; //!<[03] Timer 5 reset
      __IO ONE_BIT    TIM6RST   :  1; //!<[04] Timer 6 reset
      __IO ONE_BIT    TIM7RST   :  1; //!<[05] Timer 7 reset
      __IO ONE_BIT    UART6RST  :  1; //!<[06] UART 6 reset
      __IO ONE_BIT    UART7RST  :  1; //!<[07] UART 7 reset
      __IO ONE_BIT    UART8RST  :  1; //!<[08] UART 8 reset
           uint32_t   UNUSED0   :  2; //!<[09] 
      __IO ONE_BIT    WWDGRST   :  1; //!<[11] Window watchdog reset
           uint32_t   UNUSED1   :  2; //!<[12] 
      __IO ONE_BIT    SPI2RST   :  1; //!<[14] SPI2 reset
      __IO ONE_BIT    SPI3RST   :  1; //!<[15] SPI3 reset
           ONE_BIT    UNUSED2   :  1; //!<[16] 
      __IO ONE_BIT    USART2RST :  1; //!<[17] USART 2 reset
      __IO ONE_BIT    USART3RST :  1; //!<[18] USART 3 reset
      __IO ONE_BIT    USART4RST :  1; //!<[19] USART 4 reset
      __IO ONE_BIT    USART5RST :  1; //!<[20] USART 5 reset
      __IO ONE_BIT    I2C1RST   :  1; //!<[21] I2C1 reset
      __IO ONE_BIT    I2C2RST   :  1; //!<[22] I2C2 reset
      __IO ONE_BIT    USBDRST   :  1; //!<[23] USBD reset
           ONE_BIT    UNUSED3   :  1; //!<[24] 
      __IO ONE_BIT    CAN1RST   :  1; //!<[25] CAN1 reset
      __IO ONE_BIT    CAN2RST   :  1; //!<[26] CAN2 reset
      __IO ONE_BIT    BKPRST    :  1; //!<[27] Backup interface reset
      __IO ONE_BIT    PWRRST    :  1; //!<[28] Power interface reset
      __IO ONE_BIT    DACRST    :  1; //!<[29] DAC interface reset
    } B;
    __IO uint32_t  R;
    explicit APB1PRSTR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      APB1PRSTR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      APB1PRSTR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union AHBPCENR_DEF  {  //!< AHB Peripheral Clock enable register (RCC_AHBPCENR)
    struct {
      __IO ONE_BIT  DMA1EN     :  1; //!<[00] DMA clock enable
      __IO ONE_BIT  DMA2EN     :  1; //!<[01] DMA2 clock enable
      __IO ONE_BIT  SRAMEN     :  1; //!<[02] SRAM interface clock enable
           ONE_BIT  UNUSED0    :  1; //!<[03] 
      __IO ONE_BIT  FLITFEN    :  1; //!<[04] FLITF clock enable
           ONE_BIT  UNUSED1    :  1; //!<[05] 
      __IO ONE_BIT  CRCEN      :  1; //!<[06] CRC clock enable
           ONE_BIT  UNUSED2    :  1; //!<[07] 
      __IO ONE_BIT  FSMCEN     :  1; //!<[08] FSMC clock enable
      __IO ONE_BIT  TRNG_EN    :  1; //!<[09] TRNG clock enable
      __IO ONE_BIT  SDIOEN     :  1; //!<[10] SDIO clock enable
      __IO ONE_BIT  USBHS_EN   :  1; //!<[11] USBHS clock enable
      __IO ONE_BIT  OTG_EN     :  1; //!<[12] OTG clock enable
      __IO ONE_BIT  DVP_EN     :  1; //!<[13] DVP clock enable
      __IO ONE_BIT  ETHMACEN   :  1; //!<[14] Ethernet MAC clock enable
      __IO ONE_BIT  ETHMACTXEN :  1; //!<[15] Ethernet MAC TX clock enable
      __IO ONE_BIT  ETHMACRXEN :  1; //!<[16] Ethernet MAC RX clock enable
    } B;
    __IO uint32_t  R;
    explicit AHBPCENR_DEF () noexcept { R = 0x00000014u; }
    template<typename F> void setbit (F f) volatile {
      AHBPCENR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      AHBPCENR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union APB2PCENR_DEF {  //!< APB2 peripheral clock enable register (RCC_APB2PCENR)
    struct {
      __IO ONE_BIT    AFIOEN   :  1; //!<[00] Alternate function I/O clock enable
           ONE_BIT    UNUSED0  :  1; //!<[01] 
      __IO ONE_BIT    IOPAEN   :  1; //!<[02] I/O port A clock enable
      __IO ONE_BIT    IOPBEN   :  1; //!<[03] I/O port B clock enable
      __IO ONE_BIT    IOPCEN   :  1; //!<[04] I/O port C clock enable
      __IO ONE_BIT    IOPDEN   :  1; //!<[05] I/O port D clock enable
      __IO ONE_BIT    IOPEEN   :  1; //!<[06] I/O port E clock enable
           uint32_t   UNUSED1  :  2; //!<[07] 
      __IO ONE_BIT    ADC1EN   :  1; //!<[09] ADC1 interface clock enable
      __IO ONE_BIT    ADC2EN   :  1; //!<[10] ADC 2 interface clock enable
      __IO ONE_BIT    TIM1EN   :  1; //!<[11] TIM1 Timer clock enable
      __IO ONE_BIT    SPI1EN   :  1; //!<[12] SPI 1 clock enable
      __IO ONE_BIT    TIM8EN   :  1; //!<[13] TIM8 Timer clock enable
      __IO ONE_BIT    USART1EN :  1; //!<[14] USART1 clock enable
           uint32_t   UNUSED2  :  4; //!<[15] 
      __IO ONE_BIT    TIM9_EN  :  1; //!<[19] TIM9 Timer clock enable
      __IO ONE_BIT    TIM10_EN :  1; //!<[20] TIM10 Timer clock enable
    } B;
    __IO uint32_t  R;
    explicit APB2PCENR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      APB2PCENR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      APB2PCENR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union APB1PCENR_DEF {  //!< APB1 peripheral clock enable register (RCC_APB1PCENR)
    struct {
      __IO ONE_BIT    TIM2EN    :  1; //!<[00] Timer 2 clock enable
      __IO ONE_BIT    TIM3EN    :  1; //!<[01] Timer 3 clock enable
      __IO ONE_BIT    TIM4EN    :  1; //!<[02] Timer 4 clock enable
      __IO ONE_BIT    TIM5EN    :  1; //!<[03] Timer 5 clock enable
      __IO ONE_BIT    TIM6EN    :  1; //!<[04] Timer 6 clock enable
      __IO ONE_BIT    TIM7EN    :  1; //!<[05] Timer 7 clock enable
      __IO ONE_BIT    USART6_EN :  1; //!<[06] USART 6 clock enable
      __IO ONE_BIT    USART7_EN :  1; //!<[07] USART 7 clock enable
      __IO ONE_BIT    USART8_EN :  1; //!<[08] USART 8 clock enable
           uint32_t   UNUSED0   :  2; //!<[09] 
      __IO ONE_BIT    WWDGEN    :  1; //!<[11] Window watchdog clock enable
           uint32_t   UNUSED1   :  2; //!<[12] 
      __IO ONE_BIT    SPI2EN    :  1; //!<[14] SPI 2 clock enable
      __IO ONE_BIT    SPI3EN    :  1; //!<[15] SPI 3 clock enable
           ONE_BIT    UNUSED2   :  1; //!<[16] 
      __IO ONE_BIT    USART2EN  :  1; //!<[17] USART 2 clock enable
      __IO ONE_BIT    USART3EN  :  1; //!<[18] USART 3 clock enable
      __IO ONE_BIT    UART4EN   :  1; //!<[19] UART 4 clock enable
      __IO ONE_BIT    UART5EN   :  1; //!<[20] UART 5 clock enable
      __IO ONE_BIT    I2C1EN    :  1; //!<[21] I2C 1 clock enable
      __IO ONE_BIT    I2C2EN    :  1; //!<[22] I2C 2 clock enable
      __IO ONE_BIT    USBDEN    :  1; //!<[23] USBD clock enable
           ONE_BIT    UNUSED3   :  1; //!<[24] 
      __IO ONE_BIT    CAN1EN    :  1; //!<[25] CAN1 clock enable
      __IO ONE_BIT    CAN2EN    :  1; //!<[26] CAN2 clock enable
      __IO ONE_BIT    BKPEN     :  1; //!<[27] Backup interface clock enable
      __IO ONE_BIT    PWREN     :  1; //!<[28] Power interface clock enable
      __IO ONE_BIT    DACEN     :  1; //!<[29] DAC interface clock enable
    } B;
    __IO uint32_t  R;
    explicit APB1PCENR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      APB1PCENR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      APB1PCENR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union BDCTLR_DEF    {  //!< Backup domain control register (RCC_BDCTLR)
    struct {
      __IO ONE_BIT    LSEON   :  1; //!<[00] External Low Speed oscillator enable
      __I  ONE_BIT    LSERDY  :  1; //!<[01] External Low Speed oscillator ready
      __IO ONE_BIT    LSEBYP  :  1; //!<[02] External Low Speed oscillator bypass
           uint32_t   UNUSED0 :  5; //!<[03] 
      __IO uint32_t   RTCSEL  :  2; //!<[08] RTC clock source selection
           uint32_t   UNUSED1 :  5; //!<[10] 
      __IO ONE_BIT    RTCEN   :  1; //!<[15] RTC clock enable
      __IO ONE_BIT    BDRST   :  1; //!<[16] Backup domain software reset
    } B;
    __IO uint32_t  R;
    explicit BDCTLR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      BDCTLR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      BDCTLR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union RSTSCKR_DEF   {  //!< Control/status register (RCC_RSTSCKR)
    struct {
      __IO ONE_BIT    LSION    :  1; //!<[00] Internal low speed oscillator enable
      __I  ONE_BIT    LSIRDY   :  1; //!<[01] Internal low speed oscillator ready
           uint32_t   UNUSED0  : 22; //!<[02] 
      __IO ONE_BIT    RMVF     :  1; //!<[24] Remove reset flag
           ONE_BIT    UNUSED1  :  1; //!<[25] 
      __IO ONE_BIT    PINRSTF  :  1; //!<[26] PIN reset flag
      __IO ONE_BIT    PORRSTF  :  1; //!<[27] POR/PDR reset flag
      __IO ONE_BIT    SFTRSTF  :  1; //!<[28] Software reset flag
      __IO ONE_BIT    IWDGRSTF :  1; //!<[29] Independent watchdog reset flag
      __IO ONE_BIT    WWDGRSTF :  1; //!<[30] Window watchdog reset flag
      __IO ONE_BIT    LPWRRSTF :  1; //!<[31] Low-power reset flag
    } B;
    __IO uint32_t  R;
    explicit RSTSCKR_DEF () noexcept { R = 0x0c000000u; }
    template<typename F> void setbit (F f) volatile {
      RSTSCKR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      RSTSCKR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union AHBRSTR_DEF   {  //!< AHB reset register (RCC_APHBRSTR)
    struct {
           uint32_t   UNUSED0   : 12; //!<[00] 
      __IO ONE_BIT    USBHDRST  :  1; //!<[12] USBHD reset
      __I  ONE_BIT    DVPRST    :  1; //!<[13] DVP reset
      __IO ONE_BIT    ETHMACRST :  1; //!<[14] Ethernet MAC reset
    } B;
    __IO uint32_t  R;
    explicit AHBRSTR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      AHBRSTR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      AHBRSTR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CFGR2_DEF     {  //!< Clock configuration register2 (RCC_CFGR2)
    struct {
      __IO uint32_t   PREDIV1         :  4; //!<[00] PREDIV1 division factor
      __IO uint32_t   PREDIV2         :  4; //!<[04] PREDIV2 division factor
      __IO uint32_t   PLL2MUL         :  4; //!<[08] PLL2 Multiplication Factor
      __IO uint32_t   PLL3MUL         :  4; //!<[12] PLL3 Multiplication Factor
      __IO ONE_BIT    PREDIV1SRC      :  1; //!<[16] PREDIV1 entry clock source
      __IO ONE_BIT    I2S2SRC         :  1; //!<[17] I2S2 clock source
      __IO ONE_BIT    I2S3SRC         :  1; //!<[18] I2S3 clock source
      __IO ONE_BIT    TRNG_SRC        :  1; //!<[19] TRNG clock source
      __IO uint32_t   ETH1G_SRC       :  2; //!<[20] ETH1G clock source
      __IO ONE_BIT    ETH1G_125M_EN   :  1; //!<[22] ETH1G _125M clock enable
           ONE_BIT    UNUSED0         :  1; //!<[23] 
      __IO uint32_t   USBHS_PREDIY    :  3; //!<[24] USB HS PREDIV division factor
      __IO ONE_BIT    USBHS_PLL_SRC   :  1; //!<[27] USB HS Multiplication Factor clock source
      __IO uint32_t   USBHS_CKPEF_SEL :  2; //!<[28] USB HS Peference Clock source
      __IO ONE_BIT    USBHS_PLLALIVE  :  1; //!<[30] USB HS Multiplication control
      __IO ONE_BIT    USBHS_CLK_SRC   :  1; //!<[31] USB HS clock source
    } B;
    __IO uint32_t  R;
    explicit CFGR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CFGR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CFGR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  // PERIPHERAL RCC REGISTERS INSTANCES
  __IO CTLR_DEF                 CTLR ;  //!< [0000](04)[0x00000083]
  __IO CFGR0_DEF               CFGR0 ;  //!< [0004](04)[0x00000000]
  __IO INTR_DEF                 INTR ;  //!< [0008](04)[0x00000000]
  __IO APB2PRSTR_DEF       APB2PRSTR ;  //!< [000c](04)[0x00000000]
  __IO APB1PRSTR_DEF       APB1PRSTR ;  //!< [0010](04)[0x00000000]
  __IO AHBPCENR_DEF         AHBPCENR ;  //!< [0014](04)[0x00000014]
  __IO APB2PCENR_DEF       APB2PCENR ;  //!< [0018](04)[0x00000000]
  __IO APB1PCENR_DEF       APB1PCENR ;  //!< [001c](04)[0x00000000]
  __IO BDCTLR_DEF             BDCTLR ;  //!< [0020](04)[0x00000000]
  __IO RSTSCKR_DEF           RSTSCKR ;  //!< [0024](04)[0x0C000000]
  __IO AHBRSTR_DEF           AHBRSTR ;  //!< [0028](04)[0x00000000]
  __IO CFGR2_DEF               CFGR2 ;  //!< [002c](04)[0x00000000]
}; /* total size = 0x0400, struct size = 0x0030 */

// ////////////////////+++ EXTEND +-+//////////////////// //
struct EXTEND_Type       { /*!<  Extend configuration */
  union EXTEND_CTR_DEF {  //!< EXTEND register
    struct {
      __IO ONE_BIT    USBDLS       :  1; //!<[00] USBD Lowspeed Enable
      __IO ONE_BIT    USBDPU       :  1; //!<[01] USBD pullup Enable
      __IO ONE_BIT    ETH_10M_EN   :  1; //!<[02] ETH 10M Enable
      __IO ONE_BIT    ETH_RGMII_EN :  1; //!<[03] ETH RGMII Enable
      __IO ONE_BIT    PLL_HSI_PRE  :  1; //!<[04] Whether HSI is divided
           ONE_BIT    UNUSED0      :  1; //!<[05] 
      __IO ONE_BIT    LOCKUP_EN    :  1; //!<[06] LOCKUP_Eable
      __IO ONE_BIT    LOCKUP_RSTF  :  1; //!<[07] LOCKUP RESET
      __IO uint32_t   ULLDO_TRIM   :  2; //!<[08] ULLDO_TRIM
      __IO uint32_t   LDO_TRIM     :  2; //!<[10] LDO_TRIM
      __IO ONE_BIT    HSE_KEEP_LP  :  1; //!<[12] HSE_KEEP_LP
    } B;
    __IO uint32_t  R;
    explicit EXTEND_CTR_DEF () noexcept { R = 0x00000a00u; }
    template<typename F> void setbit (F f) volatile {
      EXTEND_CTR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      EXTEND_CTR_DEF r; r.R = R;
      R = f (r);
    }
  };
  // PERIPHERAL EXTEND REGISTERS INSTANCES
  __IO EXTEND_CTR_DEF      EXTEND_CTR ;  //!< [0000](04)[0x00000A00]
}; /* total size = 0x0400, struct size = 0x0004 */

// ////////////////////+++ OPA +-+//////////////////// //
struct OPA_Type          { /*!<  OPA configuration */
  union CR_DEF {  //!< Control register
    struct {
      __IO ONE_BIT  EN1   :  1; //!<[00] OPA Enable1
      __IO ONE_BIT  MODE1 :  1; //!<[01] OPA MODE1
      __IO ONE_BIT  NSEL1 :  1; //!<[02] OPA NSEL1
      __IO ONE_BIT  PSEL1 :  1; //!<[03] OPA PSEL1
      __IO ONE_BIT  EN2   :  1; //!<[04] OPA Enable2
      __IO ONE_BIT  MODE2 :  1; //!<[05] OPA MODE2
      __IO ONE_BIT  NSEL2 :  1; //!<[06] OPA NSEL2
      __IO ONE_BIT  PSEL2 :  1; //!<[07] OPA PSEL2
      __IO ONE_BIT  EN3   :  1; //!<[08] OPA Eable3
      __IO ONE_BIT  MODE3 :  1; //!<[09] OPA MODE3
      __IO ONE_BIT  NSEL3 :  1; //!<[10] OPA NSEL3
      __IO ONE_BIT  PSEL3 :  1; //!<[11] OPA PSEL3
      __IO ONE_BIT  EN4   :  1; //!<[12] OPA Enable4
      __IO ONE_BIT  MODE4 :  1; //!<[13] OPA MODE4
      __IO ONE_BIT  NSEL4 :  1; //!<[14] OPA NSEL4
      __IO ONE_BIT  PSEL4 :  1; //!<[15] OPA PSEL4
    } B;
    __IO uint32_t  R;
    explicit CR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CR_DEF r; r.R = R;
      R = f (r);
    }
  };
  // PERIPHERAL OPA REGISTERS INSTANCES
  __IO CR_DEF              CR ;  //!< [0000](04)[0x00000000]
}; /* total size = 0x0200, struct size = 0x0004 */

// ////////////////////+++ GPIOA +-+//////////////////// //
struct GPIOA_Type        { /*!< General purpose I/O */
  union CFGLR_DEF {  //!< Port configuration register low (GPIOn_CFGLR)
    struct {
      __IO uint32_t   MODE0 :  2; //!<[00] Port n.0 mode bits
      __IO uint32_t   CNF0  :  2; //!<[02] Port n.0 configuration bits
      __IO uint32_t   MODE1 :  2; //!<[04] Port n.1 mode bits
      __IO uint32_t   CNF1  :  2; //!<[06] Port n.1 configuration bits
      __IO uint32_t   MODE2 :  2; //!<[08] Port n.2 mode bits
      __IO uint32_t   CNF2  :  2; //!<[10] Port n.2 configuration bits
      __IO uint32_t   MODE3 :  2; //!<[12] Port n.3 mode bits
      __IO uint32_t   CNF3  :  2; //!<[14] Port n.3 configuration bits
      __IO uint32_t   MODE4 :  2; //!<[16] Port n.4 mode bits
      __IO uint32_t   CNF4  :  2; //!<[18] Port n.4 configuration bits
      __IO uint32_t   MODE5 :  2; //!<[20] Port n.5 mode bits
      __IO uint32_t   CNF5  :  2; //!<[22] Port n.5 configuration bits
      __IO uint32_t   MODE6 :  2; //!<[24] Port n.6 mode bits
      __IO uint32_t   CNF6  :  2; //!<[26] Port n.6 configuration bits
      __IO uint32_t   MODE7 :  2; //!<[28] Port n.7 mode bits
      __IO uint32_t   CNF7  :  2; //!<[30] Port n.7 configuration bits
    } B;
    __IO uint32_t  R;
    explicit CFGLR_DEF () noexcept { R = 0x44444444u; }
    template<typename F> void setbit (F f) volatile {
      CFGLR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CFGLR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CFGHR_DEF {  //!< Port configuration register high (GPIOn_CFGHR)
    struct {
      __IO uint32_t   MODE8  :  2; //!<[00] Port n.8 mode bits
      __IO uint32_t   CNF8   :  2; //!<[02] Port n.8 configuration bits
      __IO uint32_t   MODE9  :  2; //!<[04] Port n.9 mode bits
      __IO uint32_t   CNF9   :  2; //!<[06] Port n.9 configuration bits
      __IO uint32_t   MODE10 :  2; //!<[08] Port n.10 mode bits
      __IO uint32_t   CNF10  :  2; //!<[10] Port n.10 configuration bits
      __IO uint32_t   MODE11 :  2; //!<[12] Port n.11 mode bits
      __IO uint32_t   CNF11  :  2; //!<[14] Port n.11 configuration bits
      __IO uint32_t   MODE12 :  2; //!<[16] Port n.12 mode bits
      __IO uint32_t   CNF12  :  2; //!<[18] Port n.12 configuration bits
      __IO uint32_t   MODE13 :  2; //!<[20] Port n.13 mode bits
      __IO uint32_t   CNF13  :  2; //!<[22] Port n.13 configuration bits
      __IO uint32_t   MODE14 :  2; //!<[24] Port n.14 mode bits
      __IO uint32_t   CNF14  :  2; //!<[26] Port n.14 configuration bits
      __IO uint32_t   MODE15 :  2; //!<[28] Port n.15 mode bits
      __IO uint32_t   CNF15  :  2; //!<[30] Port n.15 configuration bits
    } B;
    __IO uint32_t  R;
    explicit CFGHR_DEF () noexcept { R = 0x44444444u; }
    template<typename F> void setbit (F f) volatile {
      CFGHR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CFGHR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union INDR_DEF  {  //!< Port input data register (GPIOn_INDR)
    struct {
      __I  ONE_BIT  IDR0  :  1; //!<[00] Port input data
      __I  ONE_BIT  IDR1  :  1; //!<[01] Port input data
      __I  ONE_BIT  IDR2  :  1; //!<[02] Port input data
      __I  ONE_BIT  IDR3  :  1; //!<[03] Port input data
      __I  ONE_BIT  IDR4  :  1; //!<[04] Port input data
      __I  ONE_BIT  IDR5  :  1; //!<[05] Port input data
      __I  ONE_BIT  IDR6  :  1; //!<[06] Port input data
      __I  ONE_BIT  IDR7  :  1; //!<[07] Port input data
      __I  ONE_BIT  IDR8  :  1; //!<[08] Port input data
      __I  ONE_BIT  IDR9  :  1; //!<[09] Port input data
      __I  ONE_BIT  IDR10 :  1; //!<[10] Port input data
      __I  ONE_BIT  IDR11 :  1; //!<[11] Port input data
      __I  ONE_BIT  IDR12 :  1; //!<[12] Port input data
      __I  ONE_BIT  IDR13 :  1; //!<[13] Port input data
      __I  ONE_BIT  IDR14 :  1; //!<[14] Port input data
      __I  ONE_BIT  IDR15 :  1; //!<[15] Port input data
    } B;
    __I  uint32_t  R;

    explicit INDR_DEF (volatile INDR_DEF & o) noexcept { R = o.R; };
  };
  union OUTDR_DEF {  //!< Port output data register (GPIOn_OUTDR)
    struct {
      __IO ONE_BIT  ODR0  :  1; //!<[00] Port output data
      __IO ONE_BIT  ODR1  :  1; //!<[01] Port output data
      __IO ONE_BIT  ODR2  :  1; //!<[02] Port output data
      __IO ONE_BIT  ODR3  :  1; //!<[03] Port output data
      __IO ONE_BIT  ODR4  :  1; //!<[04] Port output data
      __IO ONE_BIT  ODR5  :  1; //!<[05] Port output data
      __IO ONE_BIT  ODR6  :  1; //!<[06] Port output data
      __IO ONE_BIT  ODR7  :  1; //!<[07] Port output data
      __IO ONE_BIT  ODR8  :  1; //!<[08] Port output data
      __IO ONE_BIT  ODR9  :  1; //!<[09] Port output data
      __IO ONE_BIT  ODR10 :  1; //!<[10] Port output data
      __IO ONE_BIT  ODR11 :  1; //!<[11] Port output data
      __IO ONE_BIT  ODR12 :  1; //!<[12] Port output data
      __IO ONE_BIT  ODR13 :  1; //!<[13] Port output data
      __IO ONE_BIT  ODR14 :  1; //!<[14] Port output data
      __IO ONE_BIT  ODR15 :  1; //!<[15] Port output data
    } B;
    __IO uint32_t  R;
    explicit OUTDR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      OUTDR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      OUTDR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union BSHR_DEF  {  //!< Port bit set/reset register (GPIOn_BSHR)
    struct {
      __O  ONE_BIT  BS0  :  1; //!<[00] Set bit 0
      __O  ONE_BIT  BS1  :  1; //!<[01] Set bit 1
      __O  ONE_BIT  BS2  :  1; //!<[02] Set bit 1
      __O  ONE_BIT  BS3  :  1; //!<[03] Set bit 3
      __O  ONE_BIT  BS4  :  1; //!<[04] Set bit 4
      __O  ONE_BIT  BS5  :  1; //!<[05] Set bit 5
      __O  ONE_BIT  BS6  :  1; //!<[06] Set bit 6
      __O  ONE_BIT  BS7  :  1; //!<[07] Set bit 7
      __O  ONE_BIT  BS8  :  1; //!<[08] Set bit 8
      __O  ONE_BIT  BS9  :  1; //!<[09] Set bit 9
      __O  ONE_BIT  BS10 :  1; //!<[10] Set bit 10
      __O  ONE_BIT  BS11 :  1; //!<[11] Set bit 11
      __O  ONE_BIT  BS12 :  1; //!<[12] Set bit 12
      __O  ONE_BIT  BS13 :  1; //!<[13] Set bit 13
      __O  ONE_BIT  BS14 :  1; //!<[14] Set bit 14
      __O  ONE_BIT  BS15 :  1; //!<[15] Set bit 15
      __O  ONE_BIT  BR0  :  1; //!<[16] Reset bit 0
      __O  ONE_BIT  BR1  :  1; //!<[17] Reset bit 1
      __O  ONE_BIT  BR2  :  1; //!<[18] Reset bit 2
      __O  ONE_BIT  BR3  :  1; //!<[19] Reset bit 3
      __O  ONE_BIT  BR4  :  1; //!<[20] Reset bit 4
      __O  ONE_BIT  BR5  :  1; //!<[21] Reset bit 5
      __O  ONE_BIT  BR6  :  1; //!<[22] Reset bit 6
      __O  ONE_BIT  BR7  :  1; //!<[23] Reset bit 7
      __O  ONE_BIT  BR8  :  1; //!<[24] Reset bit 8
      __O  ONE_BIT  BR9  :  1; //!<[25] Reset bit 9
      __O  ONE_BIT  BR10 :  1; //!<[26] Reset bit 10
      __O  ONE_BIT  BR11 :  1; //!<[27] Reset bit 11
      __O  ONE_BIT  BR12 :  1; //!<[28] Reset bit 12
      __O  ONE_BIT  BR13 :  1; //!<[29] Reset bit 13
      __O  ONE_BIT  BR14 :  1; //!<[30] Reset bit 14
      __O  ONE_BIT  BR15 :  1; //!<[31] Reset bit 15
    } B;
    __O  uint32_t  R;
    explicit BSHR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      BSHR_DEF r;
      R = f (r);
    }
  };
  union BCR_DEF   {  //!< Port bit reset register (GPIOn_BCR)
    struct {
      __O  ONE_BIT  BR0  :  1; //!<[00] Reset bit 0
      __O  ONE_BIT  BR1  :  1; //!<[01] Reset bit 1
      __O  ONE_BIT  BR2  :  1; //!<[02] Reset bit 1
      __O  ONE_BIT  BR3  :  1; //!<[03] Reset bit 3
      __O  ONE_BIT  BR4  :  1; //!<[04] Reset bit 4
      __O  ONE_BIT  BR5  :  1; //!<[05] Reset bit 5
      __O  ONE_BIT  BR6  :  1; //!<[06] Reset bit 6
      __O  ONE_BIT  BR7  :  1; //!<[07] Reset bit 7
      __O  ONE_BIT  BR8  :  1; //!<[08] Reset bit 8
      __O  ONE_BIT  BR9  :  1; //!<[09] Reset bit 9
      __O  ONE_BIT  BR10 :  1; //!<[10] Reset bit 10
      __O  ONE_BIT  BR11 :  1; //!<[11] Reset bit 11
      __O  ONE_BIT  BR12 :  1; //!<[12] Reset bit 12
      __O  ONE_BIT  BR13 :  1; //!<[13] Reset bit 13
      __O  ONE_BIT  BR14 :  1; //!<[14] Reset bit 14
      __O  ONE_BIT  BR15 :  1; //!<[15] Reset bit 15
    } B;
    __O  uint32_t  R;
    explicit BCR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      BCR_DEF r;
      R = f (r);
    }
  };
  union LCKR_DEF  {  //!< Port configuration lock register
    struct {
      __IO ONE_BIT  LCK0  :  1; //!<[00] Port A Lock bit 0
      __IO ONE_BIT  LCK1  :  1; //!<[01] Port A Lock bit 1
      __IO ONE_BIT  LCK2  :  1; //!<[02] Port A Lock bit 2
      __IO ONE_BIT  LCK3  :  1; //!<[03] Port A Lock bit 3
      __IO ONE_BIT  LCK4  :  1; //!<[04] Port A Lock bit 4
      __IO ONE_BIT  LCK5  :  1; //!<[05] Port A Lock bit 5
      __IO ONE_BIT  LCK6  :  1; //!<[06] Port A Lock bit 6
      __IO ONE_BIT  LCK7  :  1; //!<[07] Port A Lock bit 7
      __IO ONE_BIT  LCK8  :  1; //!<[08] Port A Lock bit 8
      __IO ONE_BIT  LCK9  :  1; //!<[09] Port A Lock bit 9
      __IO ONE_BIT  LCK10 :  1; //!<[10] Port A Lock bit 10
      __IO ONE_BIT  LCK11 :  1; //!<[11] Port A Lock bit 11
      __IO ONE_BIT  LCK12 :  1; //!<[12] Port A Lock bit 12
      __IO ONE_BIT  LCK13 :  1; //!<[13] Port A Lock bit 13
      __IO ONE_BIT  LCK14 :  1; //!<[14] Port A Lock bit 14
      __IO ONE_BIT  LCK15 :  1; //!<[15] Port A Lock bit 15
      __IO ONE_BIT  LCKK  :  1; //!<[16] Lock key
    } B;
    __IO uint32_t  R;
    explicit LCKR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      LCKR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      LCKR_DEF r; r.R = R;
      R = f (r);
    }
  };
  // PERIPHERAL GPIOA REGISTERS INSTANCES
  __IO CFGLR_DEF           CFGLR ;  //!< [0000](04)[0x44444444]
  __IO CFGHR_DEF           CFGHR ;  //!< [0004](04)[0x44444444]
  __I  INDR_DEF             INDR ;  //!< [0008](04)[0x00000000]
  __IO OUTDR_DEF           OUTDR ;  //!< [000c](04)[0x00000000]
  __O  BSHR_DEF             BSHR ;  //!< [0010](04)[0x00000000]
  __O  BCR_DEF               BCR ;  //!< [0014](04)[0x00000000]
  __IO LCKR_DEF             LCKR ;  //!< [0018](04)[0x00000000]
}; /* total size = 0x0400, struct size = 0x001C */

// ////////////////////+++ AFIO +-+//////////////////// //
struct AFIO_Type         { /*!< Alternate function I/O */
  union ECR_DEF     {  //!< Event Control Register (AFIO_ECR)
    struct {
      __IO uint32_t   PIN  :  4; //!<[00] Pin selection
      __IO uint32_t   PORT :  3; //!<[04] Port selection
      __IO ONE_BIT    EVOE :  1; //!<[07] Event Output Enable
    } B;
    __IO uint32_t  R;
    explicit ECR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ECR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ECR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union PCFR_DEF    {  //!< AF remap and debug I/O configuration register (AFIO_PCFR)
    struct {
      __IO ONE_BIT    SPI1RM          :  1; //!<[00] SPI1 remapping
      __IO ONE_BIT    I2C1RM          :  1; //!<[01] I2C1 remapping
      __IO ONE_BIT    USART1RM        :  1; //!<[02] USART1 remapping
      __IO ONE_BIT    USART2RM        :  1; //!<[03] USART2 remapping
      __IO uint32_t   USART3RM        :  2; //!<[04] USART3 remapping
      __IO uint32_t   TIM1RM          :  2; //!<[06] TIM1 remapping
      __IO uint32_t   TIM2RM          :  2; //!<[08] TIM2 remapping
      __IO uint32_t   TIM3RM          :  2; //!<[10] TIM3 remapping
      __IO ONE_BIT    TIM4RM          :  1; //!<[12] TIM4 remapping
      __IO uint32_t   CAN1RM          :  2; //!<[13] CAN1 remapping
      __IO ONE_BIT    PD01RM          :  1; //!<[15] Port D0/Port D1 mapping on OSCIN/OSCOUT
      __IO ONE_BIT    TIM5CH4RM       :  1; //!<[16] TIM5 channel4 internal remap
      __IO ONE_BIT    ADC1_ETRGINJ_RM :  1; //!<[17] ADC 1 External trigger injected conversion remapping
      __IO ONE_BIT    ADC1_ETRGREG_RM :  1; //!<[18] ADC 1 external trigger regular conversion remapping
      __IO ONE_BIT    ADC2_ETRGINJ_RM :  1; //!<[19] ADC 2 External trigger injected conversion remapping
      __IO ONE_BIT    ADC2_ETRGREG_RM :  1; //!<[20] ADC 2 external trigger regular conversion remapping
      __IO ONE_BIT    ETHRM           :  1; //!<[21] Ethernet remapping
      __IO ONE_BIT    CAN2RM          :  1; //!<[22] CAN2 remapping
      __IO ONE_BIT    MII_RMII_SEL    :  1; //!<[23] MII_RMII_SEL
      __O  uint32_t   SWCFG           :  3; //!<[24] Serial wire JTAG configuration
           ONE_BIT    UNUSED0         :  1; //!<[27] 
      __IO ONE_BIT    SPI3_RM         :  1; //!<[28] SPI3 remapping
      __IO ONE_BIT    TIM2ITRA_RM     :  1; //!<[29] TIM2 internally triggers 1 remapping
      __IO ONE_BIT    PTP_PPSP_RM     :  1; //!<[30] Ethernet PTP_PPS remapping
    } B;
    __IO uint32_t  R;
    explicit PCFR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      PCFR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      PCFR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union EXTICR1_DEF {  //!< External interrupt configuration register 1 (AFIO_EXTICR1)
    struct {
      __IO uint32_t   EXTI0 :  4; //!<[00] EXTI0 configuration
      __IO uint32_t   EXTI1 :  4; //!<[04] EXTI1 configuration
      __IO uint32_t   EXTI2 :  4; //!<[08] EXTI2 configuration
      __IO uint32_t   EXTI3 :  4; //!<[12] EXTI3 configuration
    } B;
    __IO uint32_t  R;
    explicit EXTICR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      EXTICR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      EXTICR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union EXTICR2_DEF {  //!< External interrupt configuration register 2 (AFIO_EXTICR2)
    struct {
      __IO uint32_t   EXTI4 :  4; //!<[00] EXTI4 configuration
      __IO uint32_t   EXTI5 :  4; //!<[04] EXTI5 configuration
      __IO uint32_t   EXTI6 :  4; //!<[08] EXTI6 configuration
      __IO uint32_t   EXTI7 :  4; //!<[12] EXTI7 configuration
    } B;
    __IO uint32_t  R;
    explicit EXTICR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      EXTICR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      EXTICR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union EXTICR3_DEF {  //!< External interrupt configuration register 3 (AFIO_EXTICR3)
    struct {
      __IO uint32_t   EXTI8  :  4; //!<[00] EXTI8 configuration
      __IO uint32_t   EXTI9  :  4; //!<[04] EXTI9 configuration
      __IO uint32_t   EXTI10 :  4; //!<[08] EXTI10 configuration
      __IO uint32_t   EXTI11 :  4; //!<[12] EXTI11 configuration
    } B;
    __IO uint32_t  R;
    explicit EXTICR3_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      EXTICR3_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      EXTICR3_DEF r; r.R = R;
      R = f (r);
    }
  };
  union EXTICR4_DEF {  //!< External interrupt configuration register 4 (AFIO_EXTICR4)
    struct {
      __IO uint32_t   EXTI12 :  4; //!<[00] EXTI12 configuration
      __IO uint32_t   EXTI13 :  4; //!<[04] EXTI13 configuration
      __IO uint32_t   EXTI14 :  4; //!<[08] EXTI14 configuration
      __IO uint32_t   EXTI15 :  4; //!<[12] EXTI15 configuration
    } B;
    __IO uint32_t  R;
    explicit EXTICR4_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      EXTICR4_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      EXTICR4_DEF r; r.R = R;
      R = f (r);
    }
  };
  union PCFR2_DEF   {  //!< AF remap and debug I/O configuration register (AFIO_PCFR2)
    struct {
           uint32_t   UNUSED0      :  2; //!<[00] 
      __IO ONE_BIT    TIM8_REMAP   :  1; //!<[02] TIM8 remapping
      __IO uint32_t   TIM9_REMAP   :  2; //!<[03] TIM9 remapping
      __IO uint32_t   TIM10_REMAP  :  2; //!<[05] TIM10 remapping
           uint32_t   UNUSED1      :  3; //!<[07] 
      __IO ONE_BIT    FSMC_NADV    :  1; //!<[10] FSMC_NADV
           uint32_t   UNUSED2      :  5; //!<[11] 
      __IO uint32_t   UART4_REMAP  :  2; //!<[16] UART4 remapping
      __IO uint32_t   UART5_REMAP  :  2; //!<[18] UART5 remapping
      __IO uint32_t   UART6_REMAP  :  2; //!<[20] UART6 remapping
      __IO uint32_t   UART7_REMAP  :  2; //!<[22] UART7 remapping
      __IO uint32_t   UART8_REMAP  :  2; //!<[24] UART8 remapping
      __IO ONE_BIT    UART1_REMAP2 :  1; //!<[26] UART1 remapping
    } B;
    __IO uint32_t  R;
    explicit PCFR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      PCFR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      PCFR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  // PERIPHERAL AFIO REGISTERS INSTANCES
  __IO ECR_DEF                 ECR ;  //!< [0000](04)[0x00000000]
  __IO PCFR_DEF               PCFR ;  //!< [0004](04)[0x00000000]
  __IO EXTICR1_DEF         EXTICR1 ;  //!< [0008](04)[0x00000000]
  __IO EXTICR2_DEF         EXTICR2 ;  //!< [000c](04)[0x00000000]
  __IO EXTICR3_DEF         EXTICR3 ;  //!< [0010](04)[0x00000000]
  __IO EXTICR4_DEF         EXTICR4 ;  //!< [0014](04)[0x00000000]
       uint32_t          UNUSED0 ;  //!< [0018](04)[0xFFFFFFFF]
  __IO PCFR2_DEF             PCFR2 ;  //!< [001c](04)[0x00000000]
}; /* total size = 0x0400, struct size = 0x0020 */

// ////////////////////+++ EXTI +-+//////////////////// //
struct EXTI_Type         { /*!< EXTI */
  union INTENR_DEF {  //!< Interrupt mask register (EXTI_INTENR)
    struct {
      __IO ONE_BIT  MR0  :  1; //!<[00] Interrupt Mask on line 0
      __IO ONE_BIT  MR1  :  1; //!<[01] Interrupt Mask on line 1
      __IO ONE_BIT  MR2  :  1; //!<[02] Interrupt Mask on line 2
      __IO ONE_BIT  MR3  :  1; //!<[03] Interrupt Mask on line 3
      __IO ONE_BIT  MR4  :  1; //!<[04] Interrupt Mask on line 4
      __IO ONE_BIT  MR5  :  1; //!<[05] Interrupt Mask on line 5
      __IO ONE_BIT  MR6  :  1; //!<[06] Interrupt Mask on line 6
      __IO ONE_BIT  MR7  :  1; //!<[07] Interrupt Mask on line 7
      __IO ONE_BIT  MR8  :  1; //!<[08] Interrupt Mask on line 8
      __IO ONE_BIT  MR9  :  1; //!<[09] Interrupt Mask on line 9
      __IO ONE_BIT  MR10 :  1; //!<[10] Interrupt Mask on line 10
      __IO ONE_BIT  MR11 :  1; //!<[11] Interrupt Mask on line 11
      __IO ONE_BIT  MR12 :  1; //!<[12] Interrupt Mask on line 12
      __IO ONE_BIT  MR13 :  1; //!<[13] Interrupt Mask on line 13
      __IO ONE_BIT  MR14 :  1; //!<[14] Interrupt Mask on line 14
      __IO ONE_BIT  MR15 :  1; //!<[15] Interrupt Mask on line 15
      __IO ONE_BIT  MR16 :  1; //!<[16] Interrupt Mask on line 16
      __IO ONE_BIT  MR17 :  1; //!<[17] Interrupt Mask on line 17
      __IO ONE_BIT  MR18 :  1; //!<[18] Interrupt Mask on line 18
      __IO ONE_BIT  MR19 :  1; //!<[19] Interrupt Mask on line 19
    } B;
    __IO uint32_t  R;
    explicit INTENR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      INTENR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      INTENR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union EVENR_DEF  {  //!< Event mask register (EXTI_EVENR)
    struct {
      __IO ONE_BIT  MR0  :  1; //!<[00] Event Mask on line 0
      __IO ONE_BIT  MR1  :  1; //!<[01] Event Mask on line 1
      __IO ONE_BIT  MR2  :  1; //!<[02] Event Mask on line 2
      __IO ONE_BIT  MR3  :  1; //!<[03] Event Mask on line 3
      __IO ONE_BIT  MR4  :  1; //!<[04] Event Mask on line 4
      __IO ONE_BIT  MR5  :  1; //!<[05] Event Mask on line 5
      __IO ONE_BIT  MR6  :  1; //!<[06] Event Mask on line 6
      __IO ONE_BIT  MR7  :  1; //!<[07] Event Mask on line 7
      __IO ONE_BIT  MR8  :  1; //!<[08] Event Mask on line 8
      __IO ONE_BIT  MR9  :  1; //!<[09] Event Mask on line 9
      __IO ONE_BIT  MR10 :  1; //!<[10] Event Mask on line 10
      __IO ONE_BIT  MR11 :  1; //!<[11] Event Mask on line 11
      __IO ONE_BIT  MR12 :  1; //!<[12] Event Mask on line 12
      __IO ONE_BIT  MR13 :  1; //!<[13] Event Mask on line 13
      __IO ONE_BIT  MR14 :  1; //!<[14] Event Mask on line 14
      __IO ONE_BIT  MR15 :  1; //!<[15] Event Mask on line 15
      __IO ONE_BIT  MR16 :  1; //!<[16] Event Mask on line 16
      __IO ONE_BIT  MR17 :  1; //!<[17] Event Mask on line 17
      __IO ONE_BIT  MR18 :  1; //!<[18] Event Mask on line 18
      __IO ONE_BIT  MR19 :  1; //!<[19] Event Mask on line 19
    } B;
    __IO uint32_t  R;
    explicit EVENR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      EVENR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      EVENR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union RTENR_DEF  {  //!< Rising Trigger selection register (EXTI_RTENR)
    struct {
      __IO ONE_BIT  TR0  :  1; //!<[00] Rising trigger event configuration of line 0
      __IO ONE_BIT  TR1  :  1; //!<[01] Rising trigger event configuration of line 1
      __IO ONE_BIT  TR2  :  1; //!<[02] Rising trigger event configuration of line 2
      __IO ONE_BIT  TR3  :  1; //!<[03] Rising trigger event configuration of line 3
      __IO ONE_BIT  TR4  :  1; //!<[04] Rising trigger event configuration of line 4
      __IO ONE_BIT  TR5  :  1; //!<[05] Rising trigger event configuration of line 5
      __IO ONE_BIT  TR6  :  1; //!<[06] Rising trigger event configuration of line 6
      __IO ONE_BIT  TR7  :  1; //!<[07] Rising trigger event configuration of line 7
      __IO ONE_BIT  TR8  :  1; //!<[08] Rising trigger event configuration of line 8
      __IO ONE_BIT  TR9  :  1; //!<[09] Rising trigger event configuration of line 9
      __IO ONE_BIT  TR10 :  1; //!<[10] Rising trigger event configuration of line 10
      __IO ONE_BIT  TR11 :  1; //!<[11] Rising trigger event configuration of line 11
      __IO ONE_BIT  TR12 :  1; //!<[12] Rising trigger event configuration of line 12
      __IO ONE_BIT  TR13 :  1; //!<[13] Rising trigger event configuration of line 13
      __IO ONE_BIT  TR14 :  1; //!<[14] Rising trigger event configuration of line 14
      __IO ONE_BIT  TR15 :  1; //!<[15] Rising trigger event configuration of line 15
      __IO ONE_BIT  TR16 :  1; //!<[16] Rising trigger event configuration of line 16
      __IO ONE_BIT  TR17 :  1; //!<[17] Rising trigger event configuration of line 17
      __IO ONE_BIT  TR18 :  1; //!<[18] Rising trigger event configuration of line 18
      __IO ONE_BIT  TR19 :  1; //!<[19] Rising trigger event configuration of line 19
    } B;
    __IO uint32_t  R;
    explicit RTENR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      RTENR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      RTENR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union FTENR_DEF  {  //!< Falling Trigger selection register (EXTI_FTENR)
    struct {
      __IO ONE_BIT  TR0  :  1; //!<[00] Falling trigger event configuration of line 0
      __IO ONE_BIT  TR1  :  1; //!<[01] Falling trigger event configuration of line 1
      __IO ONE_BIT  TR2  :  1; //!<[02] Falling trigger event configuration of line 2
      __IO ONE_BIT  TR3  :  1; //!<[03] Falling trigger event configuration of line 3
      __IO ONE_BIT  TR4  :  1; //!<[04] Falling trigger event configuration of line 4
      __IO ONE_BIT  TR5  :  1; //!<[05] Falling trigger event configuration of line 5
      __IO ONE_BIT  TR6  :  1; //!<[06] Falling trigger event configuration of line 6
      __IO ONE_BIT  TR7  :  1; //!<[07] Falling trigger event configuration of line 7
      __IO ONE_BIT  TR8  :  1; //!<[08] Falling trigger event configuration of line 8
      __IO ONE_BIT  TR9  :  1; //!<[09] Falling trigger event configuration of line 9
      __IO ONE_BIT  TR10 :  1; //!<[10] Falling trigger event configuration of line 10
      __IO ONE_BIT  TR11 :  1; //!<[11] Falling trigger event configuration of line 11
      __IO ONE_BIT  TR12 :  1; //!<[12] Falling trigger event configuration of line 12
      __IO ONE_BIT  TR13 :  1; //!<[13] Falling trigger event configuration of line 13
      __IO ONE_BIT  TR14 :  1; //!<[14] Falling trigger event configuration of line 14
      __IO ONE_BIT  TR15 :  1; //!<[15] Falling trigger event configuration of line 15
      __IO ONE_BIT  TR16 :  1; //!<[16] Falling trigger event configuration of line 16
      __IO ONE_BIT  TR17 :  1; //!<[17] Falling trigger event configuration of line 17
      __IO ONE_BIT  TR18 :  1; //!<[18] Falling trigger event configuration of line 18
      __IO ONE_BIT  TR19 :  1; //!<[19] Falling trigger event configuration of line 19
    } B;
    __IO uint32_t  R;
    explicit FTENR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      FTENR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      FTENR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union SWIEVR_DEF {  //!< Software interrupt event register (EXTI_SWIEVR)
    struct {
      __IO ONE_BIT  SWIER0  :  1; //!<[00] Software Interrupt on line 0
      __IO ONE_BIT  SWIER1  :  1; //!<[01] Software Interrupt on line 1
      __IO ONE_BIT  SWIER2  :  1; //!<[02] Software Interrupt on line 2
      __IO ONE_BIT  SWIER3  :  1; //!<[03] Software Interrupt on line 3
      __IO ONE_BIT  SWIER4  :  1; //!<[04] Software Interrupt on line 4
      __IO ONE_BIT  SWIER5  :  1; //!<[05] Software Interrupt on line 5
      __IO ONE_BIT  SWIER6  :  1; //!<[06] Software Interrupt on line 6
      __IO ONE_BIT  SWIER7  :  1; //!<[07] Software Interrupt on line 7
      __IO ONE_BIT  SWIER8  :  1; //!<[08] Software Interrupt on line 8
      __IO ONE_BIT  SWIER9  :  1; //!<[09] Software Interrupt on line 9
      __IO ONE_BIT  SWIER10 :  1; //!<[10] Software Interrupt on line 10
      __IO ONE_BIT  SWIER11 :  1; //!<[11] Software Interrupt on line 11
      __IO ONE_BIT  SWIER12 :  1; //!<[12] Software Interrupt on line 12
      __IO ONE_BIT  SWIER13 :  1; //!<[13] Software Interrupt on line 13
      __IO ONE_BIT  SWIER14 :  1; //!<[14] Software Interrupt on line 14
      __IO ONE_BIT  SWIER15 :  1; //!<[15] Software Interrupt on line 15
      __IO ONE_BIT  SWIER16 :  1; //!<[16] Software Interrupt on line 16
      __IO ONE_BIT  SWIER17 :  1; //!<[17] Software Interrupt on line 17
      __IO ONE_BIT  SWIER18 :  1; //!<[18] Software Interrupt on line 18
      __IO ONE_BIT  SWIER19 :  1; //!<[19] Software Interrupt on line 19
    } B;
    __IO uint32_t  R;
    explicit SWIEVR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      SWIEVR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      SWIEVR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union INTFR_DEF  {  //!< Pending register (EXTI_INTFR)
    struct {
      __IO ONE_BIT  PR0  :  1; //!<[00] Pending bit 0
      __IO ONE_BIT  PR1  :  1; //!<[01] Pending bit 1
      __IO ONE_BIT  PR2  :  1; //!<[02] Pending bit 2
      __IO ONE_BIT  PR3  :  1; //!<[03] Pending bit 3
      __IO ONE_BIT  PR4  :  1; //!<[04] Pending bit 4
      __IO ONE_BIT  PR5  :  1; //!<[05] Pending bit 5
      __IO ONE_BIT  PR6  :  1; //!<[06] Pending bit 6
      __IO ONE_BIT  PR7  :  1; //!<[07] Pending bit 7
      __IO ONE_BIT  PR8  :  1; //!<[08] Pending bit 8
      __IO ONE_BIT  PR9  :  1; //!<[09] Pending bit 9
      __IO ONE_BIT  PR10 :  1; //!<[10] Pending bit 10
      __IO ONE_BIT  PR11 :  1; //!<[11] Pending bit 11
      __IO ONE_BIT  PR12 :  1; //!<[12] Pending bit 12
      __IO ONE_BIT  PR13 :  1; //!<[13] Pending bit 13
      __IO ONE_BIT  PR14 :  1; //!<[14] Pending bit 14
      __IO ONE_BIT  PR15 :  1; //!<[15] Pending bit 15
      __IO ONE_BIT  PR16 :  1; //!<[16] Pending bit 16
      __IO ONE_BIT  PR17 :  1; //!<[17] Pending bit 17
      __IO ONE_BIT  PR18 :  1; //!<[18] Pending bit 18
      __IO ONE_BIT  PR19 :  1; //!<[19] Pending bit 19
    } B;
    __IO uint32_t  R;
    explicit INTFR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      INTFR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      INTFR_DEF r; r.R = R;
      R = f (r);
    }
  };
  // PERIPHERAL EXTI REGISTERS INSTANCES
  __IO INTENR_DEF          INTENR ;  //!< [0000](04)[0x00000000]
  __IO EVENR_DEF            EVENR ;  //!< [0004](04)[0x00000000]
  __IO RTENR_DEF            RTENR ;  //!< [0008](04)[0x00000000]
  __IO FTENR_DEF            FTENR ;  //!< [000c](04)[0x00000000]
  __IO SWIEVR_DEF          SWIEVR ;  //!< [0010](04)[0x00000000]
  __IO INTFR_DEF            INTFR ;  //!< [0014](04)[0x00000000]
}; /* total size = 0x0400, struct size = 0x0018 */

// ////////////////////+++ DMA1 +-+//////////////////// //
struct DMA1_Type         { /*!< DMA1 controller */
  union INTFR_DEF   {  //!< DMA interrupt status register (DMA_INTFR)
    struct {
      __I  ONE_BIT  GIF1  :  1; //!<[00] Channel 1 Global interrupt flag
      __I  ONE_BIT  TCIF1 :  1; //!<[01] Channel 1 Transfer Complete flag
      __I  ONE_BIT  HTIF1 :  1; //!<[02] Channel 1 Half Transfer Complete flag
      __I  ONE_BIT  TEIF1 :  1; //!<[03] Channel 1 Transfer Error flag
      __I  ONE_BIT  GIF2  :  1; //!<[04] Channel 2 Global interrupt flag
      __I  ONE_BIT  TCIF2 :  1; //!<[05] Channel 2 Transfer Complete flag
      __I  ONE_BIT  HTIF2 :  1; //!<[06] Channel 2 Half Transfer Complete flag
      __I  ONE_BIT  TEIF2 :  1; //!<[07] Channel 2 Transfer Error flag
      __I  ONE_BIT  GIF3  :  1; //!<[08] Channel 3 Global interrupt flag
      __I  ONE_BIT  TCIF3 :  1; //!<[09] Channel 3 Transfer Complete flag
      __I  ONE_BIT  HTIF3 :  1; //!<[10] Channel 3 Half Transfer Complete flag
      __I  ONE_BIT  TEIF3 :  1; //!<[11] Channel 3 Transfer Error flag
      __I  ONE_BIT  GIF4  :  1; //!<[12] Channel 4 Global interrupt flag
      __I  ONE_BIT  TCIF4 :  1; //!<[13] Channel 4 Transfer Complete flag
      __I  ONE_BIT  HTIF4 :  1; //!<[14] Channel 4 Half Transfer Complete flag
      __I  ONE_BIT  TEIF4 :  1; //!<[15] Channel 4 Transfer Error flag
      __I  ONE_BIT  GIF5  :  1; //!<[16] Channel 5 Global interrupt flag
      __I  ONE_BIT  TCIF5 :  1; //!<[17] Channel 5 Transfer Complete flag
      __I  ONE_BIT  HTIF5 :  1; //!<[18] Channel 5 Half Transfer Complete flag
      __I  ONE_BIT  TEIF5 :  1; //!<[19] Channel 5 Transfer Error flag
      __I  ONE_BIT  GIF6  :  1; //!<[20] Channel 6 Global interrupt flag
      __I  ONE_BIT  TCIF6 :  1; //!<[21] Channel 6 Transfer Complete flag
      __I  ONE_BIT  HTIF6 :  1; //!<[22] Channel 6 Half Transfer Complete flag
      __I  ONE_BIT  TEIF6 :  1; //!<[23] Channel 6 Transfer Error flag
      __I  ONE_BIT  GIF7  :  1; //!<[24] Channel 7 Global interrupt flag
      __I  ONE_BIT  TCIF7 :  1; //!<[25] Channel 7 Transfer Complete flag
      __I  ONE_BIT  HTIF7 :  1; //!<[26] Channel 7 Half Transfer Complete flag
      __I  ONE_BIT  TEIF7 :  1; //!<[27] Channel 7 Transfer Error flag
      __I  ONE_BIT  GIF8  :  1; //!<[28] Channel 8 Global interrupt flag use in ch32v20_D8/D8W/D6
      __I  ONE_BIT  TCIF8 :  1; //!<[29] Channel 8 Transfer Complete flag use in ch32v20_D8/D8W/D6
      __I  ONE_BIT  HTIF8 :  1; //!<[30] Channel 8 Half Transfer Complete flag use in ch32v20_D8/D8W/D6
      __I  ONE_BIT  TEIF8 :  1; //!<[31] Channel 8 Transfer Error flag use in ch32v20_D8/D8W/D6
    } B;
    __I  uint32_t  R;

    explicit INTFR_DEF (volatile INTFR_DEF & o) noexcept { R = o.R; };
  };
  union INTFCR_DEF  {  //!< DMA interrupt flag clear register (DMA_INTFCR)
    struct {
      __O  ONE_BIT  CGIF1  :  1; //!<[00] Channel 1 Global interrupt clear
      __O  ONE_BIT  CTCIF1 :  1; //!<[01] Channel 1 Transfer Complete clear
      __O  ONE_BIT  CHTIF1 :  1; //!<[02] Channel 1 Half Transfer clear
      __O  ONE_BIT  CTEIF1 :  1; //!<[03] Channel 1 Transfer Error clear
      __O  ONE_BIT  CGIF2  :  1; //!<[04] Channel 2 Global interrupt clear
      __O  ONE_BIT  CTCIF2 :  1; //!<[05] Channel 2 Transfer Complete clear
      __O  ONE_BIT  CHTIF2 :  1; //!<[06] Channel 2 Half Transfer clear
      __O  ONE_BIT  CTEIF2 :  1; //!<[07] Channel 2 Transfer Error clear
      __O  ONE_BIT  CGIF3  :  1; //!<[08] Channel 3 Global interrupt clear
      __O  ONE_BIT  CTCIF3 :  1; //!<[09] Channel 3 Transfer Complete clear
      __O  ONE_BIT  CHTIF3 :  1; //!<[10] Channel 3 Half Transfer clear
      __O  ONE_BIT  CTEIF3 :  1; //!<[11] Channel 3 Transfer Error clear
      __O  ONE_BIT  CGIF4  :  1; //!<[12] Channel 4 Global interrupt clear
      __O  ONE_BIT  CTCIF4 :  1; //!<[13] Channel 4 Transfer Complete clear
      __O  ONE_BIT  CHTIF4 :  1; //!<[14] Channel 4 Half Transfer clear
      __O  ONE_BIT  CTEIF4 :  1; //!<[15] Channel 4 Transfer Error clear
      __O  ONE_BIT  CGIF5  :  1; //!<[16] Channel 5 Global interrupt clear
      __O  ONE_BIT  CTCIF5 :  1; //!<[17] Channel 5 Transfer Complete clear
      __O  ONE_BIT  CHTIF5 :  1; //!<[18] Channel 5 Half Transfer clear
      __O  ONE_BIT  CTEIF5 :  1; //!<[19] Channel 5 Transfer Error clear
      __O  ONE_BIT  CGIF6  :  1; //!<[20] Channel 6 Global interrupt clear
      __O  ONE_BIT  CTCIF6 :  1; //!<[21] Channel 6 Transfer Complete clear
      __O  ONE_BIT  CHTIF6 :  1; //!<[22] Channel 6 Half Transfer clear
      __O  ONE_BIT  CTEIF6 :  1; //!<[23] Channel 6 Transfer Error clear
      __O  ONE_BIT  CGIF7  :  1; //!<[24] Channel 7 Global interrupt clear
      __O  ONE_BIT  CTCIF7 :  1; //!<[25] Channel 7 Transfer Complete clear
      __O  ONE_BIT  CHTIF7 :  1; //!<[26] Channel 7 Half Transfer clear
      __O  ONE_BIT  CTEIF7 :  1; //!<[27] Channel 7 Transfer Error clear
      __O  ONE_BIT  CGIF8  :  1; //!<[28] Channel 8 Global interrupt clear use in ch32v20_D8/D8W/D6
      __O  ONE_BIT  CTCIF8 :  1; //!<[29] Channel 8 Transfer Complete clear use in ch32v20_D8/D8W/D6
      __O  ONE_BIT  CHTIF8 :  1; //!<[30] Channel 8 Half Transfer clear use in ch32v20_D8/D8W/D6
      __O  ONE_BIT  CTEIF8 :  1; //!<[31] Channel 8 Transfer Error clear use in ch32v20_D8/D8W/D6
    } B;
    __O  uint32_t  R;
    explicit INTFCR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      INTFCR_DEF r;
      R = f (r);
    }
  };
  union CFGR1_DEF   {  //!< DMA channel configuration register (DMA_CFGR)
    struct {
      __IO ONE_BIT    EN      :  1; //!<[00] Channel enable
      __IO ONE_BIT    TCIE    :  1; //!<[01] Transfer complete interrupt enable
      __IO ONE_BIT    HTIE    :  1; //!<[02] Half Transfer interrupt enable
      __IO ONE_BIT    TEIE    :  1; //!<[03] Transfer error interrupt enable
      __IO ONE_BIT    DIR     :  1; //!<[04] Data transfer direction
      __IO ONE_BIT    CIRC    :  1; //!<[05] Circular mode
      __IO ONE_BIT    PINC    :  1; //!<[06] Peripheral increment mode
      __IO ONE_BIT    MINC    :  1; //!<[07] Memory increment mode
      __IO uint32_t   PSIZE   :  2; //!<[08] Peripheral size
      __IO uint32_t   MSIZE   :  2; //!<[10] Memory size
      __IO uint32_t   PL      :  2; //!<[12] Channel Priority level
      __IO ONE_BIT    MEM2MEM :  1; //!<[14] Memory to memory mode
    } B;
    __IO uint32_t  R;
    explicit CFGR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CFGR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CFGR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CNTR1_DEF   {  //!< DMA channel 1 number of data register
    struct {
      __IO uint32_t   NDT : 16; //!<[00] Number of data to transfer
    } B;
    __IO uint32_t  R;
    explicit CNTR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CNTR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CNTR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union PADDR1_DEF  {  //!< DMA channel 1 peripheral address register
    struct {
      __IO uint32_t   PA : 32; //!<[00] Peripheral address
    } B;
    __IO uint32_t  R;
    explicit PADDR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      PADDR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      PADDR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union MADDR1_DEF  {  //!< DMA channel 1 memory address register
    struct {
      __IO uint32_t   MA : 32; //!<[00] Memory address
    } B;
    __IO uint32_t  R;
    explicit MADDR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      MADDR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      MADDR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CFGR2_DEF   {  //!< DMA channel configuration register (DMA_CFGR)
    struct {
      __IO ONE_BIT    EN      :  1; //!<[00] Channel enable
      __IO ONE_BIT    TCIE    :  1; //!<[01] Transfer complete interrupt enable
      __IO ONE_BIT    HTIE    :  1; //!<[02] Half Transfer interrupt enable
      __IO ONE_BIT    TEIE    :  1; //!<[03] Transfer error interrupt enable
      __IO ONE_BIT    DIR     :  1; //!<[04] Data transfer direction
      __IO ONE_BIT    CIRC    :  1; //!<[05] Circular mode
      __IO ONE_BIT    PINC    :  1; //!<[06] Peripheral increment mode
      __IO ONE_BIT    MINC    :  1; //!<[07] Memory increment mode
      __IO uint32_t   PSIZE   :  2; //!<[08] Peripheral size
      __IO uint32_t   MSIZE   :  2; //!<[10] Memory size
      __IO uint32_t   PL      :  2; //!<[12] Channel Priority level
      __IO ONE_BIT    MEM2MEM :  1; //!<[14] Memory to memory mode
    } B;
    __IO uint32_t  R;
    explicit CFGR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CFGR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CFGR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CNTR2_DEF   {  //!< DMA channel 2 number of data register
    struct {
      __IO uint32_t   NDT : 16; //!<[00] Number of data to transfer
    } B;
    __IO uint32_t  R;
    explicit CNTR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CNTR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CNTR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union PADDR2_DEF  {  //!< DMA channel 2 peripheral address register
    struct {
      __IO uint32_t   PA : 32; //!<[00] Peripheral address
    } B;
    __IO uint32_t  R;
    explicit PADDR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      PADDR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      PADDR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union MADDR2_DEF  {  //!< DMA channel 2 memory address register
    struct {
      __IO uint32_t   MA : 32; //!<[00] Memory address
    } B;
    __IO uint32_t  R;
    explicit MADDR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      MADDR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      MADDR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CFGR3_DEF   {  //!< DMA channel configuration register (DMA_CFGR)
    struct {
      __IO ONE_BIT    EN      :  1; //!<[00] Channel enable
      __IO ONE_BIT    TCIE    :  1; //!<[01] Transfer complete interrupt enable
      __IO ONE_BIT    HTIE    :  1; //!<[02] Half Transfer interrupt enable
      __IO ONE_BIT    TEIE    :  1; //!<[03] Transfer error interrupt enable
      __IO ONE_BIT    DIR     :  1; //!<[04] Data transfer direction
      __IO ONE_BIT    CIRC    :  1; //!<[05] Circular mode
      __IO ONE_BIT    PINC    :  1; //!<[06] Peripheral increment mode
      __IO ONE_BIT    MINC    :  1; //!<[07] Memory increment mode
      __IO uint32_t   PSIZE   :  2; //!<[08] Peripheral size
      __IO uint32_t   MSIZE   :  2; //!<[10] Memory size
      __IO uint32_t   PL      :  2; //!<[12] Channel Priority level
      __IO ONE_BIT    MEM2MEM :  1; //!<[14] Memory to memory mode
    } B;
    __IO uint32_t  R;
    explicit CFGR3_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CFGR3_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CFGR3_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CNTR3_DEF   {  //!< DMA channel 3 number of data register
    struct {
      __IO uint32_t   NDT : 16; //!<[00] Number of data to transfer
    } B;
    __IO uint32_t  R;
    explicit CNTR3_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CNTR3_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CNTR3_DEF r; r.R = R;
      R = f (r);
    }
  };
  union PADDR3_DEF  {  //!< DMA channel 3 peripheral address register
    struct {
      __IO uint32_t   PA : 32; //!<[00] Peripheral address
    } B;
    __IO uint32_t  R;
    explicit PADDR3_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      PADDR3_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      PADDR3_DEF r; r.R = R;
      R = f (r);
    }
  };
  union MADDR3_DEF  {  //!< DMA channel 3 memory address register
    struct {
      __IO uint32_t   MA : 32; //!<[00] Memory address
    } B;
    __IO uint32_t  R;
    explicit MADDR3_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      MADDR3_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      MADDR3_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CFGR4_DEF   {  //!< DMA channel configuration register (DMA_CFGR)
    struct {
      __IO ONE_BIT    EN      :  1; //!<[00] Channel enable
      __IO ONE_BIT    TCIE    :  1; //!<[01] Transfer complete interrupt enable
      __IO ONE_BIT    HTIE    :  1; //!<[02] Half Transfer interrupt enable
      __IO ONE_BIT    TEIE    :  1; //!<[03] Transfer error interrupt enable
      __IO ONE_BIT    DIR     :  1; //!<[04] Data transfer direction
      __IO ONE_BIT    CIRC    :  1; //!<[05] Circular mode
      __IO ONE_BIT    PINC    :  1; //!<[06] Peripheral increment mode
      __IO ONE_BIT    MINC    :  1; //!<[07] Memory increment mode
      __IO uint32_t   PSIZE   :  2; //!<[08] Peripheral size
      __IO uint32_t   MSIZE   :  2; //!<[10] Memory size
      __IO uint32_t   PL      :  2; //!<[12] Channel Priority level
      __IO ONE_BIT    MEM2MEM :  1; //!<[14] Memory to memory mode
    } B;
    __IO uint32_t  R;
    explicit CFGR4_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CFGR4_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CFGR4_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CNTR4_DEF   {  //!< DMA channel 4 number of data register
    struct {
      __IO uint32_t   NDT : 16; //!<[00] Number of data to transfer
    } B;
    __IO uint32_t  R;
    explicit CNTR4_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CNTR4_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CNTR4_DEF r; r.R = R;
      R = f (r);
    }
  };
  union PADDR4_DEF  {  //!< DMA channel 4 peripheral address register
    struct {
      __IO uint32_t   PA : 32; //!<[00] Peripheral address
    } B;
    __IO uint32_t  R;
    explicit PADDR4_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      PADDR4_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      PADDR4_DEF r; r.R = R;
      R = f (r);
    }
  };
  union MADDR4_DEF  {  //!< DMA channel 4 memory address register
    struct {
      __IO uint32_t   MA : 32; //!<[00] Memory address
    } B;
    __IO uint32_t  R;
    explicit MADDR4_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      MADDR4_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      MADDR4_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CFGR5_DEF   {  //!< DMA channel configuration register (DMA_CFGR)
    struct {
      __IO ONE_BIT    EN      :  1; //!<[00] Channel enable
      __IO ONE_BIT    TCIE    :  1; //!<[01] Transfer complete interrupt enable
      __IO ONE_BIT    HTIE    :  1; //!<[02] Half Transfer interrupt enable
      __IO ONE_BIT    TEIE    :  1; //!<[03] Transfer error interrupt enable
      __IO ONE_BIT    DIR     :  1; //!<[04] Data transfer direction
      __IO ONE_BIT    CIRC    :  1; //!<[05] Circular mode
      __IO ONE_BIT    PINC    :  1; //!<[06] Peripheral increment mode
      __IO ONE_BIT    MINC    :  1; //!<[07] Memory increment mode
      __IO uint32_t   PSIZE   :  2; //!<[08] Peripheral size
      __IO uint32_t   MSIZE   :  2; //!<[10] Memory size
      __IO uint32_t   PL      :  2; //!<[12] Channel Priority level
      __IO ONE_BIT    MEM2MEM :  1; //!<[14] Memory to memory mode
    } B;
    __IO uint32_t  R;
    explicit CFGR5_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CFGR5_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CFGR5_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CNTR5_DEF   {  //!< DMA channel 5 number of data register
    struct {
      __IO uint32_t   NDT : 16; //!<[00] Number of data to transfer
    } B;
    __IO uint32_t  R;
    explicit CNTR5_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CNTR5_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CNTR5_DEF r; r.R = R;
      R = f (r);
    }
  };
  union PADDR5_DEF  {  //!< DMA channel 5 peripheral address register
    struct {
      __IO uint32_t   PA : 32; //!<[00] Peripheral address
    } B;
    __IO uint32_t  R;
    explicit PADDR5_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      PADDR5_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      PADDR5_DEF r; r.R = R;
      R = f (r);
    }
  };
  union MADDR5_DEF  {  //!< DMA channel 5 memory address register
    struct {
      __IO uint32_t   MA : 32; //!<[00] Memory address
    } B;
    __IO uint32_t  R;
    explicit MADDR5_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      MADDR5_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      MADDR5_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CFGR6_DEF   {  //!< DMA channel configuration register (DMA_CFGR)
    struct {
      __IO ONE_BIT    EN      :  1; //!<[00] Channel enable
      __IO ONE_BIT    TCIE    :  1; //!<[01] Transfer complete interrupt enable
      __IO ONE_BIT    HTIE    :  1; //!<[02] Half Transfer interrupt enable
      __IO ONE_BIT    TEIE    :  1; //!<[03] Transfer error interrupt enable
      __IO ONE_BIT    DIR     :  1; //!<[04] Data transfer direction
      __IO ONE_BIT    CIRC    :  1; //!<[05] Circular mode
      __IO ONE_BIT    PINC    :  1; //!<[06] Peripheral increment mode
      __IO ONE_BIT    MINC    :  1; //!<[07] Memory increment mode
      __IO uint32_t   PSIZE   :  2; //!<[08] Peripheral size
      __IO uint32_t   MSIZE   :  2; //!<[10] Memory size
      __IO uint32_t   PL      :  2; //!<[12] Channel Priority level
      __IO ONE_BIT    MEM2MEM :  1; //!<[14] Memory to memory mode
    } B;
    __IO uint32_t  R;
    explicit CFGR6_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CFGR6_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CFGR6_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CNTR6_DEF   {  //!< DMA channel 6 number of data register
    struct {
      __IO uint32_t   NDT : 16; //!<[00] Number of data to transfer
    } B;
    __IO uint32_t  R;
    explicit CNTR6_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CNTR6_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CNTR6_DEF r; r.R = R;
      R = f (r);
    }
  };
  union PADDR6_DEF  {  //!< DMA channel 6 peripheral address register
    struct {
      __IO uint32_t   PA : 32; //!<[00] Peripheral address
    } B;
    __IO uint32_t  R;
    explicit PADDR6_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      PADDR6_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      PADDR6_DEF r; r.R = R;
      R = f (r);
    }
  };
  union MADDR6_DEF  {  //!< DMA channel 6 memory address register
    struct {
      __IO uint32_t   MA : 32; //!<[00] Memory address
    } B;
    __IO uint32_t  R;
    explicit MADDR6_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      MADDR6_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      MADDR6_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CFGR7_DEF   {  //!< DMA channel configuration register (DMA_CFGR)
    struct {
      __IO ONE_BIT    EN      :  1; //!<[00] Channel enable
      __IO ONE_BIT    TCIE    :  1; //!<[01] Transfer complete interrupt enable
      __IO ONE_BIT    HTIE    :  1; //!<[02] Half Transfer interrupt enable
      __IO ONE_BIT    TEIE    :  1; //!<[03] Transfer error interrupt enable
      __IO ONE_BIT    DIR     :  1; //!<[04] Data transfer direction
      __IO ONE_BIT    CIRC    :  1; //!<[05] Circular mode
      __IO ONE_BIT    PINC    :  1; //!<[06] Peripheral increment mode
      __IO ONE_BIT    MINC    :  1; //!<[07] Memory increment mode
      __IO uint32_t   PSIZE   :  2; //!<[08] Peripheral size
      __IO uint32_t   MSIZE   :  2; //!<[10] Memory size
      __IO uint32_t   PL      :  2; //!<[12] Channel Priority level
      __IO ONE_BIT    MEM2MEM :  1; //!<[14] Memory to memory mode
    } B;
    __IO uint32_t  R;
    explicit CFGR7_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CFGR7_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CFGR7_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CNTR7_DEF   {  //!< DMA channel 7 number of data register
    struct {
      __IO uint32_t   NDT : 16; //!<[00] Number of data to transfer
    } B;
    __IO uint32_t  R;
    explicit CNTR7_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CNTR7_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CNTR7_DEF r; r.R = R;
      R = f (r);
    }
  };
  union PADDR7_DEF  {  //!< DMA channel 7 peripheral address register
    struct {
      __IO uint32_t   PA : 32; //!<[00] Peripheral address
    } B;
    __IO uint32_t  R;
    explicit PADDR7_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      PADDR7_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      PADDR7_DEF r; r.R = R;
      R = f (r);
    }
  };
  union MADDR7_DEF  {  //!< DMA channel 7 memory address register
    struct {
      __IO uint32_t   MA : 32; //!<[00] Memory address
    } B;
    __IO uint32_t  R;
    explicit MADDR7_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      MADDR7_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      MADDR7_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CFGR8_DEF   {  //!< DMA channel configuration register (DMA_CFGR) use in ch32v20_D8/D8W/D6
    struct {
      __IO ONE_BIT    EN      :  1; //!<[00] Channel enable
      __IO ONE_BIT    TCIE    :  1; //!<[01] Transfer complete interrupt enable
      __IO ONE_BIT    HTIE    :  1; //!<[02] Half Transfer interrupt enable
      __IO ONE_BIT    TEIE    :  1; //!<[03] Transfer error interrupt enable
      __IO ONE_BIT    DIR     :  1; //!<[04] Data transfer direction
      __IO ONE_BIT    CIRC    :  1; //!<[05] Circular mode
      __IO ONE_BIT    PINC    :  1; //!<[06] Peripheral increment mode
      __IO ONE_BIT    MINC    :  1; //!<[07] Memory increment mode
      __IO uint32_t   PSIZE   :  2; //!<[08] Peripheral size
      __IO uint32_t   MSIZE   :  2; //!<[10] Memory size
      __IO uint32_t   PL      :  2; //!<[12] Channel Priority level
      __IO ONE_BIT    MEM2MEM :  1; //!<[14] Memory to memory mode
    } B;
    __IO uint32_t  R;
    explicit CFGR8_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CFGR8_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CFGR8_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CNTR8_DEF   {  //!< DMA channel 8 number of data register use in ch32v20_D8/D8W/D6
    struct {
      __IO uint32_t   NDT : 16; //!<[00] Number of data to transfer
    } B;
    __IO uint32_t  R;
    explicit CNTR8_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CNTR8_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CNTR8_DEF r; r.R = R;
      R = f (r);
    }
  };
  union PADDR8_DEF  {  //!< DMA channel 8 peripheral address register use in ch32v20_D8/D8W/D6
    struct {
      __IO uint32_t   PA : 32; //!<[00] Peripheral address
    } B;
    __IO uint32_t  R;
    explicit PADDR8_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      PADDR8_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      PADDR8_DEF r; r.R = R;
      R = f (r);
    }
  };
  union MADDR8_DEF  {  //!< DMA channel 8 memory address register use in ch32v20_D8/D8W/D6
    struct {
      __IO uint32_t   MA : 32; //!<[00] Memory address
    } B;
    __IO uint32_t  R;
    explicit MADDR8_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      MADDR8_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      MADDR8_DEF r; r.R = R;
      R = f (r);
    }
  };
  // PERIPHERAL DMA1 REGISTERS INSTANCES
  __I  INTFR_DEF             INTFR ;  //!< [0000](04)[0x00000000]
  __O  INTFCR_DEF           INTFCR ;  //!< [0004](04)[0x00000000]
  __IO CFGR1_DEF             CFGR1 ;  //!< [0008](04)[0x00000000]
  __IO CNTR1_DEF             CNTR1 ;  //!< [000c](04)[0x00000000]
  __IO PADDR1_DEF           PADDR1 ;  //!< [0010](04)[0x00000000]
  __IO MADDR1_DEF           MADDR1 ;  //!< [0014](04)[0x00000000]
       uint32_t          UNUSED0 ;  //!< [0018](04)[0xFFFFFFFF]
  __IO CFGR2_DEF             CFGR2 ;  //!< [001c](04)[0x00000000]
  __IO CNTR2_DEF             CNTR2 ;  //!< [0020](04)[0x00000000]
  __IO PADDR2_DEF           PADDR2 ;  //!< [0024](04)[0x00000000]
  __IO MADDR2_DEF           MADDR2 ;  //!< [0028](04)[0x00000000]
       uint32_t          UNUSED1 ;  //!< [002c](04)[0xFFFFFFFF]
  __IO CFGR3_DEF             CFGR3 ;  //!< [0030](04)[0x00000000]
  __IO CNTR3_DEF             CNTR3 ;  //!< [0034](04)[0x00000000]
  __IO PADDR3_DEF           PADDR3 ;  //!< [0038](04)[0x00000000]
  __IO MADDR3_DEF           MADDR3 ;  //!< [003c](04)[0x00000000]
       uint32_t          UNUSED2 ;  //!< [0040](04)[0xFFFFFFFF]
  __IO CFGR4_DEF             CFGR4 ;  //!< [0044](04)[0x00000000]
  __IO CNTR4_DEF             CNTR4 ;  //!< [0048](04)[0x00000000]
  __IO PADDR4_DEF           PADDR4 ;  //!< [004c](04)[0x00000000]
  __IO MADDR4_DEF           MADDR4 ;  //!< [0050](04)[0x00000000]
       uint32_t          UNUSED3 ;  //!< [0054](04)[0xFFFFFFFF]
  __IO CFGR5_DEF             CFGR5 ;  //!< [0058](04)[0x00000000]
  __IO CNTR5_DEF             CNTR5 ;  //!< [005c](04)[0x00000000]
  __IO PADDR5_DEF           PADDR5 ;  //!< [0060](04)[0x00000000]
  __IO MADDR5_DEF           MADDR5 ;  //!< [0064](04)[0x00000000]
       uint32_t          UNUSED4 ;  //!< [0068](04)[0xFFFFFFFF]
  __IO CFGR6_DEF             CFGR6 ;  //!< [006c](04)[0x00000000]
  __IO CNTR6_DEF             CNTR6 ;  //!< [0070](04)[0x00000000]
  __IO PADDR6_DEF           PADDR6 ;  //!< [0074](04)[0x00000000]
  __IO MADDR6_DEF           MADDR6 ;  //!< [0078](04)[0x00000000]
       uint32_t          UNUSED5 ;  //!< [007c](04)[0xFFFFFFFF]
  __IO CFGR7_DEF             CFGR7 ;  //!< [0080](04)[0x00000000]
  __IO CNTR7_DEF             CNTR7 ;  //!< [0084](04)[0x00000000]
  __IO PADDR7_DEF           PADDR7 ;  //!< [0088](04)[0x00000000]
  __IO MADDR7_DEF           MADDR7 ;  //!< [008c](04)[0x00000000]
       uint32_t          UNUSED6 ;  //!< [0090](04)[0xFFFFFFFF]
  __IO CFGR8_DEF             CFGR8 ;  //!< [0094](04)[0x00000000]
  __IO CNTR8_DEF             CNTR8 ;  //!< [0098](04)[0x00000000]
  __IO PADDR8_DEF           PADDR8 ;  //!< [009c](04)[0x00000000]
  __IO MADDR8_DEF           MADDR8 ;  //!< [00a0](04)[0x00000000]
}; /* total size = 0x0400, struct size = 0x00A4 */

// ////////////////////+++ RTC +-+//////////////////// //
struct RTC_Type          { /*!< Real time clock */
  union CTLRH_DEF {  //!< RTC Control Register High
    struct {
      __IO ONE_BIT  SECIE :  1; //!<[00] Second interrupt Enable
      __IO ONE_BIT  ALRIE :  1; //!<[01] Alarm interrupt Enable
      __IO ONE_BIT  OWIE  :  1; //!<[02] Overflow interrupt Enable
    } B;
    __IO uint32_t  R;
    explicit CTLRH_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CTLRH_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CTLRH_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CTLRL_DEF {  //!< RTC Control Register Low
    struct {
      __IO ONE_BIT  SECF  :  1; //!<[00] Second Flag
      __IO ONE_BIT  ALRF  :  1; //!<[01] Alarm Flag
      __IO ONE_BIT  OWF   :  1; //!<[02] Overflow Flag
      __IO ONE_BIT  RSF   :  1; //!<[03] Registers Synchronized Flag
      __IO ONE_BIT  CNF   :  1; //!<[04] Configuration Flag
      __I  ONE_BIT  RTOFF :  1; //!<[05] RTC operation OFF
    } B;
    __IO uint32_t  R;
    explicit CTLRL_DEF () noexcept { R = 0x00000020u; }
    template<typename F> void setbit (F f) volatile {
      CTLRL_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CTLRL_DEF r; r.R = R;
      R = f (r);
    }
  };
  union PSCRH_DEF {  //!< RTC Prescaler Load Register High
    struct {
      __O  uint32_t   PRLH :  4; //!<[00] RTC Prescaler Load Register High
    } B;
    __O  uint32_t  R;
    explicit PSCRH_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      PSCRH_DEF r;
      R = f (r);
    }
  };
  union PSCRL_DEF {  //!< RTC Prescaler Load Register Low
    struct {
      __O  uint32_t   PRLL : 16; //!<[00] RTC Prescaler Divider Register Low
    } B;
    __O  uint32_t  R;
    explicit PSCRL_DEF () noexcept { R = 0x00008000u; }
    template<typename F> void setbit (F f) volatile {
      PSCRL_DEF r;
      R = f (r);
    }
  };
  union DIVH_DEF  {  //!< RTC Prescaler Divider Register High
    struct {
      __I  uint32_t   DIVH :  4; //!<[00] RTC prescaler divider register high
    } B;
    __I  uint32_t  R;

    explicit DIVH_DEF (volatile DIVH_DEF & o) noexcept { R = o.R; };
  };
  union DIVL_DEF  {  //!< RTC Prescaler Divider Register Low
    struct {
      __I  uint32_t   DIVL : 16; //!<[00] RTC prescaler divider register Low
    } B;
    __I  uint32_t  R;

    explicit DIVL_DEF (volatile DIVL_DEF & o) noexcept { R = o.R; };
  };
  union CNTH_DEF  {  //!< RTC Counter Register High
    struct {
      __IO uint32_t   CNTH : 16; //!<[00] RTC counter register high
    } B;
    __IO uint32_t  R;
    explicit CNTH_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CNTH_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CNTH_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CNTL_DEF  {  //!< RTC Counter Register Low
    struct {
      __IO uint32_t   CNTL : 16; //!<[00] RTC counter register Low
    } B;
    __IO uint32_t  R;
    explicit CNTL_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CNTL_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CNTL_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ALRMH_DEF {  //!< RTC Alarm Register High
    struct {
      __O  uint32_t   ALRH : 16; //!<[00] RTC alarm register high
    } B;
    __O  uint32_t  R;
    explicit ALRMH_DEF () noexcept { R = 0x0000ffffu; }
    template<typename F> void setbit (F f) volatile {
      ALRMH_DEF r;
      R = f (r);
    }
  };
  union ALRML_DEF {  //!< RTC Alarm Register Low
    struct {
      __O  uint32_t   ALRL : 16; //!<[00] RTC alarm register low
    } B;
    __O  uint32_t  R;
    explicit ALRML_DEF () noexcept { R = 0x0000ffffu; }
    template<typename F> void setbit (F f) volatile {
      ALRML_DEF r;
      R = f (r);
    }
  };
  // PERIPHERAL RTC REGISTERS INSTANCES
  __IO CTLRH_DEF           CTLRH ;  //!< [0000](04)[0x00000000]
  __IO CTLRL_DEF           CTLRL ;  //!< [0004](04)[0x00000020]
  __O  PSCRH_DEF           PSCRH ;  //!< [0008](04)[0x00000000]
  __O  PSCRL_DEF           PSCRL ;  //!< [000c](04)[0x00008000]
  __I  DIVH_DEF             DIVH ;  //!< [0010](04)[0x00000000]
  __I  DIVL_DEF             DIVL ;  //!< [0014](04)[0x00008000]
  __IO CNTH_DEF             CNTH ;  //!< [0018](04)[0x00000000]
  __IO CNTL_DEF             CNTL ;  //!< [001c](04)[0x00000000]
  __O  ALRMH_DEF           ALRMH ;  //!< [0020](04)[0x0000FFFF]
  __O  ALRML_DEF           ALRML ;  //!< [0024](04)[0x0000FFFF]
}; /* total size = 0x0400, struct size = 0x0028 */

// ////////////////////+++ BKP +-+//////////////////// //
struct BKP_Type          { /*!< Backup registers */
  union DATAR1_DEF  {  //!< Backup data register (BKP_DR)
    struct {
      __IO uint32_t   D1 : 16; //!<[00] Backup data
    } B;
    __IO uint32_t  R;
    explicit DATAR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DATAR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DATAR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DATAR2_DEF  {  //!< Backup data register (BKP_DR)
    struct {
      __IO uint32_t   D2 : 16; //!<[00] Backup data
    } B;
    __IO uint32_t  R;
    explicit DATAR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DATAR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DATAR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DATAR3_DEF  {  //!< Backup data register (BKP_DR)
    struct {
      __IO uint32_t   D3 : 16; //!<[00] Backup data
    } B;
    __IO uint32_t  R;
    explicit DATAR3_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DATAR3_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DATAR3_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DATAR4_DEF  {  //!< Backup data register (BKP_DR)
    struct {
      __IO uint32_t   D4 : 16; //!<[00] Backup data
    } B;
    __IO uint32_t  R;
    explicit DATAR4_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DATAR4_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DATAR4_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DATAR5_DEF  {  //!< Backup data register (BKP_DR)
    struct {
      __IO uint32_t   D5 : 16; //!<[00] Backup data
    } B;
    __IO uint32_t  R;
    explicit DATAR5_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DATAR5_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DATAR5_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DATAR6_DEF  {  //!< Backup data register (BKP_DR)
    struct {
      __IO uint32_t   D6 : 16; //!<[00] Backup data
    } B;
    __IO uint32_t  R;
    explicit DATAR6_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DATAR6_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DATAR6_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DATAR7_DEF  {  //!< Backup data register (BKP_DR)
    struct {
      __IO uint32_t   D7 : 16; //!<[00] Backup data
    } B;
    __IO uint32_t  R;
    explicit DATAR7_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DATAR7_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DATAR7_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DATAR8_DEF  {  //!< Backup data register (BKP_DR)
    struct {
      __IO uint32_t   D8 : 16; //!<[00] Backup data
    } B;
    __IO uint32_t  R;
    explicit DATAR8_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DATAR8_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DATAR8_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DATAR9_DEF  {  //!< Backup data register (BKP_DR)
    struct {
      __IO uint32_t   D9 : 16; //!<[00] Backup data
    } B;
    __IO uint32_t  R;
    explicit DATAR9_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DATAR9_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DATAR9_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DATAR10_DEF {  //!< Backup data register (BKP_DR)
    struct {
      __IO uint32_t   D10 : 16; //!<[00] Backup data
    } B;
    __IO uint32_t  R;
    explicit DATAR10_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DATAR10_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DATAR10_DEF r; r.R = R;
      R = f (r);
    }
  };
  union OCTLR_DEF   {  //!< RTC clock calibration register (BKP_OCTLR)
    struct {
      __IO uint32_t   CAL  :  7; //!<[00] Calibration value
      __IO ONE_BIT    CCO  :  1; //!<[07] Calibration Clock Output
      __IO ONE_BIT    ASOE :  1; //!<[08] Alarm or second output enable
      __IO ONE_BIT    ASOS :  1; //!<[09] Alarm or second output selection
    } B;
    __IO uint32_t  R;
    explicit OCTLR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      OCTLR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      OCTLR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union TPCTLR_DEF  {  //!< Backup control register (BKP_TPCTLR)
    struct {
      __IO ONE_BIT  TPE  :  1; //!<[00] Tamper pin enable
      __IO ONE_BIT  TPAL :  1; //!<[01] Tamper pin active level
    } B;
    __IO uint32_t  R;
    explicit TPCTLR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      TPCTLR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      TPCTLR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union TPCSR_DEF   {  //!< BKP_TPCSR control/status register (BKP_CSR)
    struct {
      __O  ONE_BIT    CTE     :  1; //!<[00] Clear Tamper event
      __O  ONE_BIT    CTI     :  1; //!<[01] Clear Tamper Interrupt
      __IO ONE_BIT    TPIE    :  1; //!<[02] Tamper Pin interrupt enable
           uint32_t   UNUSED0 :  5; //!<[03] 
      __I  ONE_BIT    TEF     :  1; //!<[08] Tamper Event Flag
      __I  ONE_BIT    TIF     :  1; //!<[09] Tamper Interrupt Flag
    } B;
    __IO uint32_t  R;
    explicit TPCSR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      TPCSR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      TPCSR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DATAR11_DEF {  //!< Backup data register (BKP_DR)
    struct {
      __IO uint32_t   DR11 : 16; //!<[00] Backup data
    } B;
    __IO uint32_t  R;
    explicit DATAR11_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DATAR11_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DATAR11_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DATAR12_DEF {  //!< Backup data register (BKP_DR)
    struct {
      __IO uint32_t   DR12 : 16; //!<[00] Backup data
    } B;
    __IO uint32_t  R;
    explicit DATAR12_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DATAR12_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DATAR12_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DATAR13_DEF {  //!< Backup data register (BKP_DR)
    struct {
      __IO uint32_t   DR13 : 16; //!<[00] Backup data
    } B;
    __IO uint32_t  R;
    explicit DATAR13_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DATAR13_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DATAR13_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DATAR14_DEF {  //!< Backup data register (BKP_DR)
    struct {
      __IO uint32_t   D14 : 16; //!<[00] Backup data
    } B;
    __IO uint32_t  R;
    explicit DATAR14_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DATAR14_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DATAR14_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DATAR15_DEF {  //!< Backup data register (BKP_DR)
    struct {
      __IO uint32_t   D15 : 16; //!<[00] Backup data
    } B;
    __IO uint32_t  R;
    explicit DATAR15_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DATAR15_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DATAR15_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DATAR16_DEF {  //!< Backup data register (BKP_DR)
    struct {
      __IO uint32_t   D16 : 16; //!<[00] Backup data
    } B;
    __IO uint32_t  R;
    explicit DATAR16_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DATAR16_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DATAR16_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DATAR17_DEF {  //!< Backup data register (BKP_DR)
    struct {
      __IO uint32_t   D17 : 16; //!<[00] Backup data
    } B;
    __IO uint32_t  R;
    explicit DATAR17_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DATAR17_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DATAR17_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DATAR18_DEF {  //!< Backup data register (BKP_DR)
    struct {
      __IO uint32_t   D18 : 16; //!<[00] Backup data
    } B;
    __IO uint32_t  R;
    explicit DATAR18_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DATAR18_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DATAR18_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DATAR19_DEF {  //!< Backup data register (BKP_DR)
    struct {
      __IO uint32_t   D19 : 16; //!<[00] Backup data
    } B;
    __IO uint32_t  R;
    explicit DATAR19_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DATAR19_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DATAR19_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DATAR20_DEF {  //!< Backup data register (BKP_DR)
    struct {
      __IO uint32_t   D20 : 16; //!<[00] Backup data
    } B;
    __IO uint32_t  R;
    explicit DATAR20_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DATAR20_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DATAR20_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DATAR21_DEF {  //!< Backup data register (BKP_DR)
    struct {
      __IO uint32_t   D21 : 16; //!<[00] Backup data
    } B;
    __IO uint32_t  R;
    explicit DATAR21_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DATAR21_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DATAR21_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DATAR22_DEF {  //!< Backup data register (BKP_DR)
    struct {
      __IO uint32_t   D22 : 16; //!<[00] Backup data
    } B;
    __IO uint32_t  R;
    explicit DATAR22_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DATAR22_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DATAR22_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DATAR23_DEF {  //!< Backup data register (BKP_DR)
    struct {
      __IO uint32_t   D23 : 16; //!<[00] Backup data
    } B;
    __IO uint32_t  R;
    explicit DATAR23_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DATAR23_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DATAR23_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DATAR24_DEF {  //!< Backup data register (BKP_DR)
    struct {
      __IO uint32_t   D24 : 16; //!<[00] Backup data
    } B;
    __IO uint32_t  R;
    explicit DATAR24_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DATAR24_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DATAR24_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DATAR25_DEF {  //!< Backup data register (BKP_DR)
    struct {
      __IO uint32_t   D25 : 16; //!<[00] Backup data
    } B;
    __IO uint32_t  R;
    explicit DATAR25_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DATAR25_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DATAR25_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DATAR26_DEF {  //!< Backup data register (BKP_DR)
    struct {
      __IO uint32_t   D26 : 16; //!<[00] Backup data
    } B;
    __IO uint32_t  R;
    explicit DATAR26_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DATAR26_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DATAR26_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DATAR27_DEF {  //!< Backup data register (BKP_DR)
    struct {
      __IO uint32_t   D27 : 16; //!<[00] Backup data
    } B;
    __IO uint32_t  R;
    explicit DATAR27_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DATAR27_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DATAR27_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DATAR28_DEF {  //!< Backup data register (BKP_DR)
    struct {
      __IO uint32_t   D28 : 16; //!<[00] Backup data
    } B;
    __IO uint32_t  R;
    explicit DATAR28_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DATAR28_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DATAR28_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DATAR29_DEF {  //!< Backup data register (BKP_DR)
    struct {
      __IO uint32_t   D29 : 16; //!<[00] Backup data
    } B;
    __IO uint32_t  R;
    explicit DATAR29_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DATAR29_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DATAR29_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DATAR30_DEF {  //!< Backup data register (BKP_DR)
    struct {
      __IO uint32_t   D30 : 16; //!<[00] Backup data
    } B;
    __IO uint32_t  R;
    explicit DATAR30_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DATAR30_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DATAR30_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DATAR31_DEF {  //!< Backup data register (BKP_DR)
    struct {
      __IO uint32_t   D31 : 16; //!<[00] Backup data
    } B;
    __IO uint32_t  R;
    explicit DATAR31_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DATAR31_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DATAR31_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DATAR32_DEF {  //!< Backup data register (BKP_DR)
    struct {
      __IO uint32_t   D32 : 16; //!<[00] Backup data
    } B;
    __IO uint32_t  R;
    explicit DATAR32_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DATAR32_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DATAR32_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DATAR33_DEF {  //!< Backup data register (BKP_DR)
    struct {
      __IO uint32_t   D33 : 16; //!<[00] Backup data
    } B;
    __IO uint32_t  R;
    explicit DATAR33_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DATAR33_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DATAR33_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DATAR34_DEF {  //!< Backup data register (BKP_DR)
    struct {
      __IO uint32_t   D34 : 16; //!<[00] Backup data
    } B;
    __IO uint32_t  R;
    explicit DATAR34_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DATAR34_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DATAR34_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DATAR35_DEF {  //!< Backup data register (BKP_DR)
    struct {
      __IO uint32_t   D35 : 16; //!<[00] Backup data
    } B;
    __IO uint32_t  R;
    explicit DATAR35_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DATAR35_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DATAR35_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DATAR36_DEF {  //!< Backup data register (BKP_DR)
    struct {
      __IO uint32_t   D36 : 16; //!<[00] Backup data
    } B;
    __IO uint32_t  R;
    explicit DATAR36_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DATAR36_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DATAR36_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DATAR37_DEF {  //!< Backup data register (BKP_DR)
    struct {
      __IO uint32_t   D37 : 16; //!<[00] Backup data
    } B;
    __IO uint32_t  R;
    explicit DATAR37_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DATAR37_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DATAR37_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DATAR38_DEF {  //!< Backup data register (BKP_DR)
    struct {
      __IO uint32_t   D38 : 16; //!<[00] Backup data
    } B;
    __IO uint32_t  R;
    explicit DATAR38_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DATAR38_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DATAR38_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DATAR39_DEF {  //!< Backup data register (BKP_DR)
    struct {
      __IO uint32_t   D39 : 16; //!<[00] Backup data
    } B;
    __IO uint32_t  R;
    explicit DATAR39_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DATAR39_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DATAR39_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DATAR40_DEF {  //!< Backup data register (BKP_DR)
    struct {
      __IO uint32_t   D40 : 16; //!<[00] Backup data
    } B;
    __IO uint32_t  R;
    explicit DATAR40_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DATAR40_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DATAR40_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DATAR41_DEF {  //!< Backup data register (BKP_DR)
    struct {
      __IO uint32_t   D41 : 16; //!<[00] Backup data
    } B;
    __IO uint32_t  R;
    explicit DATAR41_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DATAR41_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DATAR41_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DATAR42_DEF {  //!< Backup data register (BKP_DR)
    struct {
      __IO uint32_t   D42 : 16; //!<[00] Backup data
    } B;
    __IO uint32_t  R;
    explicit DATAR42_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DATAR42_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DATAR42_DEF r; r.R = R;
      R = f (r);
    }
  };
  // PERIPHERAL BKP REGISTERS INSTANCES
       uint32_t          UNUSED0 ;  //!< [0000](04)[0xFFFFFFFF]
  __IO DATAR1_DEF           DATAR1 ;  //!< [0004](04)[0x00000000]
  __IO DATAR2_DEF           DATAR2 ;  //!< [0008](04)[0x00000000]
  __IO DATAR3_DEF           DATAR3 ;  //!< [000c](04)[0x00000000]
  __IO DATAR4_DEF           DATAR4 ;  //!< [0010](04)[0x00000000]
  __IO DATAR5_DEF           DATAR5 ;  //!< [0014](04)[0x00000000]
  __IO DATAR6_DEF           DATAR6 ;  //!< [0018](04)[0x00000000]
  __IO DATAR7_DEF           DATAR7 ;  //!< [001c](04)[0x00000000]
  __IO DATAR8_DEF           DATAR8 ;  //!< [0020](04)[0x00000000]
  __IO DATAR9_DEF           DATAR9 ;  //!< [0024](04)[0x00000000]
  __IO DATAR10_DEF         DATAR10 ;  //!< [0028](04)[0x00000000]
  __IO OCTLR_DEF             OCTLR ;  //!< [002c](04)[0x00000000]
  __IO TPCTLR_DEF           TPCTLR ;  //!< [0030](04)[0x00000000]
  __IO TPCSR_DEF             TPCSR ;  //!< [0034](04)[0x00000000]
       uint32_t          UNUSED1 [2];  //!< [0038](08)[0xFFFFFFFF]
  __IO DATAR11_DEF         DATAR11 ;  //!< [0040](04)[0x00000000]
  __IO DATAR12_DEF         DATAR12 ;  //!< [0044](04)[0x00000000]
  __IO DATAR13_DEF         DATAR13 ;  //!< [0048](04)[0x00000000]
  __IO DATAR14_DEF         DATAR14 ;  //!< [004c](04)[0x00000000]
  __IO DATAR15_DEF         DATAR15 ;  //!< [0050](04)[0x00000000]
  __IO DATAR16_DEF         DATAR16 ;  //!< [0054](04)[0x00000000]
  __IO DATAR17_DEF         DATAR17 ;  //!< [0058](04)[0x00000000]
  __IO DATAR18_DEF         DATAR18 ;  //!< [005c](04)[0x00000000]
  __IO DATAR19_DEF         DATAR19 ;  //!< [0060](04)[0x00000000]
  __IO DATAR20_DEF         DATAR20 ;  //!< [0064](04)[0x00000000]
  __IO DATAR21_DEF         DATAR21 ;  //!< [0068](04)[0x00000000]
  __IO DATAR22_DEF         DATAR22 ;  //!< [006c](04)[0x00000000]
  __IO DATAR23_DEF         DATAR23 ;  //!< [0070](04)[0x00000000]
  __IO DATAR24_DEF         DATAR24 ;  //!< [0074](04)[0x00000000]
  __IO DATAR25_DEF         DATAR25 ;  //!< [0078](04)[0x00000000]
  __IO DATAR26_DEF         DATAR26 ;  //!< [007c](04)[0x00000000]
  __IO DATAR27_DEF         DATAR27 ;  //!< [0080](04)[0x00000000]
  __IO DATAR28_DEF         DATAR28 ;  //!< [0084](04)[0x00000000]
  __IO DATAR29_DEF         DATAR29 ;  //!< [0088](04)[0x00000000]
  __IO DATAR30_DEF         DATAR30 ;  //!< [008c](04)[0x00000000]
  __IO DATAR31_DEF         DATAR31 ;  //!< [0090](04)[0x00000000]
  __IO DATAR32_DEF         DATAR32 ;  //!< [0094](04)[0x00000000]
  __IO DATAR33_DEF         DATAR33 ;  //!< [0098](04)[0x00000000]
  __IO DATAR34_DEF         DATAR34 ;  //!< [009c](04)[0x00000000]
  __IO DATAR35_DEF         DATAR35 ;  //!< [00a0](04)[0x00000000]
  __IO DATAR36_DEF         DATAR36 ;  //!< [00a4](04)[0x00000000]
  __IO DATAR37_DEF         DATAR37 ;  //!< [00a8](04)[0x00000000]
  __IO DATAR38_DEF         DATAR38 ;  //!< [00ac](04)[0x00000000]
  __IO DATAR39_DEF         DATAR39 ;  //!< [00b0](04)[0x00000000]
  __IO DATAR40_DEF         DATAR40 ;  //!< [00b4](04)[0x00000000]
  __IO DATAR41_DEF         DATAR41 ;  //!< [00b8](04)[0x00000000]
  __IO DATAR42_DEF         DATAR42 ;  //!< [00bc](04)[0x00000000]
}; /* total size = 0x0400, struct size = 0x00C0 */

// ////////////////////+++ IWDG +-+//////////////////// //
struct IWDG_Type         { /*!< Independent watchdog */
  union CTLR_DEF  {  //!< Key register (IWDG_CTLR)
    struct {
      __O  uint32_t   KEY : 16; //!<[00] Key value
    } B;
    __O  uint32_t  R;
    explicit CTLR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CTLR_DEF r;
      R = f (r);
    }
  };
  union PSCR_DEF  {  //!< Prescaler register (IWDG_PSCR)
    struct {
      __IO uint32_t   PR :  3; //!<[00] Prescaler divider
    } B;
    __IO uint32_t  R;
    explicit PSCR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      PSCR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      PSCR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union RLDR_DEF  {  //!< Reload register (IWDG_RLDR)
    struct {
      __IO uint32_t   RL : 12; //!<[00] Watchdog counter reload value
    } B;
    __IO uint32_t  R;
    explicit RLDR_DEF () noexcept { R = 0x00000fffu; }
    template<typename F> void setbit (F f) volatile {
      RLDR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      RLDR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union STATR_DEF {  //!< Status register (IWDG_SR)
    struct {
      __I  ONE_BIT  PVU :  1; //!<[00] Watchdog prescaler value update
      __I  ONE_BIT  RVU :  1; //!<[01] Watchdog counter reload value update
    } B;
    __I  uint32_t  R;

    explicit STATR_DEF (volatile STATR_DEF & o) noexcept { R = o.R; };
  };
  // PERIPHERAL IWDG REGISTERS INSTANCES
  __O  CTLR_DEF             CTLR ;  //!< [0000](04)[0x00000000]
  __IO PSCR_DEF             PSCR ;  //!< [0004](04)[0x00000000]
  __IO RLDR_DEF             RLDR ;  //!< [0008](04)[0x00000FFF]
  __I  STATR_DEF           STATR ;  //!< [000c](04)[0x00000000]
}; /* total size = 0x0400, struct size = 0x0010 */

// ////////////////////+++ WWDG +-+//////////////////// //
struct WWDG_Type         { /*!< Window watchdog */
  union CTLR_DEF  {  //!< Control register (WWDG_CR)
    struct {
      __IO uint32_t   T    :  7; //!<[00] 7-bit counter (MSB to LSB)
      __IO ONE_BIT    WDGA :  1; //!<[07] Activation bit
    } B;
    __IO uint32_t  R;
    explicit CTLR_DEF () noexcept { R = 0x0000007fu; }
    template<typename F> void setbit (F f) volatile {
      CTLR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CTLR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CFGR_DEF  {  //!< Configuration register (WWDG_CFR)
    struct {
      __IO uint32_t   W     :  7; //!<[00] 7-bit window value
      __IO uint32_t   WDGTB :  2; //!<[07] Timer Base
      __IO ONE_BIT    EWI   :  1; //!<[09] Early Wakeup Interrupt
    } B;
    __IO uint32_t  R;
    explicit CFGR_DEF () noexcept { R = 0x0000007fu; }
    template<typename F> void setbit (F f) volatile {
      CFGR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CFGR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union STATR_DEF {  //!< Status register (WWDG_SR)
    struct {
      __IO ONE_BIT  WEIF :  1; //!<[00] Early Wakeup Interrupt Flag
    } B;
    __IO uint32_t  R;
    explicit STATR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      STATR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      STATR_DEF r; r.R = R;
      R = f (r);
    }
  };
  // PERIPHERAL WWDG REGISTERS INSTANCES
  __IO CTLR_DEF             CTLR ;  //!< [0000](04)[0x0000007F]
  __IO CFGR_DEF             CFGR ;  //!< [0004](04)[0x0000007F]
  __IO STATR_DEF           STATR ;  //!< [0008](04)[0x00000000]
}; /* total size = 0x0400, struct size = 0x000C */

// ////////////////////+++ TIM1 +-+//////////////////// //
struct TIM1_Type         { /*!< Advanced timer */
  union CTLR1_DEF          {  //!< control register 1
    struct {
      __IO ONE_BIT    CEN  :  1; //!<[00] Counter enable
      __IO ONE_BIT    UDIS :  1; //!<[01] Update disable
      __IO ONE_BIT    URS  :  1; //!<[02] Update request source
      __IO ONE_BIT    OPM  :  1; //!<[03] One-pulse mode
      __IO ONE_BIT    DIR  :  1; //!<[04] Direction
      __IO uint32_t   CMS  :  2; //!<[05] Center-aligned mode selection
      __IO ONE_BIT    ARPE :  1; //!<[07] Auto-reload preload enable
      __IO uint32_t   CKD  :  2; //!<[08] Clock division
    } B;
    __IO uint32_t  R;
    explicit CTLR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CTLR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CTLR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CTLR2_DEF          {  //!< control register 2
    struct {
      __IO ONE_BIT    CCPC    :  1; //!<[00] Capture/compare preloaded control
           ONE_BIT    UNUSED0 :  1; //!<[01] 
      __IO ONE_BIT    CCUS    :  1; //!<[02] Capture/compare control update selection
      __IO ONE_BIT    CCDS    :  1; //!<[03] Capture/compare DMA selection
      __IO uint32_t   MMS     :  3; //!<[04] Master mode selection
      __IO ONE_BIT    TI1S    :  1; //!<[07] TI1 selection
      __IO ONE_BIT    OIS1    :  1; //!<[08] Output Idle state 1
      __IO ONE_BIT    OIS1N   :  1; //!<[09] Output Idle state 1
      __IO ONE_BIT    OIS2    :  1; //!<[10] Output Idle state 2
      __IO ONE_BIT    OIS2N   :  1; //!<[11] Output Idle state 2
      __IO ONE_BIT    OIS3    :  1; //!<[12] Output Idle state 3
      __IO ONE_BIT    OIS3N   :  1; //!<[13] Output Idle state 3
      __IO ONE_BIT    OIS4    :  1; //!<[14] Output Idle state 4
    } B;
    __IO uint32_t  R;
    explicit CTLR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CTLR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CTLR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union SMCFGR_DEF         {  //!< slave mode control register
    struct {
      __IO uint32_t   SMS     :  3; //!<[00] Slave mode selection
           ONE_BIT    UNUSED0 :  1; //!<[03] 
      __IO uint32_t   TS      :  3; //!<[04] Trigger selection
      __IO ONE_BIT    MSM     :  1; //!<[07] Master/Slave mode
      __IO uint32_t   ETF     :  4; //!<[08] External trigger filter
      __IO uint32_t   ETPS    :  2; //!<[12] External trigger prescaler
      __IO ONE_BIT    ECE     :  1; //!<[14] External clock enable
      __IO ONE_BIT    ETP     :  1; //!<[15] External trigger polarity
    } B;
    __IO uint32_t  R;
    explicit SMCFGR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      SMCFGR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      SMCFGR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DMAINTENR_DEF      {  //!< DMA/Interrupt enable register
    struct {
      __IO ONE_BIT  UIE   :  1; //!<[00] Update interrupt enable
      __IO ONE_BIT  CC1IE :  1; //!<[01] Capture/Compare 1 interrupt enable
      __IO ONE_BIT  CC2IE :  1; //!<[02] Capture/Compare 2 interrupt enable
      __IO ONE_BIT  CC3IE :  1; //!<[03] Capture/Compare 3 interrupt enable
      __IO ONE_BIT  CC4IE :  1; //!<[04] Capture/Compare 4 interrupt enable
      __IO ONE_BIT  COMIE :  1; //!<[05] COM interrupt enable
      __IO ONE_BIT  TIE   :  1; //!<[06] Trigger interrupt enable
      __IO ONE_BIT  BIE   :  1; //!<[07] Break interrupt enable
      __IO ONE_BIT  UDE   :  1; //!<[08] Update DMA request enable
      __IO ONE_BIT  CC1DE :  1; //!<[09] Capture/Compare 1 DMA request enable
      __IO ONE_BIT  CC2DE :  1; //!<[10] Capture/Compare 2 DMA request enable
      __IO ONE_BIT  CC3DE :  1; //!<[11] Capture/Compare 3 DMA request enable
      __IO ONE_BIT  CC4DE :  1; //!<[12] Capture/Compare 4 DMA request enable
      __IO ONE_BIT  COMDE :  1; //!<[13] COM DMA request enable
      __IO ONE_BIT  TDE   :  1; //!<[14] Trigger DMA request enable
    } B;
    __IO uint32_t  R;
    explicit DMAINTENR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DMAINTENR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DMAINTENR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union INTFR_DEF          {  //!< status register
    struct {
      __IO ONE_BIT  UIF     :  1; //!<[00] Update interrupt flag
      __IO ONE_BIT  CC1IF   :  1; //!<[01] Capture/compare 1 interrupt flag
      __IO ONE_BIT  CC2IF   :  1; //!<[02] Capture/Compare 2 interrupt flag
      __IO ONE_BIT  CC3IF   :  1; //!<[03] Capture/Compare 3 interrupt flag
      __IO ONE_BIT  CC4IF   :  1; //!<[04] Capture/Compare 4 interrupt flag
      __IO ONE_BIT  COMIF   :  1; //!<[05] COM interrupt flag
      __IO ONE_BIT  TIF     :  1; //!<[06] Trigger interrupt flag
      __IO ONE_BIT  BIF     :  1; //!<[07] Break interrupt flag
           ONE_BIT  UNUSED0 :  1; //!<[08] 
      __IO ONE_BIT  CC1OF   :  1; //!<[09] Capture/Compare 1 overcapture flag
      __IO ONE_BIT  CC2OF   :  1; //!<[10] Capture/compare 2 overcapture flag
      __IO ONE_BIT  CC3OF   :  1; //!<[11] Capture/Compare 3 overcapture flag
      __IO ONE_BIT  CC4OF   :  1; //!<[12] Capture/Compare 4 overcapture flag
    } B;
    __IO uint32_t  R;
    explicit INTFR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      INTFR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      INTFR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union SWEVGR_DEF         {  //!< event generation register
    struct {
      __O  ONE_BIT  UG   :  1; //!<[00] Update generation
      __O  ONE_BIT  CC1G :  1; //!<[01] Capture/compare 1 generation
      __O  ONE_BIT  CC2G :  1; //!<[02] Capture/compare 2 generation
      __O  ONE_BIT  CC3G :  1; //!<[03] Capture/compare 3 generation
      __O  ONE_BIT  CC4G :  1; //!<[04] Capture/compare 4 generation
      __O  ONE_BIT  COMG :  1; //!<[05] Capture/Compare control update generation
      __O  ONE_BIT  TG   :  1; //!<[06] Trigger generation
      __O  ONE_BIT  BG   :  1; //!<[07] Break generation
    } B;
    __O  uint32_t  R;
    explicit SWEVGR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      SWEVGR_DEF r;
      R = f (r);
    }
  };
  union CHCTLR1_Input_DEF  {  //!< capture/compare mode register 1 (input mode)
    struct {
      __IO uint32_t   CC1S   :  2; //!<[00] Capture/Compare 1 selection
      __IO uint32_t   IC1PSC :  2; //!<[02] Input capture 1 prescaler
      __IO uint32_t   IC1F   :  4; //!<[04] Input capture 1 filter
      __IO uint32_t   CC2S   :  2; //!<[08] Capture/Compare 2 selection
      __IO uint32_t   IC2PCS :  2; //!<[10] Input capture 2 prescaler
      __IO uint32_t   IC2F   :  4; //!<[12] Input capture 2 filter
    } B;
    __IO uint32_t  R;
    explicit CHCTLR1_Input_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CHCTLR1_Input_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CHCTLR1_Input_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CHCTLR1_Output_DEF {  //!< capture/compare mode register (output mode)
    struct {
      __IO uint32_t   CC1S  :  2; //!<[00] Capture/Compare 1 selection
      __IO ONE_BIT    OC1FE :  1; //!<[02] Output Compare 1 fast enable
      __IO ONE_BIT    OC1PE :  1; //!<[03] Output Compare 1 preload enable
      __IO uint32_t   OC1M  :  3; //!<[04] Output Compare 1 mode
      __IO ONE_BIT    OC1CE :  1; //!<[07] Output Compare 1 clear enable
      __IO uint32_t   CC2S  :  2; //!<[08] Capture/Compare 2 selection
      __IO ONE_BIT    OC2FE :  1; //!<[10] Output Compare 2 fast enable
      __IO ONE_BIT    OC2PE :  1; //!<[11] Output Compare 2 preload enable
      __IO uint32_t   OC2M  :  3; //!<[12] Output Compare 2 mode
      __IO ONE_BIT    OC2CE :  1; //!<[15] Output Compare 2 clear enable
    } B;
    __IO uint32_t  R;
    explicit CHCTLR1_Output_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CHCTLR1_Output_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CHCTLR1_Output_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CHCTLR2_Output_DEF {  //!< capture/compare mode register (output mode)
    struct {
      __IO uint32_t   CC3S  :  2; //!<[00] Capture/Compare 3 selection
      __IO ONE_BIT    OC3FE :  1; //!<[02] Output compare 3 fast enable
      __IO ONE_BIT    OC3PE :  1; //!<[03] Output compare 3 preload enable
      __IO uint32_t   OC3M  :  3; //!<[04] Output compare 3 mode
      __IO ONE_BIT    OC3CE :  1; //!<[07] Output compare 3 clear enable
      __IO uint32_t   CC4S  :  2; //!<[08] Capture/Compare 4 selection
      __IO ONE_BIT    OC4FE :  1; //!<[10] Output compare 4 fast enable
      __IO ONE_BIT    OC4PE :  1; //!<[11] Output compare 4 preload enable
      __IO uint32_t   OC4M  :  3; //!<[12] Output compare 4 mode
      __IO ONE_BIT    OC4CE :  1; //!<[15] Output compare 4 clear enable
    } B;
    __IO uint32_t  R;
    explicit CHCTLR2_Output_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CHCTLR2_Output_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CHCTLR2_Output_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CHCTLR2_Input_DEF  {  //!< capture/compare mode register 2 (input mode)
    struct {
      __IO uint32_t   CC3S   :  2; //!<[00] Capture/compare 3 selection
      __IO uint32_t   IC3PSC :  2; //!<[02] Input capture 3 prescaler
      __IO uint32_t   IC3F   :  4; //!<[04] Input capture 3 filter
      __IO uint32_t   CC4S   :  2; //!<[08] Capture/Compare 4 selection
      __IO uint32_t   IC4PSC :  2; //!<[10] Input capture 4 prescaler
      __IO uint32_t   IC4F   :  4; //!<[12] Input capture 4 filter
    } B;
    __IO uint32_t  R;
    explicit CHCTLR2_Input_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CHCTLR2_Input_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CHCTLR2_Input_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CCER_DEF           {  //!< capture/compare enable register
    struct {
      __IO ONE_BIT  CC1E  :  1; //!<[00] Capture/Compare 1 output enable
      __IO ONE_BIT  CC1P  :  1; //!<[01] Capture/Compare 1 output Polarity
      __IO ONE_BIT  CC1NE :  1; //!<[02] Capture/Compare 1 complementary output enable
      __IO ONE_BIT  CC1NP :  1; //!<[03] Capture/Compare 1 output Polarity
      __IO ONE_BIT  CC2E  :  1; //!<[04] Capture/Compare 2 output enable
      __IO ONE_BIT  CC2P  :  1; //!<[05] Capture/Compare 2 output Polarity
      __IO ONE_BIT  CC2NE :  1; //!<[06] Capture/Compare 2 complementary output enable
      __IO ONE_BIT  CC2NP :  1; //!<[07] Capture/Compare 2 output Polarity
      __IO ONE_BIT  CC3E  :  1; //!<[08] Capture/Compare 3 output enable
      __IO ONE_BIT  CC3P  :  1; //!<[09] Capture/Compare 3 output Polarity
      __IO ONE_BIT  CC3NE :  1; //!<[10] Capture/Compare 3 complementary output enable
      __IO ONE_BIT  CC3NP :  1; //!<[11] Capture/Compare 3 output Polarity
      __IO ONE_BIT  CC4E  :  1; //!<[12] Capture/Compare 4 output enable
      __IO ONE_BIT  CC4P  :  1; //!<[13] Capture/Compare 3 output Polarity
    } B;
    __IO uint32_t  R;
    explicit CCER_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CCER_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CCER_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CNT_DEF            {  //!< counter
    struct {
      __IO uint32_t   CNT : 16; //!<[00] counter value
    } B;
    __IO uint32_t  R;
    explicit CNT_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CNT_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CNT_DEF r; r.R = R;
      R = f (r);
    }
  };
  union PSC_DEF            {  //!< prescaler
    struct {
      __IO uint32_t   PSC : 16; //!<[00] Prescaler value
    } B;
    __IO uint32_t  R;
    explicit PSC_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      PSC_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      PSC_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ATRLR_DEF          {  //!< auto-reload register
    struct {
      __IO uint32_t   ATRLR : 16; //!<[00] Auto-reload value
    } B;
    __IO uint32_t  R;
    explicit ATRLR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ATRLR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ATRLR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union RPTCR_DEF          {  //!< repetition counter register
    struct {
      __IO uint32_t   RPTCR :  8; //!<[00] Repetition counter value
    } B;
    __IO uint32_t  R;
    explicit RPTCR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      RPTCR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      RPTCR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CH1CVR_DEF         {  //!< capture/compare register 1
    struct {
      __IO uint32_t   CH1CVR : 16; //!<[00] Capture/Compare 1 value
    } B;
    __IO uint32_t  R;
    explicit CH1CVR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CH1CVR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CH1CVR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CH2CVR_DEF         {  //!< capture/compare register 2
    struct {
      __IO uint32_t   CH2CVR : 16; //!<[00] Capture/Compare 2 value
    } B;
    __IO uint32_t  R;
    explicit CH2CVR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CH2CVR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CH2CVR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CH3CVR_DEF         {  //!< capture/compare register 3
    struct {
      __IO uint32_t   CH3CVR : 16; //!<[00] Capture/Compare value
    } B;
    __IO uint32_t  R;
    explicit CH3CVR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CH3CVR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CH3CVR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CH4CVR_DEF         {  //!< capture/compare register 4
    struct {
      __IO uint32_t   CH4CVR : 16; //!<[00] Capture/Compare value
    } B;
    __IO uint32_t  R;
    explicit CH4CVR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CH4CVR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CH4CVR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union BDTR_DEF           {  //!< break and dead-time register
    struct {
      __IO uint32_t   DTG  :  8; //!<[00] Dead-time generator setup
      __IO uint32_t   LOCK :  2; //!<[08] Lock configuration
      __IO ONE_BIT    OSSI :  1; //!<[10] Off-state selection for Idle mode
      __IO ONE_BIT    OSSR :  1; //!<[11] Off-state selection for Run mode
      __IO ONE_BIT    BKE  :  1; //!<[12] Break enable
      __IO ONE_BIT    BKP  :  1; //!<[13] Break polarity
      __IO ONE_BIT    AOE  :  1; //!<[14] Automatic output enable
      __IO ONE_BIT    MOE  :  1; //!<[15] Main output enable
    } B;
    __IO uint32_t  R;
    explicit BDTR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      BDTR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      BDTR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DMACFGR_DEF        {  //!< DMA control register
    struct {
      __IO uint32_t   DBA     :  5; //!<[00] DMA base address
           uint32_t   UNUSED0 :  3; //!<[05] 
      __IO uint32_t   DBL     :  5; //!<[08] DMA burst length
    } B;
    __IO uint32_t  R;
    explicit DMACFGR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DMACFGR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DMACFGR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DMAADR_DEF         {  //!< DMA address for full transfer
    struct {
      __IO uint32_t   DMAADR : 16; //!<[00] DMA register for burst accesses
    } B;
    __IO uint32_t  R;
    explicit DMAADR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DMAADR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DMAADR_DEF r; r.R = R;
      R = f (r);
    }
  };
  // PERIPHERAL TIM1 REGISTERS INSTANCES
  __IO CTLR1_DEF                    CTLR1 ;  //!< [0000](04)[0x00000000]
  __IO CTLR2_DEF                    CTLR2 ;  //!< [0004](04)[0x00000000]
  __IO SMCFGR_DEF                  SMCFGR ;  //!< [0008](04)[0x00000000]
  __IO DMAINTENR_DEF            DMAINTENR ;  //!< [000c](04)[0x00000000]
  __IO INTFR_DEF                    INTFR ;  //!< [0010](04)[0x00000000]
  __O  SWEVGR_DEF                  SWEVGR ;  //!< [0014](04)[0x00000000]
  MERGE {
  __IO CHCTLR1_Input_DEF    CHCTLR1_Input ;  //!< [0018](04)[0x00000000]
  __IO CHCTLR1_Output_DEF  CHCTLR1_Output ;  //!< [0018](04)[0x00000000]
  };
  MERGE {
  __IO CHCTLR2_Output_DEF  CHCTLR2_Output ;  //!< [001c](04)[0x00000000]
  __IO CHCTLR2_Input_DEF    CHCTLR2_Input ;  //!< [001c](04)[0x00000000]
  };
  __IO CCER_DEF                      CCER ;  //!< [0020](04)[0x00000000]
  __IO CNT_DEF                        CNT ;  //!< [0024](04)[0x00000000]
  __IO PSC_DEF                        PSC ;  //!< [0028](04)[0x00000000]
  __IO ATRLR_DEF                    ATRLR ;  //!< [002c](04)[0x00000000]
  __IO RPTCR_DEF                    RPTCR ;  //!< [0030](04)[0x00000000]
  __IO CH1CVR_DEF                  CH1CVR ;  //!< [0034](04)[0x00000000]
  __IO CH2CVR_DEF                  CH2CVR ;  //!< [0038](04)[0x00000000]
  __IO CH3CVR_DEF                  CH3CVR ;  //!< [003c](04)[0x00000000]
  __IO CH4CVR_DEF                  CH4CVR ;  //!< [0040](04)[0x00000000]
  __IO BDTR_DEF                      BDTR ;  //!< [0044](04)[0x00000000]
  __IO DMACFGR_DEF                DMACFGR ;  //!< [0048](04)[0x00000000]
  __IO DMAADR_DEF                  DMAADR ;  //!< [004c](04)[0x00000000]
}; /* total size = 0x0400, struct size = 0x0050 */

// ////////////////////+++ TIM2 +-+//////////////////// //
struct TIM2_Type         { /*!< General purpose timer */
  union CTLR1_DEF         {  //!< control register 1
    struct {
      __IO ONE_BIT    CEN  :  1; //!<[00] Counter enable
      __IO ONE_BIT    UDIS :  1; //!<[01] Update disable
      __IO ONE_BIT    URS  :  1; //!<[02] Update request source
      __IO ONE_BIT    OPM  :  1; //!<[03] One-pulse mode
      __IO ONE_BIT    DIR  :  1; //!<[04] Direction
      __IO uint32_t   CMS  :  2; //!<[05] Center-aligned mode selection
      __IO ONE_BIT    ARPE :  1; //!<[07] Auto-reload preload enable
      __IO uint32_t   CKD  :  2; //!<[08] Clock division
    } B;
    __IO uint32_t  R;
    explicit CTLR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CTLR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CTLR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CTLR2_DEF         {  //!< control register 2
    struct {
      __IO ONE_BIT    CCPC    :  1; //!<[00] Compare selection
           ONE_BIT    UNUSED0 :  1; //!<[01] 
      __IO ONE_BIT    CCUS    :  1; //!<[02] Update selection
      __IO ONE_BIT    CCDS    :  1; //!<[03] Capture/compare DMA selection
      __IO uint32_t   MMS     :  3; //!<[04] Master mode selection
      __IO ONE_BIT    TI1S    :  1; //!<[07] TI1 selection
    } B;
    __IO uint32_t  R;
    explicit CTLR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CTLR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CTLR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union SMCFGR_DEF        {  //!< slave mode control register
    struct {
      __IO uint32_t   SMS     :  3; //!<[00] Slave mode selection
           ONE_BIT    UNUSED0 :  1; //!<[03] 
      __IO uint32_t   TS      :  3; //!<[04] Trigger selection
      __IO ONE_BIT    MSM     :  1; //!<[07] Master/Slave mode
      __IO uint32_t   ETF     :  4; //!<[08] External trigger filter
      __IO uint32_t   ETPS    :  2; //!<[12] External trigger prescaler
      __IO ONE_BIT    ECE     :  1; //!<[14] External clock enable
      __IO ONE_BIT    ETP     :  1; //!<[15] External trigger polarity
    } B;
    __IO uint32_t  R;
    explicit SMCFGR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      SMCFGR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      SMCFGR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DMAINTENR_DEF     {  //!< DMA/Interrupt enable register
    struct {
      __IO ONE_BIT  UIE     :  1; //!<[00] Update interrupt enable
      __IO ONE_BIT  CC1IE   :  1; //!<[01] Capture/Compare 1 interrupt enable
      __IO ONE_BIT  CC2IE   :  1; //!<[02] Capture/Compare 2 interrupt enable
      __IO ONE_BIT  CC3IE   :  1; //!<[03] Capture/Compare 3 interrupt enable
      __IO ONE_BIT  CC4IE   :  1; //!<[04] Capture/Compare 4 interrupt enable
           ONE_BIT  UNUSED0 :  1; //!<[05] 
      __IO ONE_BIT  TIE     :  1; //!<[06] Trigger interrupt enable
           ONE_BIT  UNUSED1 :  1; //!<[07] 
      __IO ONE_BIT  UDE     :  1; //!<[08] Update DMA request enable
      __IO ONE_BIT  CC1DE   :  1; //!<[09] Capture/Compare 1 DMA request enable
      __IO ONE_BIT  CC2DE   :  1; //!<[10] Capture/Compare 2 DMA request enable
      __IO ONE_BIT  CC3DE   :  1; //!<[11] Capture/Compare 3 DMA request enable
      __IO ONE_BIT  CC4DE   :  1; //!<[12] Capture/Compare 4 DMA request enable
      __IO ONE_BIT  COMDE   :  1; //!<[13] COM DMA request enable
      __IO ONE_BIT  TDE     :  1; //!<[14] Trigger DMA request enable
    } B;
    __IO uint32_t  R;
    explicit DMAINTENR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DMAINTENR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DMAINTENR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union INTFR_DEF         {  //!< status register
    struct {
      __IO ONE_BIT    UIF     :  1; //!<[00] Update interrupt flag
      __IO ONE_BIT    CC1IF   :  1; //!<[01] Capture/compare 1 interrupt flag
      __IO ONE_BIT    CC2IF   :  1; //!<[02] Capture/Compare 2 interrupt flag
      __IO ONE_BIT    CC3IF   :  1; //!<[03] Capture/Compare 3 interrupt flag
      __IO ONE_BIT    CC4IF   :  1; //!<[04] Capture/Compare 4 interrupt flag
           ONE_BIT    UNUSED0 :  1; //!<[05] 
      __IO ONE_BIT    TIF     :  1; //!<[06] Trigger interrupt flag
           uint32_t   UNUSED1 :  2; //!<[07] 
      __IO ONE_BIT    CC1OF   :  1; //!<[09] Capture/Compare 1 overcapture flag
      __IO ONE_BIT    CC2OF   :  1; //!<[10] Capture/compare 2 overcapture flag
      __IO ONE_BIT    CC3OF   :  1; //!<[11] Capture/Compare 3 overcapture flag
      __IO ONE_BIT    CC4OF   :  1; //!<[12] Capture/Compare 4 overcapture flag
    } B;
    __IO uint32_t  R;
    explicit INTFR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      INTFR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      INTFR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union SWEVGR_DEF        {  //!< event generation register
    struct {
      __O  ONE_BIT  UG   :  1; //!<[00] Update generation
      __O  ONE_BIT  CC1G :  1; //!<[01] Capture/compare 1 generation
      __O  ONE_BIT  CC2G :  1; //!<[02] Capture/compare 2 generation
      __O  ONE_BIT  CC3G :  1; //!<[03] Capture/compare 3 generation
      __O  ONE_BIT  CC4G :  1; //!<[04] Capture/compare 4 generation
      __O  ONE_BIT  COMG :  1; //!<[05] Capture/compare generation
      __O  ONE_BIT  TG   :  1; //!<[06] Trigger generation
      __O  ONE_BIT  BG   :  1; //!<[07] Brake generation
    } B;
    __O  uint32_t  R;
    explicit SWEVGR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      SWEVGR_DEF r;
      R = f (r);
    }
  };
  union CHCTLR1_Input_DEF {  //!< capture/compare mode register 1 (input mode)
    struct {
      __IO uint32_t   CC1S   :  2; //!<[00] Capture/Compare 1 selection
      __IO uint32_t   IC1PSC :  2; //!<[02] Input capture 1 prescaler
      __IO uint32_t   IC1F   :  4; //!<[04] Input capture 1 filter
      __IO uint32_t   CC2S   :  2; //!<[08] Capture/compare 2 selection
      __IO uint32_t   IC2PSC :  2; //!<[10] Input capture 2 prescaler
      __IO uint32_t   IC2F   :  4; //!<[12] Input capture 2 filter
    } B;
    __IO uint32_t  R;
    explicit CHCTLR1_Input_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CHCTLR1_Input_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CHCTLR1_Input_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CHCTLR1_Output_DEF  {  //!< capture/compare mode register 1 (output mode)
    struct {
      __IO uint32_t   CC1S  :  2; //!<[00] Capture/Compare 1 selection
      __IO ONE_BIT    OC1FE :  1; //!<[02] Output compare 1 fast enable
      __IO ONE_BIT    OC1PE :  1; //!<[03] Output compare 1 preload enable
      __IO uint32_t   OC1M  :  3; //!<[04] Output compare 1 mode
      __IO ONE_BIT    OC1CE :  1; //!<[07] Output compare 1 clear enable
      __IO uint32_t   CC2S  :  2; //!<[08] Capture/Compare 2 selection
      __IO ONE_BIT    OC2FE :  1; //!<[10] Output compare 2 fast enable
      __IO ONE_BIT    OC2PE :  1; //!<[11] Output compare 2 preload enable
      __IO uint32_t   OC2M  :  3; //!<[12] Output compare 2 mode
      __IO ONE_BIT    OC2CE :  1; //!<[15] Output compare 2 clear enable
    } B;
    __IO uint32_t  R;
    explicit CHCTLR1_Output_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CHCTLR1_Output_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CHCTLR1_Output_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CHCTLR2_Input_DEF {  //!< capture/compare mode register 2 (input mode)
    struct {
      __IO uint32_t   CC3S   :  2; //!<[00] Capture/Compare 3 selection
      __IO uint32_t   IC3PSC :  2; //!<[02] Input capture 3 prescaler
      __IO uint32_t   IC3F   :  4; //!<[04] Input capture 3 filter
      __IO uint32_t   CC4S   :  2; //!<[08] Capture/Compare 4 selection
      __IO uint32_t   IC4PSC :  2; //!<[10] Input capture 4 prescaler
      __IO uint32_t   IC4F   :  4; //!<[12] Input capture 4 filter
    } B;
    __IO uint32_t  R;
    explicit CHCTLR2_Input_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CHCTLR2_Input_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CHCTLR2_Input_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CHCTLR2_Output_DEF  {  //!< capture/compare mode register 2 (output mode)
    struct {
      __IO uint32_t   CC3S  :  2; //!<[00] Capture/Compare 3 selection
      __IO ONE_BIT    OC3FE :  1; //!<[02] Output compare 3 fast enable
      __IO ONE_BIT    OC3PE :  1; //!<[03] Output compare 3 preload enable
      __IO uint32_t   OC3M  :  3; //!<[04] Output compare 3 mode
      __IO ONE_BIT    OC3CE :  1; //!<[07] Output compare 3 clear enable
      __IO uint32_t   CC4S  :  2; //!<[08] Capture/Compare 4 selection
      __IO ONE_BIT    OC4FE :  1; //!<[10] Output compare 4 fast enable
      __IO ONE_BIT    OC4PE :  1; //!<[11] Output compare 4 preload enable
      __IO uint32_t   OC4M  :  3; //!<[12] Output compare 4 mode
      __IO ONE_BIT    OC4CE :  1; //!<[15] Output compare 4 clear enable
    } B;
    __IO uint32_t  R;
    explicit CHCTLR2_Output_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CHCTLR2_Output_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CHCTLR2_Output_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CCER_DEF          {  //!< capture/compare enable register
    struct {
      __IO ONE_BIT    CC1E    :  1; //!<[00] Capture/Compare 1 output enable
      __IO ONE_BIT    CC1P    :  1; //!<[01] Capture/Compare 1 output Polarity
           uint32_t   UNUSED0 :  2; //!<[02] 
      __IO ONE_BIT    CC2E    :  1; //!<[04] Capture/Compare 2 output enable
      __IO ONE_BIT    CC2P    :  1; //!<[05] Capture/Compare 2 output Polarity
           uint32_t   UNUSED1 :  2; //!<[06] 
      __IO ONE_BIT    CC3E    :  1; //!<[08] Capture/Compare 3 output enable
      __IO ONE_BIT    CC3P    :  1; //!<[09] Capture/Compare 3 output Polarity
           uint32_t   UNUSED2 :  2; //!<[10] 
      __IO ONE_BIT    CC4E    :  1; //!<[12] Capture/Compare 4 output enable
      __IO ONE_BIT    CC4P    :  1; //!<[13] Capture/Compare 3 output Polarity
    } B;
    __IO uint32_t  R;
    explicit CCER_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CCER_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CCER_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CNT_DEF           {  //!< counter
    struct {
      __IO uint32_t   CNT : 16; //!<[00] counter value
    } B;
    __IO uint32_t  R;
    explicit CNT_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CNT_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CNT_DEF r; r.R = R;
      R = f (r);
    }
  };
  union PSC_DEF           {  //!< prescaler
    struct {
      __IO uint32_t   PSC : 16; //!<[00] Prescaler value
    } B;
    __IO uint32_t  R;
    explicit PSC_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      PSC_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      PSC_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ATRLR_DEF         {  //!< auto-reload register
    struct {
      __IO uint32_t   ATRLR : 16; //!<[00] Auto-reload value
    } B;
    __IO uint32_t  R;
    explicit ATRLR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ATRLR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ATRLR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CH1CVR_DEF        {  //!< capture/compare register 1
    struct {
      __IO uint32_t   CH1CVR : 16; //!<[00] Capture/Compare 1 value
    } B;
    __IO uint32_t  R;
    explicit CH1CVR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CH1CVR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CH1CVR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CH2CVR_DEF        {  //!< capture/compare register 2
    struct {
      __IO uint32_t   CH2CVR : 16; //!<[00] Capture/Compare 2 value
    } B;
    __IO uint32_t  R;
    explicit CH2CVR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CH2CVR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CH2CVR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CH3CVR_DEF        {  //!< capture/compare register 3
    struct {
      __IO uint32_t   CH3CVR : 16; //!<[00] Capture/Compare value
    } B;
    __IO uint32_t  R;
    explicit CH3CVR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CH3CVR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CH3CVR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CH4CVR_DEF        {  //!< capture/compare register 4
    struct {
      __IO uint32_t   CH4CVR : 16; //!<[00] Capture/Compare value
    } B;
    __IO uint32_t  R;
    explicit CH4CVR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CH4CVR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CH4CVR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DMACFGR_DEF       {  //!< DMA control register
    struct {
      __IO uint32_t   DBA     :  5; //!<[00] DMA base address
           uint32_t   UNUSED0 :  3; //!<[05] 
      __IO uint32_t   DBL     :  5; //!<[08] DMA burst length
    } B;
    __IO uint32_t  R;
    explicit DMACFGR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DMACFGR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DMACFGR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DMAADR_DEF        {  //!< DMA address for full transfer
    struct {
      __IO uint32_t   DMAADR : 16; //!<[00] DMA register for burst accesses
    } B;
    __IO uint32_t  R;
    explicit DMAADR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DMAADR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DMAADR_DEF r; r.R = R;
      R = f (r);
    }
  };
  // PERIPHERAL TIM2 REGISTERS INSTANCES
  __IO CTLR1_DEF                   CTLR1 ;  //!< [0000](04)[0x00000000]
  __IO CTLR2_DEF                   CTLR2 ;  //!< [0004](04)[0x00000000]
  __IO SMCFGR_DEF                 SMCFGR ;  //!< [0008](04)[0x00000000]
  __IO DMAINTENR_DEF           DMAINTENR ;  //!< [000c](04)[0x00000000]
  __IO INTFR_DEF                   INTFR ;  //!< [0010](04)[0x00000000]
  __O  SWEVGR_DEF                 SWEVGR ;  //!< [0014](04)[0x00000000]
  MERGE {
  __IO CHCTLR1_Input_DEF   CHCTLR1_Input ;  //!< [0018](04)[0x00000000]
  __IO CHCTLR1_Output_DEF   CHCTLR1_Output ;  //!< [0018](04)[0x00000000]
  };
  MERGE {
  __IO CHCTLR2_Input_DEF   CHCTLR2_Input ;  //!< [001c](04)[0x00000000]
  __IO CHCTLR2_Output_DEF   CHCTLR2_Output ;  //!< [001c](04)[0x00000000]
  };
  __IO CCER_DEF                     CCER ;  //!< [0020](04)[0x00000000]
  __IO CNT_DEF                       CNT ;  //!< [0024](04)[0x00000000]
  __IO PSC_DEF                       PSC ;  //!< [0028](04)[0x00000000]
  __IO ATRLR_DEF                   ATRLR ;  //!< [002c](04)[0x00000000]
       uint32_t                UNUSED0 ;  //!< [0030](04)[0xFFFFFFFF]
  __IO CH1CVR_DEF                 CH1CVR ;  //!< [0034](04)[0x00000000]
  __IO CH2CVR_DEF                 CH2CVR ;  //!< [0038](04)[0x00000000]
  __IO CH3CVR_DEF                 CH3CVR ;  //!< [003c](04)[0x00000000]
  __IO CH4CVR_DEF                 CH4CVR ;  //!< [0040](04)[0x00000000]
       uint32_t                UNUSED1 ;  //!< [0044](04)[0xFFFFFFFF]
  __IO DMACFGR_DEF               DMACFGR ;  //!< [0048](04)[0x00000000]
  __IO DMAADR_DEF                 DMAADR ;  //!< [004c](04)[0x00000000]
}; /* total size = 0x0400, struct size = 0x0050 */

// ////////////////////+++ I2C1 +-+//////////////////// //
struct I2C1_Type         { /*!< Inter integrated circuit */
  union CTLR1_DEF  {  //!< Control register 1
    struct {
      __IO ONE_BIT  PE        :  1; //!<[00] Peripheral enable
      __IO ONE_BIT  SMBUS     :  1; //!<[01] SMBus mode
           ONE_BIT  UNUSED0   :  1; //!<[02] 
      __IO ONE_BIT  SMBTYPE   :  1; //!<[03] SMBus type
      __IO ONE_BIT  ENARP     :  1; //!<[04] ARP enable
      __IO ONE_BIT  ENPEC     :  1; //!<[05] PEC enable
      __IO ONE_BIT  ENGC      :  1; //!<[06] General call enable
      __IO ONE_BIT  NOSTRETCH :  1; //!<[07] Clock stretching disable (Slave mode)
      __IO ONE_BIT  START     :  1; //!<[08] Start generation
      __IO ONE_BIT  STOP      :  1; //!<[09] Stop generation
      __IO ONE_BIT  ACK       :  1; //!<[10] Acknowledge enable
      __IO ONE_BIT  POS       :  1; //!<[11] Acknowledge/PEC Position (for data reception)
      __IO ONE_BIT  PEC       :  1; //!<[12] Packet error checking
      __IO ONE_BIT  ALERT     :  1; //!<[13] SMBus alert
           ONE_BIT  UNUSED1   :  1; //!<[14] 
      __IO ONE_BIT  SWRST     :  1; //!<[15] Software reset
    } B;
    __IO uint32_t  R;
    explicit CTLR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CTLR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CTLR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CTLR2_DEF  {  //!< Control register 2
    struct {
      __IO uint32_t   FREQ    :  6; //!<[00] Peripheral clock frequency
           uint32_t   UNUSED0 :  2; //!<[06] 
      __IO ONE_BIT    ITERREN :  1; //!<[08] Error interrupt enable
      __IO ONE_BIT    ITEVTEN :  1; //!<[09] Event interrupt enable
      __IO ONE_BIT    ITBUFEN :  1; //!<[10] Buffer interrupt enable
      __IO ONE_BIT    DMAEN   :  1; //!<[11] DMA requests enable
      __IO ONE_BIT    LAST    :  1; //!<[12] DMA last transfer
    } B;
    __IO uint32_t  R;
    explicit CTLR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CTLR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CTLR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union OADDR1_DEF {  //!< Own address register 1
    struct {
      __IO ONE_BIT    ADD0    :  1; //!<[00] Interface address
      __IO uint32_t   ADD7_1  :  7; //!<[01] Interface address
      __IO uint32_t   ADD9_8  :  2; //!<[08] Interface address
           uint32_t   UNUSED0 :  4; //!<[10] 
      __IO ONE_BIT    MUST1   :  1; //!<[14] Must be 1
      __IO ONE_BIT    ADDMODE :  1; //!<[15] Addressing mode (slave mode)
    } B;
    __IO uint32_t  R;
    explicit OADDR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      OADDR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      OADDR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union OADDR2_DEF {  //!< Own address register 2
    struct {
      __IO ONE_BIT    ENDUAL :  1; //!<[00] Dual addressing mode enable
      __IO uint32_t   ADD2   :  7; //!<[01] Interface address
    } B;
    __IO uint32_t  R;
    explicit OADDR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      OADDR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      OADDR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DATAR_DEF  {  //!< Data register
    struct {
      __IO uint32_t   DATAR :  8; //!<[00] 8-bit data register
    } B;
    __IO uint32_t  R;
    explicit DATAR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DATAR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DATAR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union STAR1_DEF  {  //!< Status register 1
    struct {
      __I  ONE_BIT  SB       :  1; //!<[00] Start bit (Master mode)
      __I  ONE_BIT  ADDR     :  1; //!<[01] Address sent (master mode)/matched (slave mode)
      __I  ONE_BIT  BTF      :  1; //!<[02] Byte transfer finished
      __I  ONE_BIT  ADD10    :  1; //!<[03] 10-bit header sent (Master mode)
      __I  ONE_BIT  STOPF    :  1; //!<[04] Stop detection (slave mode)
           ONE_BIT  UNUSED0  :  1; //!<[05] 
      __I  ONE_BIT  RxNE     :  1; //!<[06] Data register not empty (receivers)
      __I  ONE_BIT  TxE      :  1; //!<[07] Data register empty (transmitters)
      __IO ONE_BIT  BERR     :  1; //!<[08] Bus error
      __IO ONE_BIT  ARLO     :  1; //!<[09] Arbitration lost (master mode)
      __IO ONE_BIT  AF       :  1; //!<[10] Acknowledge failure
      __IO ONE_BIT  OVR      :  1; //!<[11] Overrun/Underrun
      __IO ONE_BIT  PECERR   :  1; //!<[12] PEC Error in reception
           ONE_BIT  UNUSED1  :  1; //!<[13] 
      __IO ONE_BIT  TIMEOUT  :  1; //!<[14] Timeout or Tlow error
      __IO ONE_BIT  SMBALERT :  1; //!<[15] SMBus alert
    } B;
    __IO uint32_t  R;
    explicit STAR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      STAR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      STAR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union STAR2_DEF  {  //!< Status register 2
    struct {
      __I  ONE_BIT    MSL        :  1; //!<[00] Master/slave
      __I  ONE_BIT    BUSY       :  1; //!<[01] Bus busy
      __I  ONE_BIT    TRA        :  1; //!<[02] Transmitter/receiver
           ONE_BIT    UNUSED0    :  1; //!<[03] 
      __I  ONE_BIT    GENCALL    :  1; //!<[04] General call address (Slave mode)
      __I  ONE_BIT    SMBDEFAULT :  1; //!<[05] SMBus device default address (Slave mode)
      __I  ONE_BIT    SMBHOST    :  1; //!<[06] SMBus host header (Slave mode)
      __I  ONE_BIT    DUALF      :  1; //!<[07] Dual flag (Slave mode)
      __I  uint32_t   PEC        :  8; //!<[08] acket error checking register
    } B;
    __I  uint32_t  R;

    explicit STAR2_DEF (volatile STAR2_DEF & o) noexcept { R = o.R; };
  };
  union CKCFGR_DEF {  //!< Clock control register
    struct {
      __IO uint32_t   CCR     : 12; //!<[00] Clock control register in Fast/Standard mode (Master mode)
           uint32_t   UNUSED0 :  2; //!<[12] 
      __IO ONE_BIT    DUTY    :  1; //!<[14] Fast mode duty cycle
      __IO ONE_BIT    F_S     :  1; //!<[15] I2C master mode selection
    } B;
    __IO uint32_t  R;
    explicit CKCFGR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CKCFGR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CKCFGR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union RTR_DEF    {  //!< Raise time register
    struct {
      __IO uint32_t   TRISE :  6; //!<[00] Maximum rise time in Fast/Standard mode (Master mode)
    } B;
    __IO uint32_t  R;
    explicit RTR_DEF () noexcept { R = 0x00000002u; }
    template<typename F> void setbit (F f) volatile {
      RTR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      RTR_DEF r; r.R = R;
      R = f (r);
    }
  };
  // PERIPHERAL I2C1 REGISTERS INSTANCES
  __IO CTLR1_DEF            CTLR1 ;  //!< [0000](04)[0x00000000]
  __IO CTLR2_DEF            CTLR2 ;  //!< [0004](04)[0x00000000]
  __IO OADDR1_DEF          OADDR1 ;  //!< [0008](04)[0x00000000]
  __IO OADDR2_DEF          OADDR2 ;  //!< [000c](04)[0x00000000]
  __IO DATAR_DEF            DATAR ;  //!< [0010](04)[0x00000000]
  __IO STAR1_DEF            STAR1 ;  //!< [0014](04)[0x00000000]
  __I  STAR2_DEF            STAR2 ;  //!< [0018](04)[0x00000000]
  __IO CKCFGR_DEF          CKCFGR ;  //!< [001c](04)[0x00000000]
  __IO RTR_DEF                RTR ;  //!< [0020](04)[0x00000002]
}; /* total size = 0x0400, struct size = 0x0024 */

// ////////////////////+++ SPI1 +-+//////////////////// //
struct SPI1_Type         { /*!< Serial peripheral interface */
  union CTLR1_DEF        {  //!< control register 1
    struct {
      __IO ONE_BIT    CPHA     :  1; //!<[00] Clock phase
      __IO ONE_BIT    CPOL     :  1; //!<[01] Clock polarity
      __IO ONE_BIT    MSTR     :  1; //!<[02] Master selection
      __IO uint32_t   BR       :  3; //!<[03] Baud rate control
      __IO ONE_BIT    SPE      :  1; //!<[06] SPI enable
      __IO ONE_BIT    LSBFIRST :  1; //!<[07] Frame format
      __IO ONE_BIT    SSI      :  1; //!<[08] Internal slave select
      __IO ONE_BIT    SSM      :  1; //!<[09] Software slave management
      __IO ONE_BIT    RXONLY   :  1; //!<[10] Receive only
      __IO ONE_BIT    DFF      :  1; //!<[11] Data frame format
      __IO ONE_BIT    CRCNEXT  :  1; //!<[12] CRC transfer next
      __IO ONE_BIT    CRCEN    :  1; //!<[13] Hardware CRC calculation enable
      __IO ONE_BIT    BIDIOE   :  1; //!<[14] Output enable in bidirectional mode
      __IO ONE_BIT    BIDIMODE :  1; //!<[15] Bidirectional data mode enable
    } B;
    __IO uint32_t  R;
    explicit CTLR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CTLR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CTLR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CTLR2_DEF        {  //!< control register 2
    struct {
      __IO ONE_BIT    RXDMAEN :  1; //!<[00] Rx buffer DMA enable
      __IO ONE_BIT    TXDMAEN :  1; //!<[01] Tx buffer DMA enable
      __IO ONE_BIT    SSOE    :  1; //!<[02] SS output enable
           uint32_t   UNUSED0 :  2; //!<[03] 
      __IO ONE_BIT    ERRIE   :  1; //!<[05] Error interrupt enable
      __IO ONE_BIT    RXNEIE  :  1; //!<[06] RX buffer not empty interrupt enable
      __IO ONE_BIT    TXEIE   :  1; //!<[07] Tx buffer empty interrupt enable
    } B;
    __IO uint32_t  R;
    explicit CTLR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CTLR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CTLR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union STATR_DEF        {  //!< status register
    struct {
      __I  ONE_BIT  RXNE   :  1; //!<[00] Receive buffer not empty
      __I  ONE_BIT  TXE    :  1; //!<[01] Transmit buffer empty
      __I  ONE_BIT  CHSID  :  1; //!<[02] Channel side
      __I  ONE_BIT  UDR    :  1; //!<[03] Underrun flag
      __IO ONE_BIT  CRCERR :  1; //!<[04] CRC error flag
      __I  ONE_BIT  MODF   :  1; //!<[05] Mode fault
      __IO ONE_BIT  OVR    :  1; //!<[06] Overrun flag
      __I  ONE_BIT  BSY    :  1; //!<[07] Busy flag
    } B;
    __IO uint32_t  R;
    explicit STATR_DEF () noexcept { R = 0x00000002u; }
    template<typename F> void setbit (F f) volatile {
      STATR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      STATR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DATAR_DEF        {  //!< data register
    struct {
      __IO uint32_t   DATAR : 16; //!<[00] Data register
    } B;
    __IO uint32_t  R;
    explicit DATAR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DATAR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DATAR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CRCR_DEF         {  //!< CRCR polynomial register
    struct {
      __IO uint32_t   CRCPOLY : 16; //!<[00] CRC polynomial register
    } B;
    __IO uint32_t  R;
    explicit CRCR_DEF () noexcept { R = 0x00000007u; }
    template<typename F> void setbit (F f) volatile {
      CRCR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CRCR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union RCRCR_DEF        {  //!< RX CRC register
    struct {
      __I  uint32_t   RXCRC : 16; //!<[00] Rx CRC register
    } B;
    __I  uint32_t  R;

    explicit RCRCR_DEF (volatile RCRCR_DEF & o) noexcept { R = o.R; };
  };
  union TCRCR_DEF        {  //!< send CRC register
    struct {
      __I  uint32_t   TXCRC : 16; //!<[00] Tx CRC register
    } B;
    __I  uint32_t  R;

    explicit TCRCR_DEF (volatile TCRCR_DEF & o) noexcept { R = o.R; };
  };
  union SPI_I2S_CFGR_DEF {  //!< SPI_I2S configure register
    struct {
      __IO ONE_BIT    CHLEN   :  1; //!<[00] Channel length (number of bits per audio channel)
      __IO uint32_t   DATLEN  :  2; //!<[01] DATLEN[1:0] bits (Data length to be transferred)
      __IO ONE_BIT    CKPOL   :  1; //!<[03] steady state clock polarity
      __IO uint32_t   I2SSTD  :  2; //!<[04] I2SSTD[1:0] bits (I2S standard selection)
           ONE_BIT    UNUSED0 :  1; //!<[06] 
      __IO ONE_BIT    PCMSYNC :  1; //!<[07] PCM frame synchronization
      __IO uint32_t   I2SCFG  :  2; //!<[08] I2SCFG[1:0] bits (I2S configuration mode)
      __IO ONE_BIT    I2SE    :  1; //!<[10] I2S Enable
      __IO ONE_BIT    I2SMOD  :  1; //!<[11] I2S mode selection
    } B;
    __IO uint32_t  R;
    explicit SPI_I2S_CFGR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      SPI_I2S_CFGR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      SPI_I2S_CFGR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union HSCR_DEF         {  //!< high speed control register
    struct {
      __IO ONE_BIT  HSRXEN :  1; //!<[00] High speed mode read enable
    } B;
    __IO uint32_t  R;
    explicit HSCR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      HSCR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      HSCR_DEF r; r.R = R;
      R = f (r);
    }
  };
  // PERIPHERAL SPI1 REGISTERS INSTANCES
  __IO CTLR1_DEF                  CTLR1 ;  //!< [0000](04)[0x00000000]
  __IO CTLR2_DEF                  CTLR2 ;  //!< [0004](04)[0x00000000]
  __IO STATR_DEF                  STATR ;  //!< [0008](04)[0x00000002]
  __IO DATAR_DEF                  DATAR ;  //!< [000c](04)[0x00000000]
  __IO CRCR_DEF                    CRCR ;  //!< [0010](04)[0x00000007]
  __I  RCRCR_DEF                  RCRCR ;  //!< [0014](04)[0x00000000]
  __I  TCRCR_DEF                  TCRCR ;  //!< [0018](04)[0x00000000]
  __IO SPI_I2S_CFGR_DEF    SPI_I2S_CFGR ;  //!< [001c](04)[0x00000000]
       uint32_t               UNUSED0 ;  //!< [0020](04)[0xFFFFFFFF]
  __IO HSCR_DEF                    HSCR ;  //!< [0024](04)[0x00000000]
}; /* total size = 0x0400, struct size = 0x0028 */

// ////////////////////+++ SPI2 +-+//////////////////// //
struct SPI2_Type         { /*!< Serial peripheral interface */
  union CTLR1_DEF   {  //!< control register 1
    struct {
      __IO ONE_BIT    CPHA     :  1; //!<[00] Clock phase
      __IO ONE_BIT    CPOL     :  1; //!<[01] Clock polarity
      __IO ONE_BIT    MSTR     :  1; //!<[02] Master selection
      __IO uint32_t   BR       :  3; //!<[03] Baud rate control
      __IO ONE_BIT    SPE      :  1; //!<[06] SPI enable
      __IO ONE_BIT    LSBFIRST :  1; //!<[07] Frame format
      __IO ONE_BIT    SSI      :  1; //!<[08] Internal slave select
      __IO ONE_BIT    SSM      :  1; //!<[09] Software slave management
      __IO ONE_BIT    RXONLY   :  1; //!<[10] Receive only
      __IO ONE_BIT    DFF      :  1; //!<[11] Data frame format
      __IO ONE_BIT    CRCNEXT  :  1; //!<[12] CRC transfer next
      __IO ONE_BIT    CRCEN    :  1; //!<[13] Hardware CRC calculation enable
      __IO ONE_BIT    BIDIOE   :  1; //!<[14] Output enable in bidirectional mode
      __IO ONE_BIT    BIDIMODE :  1; //!<[15] Bidirectional data mode enable
    } B;
    __IO uint32_t  R;
    explicit CTLR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CTLR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CTLR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CTLR2_DEF   {  //!< control register 2
    struct {
      __IO ONE_BIT    RXDMAEN :  1; //!<[00] Rx buffer DMA enable
      __IO ONE_BIT    TXDMAEN :  1; //!<[01] Tx buffer DMA enable
      __IO ONE_BIT    SSOE    :  1; //!<[02] SS output enable
           uint32_t   UNUSED0 :  2; //!<[03] 
      __IO ONE_BIT    ERRIE   :  1; //!<[05] Error interrupt enable
      __IO ONE_BIT    RXNEIE  :  1; //!<[06] RX buffer not empty interrupt enable
      __IO ONE_BIT    TXEIE   :  1; //!<[07] Tx buffer empty interrupt enable
    } B;
    __IO uint32_t  R;
    explicit CTLR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CTLR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CTLR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union STATR_DEF   {  //!< status register
    struct {
      __I  ONE_BIT    RXNE    :  1; //!<[00] Receive buffer not empty
      __I  ONE_BIT    TXE     :  1; //!<[01] Transmit buffer empty
           uint32_t   UNUSED0 :  2; //!<[02] 
      __IO ONE_BIT    CRCERR  :  1; //!<[04] CRC error flag
      __I  ONE_BIT    MODF    :  1; //!<[05] Mode fault
      __I  ONE_BIT    OVR     :  1; //!<[06] Overrun flag
      __I  ONE_BIT    BSY     :  1; //!<[07] Busy flag
    } B;
    __IO uint32_t  R;
    explicit STATR_DEF () noexcept { R = 0x00000002u; }
    template<typename F> void setbit (F f) volatile {
      STATR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      STATR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DATAR_DEF   {  //!< data register
    struct {
      __IO uint32_t   DATAR : 16; //!<[00] Data register
    } B;
    __IO uint32_t  R;
    explicit DATAR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DATAR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DATAR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CRCR_DEF    {  //!< CRCR polynomial register
    struct {
      __IO uint32_t   CRCPOLY : 16; //!<[00] CRC polynomial register
    } B;
    __IO uint32_t  R;
    explicit CRCR_DEF () noexcept { R = 0x00000007u; }
    template<typename F> void setbit (F f) volatile {
      CRCR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CRCR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union RCRCR_DEF   {  //!< RX CRC register
    struct {
      __I  uint32_t   RXCRC : 16; //!<[00] Rx CRC register
    } B;
    __I  uint32_t  R;

    explicit RCRCR_DEF (volatile RCRCR_DEF & o) noexcept { R = o.R; };
  };
  union TCRCR_DEF   {  //!< TX CRC register
    struct {
      __I  uint32_t   TXCRC : 16; //!<[00] Tx CRC register
    } B;
    __I  uint32_t  R;

    explicit TCRCR_DEF (volatile TCRCR_DEF & o) noexcept { R = o.R; };
  };
  union I2SCFGR_DEF {  //!< I2S configuration register
    struct {
      __IO ONE_BIT    CHLEN   :  1; //!<[00] Channel length (number of bits per audio channel)
      __IO uint32_t   DATLEN  :  2; //!<[01] Data length to be transferred
      __IO ONE_BIT    CKPOL   :  1; //!<[03] Steady state clock polarity
      __IO uint32_t   I2SSTD  :  2; //!<[04] I2S standard selection
           ONE_BIT    UNUSED0 :  1; //!<[06] 
      __IO ONE_BIT    PCMSYNC :  1; //!<[07] PCM frame synchronization
      __IO uint32_t   I2SCFG  :  2; //!<[08] I2S configuration mode
      __IO ONE_BIT    I2SE    :  1; //!<[10] I2S Enable
      __IO ONE_BIT    I2SMOD  :  1; //!<[11] I2S mode selection
    } B;
    __IO uint32_t  R;
    explicit I2SCFGR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      I2SCFGR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      I2SCFGR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union I2SPR_DEF   {  //!< I2S prescaler register
    struct {
      __IO uint32_t   I2SDIV :  8; //!<[00] I2S Linear prescaler
      __IO ONE_BIT    ODD    :  1; //!<[08] Odd factor for the prescaler
      __IO ONE_BIT    MCKOE  :  1; //!<[09] Master clock output enable
    } B;
    __IO uint32_t  R;
    explicit I2SPR_DEF () noexcept { R = 0x0000000au; }
    template<typename F> void setbit (F f) volatile {
      I2SPR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      I2SPR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union HSCR_DEF    {  //!< high speed control register
    struct {
      __IO ONE_BIT  HSRXEN :  1; //!<[00] High speed mode read enable
    } B;
    __IO uint32_t  R;
    explicit HSCR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      HSCR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      HSCR_DEF r; r.R = R;
      R = f (r);
    }
  };
  // PERIPHERAL SPI2 REGISTERS INSTANCES
  __IO CTLR1_DEF             CTLR1 ;  //!< [0000](04)[0x00000000]
  __IO CTLR2_DEF             CTLR2 ;  //!< [0004](04)[0x00000000]
  __IO STATR_DEF             STATR ;  //!< [0008](04)[0x00000002]
  __IO DATAR_DEF             DATAR ;  //!< [000c](04)[0x00000000]
  __IO CRCR_DEF               CRCR ;  //!< [0010](04)[0x00000007]
  __I  RCRCR_DEF             RCRCR ;  //!< [0014](04)[0x00000000]
  __I  TCRCR_DEF             TCRCR ;  //!< [0018](04)[0x00000000]
  __IO I2SCFGR_DEF         I2SCFGR ;  //!< [001c](04)[0x00000000]
  __IO I2SPR_DEF             I2SPR ;  //!< [0020](04)[0x0000000A]
  __IO HSCR_DEF               HSCR ;  //!< [0024](04)[0x00000000]
}; /* total size = 0x0400, struct size = 0x0028 */

// ////////////////////+++ USART1 +-+//////////////////// //
struct USART1_Type       { /*!< Universal synchronous asynchronous receiver transmitter */
  union STATR_DEF {  //!< Status register
    struct {
      __I  ONE_BIT  PE   :  1; //!<[00] Parity error
      __I  ONE_BIT  FE   :  1; //!<[01] Framing error
      __I  ONE_BIT  NE   :  1; //!<[02] Noise error flag
      __I  ONE_BIT  ORE  :  1; //!<[03] Overrun error
      __I  ONE_BIT  IDLE :  1; //!<[04] IDLE line detected
      __IO ONE_BIT  RXNE :  1; //!<[05] Read data register not empty
      __IO ONE_BIT  TC   :  1; //!<[06] Transmission complete
      __I  ONE_BIT  TXE  :  1; //!<[07] Transmit data register empty
      __IO ONE_BIT  LBD  :  1; //!<[08] LIN break detection flag
      __IO ONE_BIT  CTS  :  1; //!<[09] CTS flag
    } B;
    __IO uint32_t  R;
    explicit STATR_DEF () noexcept { R = 0x000000c0u; }
    explicit STATR_DEF (volatile STATR_DEF & o) noexcept { R = o.R; };
    template<typename F> void setbit (F f) volatile {
      STATR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      STATR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DATAR_DEF {  //!< Data register
    struct {
      __IO uint32_t   DR :  9; //!<[00] Data value
    } B;
    __IO uint32_t  R;
    explicit DATAR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DATAR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DATAR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union BRR_DEF   {  //!< Baud rate register
    struct {
      __IO uint32_t   DIV_Fraction :  4; //!<[00] fraction of USARTDIV
      __IO uint32_t   DIV_Mantissa : 12; //!<[04] mantissa of USARTDIV
    } B;
    __IO uint32_t  R;
    explicit BRR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      BRR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      BRR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CTLR1_DEF {  //!< Control register 1
    struct {
      __IO ONE_BIT  SBK    :  1; //!<[00] Send break
      __IO ONE_BIT  RWU    :  1; //!<[01] Receiver wakeup
      __IO ONE_BIT  RE     :  1; //!<[02] Receiver enable
      __IO ONE_BIT  TE     :  1; //!<[03] Transmitter enable
      __IO ONE_BIT  IDLEIE :  1; //!<[04] IDLE interrupt enable
      __IO ONE_BIT  RXNEIE :  1; //!<[05] RXNE interrupt enable
      __IO ONE_BIT  TCIE   :  1; //!<[06] Transmission complete interrupt enable
      __IO ONE_BIT  TXEIE  :  1; //!<[07] TXE interrupt enable
      __IO ONE_BIT  PEIE   :  1; //!<[08] PE interrupt enable
      __IO ONE_BIT  PS     :  1; //!<[09] Parity selection
      __IO ONE_BIT  PCE    :  1; //!<[10] Parity control enable
      __IO ONE_BIT  WAKE   :  1; //!<[11] Wakeup method
      __IO ONE_BIT  M      :  1; //!<[12] Word length
      __IO ONE_BIT  UE     :  1; //!<[13] USART enable
    } B;
    __IO uint32_t  R;
    explicit CTLR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CTLR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CTLR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CTLR2_DEF {  //!< Control register 2
    struct {
      __IO uint32_t   ADD     :  4; //!<[00] Address of the USART node
           ONE_BIT    UNUSED0 :  1; //!<[04] 
      __IO ONE_BIT    LBDL    :  1; //!<[05] lin break detection length
      __IO ONE_BIT    LBDIE   :  1; //!<[06] LIN break detection interrupt enable
           ONE_BIT    UNUSED1 :  1; //!<[07] 
      __IO ONE_BIT    LBCL    :  1; //!<[08] Last bit clock pulse
      __IO ONE_BIT    CPHA    :  1; //!<[09] Clock phase
      __IO ONE_BIT    CPOL    :  1; //!<[10] Clock polarity
      __IO ONE_BIT    CLKEN   :  1; //!<[11] Clock enable
      __IO uint32_t   STOP    :  2; //!<[12] STOP bits
      __IO ONE_BIT    LINEN   :  1; //!<[14] LIN mode enable
    } B;
    __IO uint32_t  R;
    explicit CTLR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CTLR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CTLR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CTLR3_DEF {  //!< Control register 3
    struct {
      __IO ONE_BIT  EIE   :  1; //!<[00] Error interrupt enable
      __IO ONE_BIT  IREN  :  1; //!<[01] IrDA mode enable
      __IO ONE_BIT  IRLP  :  1; //!<[02] IrDA low-power
      __IO ONE_BIT  HDSEL :  1; //!<[03] Half-duplex selection
      __IO ONE_BIT  NACK  :  1; //!<[04] Smartcard NACK enable
      __IO ONE_BIT  SCEN  :  1; //!<[05] Smartcard mode enable
      __IO ONE_BIT  DMAR  :  1; //!<[06] DMA enable receiver
      __IO ONE_BIT  DMAT  :  1; //!<[07] DMA enable transmitter
      __IO ONE_BIT  RTSE  :  1; //!<[08] RTS enable
      __IO ONE_BIT  CTSE  :  1; //!<[09] CTS enable
      __IO ONE_BIT  CTSIE :  1; //!<[10] CTS interrupt enable
    } B;
    __IO uint32_t  R;
    explicit CTLR3_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CTLR3_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CTLR3_DEF r; r.R = R;
      R = f (r);
    }
  };
  union GPR_DEF   {  //!< Guard time and prescaler register
    struct {
      __IO uint32_t   PSC :  8; //!<[00] Prescaler value
      __IO uint32_t   GT  :  8; //!<[08] Guard time value
    } B;
    __IO uint32_t  R;
    explicit GPR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      GPR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      GPR_DEF r; r.R = R;
      R = f (r);
    }
  };
  // PERIPHERAL USART1 REGISTERS INSTANCES
  __IO STATR_DEF           STATR ;  //!< [0000](04)[0x000000C0]
  __IO DATAR_DEF           DATAR ;  //!< [0004](04)[0x00000000]
  __IO BRR_DEF               BRR ;  //!< [0008](04)[0x00000000]
  __IO CTLR1_DEF           CTLR1 ;  //!< [000c](04)[0x00000000]
  __IO CTLR2_DEF           CTLR2 ;  //!< [0010](04)[0x00000000]
  __IO CTLR3_DEF           CTLR3 ;  //!< [0014](04)[0x00000000]
  __IO GPR_DEF               GPR ;  //!< [0018](04)[0x00000000]
}; /* total size = 0x0400, struct size = 0x001C */

// ////////////////////+++ ADC1 +-+//////////////////// //
struct ADC1_Type         { /*!< Analog to digital converter */
  union STATR_DEF             {  //!< status register
    struct {
      __IO ONE_BIT  AWD   :  1; //!<[00] Analog watchdog flag
      __IO ONE_BIT  EOC   :  1; //!<[01] Regular channel end of conversion
      __IO ONE_BIT  JEOC  :  1; //!<[02] Injected channel end of conversion
      __IO ONE_BIT  JSTRT :  1; //!<[03] Injected channel start flag
      __IO ONE_BIT  STRT  :  1; //!<[04] Regular channel start flag
    } B;
    __IO uint32_t  R;
    explicit STATR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      STATR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      STATR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CTLR1_DEF             {  //!< control register 1/TKEY_V_CTLR
    struct {
      __IO uint32_t   AWDCH   :  5; //!<[00] Analog watchdog channel select bits
      __IO ONE_BIT    EOCIE   :  1; //!<[05] Interrupt enable for EOC
      __IO ONE_BIT    AWDIE   :  1; //!<[06] Analog watchdog interrupt enable
      __IO ONE_BIT    JEOCIE  :  1; //!<[07] Interrupt enable for injected channels
      __IO ONE_BIT    SCAN    :  1; //!<[08] Scan mode enable
      __IO ONE_BIT    AWDSGL  :  1; //!<[09] Enable the watchdog on a single channel in scan mode
      __IO ONE_BIT    JAUTO   :  1; //!<[10] Automatic injected group conversion
      __IO ONE_BIT    DISCEN  :  1; //!<[11] Discontinuous mode on regular channels
      __IO ONE_BIT    JDISCEN :  1; //!<[12] Discontinuous mode on injected channels
      __IO uint32_t   DISCNUM :  3; //!<[13] Discontinuous mode channel count
      __IO uint32_t   DUALMOD :  4; //!<[16] Dual mode selection
           uint32_t   UNUSED0 :  2; //!<[20] 
      __IO ONE_BIT    JAWDEN  :  1; //!<[22] Analog watchdog enable on injected channels
      __IO ONE_BIT    AWDEN   :  1; //!<[23] Analog watchdog enable on regular channels
      __IO ONE_BIT    TKEYEN  :  1; //!<[24] TKEY enable, including TKEY_F and TKEY_V
      __IO ONE_BIT    TKITUNE :  1; //!<[25] TKEY_I enable
      __IO ONE_BIT    BUFEN   :  1; //!<[26] TKEY_BUF_Enable
      __IO uint32_t   PGA     :  2; //!<[27] ADC_PGA
    } B;
    __IO uint32_t  R;
    explicit CTLR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CTLR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CTLR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CTLR2_DEF             {  //!< control register 2
    struct {
      __IO ONE_BIT    ADON     :  1; //!<[00] A/D converter ON / OFF
      __IO ONE_BIT    CONT     :  1; //!<[01] Continuous conversion
      __IO ONE_BIT    CAL      :  1; //!<[02] A/D calibration
      __IO ONE_BIT    RSTCAL   :  1; //!<[03] Reset calibration
           uint32_t   UNUSED0  :  4; //!<[04] 
      __IO ONE_BIT    DMA      :  1; //!<[08] Direct memory access mode
           uint32_t   UNUSED1  :  2; //!<[09] 
      __IO ONE_BIT    ALIGN    :  1; //!<[11] Data alignment
      __IO uint32_t   JEXTSEL  :  3; //!<[12] External event select for injected group
      __IO ONE_BIT    JEXTTRIG :  1; //!<[15] External trigger conversion mode for injected channels
           ONE_BIT    UNUSED2  :  1; //!<[16] 
      __IO uint32_t   EXTSEL   :  3; //!<[17] External event select for regular group
      __IO ONE_BIT    EXTTRIG  :  1; //!<[20] External trigger conversion mode for regular channels
      __IO ONE_BIT    JSWSTART :  1; //!<[21] Start conversion of injected channels
      __IO ONE_BIT    SWSTART  :  1; //!<[22] Start conversion of regular channels
      __IO ONE_BIT    TSVREFE  :  1; //!<[23] Temperature sensor and VREFINT enable
    } B;
    __IO uint32_t  R;
    explicit CTLR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CTLR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CTLR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union SAMPTR1_CHARGE1_DEF   {  //!< sample time register 1
    struct {
      __IO uint32_t   SMP10_TKCG10 :  3; //!<[00] Channel 10 sample time selection
      __IO uint32_t   SMP11_TKCG11 :  3; //!<[03] Channel 11 sample time selection
      __IO uint32_t   SMP12_TKCG12 :  3; //!<[06] Channel 12 sample time selection
      __IO uint32_t   SMP13_TKCG13 :  3; //!<[09] Channel 13 sample time selection
      __IO uint32_t   SMP14_TKCG14 :  3; //!<[12] Channel 14 sample time selection
      __IO uint32_t   SMP15_TKCG15 :  3; //!<[15] Channel 15 sample time selection
      __IO uint32_t   SMP16_TKCG16 :  3; //!<[18] Channel 16 sample time selection
      __IO uint32_t   SMP17_TKCG17 :  3; //!<[21] Channel 17 sample time selection
    } B;
    __IO uint32_t  R;
    explicit SAMPTR1_CHARGE1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      SAMPTR1_CHARGE1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      SAMPTR1_CHARGE1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union SAMPTR2_CHARGE2_DEF   {  //!< sample time register 2
    struct {
      __IO uint32_t   SMP0_TKCG0 :  3; //!<[00] Channel 0 sample time selection
      __IO uint32_t   SMP1_TKCG1 :  3; //!<[03] Channel 1 sample time selection
      __IO uint32_t   SMP2_TKCG2 :  3; //!<[06] Channel 2 sample time selection
      __IO uint32_t   SMP3_TKCG3 :  3; //!<[09] Channel 3 sample time selection
      __IO uint32_t   SMP4_TKCG4 :  3; //!<[12] Channel 4 sample time selection
      __IO uint32_t   SMP5_TKCG5 :  3; //!<[15] Channel 5 sample time selection
      __IO uint32_t   SMP6_TKCG6 :  3; //!<[18] Channel 6 sample time selection
      __IO uint32_t   SMP7_TKCG7 :  3; //!<[21] Channel 7 sample time selection
      __IO uint32_t   SMP8_TKCG8 :  3; //!<[24] Channel 8 sample time selection
      __IO uint32_t   SMP9_TKCG9 :  3; //!<[27] Channel 9 sample time selection
    } B;
    __IO uint32_t  R;
    explicit SAMPTR2_CHARGE2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      SAMPTR2_CHARGE2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      SAMPTR2_CHARGE2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union IOFR1_DEF             {  //!< injected channel data offset register x
    struct {
      __IO uint32_t   JOFFSET1 : 12; //!<[00] Data offset for injected channel x
    } B;
    __IO uint32_t  R;
    explicit IOFR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IOFR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      IOFR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union IOFR2_DEF             {  //!< injected channel data offset register x
    struct {
      __IO uint32_t   JOFFSET2 : 12; //!<[00] Data offset for injected channel x
    } B;
    __IO uint32_t  R;
    explicit IOFR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IOFR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      IOFR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union IOFR3_DEF             {  //!< injected channel data offset register x
    struct {
      __IO uint32_t   JOFFSET3 : 12; //!<[00] Data offset for injected channel x
    } B;
    __IO uint32_t  R;
    explicit IOFR3_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IOFR3_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      IOFR3_DEF r; r.R = R;
      R = f (r);
    }
  };
  union IOFR4_DEF             {  //!< injected channel data offset register x
    struct {
      __IO uint32_t   JOFFSET4 : 12; //!<[00] Data offset for injected channel x
    } B;
    __IO uint32_t  R;
    explicit IOFR4_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IOFR4_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      IOFR4_DEF r; r.R = R;
      R = f (r);
    }
  };
  union WDHTR_DEF             {  //!< watchdog higher threshold register
    struct {
      __IO uint32_t   HT : 12; //!<[00] Analog watchdog higher threshold
    } B;
    __IO uint32_t  R;
    explicit WDHTR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      WDHTR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      WDHTR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union WDLTR_DEF             {  //!< watchdog lower threshold register
    struct {
      __IO uint32_t   LT : 12; //!<[00] Analog watchdog lower threshold
    } B;
    __IO uint32_t  R;
    explicit WDLTR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      WDLTR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      WDLTR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union RSQR1_DEF             {  //!< regular sequence register 1
    struct {
      __IO uint32_t   SQ13 :  5; //!<[00] 13th conversion in regular sequence
      __IO uint32_t   SQ14 :  5; //!<[05] 14th conversion in regular sequence
      __IO uint32_t   SQ15 :  5; //!<[10] 15th conversion in regular sequence
      __IO uint32_t   SQ16 :  5; //!<[15] 16th conversion in regular sequence
      __IO uint32_t   L    :  4; //!<[20] Regular channel sequence length
    } B;
    __IO uint32_t  R;
    explicit RSQR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      RSQR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      RSQR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union RSQR2_DEF             {  //!< regular sequence register 2
    struct {
      __IO uint32_t   SQ7  :  5; //!<[00] 7th conversion in regular sequence
      __IO uint32_t   SQ8  :  5; //!<[05] 8th conversion in regular sequence
      __IO uint32_t   SQ9  :  5; //!<[10] 9th conversion in regular sequence
      __IO uint32_t   SQ10 :  5; //!<[15] 10th conversion in regular sequence
      __IO uint32_t   SQ11 :  5; //!<[20] 11th conversion in regular sequence
      __IO uint32_t   SQ12 :  5; //!<[25] 12th conversion in regular sequence
    } B;
    __IO uint32_t  R;
    explicit RSQR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      RSQR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      RSQR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union RSQR3__CHANNEL_DEF    {  //!< regular sequence register 3;TKEY_V_CHANNEL
    struct {
      __IO uint32_t   SQ1__CHSEL :  5; //!<[00] 1st conversion in regular sequence;TKDY_V channel select
      __IO uint32_t   SQ2        :  5; //!<[05] 2nd conversion in regular sequence
      __IO uint32_t   SQ3        :  5; //!<[10] 3rd conversion in regular sequence
      __IO uint32_t   SQ4        :  5; //!<[15] 4th conversion in regular sequence
      __IO uint32_t   SQ5        :  5; //!<[20] 5th conversion in regular sequence
      __IO uint32_t   SQ6        :  5; //!<[25] 6th conversion in regular sequence
    } B;
    __IO uint32_t  R;
    explicit RSQR3__CHANNEL_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      RSQR3__CHANNEL_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      RSQR3__CHANNEL_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ISQR_DEF              {  //!< injected sequence register
    struct {
      __IO uint32_t   JSQ1 :  5; //!<[00] 1st conversion in injected sequence
      __IO uint32_t   JSQ2 :  5; //!<[05] 2nd conversion in injected sequence
      __IO uint32_t   JSQ3 :  5; //!<[10] 3rd conversion in injected sequence
      __IO uint32_t   JSQ4 :  5; //!<[15] 4th conversion in injected sequence
      __IO uint32_t   JL   :  2; //!<[20] Injected sequence length
    } B;
    __IO uint32_t  R;
    explicit ISQR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ISQR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ISQR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union IDATAR1_CHGOFFSET_DEF {  //!< injected data register x_Charge data offset for injected channel x
    struct {
      __I  uint32_t   IDATA0_7_TKCGOFFSET :  8; //!<[00] Injected data_Touch key charge data offset for injected channel x
      __I  uint32_t   IDATA8_15           :  8; //!<[08] Injected data
    } B;
    __I  uint32_t  R;

    explicit IDATAR1_CHGOFFSET_DEF (volatile IDATAR1_CHGOFFSET_DEF & o) noexcept { R = o.R; };
  };
  union IDATAR2_DEF           {  //!< injected data register x
    struct {
      __I  uint32_t   JDATA : 16; //!<[00] Injected data
    } B;
    __I  uint32_t  R;

    explicit IDATAR2_DEF (volatile IDATAR2_DEF & o) noexcept { R = o.R; };
  };
  union IDATAR3_DEF           {  //!< injected data register x
    struct {
      __I  uint32_t   JDATA : 16; //!<[00] Injected data
    } B;
    __I  uint32_t  R;

    explicit IDATAR3_DEF (volatile IDATAR3_DEF & o) noexcept { R = o.R; };
  };
  union IDATAR4_DEF           {  //!< injected data register x
    struct {
      __I  uint32_t   JDATA : 16; //!<[00] Injected data
    } B;
    __I  uint32_t  R;

    explicit IDATAR4_DEF (volatile IDATAR4_DEF & o) noexcept { R = o.R; };
  };
  union RDATAR_DR_ACT_DCG_DEF {  //!< regular data register_start and discharge time register
    struct {
      __IO uint32_t   DATA0_7_TKACT_DCG :  8; //!<[00] Regular data_Touch key start and discharge time register
      __IO uint32_t   DATA8_15          :  8; //!<[08] Regular data
    } B;
    __IO uint32_t  R;
    explicit RDATAR_DR_ACT_DCG_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      RDATAR_DR_ACT_DCG_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      RDATAR_DR_ACT_DCG_DEF r; r.R = R;
      R = f (r);
    }
  };
  // PERIPHERAL ADC1 REGISTERS INSTANCES
  __IO STATR_DEF                       STATR ;  //!< [0000](04)[0x00000000]
  __IO CTLR1_DEF                       CTLR1 ;  //!< [0004](04)[0x00000000]
  __IO CTLR2_DEF                       CTLR2 ;  //!< [0008](04)[0x00000000]
  __IO SAMPTR1_CHARGE1_DEF   SAMPTR1_CHARGE1 ;  //!< [000c](04)[0x00000000]
  __IO SAMPTR2_CHARGE2_DEF   SAMPTR2_CHARGE2 ;  //!< [0010](04)[0x00000000]
  __IO IOFR1_DEF                       IOFR1 ;  //!< [0014](04)[0x00000000]
  __IO IOFR2_DEF                       IOFR2 ;  //!< [0018](04)[0x00000000]
  __IO IOFR3_DEF                       IOFR3 ;  //!< [001c](04)[0x00000000]
  __IO IOFR4_DEF                       IOFR4 ;  //!< [0020](04)[0x00000000]
  __IO WDHTR_DEF                       WDHTR ;  //!< [0024](04)[0x00000000]
  __IO WDLTR_DEF                       WDLTR ;  //!< [0028](04)[0x00000000]
  __IO RSQR1_DEF                       RSQR1 ;  //!< [002c](04)[0x00000000]
  __IO RSQR2_DEF                       RSQR2 ;  //!< [0030](04)[0x00000000]
  __IO RSQR3__CHANNEL_DEF     RSQR3__CHANNEL ;  //!< [0034](04)[0x00000000]
  __IO ISQR_DEF                         ISQR ;  //!< [0038](04)[0x00000000]
  __I  IDATAR1_CHGOFFSET_DEF IDATAR1_CHGOFFSET ;  //!< [003c](04)[0x00000000]
  __I  IDATAR2_DEF                   IDATAR2 ;  //!< [0040](04)[0x00000000]
  __I  IDATAR3_DEF                   IDATAR3 ;  //!< [0044](04)[0x00000000]
  __I  IDATAR4_DEF                   IDATAR4 ;  //!< [0048](04)[0x00000000]
  __IO RDATAR_DR_ACT_DCG_DEF RDATAR_DR_ACT_DCG ;  //!< [004c](04)[0x00000000]
}; /* total size = 0x0400, struct size = 0x0050 */

// ////////////////////+++ ADC2 +-+//////////////////// //
struct ADC2_Type         { /*!< Analog to digital converter */
  union STATR_DEF             {  //!< status register
    struct {
      __IO ONE_BIT  AWD   :  1; //!<[00] Analog watchdog flag
      __IO ONE_BIT  EOC   :  1; //!<[01] Regular channel end of conversion
      __IO ONE_BIT  JEOC  :  1; //!<[02] Injected channel end of conversion
      __IO ONE_BIT  JSTRT :  1; //!<[03] Injected channel start flag
      __IO ONE_BIT  STRT  :  1; //!<[04] Regular channel start flag
    } B;
    __IO uint32_t  R;
    explicit STATR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      STATR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      STATR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CTLR1_DEF             {  //!< control register 1/TKEY_V_CTLR
    struct {
      __IO uint32_t   AWDCH   :  5; //!<[00] Analog watchdog channel select bits
      __IO ONE_BIT    EOCIE   :  1; //!<[05] Interrupt enable for EOC
      __IO ONE_BIT    AWDIE   :  1; //!<[06] Analog watchdog interrupt enable
      __IO ONE_BIT    JEOCIE  :  1; //!<[07] Interrupt enable for injected channels
      __IO ONE_BIT    SCAN    :  1; //!<[08] Scan mode enable
      __IO ONE_BIT    AWDSGL  :  1; //!<[09] Enable the watchdog on a single channel in scan mode
      __IO ONE_BIT    JAUTO   :  1; //!<[10] Automatic injected group conversion
      __IO ONE_BIT    DISCEN  :  1; //!<[11] Discontinuous mode on regular channels
      __IO ONE_BIT    JDISCEN :  1; //!<[12] Discontinuous mode on injected channels
      __IO uint32_t   DISCNUM :  3; //!<[13] Discontinuous mode channel count
      __IO uint32_t   DUALMOD :  4; //!<[16] Dual mode selection
           uint32_t   UNUSED0 :  2; //!<[20] 
      __IO ONE_BIT    JAWDEN  :  1; //!<[22] Analog watchdog enable on injected channels
      __IO ONE_BIT    AWDEN   :  1; //!<[23] Analog watchdog enable on regular channels
      __IO ONE_BIT    TKEYEN  :  1; //!<[24] TKEY enable, including TKEY_F and TKEY_V
      __IO ONE_BIT    TKITUNE :  1; //!<[25] TKEY_I enable
      __IO ONE_BIT    BUFEN   :  1; //!<[26] TKEY_BUF_Enable
      __IO uint32_t   PGA     :  2; //!<[27] ADC_PGA
    } B;
    __IO uint32_t  R;
    explicit CTLR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CTLR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CTLR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CTLR2_DEF             {  //!< control register 2
    struct {
      __IO ONE_BIT    ADON     :  1; //!<[00] A/D converter ON / OFF
      __IO ONE_BIT    CONT     :  1; //!<[01] Continuous conversion
      __IO ONE_BIT    CAL      :  1; //!<[02] A/D calibration
      __IO ONE_BIT    RSTCAL   :  1; //!<[03] Reset calibration
           uint32_t   UNUSED0  :  4; //!<[04] 
      __IO ONE_BIT    DMA      :  1; //!<[08] Direct memory access mode
           uint32_t   UNUSED1  :  2; //!<[09] 
      __IO ONE_BIT    ALIGN    :  1; //!<[11] Data alignment
      __IO uint32_t   JEXTSEL  :  3; //!<[12] External event select for injected group
      __IO ONE_BIT    JEXTTRIG :  1; //!<[15] External trigger conversion mode for injected channels
           ONE_BIT    UNUSED2  :  1; //!<[16] 
      __IO uint32_t   EXTSEL   :  3; //!<[17] External event select for regular group
      __IO ONE_BIT    EXTTRIG  :  1; //!<[20] External trigger conversion mode for regular channels
      __IO ONE_BIT    JSWSTART :  1; //!<[21] Start conversion of injected channels
      __IO ONE_BIT    SWSTART  :  1; //!<[22] Start conversion of regular channels
      __IO ONE_BIT    TSVREFE  :  1; //!<[23] Temperature sensor and VREFINT enable
    } B;
    __IO uint32_t  R;
    explicit CTLR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CTLR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CTLR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union SAMPTR1_CHARGE1_DEF   {  //!< sample time register 1
    struct {
      __IO uint32_t   SMP10_TKCG10 :  3; //!<[00] Channel 10 sample time selection
      __IO uint32_t   SMP11_TKCG11 :  3; //!<[03] Channel 11 sample time selection
      __IO uint32_t   SMP12_TKCG12 :  3; //!<[06] Channel 12 sample time selection
      __IO uint32_t   SMP13_TKCG13 :  3; //!<[09] Channel 13 sample time selection
      __IO uint32_t   SMP14_TKCG14 :  3; //!<[12] Channel 14 sample time selection
      __IO uint32_t   SMP15_TKCG15 :  3; //!<[15] Channel 15 sample time selection
      __IO uint32_t   SMP16_TKCG16 :  3; //!<[18] Channel 16 sample time selection
      __IO uint32_t   SMP17_TKCG17 :  3; //!<[21] Channel 17 sample time selection
    } B;
    __IO uint32_t  R;
    explicit SAMPTR1_CHARGE1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      SAMPTR1_CHARGE1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      SAMPTR1_CHARGE1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union SAMPTR2_CHARGE2_DEF   {  //!< sample time register 2
    struct {
      __IO uint32_t   SMP0_TKCG0 :  3; //!<[00] Channel 0 sample time selection
      __IO uint32_t   SMP1_TKCG1 :  3; //!<[03] Channel 1 sample time selection
      __IO uint32_t   SMP2_TKCG2 :  3; //!<[06] Channel 2 sample time selection
      __IO uint32_t   SMP3_TKCG3 :  3; //!<[09] Channel 3 sample time selection
      __IO uint32_t   SMP4_TKCG4 :  3; //!<[12] Channel 4 sample time selection
      __IO uint32_t   SMP5_TKCG5 :  3; //!<[15] Channel 5 sample time selection
      __IO uint32_t   SMP6_TKCG6 :  3; //!<[18] Channel 6 sample time selection
      __IO uint32_t   SMP7_TKCG7 :  3; //!<[21] Channel 7 sample time selection
      __IO uint32_t   SMP8_TKCG8 :  3; //!<[24] Channel 8 sample time selection
      __IO uint32_t   SMP9_TKCG9 :  3; //!<[27] Channel 9 sample time selection
    } B;
    __IO uint32_t  R;
    explicit SAMPTR2_CHARGE2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      SAMPTR2_CHARGE2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      SAMPTR2_CHARGE2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union IOFR1_DEF             {  //!< injected channel data offset register x
    struct {
      __IO uint32_t   JOFFSET1 : 12; //!<[00] Data offset for injected channel x
    } B;
    __IO uint32_t  R;
    explicit IOFR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IOFR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      IOFR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union IOFR2_DEF             {  //!< injected channel data offset register x
    struct {
      __IO uint32_t   JOFFSET2 : 12; //!<[00] Data offset for injected channel x
    } B;
    __IO uint32_t  R;
    explicit IOFR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IOFR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      IOFR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union IOFR3_DEF             {  //!< injected channel data offset register x
    struct {
      __IO uint32_t   JOFFSET3 : 12; //!<[00] Data offset for injected channel x
    } B;
    __IO uint32_t  R;
    explicit IOFR3_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IOFR3_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      IOFR3_DEF r; r.R = R;
      R = f (r);
    }
  };
  union IOFR4_DEF             {  //!< injected channel data offset register x
    struct {
      __IO uint32_t   JOFFSET4 : 12; //!<[00] Data offset for injected channel x
    } B;
    __IO uint32_t  R;
    explicit IOFR4_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IOFR4_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      IOFR4_DEF r; r.R = R;
      R = f (r);
    }
  };
  union WDHTR_DEF             {  //!< watchdog higher threshold register
    struct {
      __IO uint32_t   HT : 12; //!<[00] Analog watchdog higher threshold
    } B;
    __IO uint32_t  R;
    explicit WDHTR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      WDHTR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      WDHTR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union WDLTR_DEF             {  //!< watchdog lower threshold register
    struct {
      __IO uint32_t   LT : 12; //!<[00] Analog watchdog lower threshold
    } B;
    __IO uint32_t  R;
    explicit WDLTR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      WDLTR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      WDLTR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union RSQR1_DEF             {  //!< regular sequence register 1
    struct {
      __IO uint32_t   SQ13 :  5; //!<[00] 13th conversion in regular sequence
      __IO uint32_t   SQ14 :  5; //!<[05] 14th conversion in regular sequence
      __IO uint32_t   SQ15 :  5; //!<[10] 15th conversion in regular sequence
      __IO uint32_t   SQ16 :  5; //!<[15] 16th conversion in regular sequence
      __IO uint32_t   L    :  4; //!<[20] Regular channel sequence length
    } B;
    __IO uint32_t  R;
    explicit RSQR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      RSQR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      RSQR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union RSQR2_DEF             {  //!< regular sequence register 2
    struct {
      __IO uint32_t   SQ7  :  5; //!<[00] 7th conversion in regular sequence
      __IO uint32_t   SQ8  :  5; //!<[05] 8th conversion in regular sequence
      __IO uint32_t   SQ9  :  5; //!<[10] 9th conversion in regular sequence
      __IO uint32_t   SQ10 :  5; //!<[15] 10th conversion in regular sequence
      __IO uint32_t   SQ11 :  5; //!<[20] 11th conversion in regular sequence
      __IO uint32_t   SQ12 :  5; //!<[25] 12th conversion in regular sequence
    } B;
    __IO uint32_t  R;
    explicit RSQR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      RSQR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      RSQR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union RSQR3__CHANNEL_DEF    {  //!< regular sequence register 3;TKEY_V_CHANNEL
    struct {
      __IO uint32_t   SQ1__CHSEL :  5; //!<[00] 1st conversion in regular sequence;TKDY_V channel select
      __IO uint32_t   SQ2        :  5; //!<[05] 2nd conversion in regular sequence
      __IO uint32_t   SQ3        :  5; //!<[10] 3rd conversion in regular sequence
      __IO uint32_t   SQ4        :  5; //!<[15] 4th conversion in regular sequence
      __IO uint32_t   SQ5        :  5; //!<[20] 5th conversion in regular sequence
      __IO uint32_t   SQ6        :  5; //!<[25] 6th conversion in regular sequence
    } B;
    __IO uint32_t  R;
    explicit RSQR3__CHANNEL_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      RSQR3__CHANNEL_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      RSQR3__CHANNEL_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ISQR_DEF              {  //!< injected sequence register
    struct {
      __IO uint32_t   JSQ1 :  5; //!<[00] 1st conversion in injected sequence
      __IO uint32_t   JSQ2 :  5; //!<[05] 2nd conversion in injected sequence
      __IO uint32_t   JSQ3 :  5; //!<[10] 3rd conversion in injected sequence
      __IO uint32_t   JSQ4 :  5; //!<[15] 4th conversion in injected sequence
      __IO uint32_t   JL   :  2; //!<[20] Injected sequence length
    } B;
    __IO uint32_t  R;
    explicit ISQR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ISQR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ISQR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union IDATAR1_CHGOFFSET_DEF {  //!< injected data register x_Charge data offset for injected channel x
    struct {
      __I  uint32_t   IDATA0_7_TKCGOFFSET :  8; //!<[00] Injected data_Touch key charge data offset for injected channel x
      __I  uint32_t   IDATA8_15           :  8; //!<[08] Injected data
    } B;
    __I  uint32_t  R;

    explicit IDATAR1_CHGOFFSET_DEF (volatile IDATAR1_CHGOFFSET_DEF & o) noexcept { R = o.R; };
  };
  union IDATAR2_DEF           {  //!< injected data register x
    struct {
      __I  uint32_t   JDATA : 16; //!<[00] Injected data
    } B;
    __I  uint32_t  R;

    explicit IDATAR2_DEF (volatile IDATAR2_DEF & o) noexcept { R = o.R; };
  };
  union IDATAR3_DEF           {  //!< injected data register x
    struct {
      __I  uint32_t   JDATA : 16; //!<[00] Injected data
    } B;
    __I  uint32_t  R;

    explicit IDATAR3_DEF (volatile IDATAR3_DEF & o) noexcept { R = o.R; };
  };
  union IDATAR4_DEF           {  //!< injected data register x
    struct {
      __I  uint32_t   JDATA : 16; //!<[00] Injected data
    } B;
    __I  uint32_t  R;

    explicit IDATAR4_DEF (volatile IDATAR4_DEF & o) noexcept { R = o.R; };
  };
  union RDATAR_DR_ACT_DCG_DEF {  //!< regular data register_start and discharge time register
    struct {
      __IO uint32_t   DATA0_7_TKACT_DCG :  8; //!<[00] Regular data_Touch key start and discharge time register
      __IO uint32_t   DATA8_15          :  8; //!<[08] Regular data
    } B;
    __IO uint32_t  R;
    explicit RDATAR_DR_ACT_DCG_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      RDATAR_DR_ACT_DCG_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      RDATAR_DR_ACT_DCG_DEF r; r.R = R;
      R = f (r);
    }
  };
  // PERIPHERAL ADC2 REGISTERS INSTANCES
  __IO STATR_DEF                       STATR ;  //!< [0000](04)[0x00000000]
  __IO CTLR1_DEF                       CTLR1 ;  //!< [0004](04)[0x00000000]
  __IO CTLR2_DEF                       CTLR2 ;  //!< [0008](04)[0x00000000]
  __IO SAMPTR1_CHARGE1_DEF   SAMPTR1_CHARGE1 ;  //!< [000c](04)[0x00000000]
  __IO SAMPTR2_CHARGE2_DEF   SAMPTR2_CHARGE2 ;  //!< [0010](04)[0x00000000]
  __IO IOFR1_DEF                       IOFR1 ;  //!< [0014](04)[0x00000000]
  __IO IOFR2_DEF                       IOFR2 ;  //!< [0018](04)[0x00000000]
  __IO IOFR3_DEF                       IOFR3 ;  //!< [001c](04)[0x00000000]
  __IO IOFR4_DEF                       IOFR4 ;  //!< [0020](04)[0x00000000]
  __IO WDHTR_DEF                       WDHTR ;  //!< [0024](04)[0x00000000]
  __IO WDLTR_DEF                       WDLTR ;  //!< [0028](04)[0x00000000]
  __IO RSQR1_DEF                       RSQR1 ;  //!< [002c](04)[0x00000000]
  __IO RSQR2_DEF                       RSQR2 ;  //!< [0030](04)[0x00000000]
  __IO RSQR3__CHANNEL_DEF     RSQR3__CHANNEL ;  //!< [0034](04)[0x00000000]
  __IO ISQR_DEF                         ISQR ;  //!< [0038](04)[0x00000000]
  __I  IDATAR1_CHGOFFSET_DEF IDATAR1_CHGOFFSET ;  //!< [003c](04)[0x00000000]
  __I  IDATAR2_DEF                   IDATAR2 ;  //!< [0040](04)[0x00000000]
  __I  IDATAR3_DEF                   IDATAR3 ;  //!< [0044](04)[0x00000000]
  __I  IDATAR4_DEF                   IDATAR4 ;  //!< [0048](04)[0x00000000]
  __IO RDATAR_DR_ACT_DCG_DEF RDATAR_DR_ACT_DCG ;  //!< [004c](04)[0x00000000]
}; /* total size = 0x0400, struct size = 0x0050 */

// ////////////////////+++ DBG +-+//////////////////// //
struct DBG_Type          { /*!< Debug support */
  union CFGR1_DEF {  //!< DBGMCU_CFGR1
    struct {
      __IO ONE_BIT  DEG_IWDG :  1; //!<[00] DEG_IWDG
      __IO ONE_BIT  DEG_WWDG :  1; //!<[01] DEG_WWDG
      __IO ONE_BIT  DEG_I2C1 :  1; //!<[02] DEG_I2C1
      __IO ONE_BIT  DEG_I2C2 :  1; //!<[03] DEG_I2C2
      __IO ONE_BIT  DEG_TIM1 :  1; //!<[04] DEG_TIM1
      __IO ONE_BIT  DEG_TIM2 :  1; //!<[05] DEG_TIM2
      __IO ONE_BIT  DEG_TIM3 :  1; //!<[06] DEG_TIM3
      __IO ONE_BIT  DEG_TIM4 :  1; //!<[07] DEG_TIM4
    } B;
    __IO uint32_t  R;
    explicit CFGR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CFGR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CFGR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CFGR2_DEF {  //!< DBGMCU_CFGR2
    struct {
      __IO ONE_BIT  DBG_SLEEP   :  1; //!<[00] DBG_SLEEP
      __IO ONE_BIT  DBG_STOP    :  1; //!<[01] DBG_STOP
      __IO ONE_BIT  DBG_STANDBY :  1; //!<[02] DBG_STANDBY
    } B;
    __IO uint32_t  R;
    explicit CFGR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CFGR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CFGR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  // PERIPHERAL DBG REGISTERS INSTANCES
  __IO CFGR1_DEF           CFGR1 ;  //!< [0000](04)[0x00000000]
  __IO CFGR2_DEF           CFGR2 ;  //!< [0004](04)[0x00000000]
}; /* total size = 0x0400, struct size = 0x0008 */

// ////////////////////+++ USBHD +-+//////////////////// //
struct USBHD_Type        { /*!< USB register */
  union USB_CTRL_DEF                      {  //!< USB base control
    struct {
      __IO uint8_t    RB_UC_DMA_EN     :  1; //!<[00] DMA enable and DMA interrupt enable for USB
      __IO uint8_t    RB_UC_CLR_ALL    :  1; //!<[01] force clear FIFO and count of USB
      __IO uint8_t    RB_UC_RESET_SIE  :  1; //!<[02] force reset USB SIE, need software clear
      __IO uint8_t    RB_UC_INT_BUSY   :  1; //!<[03] enable automatic responding busy for device mode or automatic pause for host mode during interrupt flag UIF_TRANSFER valid
      __IO uint8_t    RB_UC_DEV_PU_EN  :  1; //!<[04] USB device enable and internal pullup resistance enable
      __IO uint8_t    RB_UC_SPEED_TYPE :  2; //!<[05] enable USB low speed: 00=full speed, 01=high speed, 10 =low speed
      __IO uint8_t    RB_UC_HOST_MODE  :  1; //!<[07] enable USB host mode: 0=device mode, 1=host mode
    } B;
    __IO uint8_t   R;
  };
  union UHOST_CTRL_DEF                    {  //!< USB HOST control
    struct {
      __IO uint8_t    bUH_TX_BUS_RESET   :  1; //!<[00] USB host bus reset status
      __IO uint8_t    bUH_TX_BUS_SUSPEND :  1; //!<[01] the host sends hang sigal
      __IO uint8_t    bUH_TX_BUS_RESUME  :  1; //!<[02] host wake up device
      __IO uint8_t    bUH_REMOTE_WKUP    :  1; //!<[03] the remoke wake-up
      __IO uint8_t    bUH_PHY_SUSPENDM   :  1; //!<[04] USB-PHY thesuspended state the internal USB-PLL is turned off
           uint8_t    UNUSED0            :  1; //!<[05] 
      __I  uint8_t    bUH_SOF_FREE       :  1; //!<[06] the bus is idle
      __IO uint8_t    bUH_SOF_EN         :  1; //!<[07] automatically generate the SOF packet enabling control bit
    } B;
    __IO uint8_t   R;
  };
  union USB_INT_EN_DEF                    {  //!< USB interrupt enable
    struct {
      __IO uint8_t    RB_UIE_BUS_RST__RB_UIE_DETECT :  1; //!<[00] enable interrupt for USB bus reset event for USB device mode;enable interrupt for USB device detected event for USB host mode
      __IO uint8_t    RB_UIE_TRANSFER               :  1; //!<[01] enable interrupt for USB transfer completion
      __IO uint8_t    RB_UIE_SUSPEND                :  1; //!<[02] enable interrupt for USB suspend or resume event
      __IO uint8_t    RB_UIE_SOF_ACT                :  1; //!<[03] indicate host SOF timer action status for USB host
      __IO uint8_t    RB_UIE_FIFO_OV                :  1; //!<[04] enable interrupt for FIFO overflow
      __IO uint8_t    RB_UIE_SETUP_ACT              :  1; //!<[05] indicate host SETUP timer action status for USB host
      __IO uint8_t    RB_UIE_ISO_ACT                :  1; //!<[06] enable interrupt for NAK responded for USB device mode
      __IO uint8_t    RB_UIE_DEV_NAK                :  1; //!<[07] enable interrupt for NAK responded for USB device mode
    } B;
    __IO uint8_t   R;
  };
  union USB_DEV_AD_DEF                    {  //!< USB device address
    struct {
      __IO uint8_t    MASK_USB_ADDR :  7; //!<[00] bit mask for USB device address
      __IO uint8_t    RB_UDA_GP_BIT :  1; //!<[07] general purpose bit
    } B;
    __IO uint8_t   R;
  };
  union USB_FRAME_NO_DEF                  {  //!< USB_FRAME_NO
    struct {
      __I  uint16_t   USB_FRAME_NO : 16; //!<[00] USB_FRAME_NO
    } B;
    __I  uint16_t  R;
  };
  union USB_USB_SUSPEND_DEF               {  //!< indicate USB suspend status
    struct {
      __IO uint8_t    USB_SYS_MOD   :  2; //!<[00] USB_SYS_MOD
      __IO uint8_t    USB_WAKEUP    :  1; //!<[02] remote resume
           uint8_t    UNUSED0       :  1; //!<[03] 
      __IO uint8_t    USB_LINESTATE :  2; //!<[04] USB_LINESTATE
    } B;
    __IO uint8_t   R;
  };
  union USB_SPEED_TYPE_DEF                {  //!< USB_SPEED_TYPE
    struct {
      __I  uint8_t    USB_SPEED_TYPE :  2; //!<[00] USB_SPEED_TYPE
    } B;
    __I  uint8_t   R;
  };
  union USB_MIS_ST_DEF                    {  //!< USB miscellaneous status
    struct {
      __I  uint8_t    RB_UMS_SPLIT_CAN  :  1; //!<[00] RO, indicate device attached status on USB host
      __I  uint8_t    RB_UMS_ATTACH     :  1; //!<[01] RO, indicate UDM level saved at device attached to USB host
      __I  uint8_t    RB_UMS_SUSPEND    :  1; //!<[02] RO, indicate USB suspend status
      __I  uint8_t    RB_UMS_BUS_RESET  :  1; //!<[03] RO, indicate USB bus reset status
      __I  uint8_t    RB_UMS_R_FIFO_RDY :  1; //!<[04] RO, indicate USB receiving FIFO ready status (not empty)
      __I  uint8_t    RB_UMS_SIE_FREE   :  1; //!<[05] RO, indicate USB SIE free status
      __I  uint8_t    RB_UMS_SOF_ACT    :  1; //!<[06] RO, indicate host SOF timer action status for USB host
      __I  uint8_t    RB_UMS_SOF_PRES   :  1; //!<[07] RO, indicate host SOF timer presage status
    } B;
    __I  uint8_t   R;
  };
  union USB_INT_FG_DEF                    {  //!< USB interrupt flag
    struct {
      __IO uint8_t    RB_UIF_BUS_RST  :  1; //!<[00] RB_UIF_BUS_RST
      __IO uint8_t    RB_UIF_TRANSFER :  1; //!<[01] USB transfer completion interrupt flag, direct bit address clear or write 1 to clear
      __IO uint8_t    RB_UIF_SUSPEND  :  1; //!<[02] USB suspend or resume event interrupt flag, direct bit address clear or write 1 to clear
      __IO uint8_t    RB_UIF_HST_SOF  :  1; //!<[03] host SOF timer interrupt flag for USB host, direct bit address clear or write 1 to clear
      __IO uint8_t    RB_UIF_FIFO_OV  :  1; //!<[04] FIFO overflow interrupt flag for USB, direct bit address clear or write 1 to clear
      __I  uint8_t    RB_U_SETUP_ACT  :  1; //!<[05] USB_SETUP_ACT
      __I  uint8_t    UIF_ISO_ACT     :  1; //!<[06] UIF_ISO_ACT
      __I  uint8_t    RB_U_IS_NAK     :  1; //!<[07] RO, indicate current USB transfer is NAK received
    } B;
    __IO uint8_t   R;
  };
  union USB_INT_ST_DEF                    {  //!< USB interrupt status
    struct {
      __I  uint8_t    MASK_UIS_H_RES__MASK_UIS_ENDP :  4; //!<[00] RO, bit mask of current transfer handshake response for USB host mode: 0000=no response, time out from device, others=handshake response PID received;RO, bit mask of current transfer endpoint number for USB device mode
      __I  uint8_t    MASK_UIS_TOKEN                :  2; //!<[04] RO, bit mask of current token PID code received for USB device mode
      __I  uint8_t    RB_UIS_TOG_OK                 :  1; //!<[06] RO, indicate current USB transfer toggle is OK
      __I  uint8_t    RB_UIS_IS_NAK                 :  1; //!<[07] RO, indicate current USB transfer is NAK received for USB device mode
    } B;
    __I  uint8_t   R;
  };
  union USB_RX_LEN_DEF                    {  //!< USB receiving length
    struct {
      __I  uint16_t   R16_USB_RX_LEN : 16; //!<[00] length of received bytes
    } B;
    __I  uint16_t  R;
  };
  union UEP_CONFIG_DEF                    {  //!< USB endpoint configuration
    struct {
           ONE_BIT    UNUSED0              :  1; //!<[00] 
      __IO uint32_t   bUEP_T_EN_bUH_TX_EN  : 15; //!<[01] endpoint TX enable/bUH_TX_EN
           ONE_BIT    UNUSED1              :  1; //!<[16] 
      __IO uint32_t   bUEP_R_EN__UH_EP_MOD : 15; //!<[17] endpoint RX enable/bUH_TX_EN
    } B;
    __IO uint32_t  R;
    explicit UEP_CONFIG_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      UEP_CONFIG_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      UEP_CONFIG_DEF r; r.R = R;
      R = f (r);
    }
  };
  union UEP_TYPE_DEF                      {  //!< USB endpoint type
    struct {
           ONE_BIT    UNUSED0     :  1; //!<[00] 
      __IO uint32_t   bUEP_T_TYPE : 15; //!<[01] endpoint TX type
           ONE_BIT    UNUSED1     :  1; //!<[16] 
      __IO uint32_t   bUEP_R_TYPE : 15; //!<[17] endpoint RX type
    } B;
    __IO uint32_t  R;
    explicit UEP_TYPE_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      UEP_TYPE_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      UEP_TYPE_DEF r; r.R = R;
      R = f (r);
    }
  };
  union UEP_BUF_MOD_DEF                   {  //!< USB endpoint buffer mode
    struct {
      __IO uint32_t   bUEP_BUF_MOD     : 16; //!<[00] buffer mode of USB endpoint
      __IO uint32_t   bUEP_ISO_BUF_MOD : 16; //!<[16] buffer mode of USB endpoint
    } B;
    __IO uint32_t  R;
    explicit UEP_BUF_MOD_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      UEP_BUF_MOD_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      UEP_BUF_MOD_DEF r; r.R = R;
      R = f (r);
    }
  };
  union UEP0_DMA_DEF                      {  //!< B endpoint 0 DMA buffer address
    struct {
      __IO uint16_t   UEP0_DMA : 16; //!<[00]  endpoint 0 DMA buffer address
    } B;
    __IO uint16_t  R;
  };
  union UEP1_RX_DMA_DEF                   {  //!< endpoint 1 DMA RX buffer address
    struct {
      __IO uint16_t   UEP1_RX_DMA : 16; //!<[00]  endpoint 1 DMA buffer address
    } B;
    __IO uint16_t  R;
  };
  union UEP2_RX_DMA__UH_RX_DMA_DEF        {  //!< endpoint 2 DMA RX buffer address/UH_RX_DMA
    struct {
      __IO uint16_t   UEP2_RX_DMA__UH_RX_DMA : 16; //!<[00]  endpoint 2 DMA buffer address
    } B;
    __IO uint16_t  R;
  };
  union UEP3_RX_DMA_DEF                   {  //!< endpoint 3 DMA RX buffer address
    struct {
      __IO uint16_t   UEP3_RX_DMA : 16; //!<[00]  endpoint 3 DMA buffer address
    } B;
    __IO uint16_t  R;
  };
  union UEP4_RX_DMA_DEF                   {  //!< endpoint 4 DMA RX buffer address
    struct {
      __IO uint16_t   UEP4_RX_DMA : 16; //!<[00]  endpoint 4 DMA buffer address
    } B;
    __IO uint16_t  R;
  };
  union UEP5_RX_DMA_DEF                   {  //!< endpoint 5 DMA RX buffer address
    struct {
      __IO uint16_t   UEP5_DMA : 16; //!<[00]  endpoint 5 DMA buffer address
    } B;
    __IO uint16_t  R;
  };
  union UEP6_RX_DMA_DEF                   {  //!< endpoint 6 DMA RX buffer address
    struct {
      __IO uint16_t   UEP6_RX_DMA : 16; //!<[00]  endpoint 6 DMA buffer address
    } B;
    __IO uint16_t  R;
  };
  union UEP7_RX_DMA_DEF                   {  //!< endpoint 7 DMA RX buffer address
    struct {
      __IO uint16_t   UEP7_RX_DMA : 16; //!<[00]  endpoint 7 DMA buffer address
    } B;
    __IO uint16_t  R;
  };
  union UEP8_RX_DMA_DEF                   {  //!< endpoint 8 DMA RX buffer address
    struct {
      __IO uint16_t   UEP8_RX_DMA : 16; //!<[00]  endpoint 8 DMA buffer address
    } B;
    __IO uint16_t  R;
  };
  union UEP9_RX_DMA_DEF                   {  //!< endpoint 9 DMA RX buffer address
    struct {
      __IO uint16_t   UEP9_RX_DMA : 16; //!<[00]  endpoint 9 DMA buffer address
    } B;
    __IO uint16_t  R;
  };
  union UEP10_RX_DMA_DEF                  {  //!< endpoint 10 DMA RX buffer address
    struct {
      __IO uint16_t   UEP10_RX_DMA : 16; //!<[00]  endpoint 10 DMA buffer address
    } B;
    __IO uint16_t  R;
  };
  union UEP11_RX_DMA_DEF                  {  //!< endpoint 11 DMA RX buffer address
    struct {
      __IO uint16_t   UEP11_RX_DMA : 16; //!<[00]  endpoint 11 DMA buffer address
    } B;
    __IO uint16_t  R;
  };
  union UEP12_RX_DMA_DEF                  {  //!< endpoint 12 DMA RX buffer address
    struct {
      __IO uint16_t   UEP12_RX_DMA : 16; //!<[00]  endpoint 12 DMA buffer address
    } B;
    __IO uint16_t  R;
  };
  union UEP13_RX_DMA_DEF                  {  //!< endpoint 13 DMA RX buffer address
    struct {
      __IO uint16_t   UEP13_RX_DMA : 16; //!<[00]  endpoint 13 DMA buffer address
    } B;
    __IO uint16_t  R;
  };
  union UEP14_RX_DMA_DEF                  {  //!< endpoint 14 DMA RX buffer address
    struct {
      __IO uint16_t   UEP14_RX_DMA : 16; //!<[00]  endpoint 14 DMA buffer address
    } B;
    __IO uint16_t  R;
  };
  union UEP15_RX_DMA_DEF                  {  //!< endpoint 15 DMA RX buffer address
    struct {
      __IO uint16_t   UEP15_RX_DMA : 16; //!<[00]  endpoint 15 DMA buffer address
    } B;
    __IO uint16_t  R;
  };
  union UEP1_TX_DMA_DEF                   {  //!< endpoint 1 DMA TX buffer address
    struct {
      __IO uint16_t   UEP1_TX_DMA : 16; //!<[00]  endpoint 1 DMA buffer address
    } B;
    __IO uint16_t  R;
  };
  union UEP2_TX_DMA_DEF                   {  //!< endpoint 2 DMA TX buffer address
    struct {
      __IO uint16_t   UEP2_TX_DMA : 16; //!<[00]  endpoint 2 DMA buffer address
    } B;
    __IO uint16_t  R;
  };
  union UEP3_TX_DMA__UH_TX_DMA_DEF        {  //!< endpoint 3 DMA TX buffer address
    struct {
      __IO uint16_t   UEP3_TX_DMA__UH_TX_DMA : 16; //!<[00]  endpoint 3 DMA buffer address
    } B;
    __IO uint16_t  R;
  };
  union UEP4_TX_DMA_DEF                   {  //!< endpoint 4 DMA TX buffer address
    struct {
      __IO uint16_t   UEP4_TX_DMA : 16; //!<[00]  endpoint 4 DMA buffer address
    } B;
    __IO uint16_t  R;
  };
  union UEP5_TX_DMA_DEF                   {  //!< endpoint 5 DMA TX buffer address
    struct {
      __IO uint16_t   UEP5_TX_DMA : 16; //!<[00]  endpoint 5 DMA buffer address
    } B;
    __IO uint16_t  R;
  };
  union UEP6_TX_DMA_DEF                   {  //!< endpoint 6 DMA TX buffer address
    struct {
      __IO uint16_t   UEP6_TX_DMA : 16; //!<[00]  endpoint 6 DMA buffer address
    } B;
    __IO uint16_t  R;
  };
  union UEP7_TX_DMA_DEF                   {  //!< endpoint 7 DMA TX buffer address
    struct {
      __IO uint16_t   UEP7_TX_DMA : 16; //!<[00]  endpoint 7 DMA buffer address
    } B;
    __IO uint16_t  R;
  };
  union UEP8_TX_DMA_DEF                   {  //!< endpoint 8 DMA TX buffer address
    struct {
      __IO uint16_t   UEP8_TX_DMA : 16; //!<[00]  endpoint 8 DMA buffer address
    } B;
    __IO uint16_t  R;
  };
  union UEP9_TX_DMA_DEF                   {  //!< endpoint 9 DMA TX buffer address
    struct {
      __IO uint16_t   UEP9_TX_DMA : 16; //!<[00]  endpoint 9 DMA buffer address
    } B;
    __IO uint16_t  R;
  };
  union UEP10_TX_DMA_DEF                  {  //!< endpoint 10 DMA TX buffer address
    struct {
      __IO uint16_t   UEP10_TX_DMA : 16; //!<[00]  endpoint 10 DMA buffer address
    } B;
    __IO uint16_t  R;
  };
  union UEP11_TX_DMA_DEF                  {  //!< endpoint 11 DMA TX buffer address
    struct {
      __IO uint16_t   UEP11_TX_DMA : 16; //!<[00]  endpoint 11 DMA buffer address
    } B;
    __IO uint16_t  R;
  };
  union UEP12_TX_DMA____UH_SPLIT_DATA_DEF {  //!< endpoint 12 DMA TX buffer address
    struct {
      __IO uint16_t   UEP12_TX_DMA___UH_SPLIT_DATA : 16; //!<[00]  endpoint 12 DMA buffer address
    } B;
    __IO uint16_t  R;
  };
  union UEP13_TX_DMA_DEF                  {  //!< endpoint 13 DMA TX buffer address
    struct {
      __IO uint16_t   UEP13_TX_DMA : 16; //!<[00]  endpoint 13 DMA buffer address
    } B;
    __IO uint16_t  R;
  };
  union UEP14_TX_DMA_DEF                  {  //!< endpoint 14 DMA TX buffer address
    struct {
      __IO uint16_t   UEP14_TX_DMA : 16; //!<[00]  endpoint 14 DMA buffer address
    } B;
    __IO uint16_t  R;
  };
  union UEP15_TX_DMA_DEF                  {  //!< endpoint 15 DMA TX buffer address
    struct {
      __IO uint16_t   UEP15_TX_DMA : 16; //!<[00]  endpoint 15 DMA buffer address
    } B;
    __IO uint16_t  R;
  };
  union UEP0_MAX_LEN_DEF                  {  //!< endpoint 0 max acceptable length
    struct {
      __IO uint16_t   UEP0_MAX_LEN : 11; //!<[00]  endpoint 0 max acceptable length
    } B;
    __IO uint16_t  R;
  };
  union UEP1_MAX_LEN_DEF                  {  //!< endpoint 1 max acceptable length
    struct {
      __IO uint16_t   UEP1_MAX_LEN : 11; //!<[00]  endpoint 1 max acceptable length
    } B;
    __IO uint16_t  R;
  };
  union UEP2_MAX_LEN__UH_RX_MAX_LEN_DEF   {  //!< endpoint 2 max acceptable length
    struct {
      __IO uint16_t   UEP2_MAX_LEN__UH_RX_MAX_LEN : 11; //!<[00]  endpoint 2 max acceptable length
    } B;
    __IO uint16_t  R;
  };
  union UEP3_MAX_LEN_DEF                  {  //!< endpoint 3 MAX_LEN TX
    struct {
      __IO uint16_t   UEP3_MAX_LEN : 11; //!<[00]  endpoint 3 max acceptable length
    } B;
    __IO uint16_t  R;
  };
  union UEP4_MAX_LEN_DEF                  {  //!< endpoint 4 max acceptable length
    struct {
      __IO uint16_t   UEP4_MAX_LEN : 11; //!<[00]  endpoint 4 max acceptable length
    } B;
    __IO uint16_t  R;
  };
  union UEP5_MAX_LEN_DEF                  {  //!< endpoint 5 max acceptable length
    struct {
      __IO uint16_t   UEP5_MAX_LEN : 11; //!<[00]  endpoint 5 max acceptable length
    } B;
    __IO uint16_t  R;
  };
  union UEP6_MAX_LEN_DEF                  {  //!< endpoint 6 max acceptable length
    struct {
      __IO uint16_t   UEP6_MAX_LEN : 11; //!<[00]  endpoint 6 max acceptable length
    } B;
    __IO uint16_t  R;
  };
  union UEP7_MAX_LEN_DEF                  {  //!< endpoint 7 max acceptable length
    struct {
      __IO uint16_t   UEP7_MAX_LEN : 11; //!<[00]  endpoint 7 max acceptable length
    } B;
    __IO uint16_t  R;
  };
  union UEP8_MAX_LEN_DEF                  {  //!< endpoint 8 max acceptable length
    struct {
      __IO uint16_t   UEP8_MAX_LEN : 11; //!<[00]  endpoint 8 max acceptable length
    } B;
    __IO uint16_t  R;
  };
  union UEP9_MAX_LEN_DEF                  {  //!< endpoint 9 max acceptable length
    struct {
      __IO uint16_t   UEP9_MAX_LEN : 11; //!<[00]  endpoint 9 max acceptable length
    } B;
    __IO uint16_t  R;
  };
  union UEP10_MAX_LEN_DEF                 {  //!< endpoint 10 max acceptable length
    struct {
      __IO uint16_t   UEP10_MAX_LEN : 11; //!<[00]  endpoint 10 max acceptable length
    } B;
    __IO uint16_t  R;
  };
  union UEP11_MAX_LEN_DEF                 {  //!< endpoint 11 max acceptable length
    struct {
      __IO uint16_t   UEP11_MAX_LEN : 11; //!<[00]  endpoint 11 max acceptable length
    } B;
    __IO uint16_t  R;
  };
  union UEP12_MAX_LEN_DEF                 {  //!< endpoint 12 max acceptable length
    struct {
      __IO uint16_t   UEP12_MAX_LEN : 11; //!<[00]  endpoint 12 max acceptable length
    } B;
    __IO uint16_t  R;
  };
  union UEP13_MAX_LEN_DEF                 {  //!< endpoint 13 max acceptable length
    struct {
      __IO uint16_t   UEP13_MAX_LEN : 11; //!<[00]  endpoint 13 max acceptable length
    } B;
    __IO uint16_t  R;
  };
  union UEP14_MAX_LEN_DEF                 {  //!< endpoint 14 max acceptable length
    struct {
      __IO uint16_t   UEP14_MAX_LEN : 11; //!<[00]  endpoint 14 max acceptable length
    } B;
    __IO uint16_t  R;
  };
  union UEP15_MAX_LEN_DEF                 {  //!< endpoint 15 max acceptable length
    struct {
      __IO uint16_t   UEP15_MAX_LEN : 11; //!<[00]  endpoint 15 max acceptable length
    } B;
    __IO uint16_t  R;
  };
  union UEP0_T_LEN_DEF                    {  //!< endpoint 0 send the length
    struct {
      __IO uint16_t   UEP0_T_LEN : 11; //!<[00]  endpoint 0 send the length
    } B;
    __IO uint16_t  R;
  };
  union UEP0_T_CTRL_DEF                   {  //!< endpoint 0 send control
    struct {
      __IO uint8_t    MASK_UEP_T_RES  :  2; //!<[00]  endpoint 0 control of the send response to IN transactions
           uint8_t    UNUSED0         :  1; //!<[02] 
      __IO uint8_t    MASK_UEP_T_TOG  :  2; //!<[03]  endpoint 0 synchronous trigger bit for the sender to prepare
      __IO uint8_t    bUEP_T_TOG_AUTO :  1; //!<[05]  endpoint 0 synchronous trigger bit automatic filp enables the control bit
    } B;
    __IO uint8_t   R;
  };
  union UEP0_R_CTRL_DEF                   {  //!< endpoint 0 send control
    struct {
      __IO uint8_t    MASK_UEP_R_RES  :  2; //!<[00]  endpoint 0 control of the accept response to OUT transactions
           uint8_t    UNUSED0         :  1; //!<[02] 
      __IO uint8_t    MASK_UEP_R_TOG  :  2; //!<[03]  endpoint 0 synchronous trigger bit for the accept to prepare
      __I  uint8_t    bUEP_R_TOG_AUTO :  1; //!<[05]  endpoint 0 synchronous trigger bit automatic filp enables the control bit
    } B;
    __IO uint8_t   R;
  };
  union UEP1_T_LEN_DEF                    {  //!< endpoint 1 send the length
    struct {
      __IO uint16_t   UEP1_T_LEN : 11; //!<[00]  endpoint 1 send the length
    } B;
    __IO uint16_t  R;
  };
  union UEP1_T_CTRL_DEF                   {  //!< endpoint 1 send control
    struct {
      __IO uint8_t    MASK_UEP_T_RES  :  2; //!<[00]  endpoint 1 control of the send response to IN transactions
           uint8_t    UNUSED0         :  1; //!<[02] 
      __IO uint8_t    MASK_UEP_T_TOG  :  2; //!<[03]  endpoint 1 synchronous trigger bit for the sender to prepare
      __IO uint8_t    bUEP_T_TOG_AUTO :  1; //!<[05]  endpoint 1 synchronous trigger bit automatic filp enables the control bit
    } B;
    __IO uint8_t   R;
  };
  union UEP1_R_CTRL_DEF                   {  //!< endpoint 1 send control
    struct {
      __IO uint8_t    MASK_UEP_R_RES  :  2; //!<[00]  endpoint 1 control of the accept response to OUT transactions
           uint8_t    UNUSED0         :  1; //!<[02] 
      __IO uint8_t    MASK_UEP_R_TOG  :  2; //!<[03]  endpoint 1 synchronous trigger bit for the accept to prepare
      __I  uint8_t    bUEP_R_TOG_AUTO :  1; //!<[05]  endpoint 1 synchronous trigger bit automatic filp enables the control bit
    } B;
    __IO uint8_t   R;
  };
  union UEP2_T_LEN__UH_EP_PID_DEF         {  //!< endpoint 2 send the length
    struct {
      __IO uint16_t   UEP2_T_LEN__MASK_UH_ENDP__MASK_UH_TOKEN : 11; //!<[00]  endpoint 2 send the length
    } B;
    __IO uint16_t  R;
  };
  union UEP2_T_CTRL_DEF                   {  //!< endpoint 2 send control
    struct {
      __IO uint8_t    MASK_UEP_T_RES  :  2; //!<[00]  endpoint 2 control of the send response to IN transactions
           uint8_t    UNUSED0         :  1; //!<[02] 
      __IO uint8_t    MASK_UEP_T_TOG  :  2; //!<[03]  endpoint 2 synchronous trigger bit for the sender to prepare
      __IO uint8_t    bUEP_T_TOG_AUTO :  1; //!<[05]  endpoint 2 synchronous trigger bit automatic filp enables the control bit
    } B;
    __IO uint8_t   R;
  };
  union UEP2_R_CTRL__UH_RX_CTRL_DEF       {  //!< endpoint 2 send control
    struct {
      __IO uint8_t    MASK_UEP_R_RES__MASK_UH_R_RES   :  2; //!<[00]  endpoint 2 control of the accept response to OUT transactions
      __IO uint8_t    bUH_R_RES_NO                    :  1; //!<[02]  bUH_R_RES_NO
      __IO uint8_t    MASK_UEP_R_TOG__MASK_UH_R_TOG   :  2; //!<[03]  endpoint 2 synchronous trigger bit for the accept to prepare
      __I  uint8_t    bUEP_R_TOG_AUTO__bUH_R_AUTO_TOG :  1; //!<[05]  endpoint 2 synchronous trigger bit automatic filp enables the control bit
      __IO uint8_t    bUH_R_DATA_NO                   :  1; //!<[06]  bUH_R_DATA_NO
    } B;
    __IO uint8_t   R;
  };
  union UEP3_T_LEN___UH_TX_LEN_H_DEF      {  //!< endpoint 3 send the length
    struct {
      __IO uint16_t   UEP3_T_LEN___UH_TX_LEN_H : 11; //!<[00]  endpoint 3 send the length
    } B;
    __IO uint16_t  R;
  };
  union UEP3_T_CTRL___UH_TX_CTRL_DEF      {  //!< endpoint 3 send control
    struct {
      __IO uint8_t    MASK_UEP_T_RES_____MASK_UH_T_RES  :  2; //!<[00]  endpoint 3 control of the send response to IN transactions
      __IO uint8_t    bUH_T_RES_NO                      :  1; //!<[02] bUH_T_RES_NO
      __IO uint8_t    MASK_UEP_T_TOG____MASK_UH_T_TOG   :  2; //!<[03]  endpoint 3 synchronous trigger bit for the sender to prepare
      __IO uint8_t    bUEP_T_TOG_AUTO____bUH_T_AUTO_TOG :  1; //!<[05]  endpoint 3 synchronous trigger bit automatic filp enables the control bit
      __IO uint8_t    bUH_T_DATA_NO                     :  1; //!<[06]  bUH_T_DATA_NO
    } B;
    __IO uint8_t   R;
  };
  union UEP3_R_CTRL_DEF                   {  //!< endpoint 3 send control
    struct {
      __IO uint8_t    MASK_UEP_R_RES  :  2; //!<[00]  endpoint 3 control of the accept response to OUT transactions
           uint8_t    UNUSED0         :  1; //!<[02] 
      __IO uint8_t    MASK_UEP_R_TOG  :  2; //!<[03]  endpoint 3 synchronous trigger bit for the accept to prepare
      __I  uint8_t    bUEP_R_TOG_AUTO :  1; //!<[05]  endpoint 3 synchronous trigger bit automatic filp enables the control bit
    } B;
    __IO uint8_t   R;
  };
  union UEP4_T_LEN_DEF                    {  //!< endpoint 4 send the length
    struct {
      __IO uint16_t   UEP4_T_LEN : 11; //!<[00]  endpoint 0 send the length
    } B;
    __IO uint16_t  R;
  };
  union UEP4_T_CTRL_DEF                   {  //!< endpoint 4 send control
    struct {
      __IO uint8_t    MASK_UEP_T_RES  :  2; //!<[00]  endpoint 4 control of the send response to IN transactions
           uint8_t    UNUSED0         :  1; //!<[02] 
      __IO uint8_t    MASK_UEP_T_TOG  :  2; //!<[03]  endpoint 4 synchronous trigger bit for the sender to prepare
      __IO uint8_t    bUEP_T_TOG_AUTO :  1; //!<[05]  endpoint 4 synchronous trigger bit automatic filp enables the control bit
    } B;
    __IO uint8_t   R;
  };
  union UEP4_R_CTRL_DEF                   {  //!< endpoint 4 send control
    struct {
      __IO uint8_t    MASK_UEP_R_RES  :  2; //!<[00]  endpoint 4 control of the accept response to OUT transactions
           uint8_t    UNUSED0         :  1; //!<[02] 
      __IO uint8_t    MASK_UEP_R_TOG  :  2; //!<[03]  endpoint 4 synchronous trigger bit for the accept to prepare
      __I  uint8_t    bUEP_R_TOG_AUTO :  1; //!<[05]  endpoint 4 synchronous trigger bit automatic filp enables the control bit
    } B;
    __IO uint8_t   R;
  };
  union UEP5_T_LEN_DEF                    {  //!< endpoint 5 send the length
    struct {
      __IO uint16_t   UEP5_T_LEN : 11; //!<[00]  endpoint 5 send the length
    } B;
    __IO uint16_t  R;
  };
  union UEP5_T_CTRL_DEF                   {  //!< endpoint 5 send control
    struct {
      __IO uint8_t    MASK_UEP_T_RES  :  2; //!<[00]  endpoint 5 control of the send response to IN transactions
           uint8_t    UNUSED0         :  1; //!<[02] 
      __IO uint8_t    MASK_UEP_T_TOG  :  2; //!<[03]  endpoint 5 synchronous trigger bit for the sender to prepare
      __IO uint8_t    bUEP_T_TOG_AUTO :  1; //!<[05]  endpoint 5 synchronous trigger bit automatic filp enables the control bit
    } B;
    __IO uint8_t   R;
  };
  union UEP5_R_CTRL_DEF                   {  //!< endpoint 5 send control
    struct {
      __IO uint8_t    MASK_UEP_R_RES  :  2; //!<[00]  endpoint 5 control of the accept response to OUT transactions
           uint8_t    UNUSED0         :  1; //!<[02] 
      __IO uint8_t    MASK_UEP_R_TOG  :  2; //!<[03]  endpoint 5 synchronous trigger bit for the accept to prepare
      __I  uint8_t    bUEP_R_TOG_AUTO :  1; //!<[05]  endpoint 5 synchronous trigger bit automatic filp enables the control bit
    } B;
    __IO uint8_t   R;
  };
  union UEP6_T_LEN_DEF                    {  //!< endpoint 6 send the length
    struct {
      __IO uint16_t   UEP6_T_LEN : 11; //!<[00]  endpoint 6 send the length
    } B;
    __IO uint16_t  R;
  };
  union UEP6_T_CTRL_DEF                   {  //!< endpoint 6 send control
    struct {
      __IO uint8_t    MASK_UEP_T_RES  :  2; //!<[00]  endpoint 6 control of the send response to IN transactions
           uint8_t    UNUSED0         :  1; //!<[02] 
      __IO uint8_t    MASK_UEP_T_TOG  :  2; //!<[03]  endpoint 6 synchronous trigger bit for the sender to prepare
      __IO uint8_t    bUEP_T_TOG_AUTO :  1; //!<[05]  endpoint 6 synchronous trigger bit automatic filp enables the control bit
    } B;
    __IO uint8_t   R;
  };
  union UEP6_R_CTRL_DEF                   {  //!< endpoint 6 send control
    struct {
      __IO uint8_t    MASK_UEP_R_RES  :  2; //!<[00]  endpoint 6 control of the accept response to OUT transactions
           uint8_t    UNUSED0         :  1; //!<[02] 
      __IO uint8_t    MASK_UEP_R_TOG  :  2; //!<[03]  endpoint 6 synchronous trigger bit for the accept to prepare
      __I  uint8_t    bUEP_R_TOG_AUTO :  1; //!<[05]  endpoint 6 synchronous trigger bit automatic filp enables the control bit
    } B;
    __IO uint8_t   R;
  };
  union UEP7_T_LEN_DEF                    {  //!< endpoint 7 send the length
    struct {
      __IO uint16_t   UEP7_T_LEN : 11; //!<[00]  endpoint 7 send the length
    } B;
    __IO uint16_t  R;
  };
  union UEP7_T_CTRL_DEF                   {  //!< endpoint 7 send control
    struct {
      __IO uint8_t    MASK_UEP_T_RES  :  2; //!<[00]  endpoint 7 control of the send response to IN transactions
           uint8_t    UNUSED0         :  1; //!<[02] 
      __IO uint8_t    MASK_UEP_T_TOG  :  2; //!<[03]  endpoint 7 synchronous trigger bit for the sender to prepare
      __IO uint8_t    bUEP_T_TOG_AUTO :  1; //!<[05]  endpoint 7 synchronous trigger bit automatic filp enables the control bit
    } B;
    __IO uint8_t   R;
  };
  union UEP7_R_CTRL_DEF                   {  //!< endpoint 7 send control
    struct {
      __IO uint8_t    MASK_UEP_R_RES  :  2; //!<[00]  endpoint 7 control of the accept response to OUT transactions
           uint8_t    UNUSED0         :  1; //!<[02] 
      __IO uint8_t    MASK_UEP_R_TOG  :  2; //!<[03]  endpoint 7 synchronous trigger bit for the accept to prepare
      __I  uint8_t    bUEP_R_TOG_AUTO :  1; //!<[05]  endpoint 7 synchronous trigger bit automatic filp enables the control bit
    } B;
    __IO uint8_t   R;
  };
  union UEP8_T_LEN_DEF                    {  //!< endpoint 8 send the length
    struct {
      __IO uint16_t   UEP8_T_LEN : 11; //!<[00]  endpoint 8 send the length
    } B;
    __IO uint16_t  R;
  };
  union UEP8_T_CTRL_DEF                   {  //!< endpoint 8 send control
    struct {
      __IO uint8_t    MASK_UEP_T_RES  :  2; //!<[00]  endpoint 8 control of the send response to IN transactions
           uint8_t    UNUSED0         :  1; //!<[02] 
      __IO uint8_t    MASK_UEP_T_TOG  :  2; //!<[03]  endpoint 8 synchronous trigger bit for the sender to prepare
      __IO uint8_t    bUEP_T_TOG_AUTO :  1; //!<[05]  endpoint 8 synchronous trigger bit automatic filp enables the control bit
    } B;
    __IO uint8_t   R;
  };
  union UEP8_R_CTRL_DEF                   {  //!< endpoint 8 send control
    struct {
      __IO uint8_t    MASK_UEP_R_RES  :  2; //!<[00]  endpoint 8 control of the accept response to OUT transactions
           uint8_t    UNUSED0         :  1; //!<[02] 
      __IO uint8_t    MASK_UEP_R_TOG  :  2; //!<[03]  endpoint 8 synchronous trigger bit for the accept to prepare
      __I  uint8_t    bUEP_R_TOG_AUTO :  1; //!<[05]  endpoint 8 synchronous trigger bit automatic filp enables the control bit
    } B;
    __IO uint8_t   R;
  };
  union UEP9_T_LEN_DEF                    {  //!< endpoint9 send the length
    struct {
      __IO uint16_t   UEP9_T_LEN : 11; //!<[00]  endpoint 9 send the length
    } B;
    __IO uint16_t  R;
  };
  union UEP9_T_CTRL_DEF                   {  //!< endpoint 9 send control
    struct {
      __IO uint8_t    MASK_UEP_T_RES  :  2; //!<[00]  endpoint 9 control of the send response to IN transactions
           uint8_t    UNUSED0         :  1; //!<[02] 
      __IO uint8_t    MASK_UEP_T_TOG  :  2; //!<[03]  endpoint 9 synchronous trigger bit for the sender to prepare
      __IO uint8_t    bUEP_T_TOG_AUTO :  1; //!<[05]  endpoint 9 synchronous trigger bit automatic filp enables the control bit
    } B;
    __IO uint8_t   R;
  };
  union UEP9_R_CTRL_DEF                   {  //!< endpoint 9 send control
    struct {
      __IO uint8_t    MASK_UEP_R_RES  :  2; //!<[00]  endpoint 9 control of the accept response to OUT transactions
           uint8_t    UNUSED0         :  1; //!<[02] 
      __IO uint8_t    MASK_UEP_R_TOG  :  2; //!<[03]  endpoint 9 synchronous trigger bit for the accept to prepare
      __I  uint8_t    bUEP_R_TOG_AUTO :  1; //!<[05]  endpoint 9 synchronous trigger bit automatic filp enables the control bit
    } B;
    __IO uint8_t   R;
  };
  union UEP10_T_LEN_DEF                   {  //!< endpoint 10 send the length
    struct {
      __IO uint16_t   UEP10_T_LEN : 11; //!<[00]  endpoint 10 send the length
    } B;
    __IO uint16_t  R;
  };
  union UEP10_T_CTRL_DEF                  {  //!< endpoint 10 send control
    struct {
      __IO uint8_t    MASK_UEP_T_RES  :  2; //!<[00]  endpoint 10 control of the send response to IN transactions
           uint8_t    UNUSED0         :  1; //!<[02] 
      __IO uint8_t    MASK_UEP_T_TOG  :  2; //!<[03]  endpoint 10 synchronous trigger bit for the sender to prepare
      __IO uint8_t    bUEP_T_TOG_AUTO :  1; //!<[05]  endpoint 10 synchronous trigger bit automatic filp enables the control bit
    } B;
    __IO uint8_t   R;
  };
  union UEP10_R_CTRL_DEF                  {  //!< endpoint 10 send control
    struct {
      __IO uint8_t    MASK_UEP_R_RES  :  2; //!<[00]  endpoint 10 control of the accept response to OUT transactions
           uint8_t    UNUSED0         :  1; //!<[02] 
      __IO uint8_t    MASK_UEP_R_TOG  :  2; //!<[03]  endpoint 10 synchronous trigger bit for the accept to prepare
      __I  uint8_t    bUEP_R_TOG_AUTO :  1; //!<[05]  endpoint 10 synchronous trigger bit automatic filp enables the control bit
    } B;
    __IO uint8_t   R;
  };
  union UEP11_T_LEN_DEF                   {  //!< endpoint 11 send the length
    struct {
      __IO uint16_t   UEP0_T_LEN : 11; //!<[00]  endpoint 11 send the length
    } B;
    __IO uint16_t  R;
  };
  union UEP11_T_CTRL_DEF                  {  //!< endpoint 11 send control
    struct {
      __IO uint8_t    MASK_UEP_T_RES  :  2; //!<[00]  endpoint 11 control of the send response to IN transactions
           uint8_t    UNUSED0         :  1; //!<[02] 
      __IO uint8_t    MASK_UEP_T_TOG  :  2; //!<[03]  endpoint 11 synchronous trigger bit for the sender to prepare
      __IO uint8_t    bUEP_T_TOG_AUTO :  1; //!<[05]  endpoint 11 synchronous trigger bit automatic filp enables the control bit
    } B;
    __IO uint8_t   R;
  };
  union UEP11_R_CTRL_DEF                  {  //!< endpoint 11 send control
    struct {
      __IO uint8_t    MASK_UEP_R_RES  :  2; //!<[00]  endpoint 11 control of the accept response to OUT transactions
           uint8_t    UNUSED0         :  1; //!<[02] 
      __IO uint8_t    MASK_UEP_R_TOG  :  2; //!<[03]  endpoint 11 synchronous trigger bit for the accept to prepare
      __I  uint8_t    bUEP_R_TOG_AUTO :  1; //!<[05]  endpoint 11 synchronous trigger bit automatic filp enables the control bit
    } B;
    __IO uint8_t   R;
  };
  union UEP12_T_LEN_DEF                   {  //!< endpoint 12 send the length
    struct {
      __IO uint16_t   UEP0_T_LEN : 11; //!<[00]  endpoint 12 send the length
    } B;
    __IO uint16_t  R;
  };
  union UEP12_T_CTRL_DEF                  {  //!< endpoint 12 send control
    struct {
      __IO uint8_t    MASK_UEP_T_RES  :  2; //!<[00]  endpoint 12 control of the send response to IN transactions
           uint8_t    UNUSED0         :  1; //!<[02] 
      __IO uint8_t    MASK_UEP_T_TOG  :  2; //!<[03]  endpoint 12 synchronous trigger bit for the sender to prepare
      __IO uint8_t    bUEP_T_TOG_AUTO :  1; //!<[05]  endpoint 12 synchronous trigger bit automatic filp enables the control bit
    } B;
    __IO uint8_t   R;
  };
  union UEP12_R_CTRL_DEF                  {  //!< endpoint 12 send control
    struct {
      __IO uint8_t    MASK_UEP_R_RES  :  2; //!<[00]  endpoint 12 control of the accept response to OUT transactions
           uint8_t    UNUSED0         :  1; //!<[02] 
      __IO uint8_t    MASK_UEP_R_TOG  :  2; //!<[03]  endpoint 12 synchronous trigger bit for the accept to prepare
      __I  uint8_t    bUEP_R_TOG_AUTO :  1; //!<[05]  endpoint 12 synchronous trigger bit automatic filp enables the control bit
    } B;
    __IO uint8_t   R;
  };
  union UEP13_T_LEN_DEF                   {  //!< endpoint 13 send the length
    struct {
      __IO uint16_t   UEP13_T_LEN : 11; //!<[00]  endpoint 13 send the length
    } B;
    __IO uint16_t  R;
  };
  union UEP13_T_CTRL_DEF                  {  //!< endpoint 13 send control
    struct {
      __IO uint8_t    MASK_UEP_T_RES  :  2; //!<[00]  endpoint 13 control of the send response to IN transactions
           uint8_t    UNUSED0         :  1; //!<[02] 
      __IO uint8_t    MASK_UEP_T_TOG  :  2; //!<[03]  endpoint 13 synchronous trigger bit for the sender to prepare
      __IO uint8_t    bUEP_T_TOG_AUTO :  1; //!<[05]  endpoint 13 synchronous trigger bit automatic filp enables the control bit
    } B;
    __IO uint8_t   R;
  };
  union UEP13_R_CTRL_DEF                  {  //!< endpoint 13 send control
    struct {
      __IO uint8_t    MASK_UEP_R_RES  :  2; //!<[00]  endpoint 13 control of the accept response to OUT transactions
           uint8_t    UNUSED0         :  1; //!<[02] 
      __IO uint8_t    MASK_UEP_R_TOG  :  2; //!<[03]  endpoint 13 synchronous trigger bit for the accept to prepare
      __I  uint8_t    bUEP_R_TOG_AUTO :  1; //!<[05]  endpoint 13 synchronous trigger bit automatic filp enables the control bit
    } B;
    __IO uint8_t   R;
  };
  union UEP14_T_LEN_DEF                   {  //!< endpoint 14 send the length
    struct {
      __IO uint16_t   UEP14_T_LEN : 11; //!<[00]  endpoint 14 send the length
    } B;
    __IO uint16_t  R;
  };
  union UEP14_T_CTRL_DEF                  {  //!< endpoint 14 send control
    struct {
      __IO uint8_t    MASK_UEP_T_RES  :  2; //!<[00]  endpoint 14 control of the send response to IN transactions
           uint8_t    UNUSED0         :  1; //!<[02] 
      __IO uint8_t    MASK_UEP_T_TOG  :  2; //!<[03]  endpoint 14 synchronous trigger bit for the sender to prepare
      __IO uint8_t    bUEP_T_TOG_AUTO :  1; //!<[05]  endpoint 14 synchronous trigger bit automatic filp enables the control bit
    } B;
    __IO uint8_t   R;
  };
  union UEP14_R_CTRL_DEF                  {  //!< endpoint 14 send control
    struct {
      __IO uint8_t    MASK_UEP_R_RES  :  2; //!<[00]  endpoint 14 control of the accept response to OUT transactions
           uint8_t    UNUSED0         :  1; //!<[02] 
      __IO uint8_t    MASK_UEP_R_TOG  :  2; //!<[03]  endpoint 14 synchronous trigger bit for the accept to prepare
      __I  uint8_t    bUEP_R_TOG_AUTO :  1; //!<[05]  endpoint 14 synchronous trigger bit automatic filp enables the control bit
    } B;
    __IO uint8_t   R;
  };
  union UEP15_T_LEN_DEF                   {  //!< endpoint 15 send the length
    struct {
      __IO uint16_t   UEP0_T_LEN : 11; //!<[00]  endpoint 15 send the length
    } B;
    __IO uint16_t  R;
  };
  union UEP15_T_CTRL_DEF                  {  //!< endpoint 15 send control
    struct {
      __IO uint8_t    MASK_UEP_T_RES  :  2; //!<[00]  endpoint 15 control of the send response to IN transactions
           uint8_t    UNUSED0         :  1; //!<[02] 
      __IO uint8_t    MASK_UEP_T_TOG  :  2; //!<[03]  endpoint 15 synchronous trigger bit for the sender to prepare
      __IO uint8_t    bUEP_T_TOG_AUTO :  1; //!<[05]  endpoint 15 synchronous trigger bit automatic filp enables the control bit
    } B;
    __IO uint8_t   R;
  };
  union UEP15_R_CTRL_DEF                  {  //!< endpoint 15 send control
    struct {
      __IO uint8_t    MASK_UEP_R_RES  :  2; //!<[00]  endpoint 15 control of the accept response to OUT transactions
           uint8_t    UNUSED0         :  1; //!<[02] 
      __IO uint8_t    MASK_UEP_R_TOG  :  2; //!<[03]  endpoint 15 synchronous trigger bit for the accept to prepare
      __I  uint8_t    bUEP_R_TOG_AUTO :  1; //!<[05]  endpoint 15 synchronous trigger bit automatic filp enables the control bit
    } B;
    __IO uint8_t   R;
  };
  // PERIPHERAL USBHD REGISTERS INSTANCES
  __IO USB_CTRL_DEF                             USB_CTRL ;  //!< [0000](01)[0x00000006]
  __IO UHOST_CTRL_DEF                         UHOST_CTRL ;  //!< [0001](01)[0x00000000]
  __IO USB_INT_EN_DEF                         USB_INT_EN ;  //!< [0002](01)[0x00000000]
  __IO USB_DEV_AD_DEF                         USB_DEV_AD ;  //!< [0003](01)[0x00000000]
  __I  USB_FRAME_NO_DEF                     USB_FRAME_NO ;  //!< [0004](02)[0x00000000]
  __IO USB_USB_SUSPEND_DEF               USB_USB_SUSPEND ;  //!< [0006](01)[0x00000000]
       uint8_t                                 UNUSED0 ;  //!< [0007](01)[0xFFFFFFFF]
  __I  USB_SPEED_TYPE_DEF                 USB_SPEED_TYPE ;  //!< [0008](01)[0x00000000]
  __I  USB_MIS_ST_DEF                         USB_MIS_ST ;  //!< [0009](01)[0x00000000]
  __IO USB_INT_FG_DEF                         USB_INT_FG ;  //!< [000a](01)[0x00000020]
  __I  USB_INT_ST_DEF                         USB_INT_ST ;  //!< [000b](01)[0x00000000]
  __I  USB_RX_LEN_DEF                         USB_RX_LEN ;  //!< [000c](02)[0x00000000]
       uint8_t                                 UNUSED1 [2];  //!< [000e](02)[0xFFFFFFFF]
  __IO UEP_CONFIG_DEF                         UEP_CONFIG ;  //!< [0010](04)[0x00000000]
  __IO UEP_TYPE_DEF                             UEP_TYPE ;  //!< [0014](04)[0x00000000]
  __IO UEP_BUF_MOD_DEF                       UEP_BUF_MOD ;  //!< [0018](04)[0x00000000]
  __IO UEP0_DMA_DEF                             UEP0_DMA ;  //!< [001c](02)[0x00000000]
       uint8_t                                 UNUSED2 [2];  //!< [001e](02)[0xFFFFFFFF]
  __IO UEP1_RX_DMA_DEF                       UEP1_RX_DMA ;  //!< [0020](02)[0x00000000]
       uint8_t                                 UNUSED3 [2];  //!< [0022](02)[0xFFFFFFFF]
  __IO UEP2_RX_DMA__UH_RX_DMA_DEF        UEP2_RX_DMA__UH_RX_DMA ;  //!< [0024](02)[0x00000000]
       uint8_t                                 UNUSED4 [2];  //!< [0026](02)[0xFFFFFFFF]
  __IO UEP3_RX_DMA_DEF                       UEP3_RX_DMA ;  //!< [0028](02)[0x00000000]
       uint8_t                                 UNUSED5 [2];  //!< [002a](02)[0xFFFFFFFF]
  __IO UEP4_RX_DMA_DEF                       UEP4_RX_DMA ;  //!< [002c](02)[0x00000000]
       uint8_t                                 UNUSED6 [2];  //!< [002e](02)[0xFFFFFFFF]
  __IO UEP5_RX_DMA_DEF                       UEP5_RX_DMA ;  //!< [0030](02)[0x00000000]
       uint8_t                                 UNUSED7 [2];  //!< [0032](02)[0xFFFFFFFF]
  __IO UEP6_RX_DMA_DEF                       UEP6_RX_DMA ;  //!< [0034](02)[0x00000000]
       uint8_t                                 UNUSED8 [2];  //!< [0036](02)[0xFFFFFFFF]
  __IO UEP7_RX_DMA_DEF                       UEP7_RX_DMA ;  //!< [0038](02)[0x00000000]
       uint8_t                                 UNUSED9 [2];  //!< [003a](02)[0xFFFFFFFF]
  __IO UEP8_RX_DMA_DEF                       UEP8_RX_DMA ;  //!< [003c](02)[0x00000000]
       uint8_t                               UNUSED10 [2];  //!< [003e](02)[0xFFFFFFFF]
  __IO UEP9_RX_DMA_DEF                       UEP9_RX_DMA ;  //!< [0040](02)[0x00000000]
       uint8_t                               UNUSED11 [2];  //!< [0042](02)[0xFFFFFFFF]
  __IO UEP10_RX_DMA_DEF                     UEP10_RX_DMA ;  //!< [0044](02)[0x00000000]
       uint8_t                               UNUSED12 [2];  //!< [0046](02)[0xFFFFFFFF]
  __IO UEP11_RX_DMA_DEF                     UEP11_RX_DMA ;  //!< [0048](02)[0x00000000]
       uint8_t                               UNUSED13 [2];  //!< [004a](02)[0xFFFFFFFF]
  __IO UEP12_RX_DMA_DEF                     UEP12_RX_DMA ;  //!< [004c](02)[0x00000000]
       uint8_t                               UNUSED14 [2];  //!< [004e](02)[0xFFFFFFFF]
  __IO UEP13_RX_DMA_DEF                     UEP13_RX_DMA ;  //!< [0050](02)[0x00000000]
       uint8_t                               UNUSED15 [2];  //!< [0052](02)[0xFFFFFFFF]
  __IO UEP14_RX_DMA_DEF                     UEP14_RX_DMA ;  //!< [0054](02)[0x00000000]
       uint8_t                               UNUSED16 [2];  //!< [0056](02)[0xFFFFFFFF]
  __IO UEP15_RX_DMA_DEF                     UEP15_RX_DMA ;  //!< [0058](02)[0x00000000]
       uint8_t                               UNUSED17 [2];  //!< [005a](02)[0xFFFFFFFF]
  __IO UEP1_TX_DMA_DEF                       UEP1_TX_DMA ;  //!< [005c](02)[0x00000000]
       uint8_t                               UNUSED18 [2];  //!< [005e](02)[0xFFFFFFFF]
  __IO UEP2_TX_DMA_DEF                       UEP2_TX_DMA ;  //!< [0060](02)[0x00000000]
       uint8_t                               UNUSED19 [2];  //!< [0062](02)[0xFFFFFFFF]
  __IO UEP3_TX_DMA__UH_TX_DMA_DEF        UEP3_TX_DMA__UH_TX_DMA ;  //!< [0064](02)[0x00000000]
       uint8_t                               UNUSED20 [2];  //!< [0066](02)[0xFFFFFFFF]
  __IO UEP4_TX_DMA_DEF                       UEP4_TX_DMA ;  //!< [0068](02)[0x00000000]
       uint8_t                               UNUSED21 [2];  //!< [006a](02)[0xFFFFFFFF]
  __IO UEP5_TX_DMA_DEF                       UEP5_TX_DMA ;  //!< [006c](02)[0x00000000]
       uint8_t                               UNUSED22 [2];  //!< [006e](02)[0xFFFFFFFF]
  __IO UEP6_TX_DMA_DEF                       UEP6_TX_DMA ;  //!< [0070](02)[0x00000000]
       uint8_t                               UNUSED23 [2];  //!< [0072](02)[0xFFFFFFFF]
  __IO UEP7_TX_DMA_DEF                       UEP7_TX_DMA ;  //!< [0074](02)[0x00000000]
       uint8_t                               UNUSED24 [2];  //!< [0076](02)[0xFFFFFFFF]
  __IO UEP8_TX_DMA_DEF                       UEP8_TX_DMA ;  //!< [0078](02)[0x00000000]
       uint8_t                               UNUSED25 [2];  //!< [007a](02)[0xFFFFFFFF]
  __IO UEP9_TX_DMA_DEF                       UEP9_TX_DMA ;  //!< [007c](02)[0x00000000]
       uint8_t                               UNUSED26 [2];  //!< [007e](02)[0xFFFFFFFF]
  __IO UEP10_TX_DMA_DEF                     UEP10_TX_DMA ;  //!< [0080](02)[0x00000000]
       uint8_t                               UNUSED27 [2];  //!< [0082](02)[0xFFFFFFFF]
  __IO UEP11_TX_DMA_DEF                     UEP11_TX_DMA ;  //!< [0084](02)[0x00000000]
       uint8_t                               UNUSED28 [2];  //!< [0086](02)[0xFFFFFFFF]
  __IO UEP12_TX_DMA____UH_SPLIT_DATA_DEF UEP12_TX_DMA____UH_SPLIT_DATA ;  //!< [0088](02)[0x00000000]
       uint8_t                               UNUSED29 [2];  //!< [008a](02)[0xFFFFFFFF]
  __IO UEP13_TX_DMA_DEF                     UEP13_TX_DMA ;  //!< [008c](02)[0x00000000]
       uint8_t                               UNUSED30 [2];  //!< [008e](02)[0xFFFFFFFF]
  __IO UEP14_TX_DMA_DEF                     UEP14_TX_DMA ;  //!< [0090](02)[0x00000000]
       uint8_t                               UNUSED31 [2];  //!< [0092](02)[0xFFFFFFFF]
  __IO UEP15_TX_DMA_DEF                     UEP15_TX_DMA ;  //!< [0094](02)[0x00000000]
       uint8_t                               UNUSED32 [2];  //!< [0096](02)[0xFFFFFFFF]
  __IO UEP0_MAX_LEN_DEF                     UEP0_MAX_LEN ;  //!< [0098](02)[0x00000000]
       uint8_t                               UNUSED33 [2];  //!< [009a](02)[0xFFFFFFFF]
  __IO UEP1_MAX_LEN_DEF                     UEP1_MAX_LEN ;  //!< [009c](02)[0x00000000]
       uint8_t                               UNUSED34 [2];  //!< [009e](02)[0xFFFFFFFF]
  __IO UEP2_MAX_LEN__UH_RX_MAX_LEN_DEF   UEP2_MAX_LEN__UH_RX_MAX_LEN ;  //!< [00a0](02)[0x00000000]
       uint8_t                               UNUSED35 [2];  //!< [00a2](02)[0xFFFFFFFF]
  __IO UEP3_MAX_LEN_DEF                     UEP3_MAX_LEN ;  //!< [00a4](02)[0x00000000]
       uint8_t                               UNUSED36 [2];  //!< [00a6](02)[0xFFFFFFFF]
  __IO UEP4_MAX_LEN_DEF                     UEP4_MAX_LEN ;  //!< [00a8](02)[0x00000000]
       uint8_t                               UNUSED37 [2];  //!< [00aa](02)[0xFFFFFFFF]
  __IO UEP5_MAX_LEN_DEF                     UEP5_MAX_LEN ;  //!< [00ac](02)[0x00000000]
       uint8_t                               UNUSED38 [2];  //!< [00ae](02)[0xFFFFFFFF]
  __IO UEP6_MAX_LEN_DEF                     UEP6_MAX_LEN ;  //!< [00b0](02)[0x00000000]
       uint8_t                               UNUSED39 [2];  //!< [00b2](02)[0xFFFFFFFF]
  __IO UEP7_MAX_LEN_DEF                     UEP7_MAX_LEN ;  //!< [00b4](02)[0x00000000]
       uint8_t                               UNUSED40 [2];  //!< [00b6](02)[0xFFFFFFFF]
  __IO UEP8_MAX_LEN_DEF                     UEP8_MAX_LEN ;  //!< [00b8](02)[0x00000000]
       uint8_t                               UNUSED41 [2];  //!< [00ba](02)[0xFFFFFFFF]
  __IO UEP9_MAX_LEN_DEF                     UEP9_MAX_LEN ;  //!< [00bc](02)[0x00000000]
       uint8_t                               UNUSED42 [2];  //!< [00be](02)[0xFFFFFFFF]
  __IO UEP10_MAX_LEN_DEF                   UEP10_MAX_LEN ;  //!< [00c0](02)[0x00000000]
       uint8_t                               UNUSED43 [2];  //!< [00c2](02)[0xFFFFFFFF]
  __IO UEP11_MAX_LEN_DEF                   UEP11_MAX_LEN ;  //!< [00c4](02)[0x00000000]
       uint8_t                               UNUSED44 [2];  //!< [00c6](02)[0xFFFFFFFF]
  __IO UEP12_MAX_LEN_DEF                   UEP12_MAX_LEN ;  //!< [00c8](02)[0x00000000]
       uint8_t                               UNUSED45 [2];  //!< [00ca](02)[0xFFFFFFFF]
  __IO UEP13_MAX_LEN_DEF                   UEP13_MAX_LEN ;  //!< [00cc](02)[0x00000000]
       uint8_t                               UNUSED46 [2];  //!< [00ce](02)[0xFFFFFFFF]
  __IO UEP14_MAX_LEN_DEF                   UEP14_MAX_LEN ;  //!< [00d0](02)[0x00000000]
       uint8_t                               UNUSED47 [2];  //!< [00d2](02)[0xFFFFFFFF]
  __IO UEP15_MAX_LEN_DEF                   UEP15_MAX_LEN ;  //!< [00d4](02)[0x00000000]
       uint8_t                               UNUSED48 [2];  //!< [00d6](02)[0xFFFFFFFF]
  __IO UEP0_T_LEN_DEF                         UEP0_T_LEN ;  //!< [00d8](02)[0x00000000]
  __IO UEP0_T_CTRL_DEF                       UEP0_T_CTRL ;  //!< [00da](01)[0x00000000]
  __IO UEP0_R_CTRL_DEF                       UEP0_R_CTRL ;  //!< [00db](01)[0x00000000]
  __IO UEP1_T_LEN_DEF                         UEP1_T_LEN ;  //!< [00dc](02)[0x00000000]
  __IO UEP1_T_CTRL_DEF                       UEP1_T_CTRL ;  //!< [00de](01)[0x00000000]
  __IO UEP1_R_CTRL_DEF                       UEP1_R_CTRL ;  //!< [00df](01)[0x00000000]
  __IO UEP2_T_LEN__UH_EP_PID_DEF         UEP2_T_LEN__UH_EP_PID ;  //!< [00e0](02)[0x00000000]
  __IO UEP2_T_CTRL_DEF                       UEP2_T_CTRL ;  //!< [00e2](01)[0x00000000]
  __IO UEP2_R_CTRL__UH_RX_CTRL_DEF       UEP2_R_CTRL__UH_RX_CTRL ;  //!< [00e3](01)[0x00000000]
  __IO UEP3_T_LEN___UH_TX_LEN_H_DEF      UEP3_T_LEN___UH_TX_LEN_H ;  //!< [00e4](02)[0x00000000]
  __IO UEP3_T_CTRL___UH_TX_CTRL_DEF      UEP3_T_CTRL___UH_TX_CTRL ;  //!< [00e6](01)[0x00000000]
  __IO UEP3_R_CTRL_DEF                       UEP3_R_CTRL ;  //!< [00e7](01)[0x00000000]
  __IO UEP4_T_LEN_DEF                         UEP4_T_LEN ;  //!< [00e8](02)[0x00000000]
  __IO UEP4_T_CTRL_DEF                       UEP4_T_CTRL ;  //!< [00ea](01)[0x00000000]
  __IO UEP4_R_CTRL_DEF                       UEP4_R_CTRL ;  //!< [00eb](01)[0x00000000]
  __IO UEP5_T_LEN_DEF                         UEP5_T_LEN ;  //!< [00ec](02)[0x00000000]
  __IO UEP5_T_CTRL_DEF                       UEP5_T_CTRL ;  //!< [00ee](01)[0x00000000]
  __IO UEP5_R_CTRL_DEF                       UEP5_R_CTRL ;  //!< [00ef](01)[0x00000000]
  __IO UEP6_T_LEN_DEF                         UEP6_T_LEN ;  //!< [00f0](02)[0x00000000]
  __IO UEP6_T_CTRL_DEF                       UEP6_T_CTRL ;  //!< [00f2](01)[0x00000000]
  __IO UEP6_R_CTRL_DEF                       UEP6_R_CTRL ;  //!< [00f3](01)[0x00000000]
  __IO UEP7_T_LEN_DEF                         UEP7_T_LEN ;  //!< [00f4](02)[0x00000000]
  __IO UEP7_T_CTRL_DEF                       UEP7_T_CTRL ;  //!< [00f6](01)[0x00000000]
  __IO UEP7_R_CTRL_DEF                       UEP7_R_CTRL ;  //!< [00f7](01)[0x00000000]
  __IO UEP8_T_LEN_DEF                         UEP8_T_LEN ;  //!< [00f8](02)[0x00000000]
  __IO UEP8_T_CTRL_DEF                       UEP8_T_CTRL ;  //!< [00fa](01)[0x00000000]
  __IO UEP8_R_CTRL_DEF                       UEP8_R_CTRL ;  //!< [00fb](01)[0x00000000]
  __IO UEP9_T_LEN_DEF                         UEP9_T_LEN ;  //!< [00fc](02)[0x00000000]
  __IO UEP9_T_CTRL_DEF                       UEP9_T_CTRL ;  //!< [00fe](01)[0x00000000]
  __IO UEP9_R_CTRL_DEF                       UEP9_R_CTRL ;  //!< [00ff](01)[0x00000000]
  __IO UEP10_T_LEN_DEF                       UEP10_T_LEN ;  //!< [0100](02)[0x00000000]
  __IO UEP10_T_CTRL_DEF                     UEP10_T_CTRL ;  //!< [0102](01)[0x00000000]
  __IO UEP10_R_CTRL_DEF                     UEP10_R_CTRL ;  //!< [0103](01)[0x00000000]
  __IO UEP11_T_LEN_DEF                       UEP11_T_LEN ;  //!< [0104](02)[0x00000000]
  __IO UEP11_T_CTRL_DEF                     UEP11_T_CTRL ;  //!< [0106](01)[0x00000000]
  __IO UEP11_R_CTRL_DEF                     UEP11_R_CTRL ;  //!< [0107](01)[0x00000000]
  __IO UEP12_T_LEN_DEF                       UEP12_T_LEN ;  //!< [0108](02)[0x00000000]
  __IO UEP12_T_CTRL_DEF                     UEP12_T_CTRL ;  //!< [010a](01)[0x00000000]
  __IO UEP12_R_CTRL_DEF                     UEP12_R_CTRL ;  //!< [010b](01)[0x00000000]
  __IO UEP13_T_LEN_DEF                       UEP13_T_LEN ;  //!< [010c](02)[0x00000000]
  __IO UEP13_T_CTRL_DEF                     UEP13_T_CTRL ;  //!< [010e](01)[0x00000000]
  __IO UEP13_R_CTRL_DEF                     UEP13_R_CTRL ;  //!< [010f](01)[0x00000000]
  __IO UEP14_T_LEN_DEF                       UEP14_T_LEN ;  //!< [0110](02)[0x00000000]
  __IO UEP14_T_CTRL_DEF                     UEP14_T_CTRL ;  //!< [0112](01)[0x00000000]
  __IO UEP14_R_CTRL_DEF                     UEP14_R_CTRL ;  //!< [0113](01)[0x00000000]
  __IO UEP15_T_LEN_DEF                       UEP15_T_LEN ;  //!< [0114](02)[0x00000000]
  __IO UEP15_T_CTRL_DEF                     UEP15_T_CTRL ;  //!< [0116](01)[0x00000000]
  __IO UEP15_R_CTRL_DEF                     UEP15_R_CTRL ;  //!< [0117](01)[0x00000000]
}; /* total size = 0x0400, struct size = 0x0118 */

// ////////////////////+++ CRC +-+//////////////////// //
struct CRC_Type          { /*!< CRC calculation unit */
  union DATAR_DEF  {  //!< Data register
    struct {
      __IO uint32_t   DR : 32; //!<[00] Data Register
    } B;
    __IO uint32_t  R;
    explicit DATAR_DEF () noexcept { R = 0xffffffffu; }
    template<typename F> void setbit (F f) volatile {
      DATAR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DATAR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union IDATAR_DEF {  //!< Independent Data register
    struct {
      __IO uint32_t   IDR :  8; //!<[00] Independent Data register
    } B;
    __IO uint32_t  R;
    explicit IDATAR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IDATAR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      IDATAR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CTLR_DEF   {  //!< Control register
    struct {
      __O  ONE_BIT  RESET :  1; //!<[00] Reset bit
    } B;
    __O  uint32_t  R;
    explicit CTLR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CTLR_DEF r;
      R = f (r);
    }
  };
  // PERIPHERAL CRC REGISTERS INSTANCES
  __IO DATAR_DEF            DATAR ;  //!< [0000](04)[0xFFFFFFFF]
  __IO IDATAR_DEF          IDATAR ;  //!< [0004](04)[0x00000000]
  __O  CTLR_DEF              CTLR ;  //!< [0008](04)[0x00000000]
}; /* total size = 0x0400, struct size = 0x000C */

// ////////////////////+++ FLASH +-+//////////////////// //
struct FLASH_Type        { /*!< FLASH */
  union KEYR_DEF     {  //!< Flash key register
    struct {
      __O  uint32_t   KEYR : 32; //!<[00] FPEC key
    } B;
    __O  uint32_t  R;
    explicit KEYR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      KEYR_DEF r;
      R = f (r);
    }
  };
  union OBKEYR_DEF   {  //!< Flash option key register
    struct {
      __O  uint32_t   OPTKEY : 32; //!<[00] Option byte key
    } B;
    __O  uint32_t  R;
    explicit OBKEYR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      OBKEYR_DEF r;
      R = f (r);
    }
  };
  union STATR_DEF    {  //!< Status register
    struct {
      __I  ONE_BIT    BSY             :  1; //!<[00] Busy
      __I  ONE_BIT    WR_BSY          :  1; //!<[01] Quick page programming
           uint32_t   UNUSED0         :  2; //!<[02] 
      __IO ONE_BIT    WRPRTERR        :  1; //!<[04] Write protection error
      __IO ONE_BIT    EOP             :  1; //!<[05] End of operation
           ONE_BIT    UNUSED1         :  1; //!<[06] 
      __I  ONE_BIT    ENHANCE_MOD_STA :  1; //!<[07] Enhance mode start
    } B;
    __IO uint32_t  R;
    explicit STATR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      STATR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      STATR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CTLR_DEF     {  //!< Control register
    struct {
      __IO ONE_BIT    PG          :  1; //!<[00] Programming
      __IO ONE_BIT    PER         :  1; //!<[01] Page Erase
      __IO ONE_BIT    MER         :  1; //!<[02] Mass Erase
           ONE_BIT    UNUSED0     :  1; //!<[03] 
      __IO ONE_BIT    OBPG        :  1; //!<[04] Option byte programming
      __IO ONE_BIT    OBER        :  1; //!<[05] Option byte erase
      __IO ONE_BIT    STRT        :  1; //!<[06] Start
      __IO ONE_BIT    LOCK        :  1; //!<[07] Lock
           ONE_BIT    UNUSED1     :  1; //!<[08] 
      __IO ONE_BIT    OBWRE       :  1; //!<[09] Option bytes write enable
      __IO ONE_BIT    ERRIE       :  1; //!<[10] Error interrupt enable
           ONE_BIT    UNUSED2     :  1; //!<[11] 
      __IO ONE_BIT    EOPIE       :  1; //!<[12] End of operation interrupt enable
           uint32_t   UNUSED3     :  2; //!<[13] 
      __IO ONE_BIT    FLOCK       :  1; //!<[15] Fast programmable lock
      __IO ONE_BIT    PAGE_PG     :  1; //!<[16] Fast programming
      __IO ONE_BIT    PAGE_ER     :  1; //!<[17] Fast erase
      __IO ONE_BIT    BER32       :  1; //!<[18] Block Erase 32K
      __IO ONE_BIT    BER64       :  1; //!<[19] Block Erase 64K
           ONE_BIT    UNUSED4     :  1; //!<[20] 
      __IO ONE_BIT    PGSTART     :  1; //!<[21] Page Programming Start
      __IO ONE_BIT    RSENACT     :  1; //!<[22] Reset Flash Enhance read mode
           ONE_BIT    UNUSED5     :  1; //!<[23] 
      __IO ONE_BIT    ENHANCEMODE :  1; //!<[24] Flash Enhance read mode
      __IO ONE_BIT    SCKMODE     :  1; //!<[25] Flash SCK mode
    } B;
    __IO uint32_t  R;
    explicit CTLR_DEF () noexcept { R = 0x00000080u; }
    template<typename F> void setbit (F f) volatile {
      CTLR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CTLR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ADDR_DEF     {  //!< Flash address register
    struct {
      __O  uint32_t   FAR : 32; //!<[00] Flash Address
    } B;
    __O  uint32_t  R;
    explicit ADDR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ADDR_DEF r;
      R = f (r);
    }
  };
  union OBR_DEF      {  //!< Option byte register
    struct {
      __I  ONE_BIT    OBERR          :  1; //!<[00] Option byte error
      __I  ONE_BIT    RDPRT          :  1; //!<[01] Read protection
      __I  ONE_BIT    IWDG_SW        :  1; //!<[02] IWDG_SW
      __I  ONE_BIT    STOP_RST       :  1; //!<[03] STOP_RST
      __I  ONE_BIT    STANDY_RST     :  1; //!<[04] STANDY_RST
           uint32_t   UNUSED0        :  3; //!<[05] 
      __I  uint32_t   SRAM_CODE_MODE :  2; //!<[08] SRAM_CODE_MODE
    } B;
    __I  uint32_t  R;

    explicit OBR_DEF (volatile OBR_DEF & o) noexcept { R = o.R; };
  };
  union WPR_DEF      {  //!< Write protection register
    struct {
      __I  uint32_t   WRP : 32; //!<[00] Write protect
    } B;
    __I  uint32_t  R;

    explicit WPR_DEF (volatile WPR_DEF & o) noexcept { R = o.R; };
  };
  union MODEKEYR_DEF {  //!< Mode select register
    struct {
      __O  uint32_t   MODEKEYR : 32; //!<[00] Mode select
    } B;
    __O  uint32_t  R;
    explicit MODEKEYR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      MODEKEYR_DEF r;
      R = f (r);
    }
  };
  // PERIPHERAL FLASH REGISTERS INSTANCES
       uint32_t           UNUSED0 ;  //!< [0000](04)[0xFFFFFFFF]
  __O  KEYR_DEF                KEYR ;  //!< [0004](04)[0x00000000]
  __O  OBKEYR_DEF            OBKEYR ;  //!< [0008](04)[0x00000000]
  __IO STATR_DEF              STATR ;  //!< [000c](04)[0x00000000]
  __IO CTLR_DEF                CTLR ;  //!< [0010](04)[0x00000080]
  __O  ADDR_DEF                ADDR ;  //!< [0014](04)[0x00000000]
       uint32_t           UNUSED1 ;  //!< [0018](04)[0xFFFFFFFF]
  __I  OBR_DEF                  OBR ;  //!< [001c](04)[0x03FFFFFC]
  __I  WPR_DEF                  WPR ;  //!< [0020](04)[0xFFFFFFFF]
  __O  MODEKEYR_DEF        MODEKEYR ;  //!< [0024](04)[0x00000000]
}; /* total size = 0x0400, struct size = 0x0028 */

// ////////////////////+++ USB_OTG_FS +-+//////////////////// //
struct USB_OTG_FS_Type   { /*!< USB FS OTG register */
  union USBHD_BASE_CTRL_DEF                   {  //!< USB base control
    struct {
      __IO uint8_t    USBHD_UC_DMA_EN        :  1; //!<[00] DMA enable and DMA interrupt enable for USB
      __IO uint8_t    USBHD_UC_CLR_ALL       :  1; //!<[01] force clear FIFO and count of USB
      __IO uint8_t    USBHD_UC_RESET_SIE     :  1; //!<[02] force reset USB SIE, need software clear
      __IO uint8_t    USBHD_UC_INT_BUSY      :  1; //!<[03] enable automatic responding busy for device mode or automatic pause for host mode during interrupt flag UIF_TRANSFER valid
      __IO uint8_t    USBHD_UC_SYS_CTRL_MASK :  2; //!<[04] USB device enable and internal pullup resistance enable
      __IO uint8_t    USBHD_UC_LOW_SPEED     :  1; //!<[06] enable USB low speed: 0=12Mbps, 1=1.5Mbps
      __IO uint8_t    RB_UC_HOST_MODE        :  1; //!<[07] enable USB host mode: 0=device mode, 1=host mode
    } B;
    __IO uint8_t   R;
  };
  union USBHD_UDEV_CTRL__USBHD_UHOST_CTRL_DEF {  //!< USB device/host physical prot control
    struct {
      __IO uint8_t    USBHD_UH_PORT_EN__USBHD_UD_PORT_EN     :  1; //!<[00] enable USB port: 0=disable, 1=enable port, automatic disabled if USB device detached
      __IO uint8_t    USBHD_UH_BUS_RESET__USBHD_UD_GP_BIT    :  1; //!<[01] force clear FIFO and count of USB
      __IO uint8_t    USBHD_UH_LOW_SPEED__USBHD_UD_LOW_SPEED :  1; //!<[02] enable USB port low speed: 0=full speed, 1=low speed
           uint8_t    UNUSED0                                :  1; //!<[03] 
      __I  uint8_t    USBHD_UH_DM_PIN__USBHD_UD_DM_PIN       :  1; //!<[04] ReadOnly: indicate current UDM pin level
      __I  uint8_t    USBHD_UH_DP_PIN__USBHD_UD_DP_PIN       :  1; //!<[05] USB device enable and internal pullup resistance enable
           uint8_t    UNUSED1                                :  1; //!<[06] 
      __IO uint8_t    USBHD_UH_PD_DIS__USBHD_UD_PD_DIS       :  1; //!<[07] disable USB UDP/UDM pulldown resistance: 0=enable pulldown, 1=disable
    } B;
    __IO uint8_t   R;
  };
  union R8_USB_INT_EN_DEF                     {  //!< USB interrupt enable
    struct {
      __IO uint8_t    USBHD_UIE_BUS_RST__USBHD_UIE_DETECT :  1; //!<[00] enable interrupt for USB bus reset event for USB device mode
      __IO uint8_t    USBHD_UIE_TRANSFER                  :  1; //!<[01] enable interrupt for USB transfer completion
      __IO uint8_t    USBHD_UIE_SUSPEND                   :  1; //!<[02] enable interrupt for USB suspend or resume event
      __IO uint8_t    USBHD_UIE_HST_SOF                   :  1; //!<[03] enable interrupt for host SOF timer action for USB host mode
      __IO uint8_t    USBHD_UIE_FIFO_OV                   :  1; //!<[04] enable interrupt for FIFO overflow
           uint8_t    UNUSED0                             :  1; //!<[05] 
      __IO uint8_t    USBHD_UIE_DEV_NAK                   :  1; //!<[06] enable interrupt for NAK responded for USB device mode
      __IO uint8_t    USBHD_UIE_DEV_SOF                   :  1; //!<[07] enable interrupt for SOF received for USB device mode
    } B;
    __IO uint8_t   R;
  };
  union R8_USB_DEV_AD_DEF                     {  //!< USB device address
    struct {
      __IO uint8_t    MASK_USB_ADDR :  7; //!<[00] bit mask for USB device address
      __IO uint8_t    RB_UDA_GP_BIT :  1; //!<[07] general purpose bit
    } B;
    __IO uint8_t   R;
  };
  union R8_USB_MIS_ST_DEF                     {  //!< USB miscellaneous status
    struct {
      __I  uint8_t    RB_UMS_DEV_ATTACH :  1; //!<[00] RO, indicate device attached status on USB host
      __I  uint8_t    RB_UMS_DM_LEVEL   :  1; //!<[01] RO, indicate UDM level saved at device attached to USB host
      __I  uint8_t    RB_UMS_SUSPEND    :  1; //!<[02] RO, indicate USB suspend status
      __I  uint8_t    RB_UMS_BUS_RESET  :  1; //!<[03] RO, indicate USB bus reset status
      __I  uint8_t    RB_UMS_R_FIFO_RDY :  1; //!<[04] RO, indicate USB receiving FIFO ready status (not empty)
      __I  uint8_t    RB_UMS_SIE_FREE   :  1; //!<[05] RO, indicate USB SIE free status
      __I  uint8_t    RB_UMS_SOF_ACT    :  1; //!<[06] RO, indicate host SOF timer action status for USB host
      __I  uint8_t    RB_UMS_SOF_PRES   :  1; //!<[07] RO, indicate host SOF timer presage status
    } B;
    __I  uint8_t   R;
  };
  union R8_USB_INT_FG_DEF                     {  //!< USB interrupt flag
    struct {
      __IO uint8_t    RB_UIF_BUS_RST__RB_UIF_DETECT :  1; //!<[00] bus reset event interrupt flag for USB device mode, direct bit address clear or write 1 to clear;device detected event interrupt flag for USB host mode, direct bit address clear or write 1 to clear
      __IO uint8_t    RB_UIF_TRANSFER               :  1; //!<[01] USB transfer completion interrupt flag, direct bit address clear or write 1 to clear
      __IO uint8_t    RB_UIF_SUSPEND                :  1; //!<[02] USB suspend or resume event interrupt flag, direct bit address clear or write 1 to clear
      __IO uint8_t    RB_UIF_HST_SOF                :  1; //!<[03] host SOF timer interrupt flag for USB host, direct bit address clear or write 1 to clear
      __IO uint8_t    RB_UIF_FIFO_OV                :  1; //!<[04] FIFO overflow interrupt flag for USB, direct bit address clear or write 1 to clear
      __I  uint8_t    RB_U_SIE_FREE                 :  1; //!<[05] RO, indicate USB SIE free status
      __I  uint8_t    RB_U_TOG_OK                   :  1; //!<[06] RO, indicate current USB transfer toggle is OK
      __I  uint8_t    RB_U_IS_NAK                   :  1; //!<[07] RO, indicate current USB transfer is NAK received
    } B;
    __IO uint8_t   R;
  };
  union R8_USB_INT_ST_DEF                     {  //!< USB interrupt status
    struct {
      __I  uint8_t    MASK_UIS_H_RES__MASK_UIS_ENDP :  4; //!<[00] RO, bit mask of current transfer handshake response for USB host mode: 0000=no response, time out from device, others=handshake response PID received;RO, bit mask of current transfer endpoint number for USB device mode
      __I  uint8_t    MASK_UIS_TOKEN                :  2; //!<[04] RO, bit mask of current token PID code received for USB device mode
      __I  uint8_t    RB_UIS_TOG_OK                 :  1; //!<[06] RO, indicate current USB transfer toggle is OK
      __I  uint8_t    RB_UIS_IS_NAK                 :  1; //!<[07] RO, indicate current USB transfer is NAK received for USB device mode
    } B;
    __I  uint8_t   R;
  };
  union R8_UEP4_1_MOD_DEF                     {  //!< endpoint 4/1 mode
    struct {
           uint8_t    UNUSED0         :  2; //!<[00] 
      __IO uint8_t    RB_UEP4_TX_EN   :  1; //!<[02] enable USB endpoint 4 transmittal (IN)
      __IO uint8_t    RB_UEP4_RX_EN   :  1; //!<[03] enable USB endpoint 4 receiving (OUT)
      __IO uint8_t    RB_UEP1_BUF_MOD :  1; //!<[04] buffer mode of USB endpoint 1
           uint8_t    UNUSED1         :  1; //!<[05] 
      __IO uint8_t    RB_UEP1_TX_EN   :  1; //!<[06] enable USB endpoint 1 transmittal (IN)
      __IO uint8_t    RB_UEP1_RX_EN   :  1; //!<[07] enable USB endpoint 1 receiving (OUT)
    } B;
    __IO uint8_t   R;
  };
  union R8_UEP2_3_MOD__R8_UH_EP_MOD_DEF       {  //!< endpoint 2/3 mode;host endpoint mode
    struct {
      __IO uint8_t    RB_UEP2_BUF_MOD__RB_UH_EP_RBUF_MOD :  1; //!<[00] buffer mode of USB endpoint 2;buffer mode of USB host IN endpoint
           uint8_t    UNUSED0                            :  1; //!<[01] 
      __IO uint8_t    RB_UEP2_TX_EN                      :  1; //!<[02] enable USB endpoint 2 transmittal (IN)
      __IO uint8_t    RB_UEP2_RX_EN__RB_UH_EP_RX_EN      :  1; //!<[03] enable USB endpoint 2 receiving (OUT);enable USB host IN endpoint receiving
      __IO uint8_t    RB_UEP3_BUF_MOD__RB_UH_EP_TBUF_MOD :  1; //!<[04] buffer mode of USB endpoint 3;buffer mode of USB host OUT endpoint
           uint8_t    UNUSED1                            :  1; //!<[05] 
      __IO uint8_t    RB_UEP3_TX_EN__RB_UH_EP_TX_EN      :  1; //!<[06] enable USB endpoint 3 transmittal (IN);enable USB host OUT endpoint transmittal
      __IO uint8_t    RB_UEP3_RX_EN                      :  1; //!<[07] enable USB endpoint 3 receiving (OUT)
    } B;
    __IO uint8_t   R;
  };
  union R8_UEP5_6_MOD_DEF                     {  //!< endpoint 5/6 mode
    struct {
      __IO uint8_t    RB_UEP5_BUF_MOD :  1; //!<[00] buffer mode of USB endpoint 5
           uint8_t    UNUSED0         :  1; //!<[01] 
      __IO uint8_t    RB_UEP5_TX_EN   :  1; //!<[02] enable USB endpoint 5 transmittal (IN)
      __IO uint8_t    RB_UEP5_RX_EN   :  1; //!<[03] enable USB endpoint 5 receiving (OUT)
      __IO uint8_t    RB_UEP6_BUF_MOD :  1; //!<[04] buffer mode of USB endpoint 6
           uint8_t    UNUSED1         :  1; //!<[05] 
      __IO uint8_t    RB_UEP6_TX_EN   :  1; //!<[06] enable USB endpoint 6 transmittal (IN)
      __IO uint8_t    RB_UEP3_RX_EN   :  1; //!<[07] enable USB endpoint 6 receiving (OUT)
    } B;
    __IO uint8_t   R;
  };
  union R8_UEP7_MOD_DEF                       {  //!< endpoint 7 mode
    struct {
      __IO uint8_t    RB_UEP7_BUF_MOD :  1; //!<[00] buffer mode of USB endpoint 7
           uint8_t    UNUSED0         :  1; //!<[01] 
      __IO uint8_t    RB_UEP7_TX_EN   :  1; //!<[02] enable USB endpoint 7 transmittal (IN)
      __IO uint8_t    RB_UEP7_RX_EN   :  1; //!<[03] enable USB endpoint 7 receiving (OUT)
    } B;
    __IO uint8_t   R;
  };
  union R8_UEP0_T_CTRL_DEF                    {  //!< endpoint 0 control
    struct {
      __IO uint8_t    MASK_UEP_T_RES     :  2; //!<[00] bit mask of handshake response type for USB endpoint X transmittal (IN)
      __IO uint8_t    USBHD_UEP_T_TOG    :  1; //!<[02] prepared data toggle flag of USB endpoint X transmittal (IN): 0=DATA0, 1=DATA1
      __IO uint8_t    USBHD_UEP_AUTO_TOG :  1; //!<[03] enable automatic toggle after successful transfer completion on endpoint 1/2/3: 0=manual toggle, 1=automatic toggle
    } B;
    __IO uint8_t   R;
  };
  union R8_UEP0_R_CTRL_DEF                    {  //!< endpoint 0 control
    struct {
      __IO uint8_t    MASK_UEP_R_RES     :  2; //!<[00] bit mask of handshake response type for USB endpoint X receiving (OUT)
      __IO uint8_t    USBHD_UEP_R_TOG    :  1; //!<[02] expected data toggle flag of USB endpoint X receiving (OUT): 0=DATA0, 1=DATA1
      __IO uint8_t    USBHD_UEP_AUTO_TOG :  1; //!<[03] enable automatic toggle after successful transfer completion on endpoint 1/2/3: 0=manual toggle, 1=automatic toggle
    } B;
    __IO uint8_t   R;
  };
  union R8_UEP1_T_CTRL___USBHD_UH_SETUP_DEF   {  //!< endpoint 1 control
    struct {
      __IO uint8_t    MASK_UEP_T_RES      :  2; //!<[00] bit mask of handshake response type for USB endpoint X transmittal (IN)
      __IO uint8_t    USBHD_UEP_T_TOG_    :  1; //!<[02] prepared data toggle flag of USB endpoint X transmittal (IN): 0=DATA0, 1=DATA1
      __IO uint8_t    USBHD_UEP_AUTO_TOG  :  1; //!<[03] enable automatic toggle after successful transfer completion on endpoint 1/2/3: 0=manual toggle, 1=automatic toggle
           uint8_t    UNUSED0             :  2; //!<[04] 
      __IO uint8_t    USBHD_UH_SOF_EN     :  1; //!<[06] USB host automatic SOF enable
      __IO uint8_t    USBHD_UH_PRE_PID_EN :  1; //!<[07] USB host PRE PID enable for low speed device via hub
    } B;
    __IO uint8_t   R;
  };
  union R8_UEP1_R_CTRL_DEF                    {  //!< endpoint 1 control
    struct {
      __IO uint8_t    MASK_UEP_R_RES     :  2; //!<[00] bit mask of handshake response type for USB endpoint X receiving (OUT)
      __IO uint8_t    USBHD_UEP_R_TOG    :  1; //!<[02] expected data toggle flag of USB endpoint X receiving (OUT): 0=DATA0, 1=DATA1
      __IO uint8_t    USBHD_UEP_AUTO_TOG :  1; //!<[03] enable automatic toggle after successful transfer completion on endpoint 1/2/3: 0=manual toggle, 1=automatic toggle
    } B;
    __IO uint8_t   R;
  };
  union R8_UEP2_T_LEN__USBHD_UH_EP_PID_DEF    {  //!< endpoint 2 transmittal length
    struct {
      __IO uint8_t    USBHD_UH_ENDP_MASK  :  4; //!<[00] bit mask of endpoint number for USB host transfer
      __IO uint8_t    USBHD_UH_TOKEN_MASK :  4; //!<[04] bit mask of token PID for USB host transfer
    } B;
    __IO uint8_t   R;
  };
  union R8_UEP2_T_CTRL_DEF                    {  //!< endpoint 2 control
    struct {
      __IO uint8_t    MASK_UEP_T_RES     :  2; //!<[00] bit mask of handshake response type for USB endpoint X transmittal (IN)
      __IO uint8_t    USBHD_UEP_T_TOG_   :  1; //!<[02] prepared data toggle flag of USB endpoint X transmittal (IN): 0=DATA0, 1=DATA1
      __IO uint8_t    USBHD_UEP_AUTO_TOG :  1; //!<[03] enable automatic toggle after successful transfer completion on endpoint 1/2/3: 0=manual toggle, 1=automatic toggle
    } B;
    __IO uint8_t   R;
  };
  union R8_UEP2_R_CTRL__USBHD_UH_RX_CTRL_DEF  {  //!< endpoint 2 control
    struct {
      __IO uint8_t    MASK_UEP_R_RES___USBHD_UH_R_RES          :  2; //!<[00] bit mask of handshake response type for USB endpoint X receiving (OUT)
      __IO uint8_t    USBHD_UEP_R_TOG___USBHD_UH_R_TOG         :  1; //!<[02] expected data toggle flag of USB endpoint X receiving (OUT): 0=DATA0, 1=DATA1
      __IO uint8_t    USBHD_UEP_AUTO_TOG___USBHD_UH_R_AUTO_TOG :  1; //!<[03] enable automatic toggle after successful transfer completion on endpoint 1/2/3: 0=manual toggle, 1=automatic toggle
    } B;
    __IO uint8_t   R;
  };
  union R8_UEP3_T_CTRL__USBHD_UH_TX_CTRL_DEF  {  //!< endpoint 3 control
    struct {
      __IO uint8_t    MASK_UEP_T_RES___USBHD_UH_T_RES         :  2; //!<[00] bit mask of handshake response type for USB endpoint X transmittal (IN)
      __IO uint8_t    USBHD_UEP_T_TOG___USBHD_UH_T_TOG        :  1; //!<[02] prepared data toggle flag of USB endpoint X transmittal (IN): 0=DATA0, 1=DATA1
      __IO uint8_t    USBHD_UEP_AUTO_TOG__USBHD_UH_T_AUTO_TOG :  1; //!<[03] enable automatic toggle after successful transfer completion on endpoint 1/2/3: 0=manual toggle, 1=automatic toggle
    } B;
    __IO uint8_t   R;
  };
  union R8_UEP3_R_CTRL__DEF                   {  //!< endpoint 3 control
    struct {
      __IO uint8_t    MASK_UEP_R_RES     :  2; //!<[00] bit mask of handshake response type for USB endpoint X receiving (OUT)
      __IO uint8_t    USBHD_UEP_R_TOG    :  1; //!<[02] expected data toggle flag of USB endpoint X receiving (OUT): 0=DATA0, 1=DATA1
      __IO uint8_t    USBHD_UEP_AUTO_TOG :  1; //!<[03] enable automatic toggle after successful transfer completion on endpoint 1/2/3: 0=manual toggle, 1=automatic toggle
    } B;
    __IO uint8_t   R;
  };
  union R8_UEP4_T_CTRL_DEF                    {  //!< endpoint 4 control
    struct {
      __IO uint8_t    MASK_UEP_T_RES                          :  2; //!<[00] bit mask of handshake response type for USB endpoint X transmittal (IN)
      __IO uint8_t    USBHD_UEP_T_TOG___USBHD_UH_T_TOG        :  1; //!<[02] prepared data toggle flag of USB endpoint X transmittal (IN): 0=DATA0, 1=DATA1
      __IO uint8_t    USBHD_UEP_AUTO_TOG__USBHD_UH_T_AUTO_TOG :  1; //!<[03] enable automatic toggle after successful transfer completion on endpoint 1/2/3: 0=manual toggle, 1=automatic toggle
    } B;
    __IO uint8_t   R;
  };
  union R8_UEP4_R_CTRL__DEF                   {  //!< endpoint 4 control
    struct {
      __IO uint8_t    MASK_UEP_R_RES     :  2; //!<[00] bit mask of handshake response type for USB endpoint X receiving (OUT)
      __IO uint8_t    USBHD_UEP_R_TOG    :  1; //!<[02] expected data toggle flag of USB endpoint X receiving (OUT): 0=DATA0, 1=DATA1
      __IO uint8_t    USBHD_UEP_AUTO_TOG :  1; //!<[03] enable automatic toggle after successful transfer completion on endpoint 1/2/3: 0=manual toggle, 1=automatic toggle
    } B;
    __IO uint8_t   R;
  };
  union R8_UEP5_T_CTRL_DEF                    {  //!< endpoint 5 control
    struct {
      __IO uint8_t    MASK_UEP_T_RES                          :  2; //!<[00] bit mask of handshake response type for USB endpoint X transmittal (IN)
      __IO uint8_t    USBHD_UEP_T_TOG___USBHD_UH_T_TOG        :  1; //!<[02] prepared data toggle flag of USB endpoint X transmittal (IN): 0=DATA0, 1=DATA1
      __IO uint8_t    USBHD_UEP_AUTO_TOG__USBHD_UH_T_AUTO_TOG :  1; //!<[03] enable automatic toggle after successful transfer completion on endpoint 1/2/3: 0=manual toggle, 1=automatic toggle
    } B;
    __IO uint8_t   R;
  };
  union R8_UEP5_R_CTRL__DEF                   {  //!< endpoint 5 control
    struct {
      __IO uint8_t    MASK_UEP_R_RES     :  2; //!<[00] bit mask of handshake response type for USB endpoint X receiving (OUT)
      __IO uint8_t    USBHD_UEP_R_TOG    :  1; //!<[02] expected data toggle flag of USB endpoint X receiving (OUT): 0=DATA0, 1=DATA1
      __IO uint8_t    USBHD_UEP_AUTO_TOG :  1; //!<[03] enable automatic toggle after successful transfer completion on endpoint 1/2/3: 0=manual toggle, 1=automatic toggle
    } B;
    __IO uint8_t   R;
  };
  union R8_UEP6_T_CTRL_DEF                    {  //!< endpoint 6 control
    struct {
      __IO uint8_t    MASK_UEP_T_RES                          :  2; //!<[00] bit mask of handshake response type for USB endpoint X transmittal (IN)
      __IO uint8_t    USBHD_UEP_T_TOG___USBHD_UH_T_TOG        :  1; //!<[02] prepared data toggle flag of USB endpoint X transmittal (IN): 0=DATA0, 1=DATA1
      __IO uint8_t    USBHD_UEP_AUTO_TOG__USBHD_UH_T_AUTO_TOG :  1; //!<[03] enable automatic toggle after successful transfer completion on endpoint 1/2/3: 0=manual toggle, 1=automatic toggle
    } B;
    __IO uint8_t   R;
  };
  union R8_UEP6_R_CTRL__DEF                   {  //!< endpoint 6 control
    struct {
      __IO uint8_t    MASK_UEP_R_RES     :  2; //!<[00] bit mask of handshake response type for USB endpoint X receiving (OUT)
      __IO uint8_t    USBHD_UEP_R_TOG    :  1; //!<[02] expected data toggle flag of USB endpoint X receiving (OUT): 0=DATA0, 1=DATA1
      __IO uint8_t    USBHD_UEP_AUTO_TOG :  1; //!<[03] enable automatic toggle after successful transfer completion on endpoint 1/2/3: 0=manual toggle, 1=automatic toggle
    } B;
    __IO uint8_t   R;
  };
  union R8_UEP7_T_CTRL_DEF                    {  //!< endpoint 7 control
    struct {
      __IO uint8_t    MASK_UEP_T_RES                          :  2; //!<[00] bit mask of handshake response type for USB endpoint X transmittal (IN)
      __IO uint8_t    USBHD_UEP_T_TOG___USBHD_UH_T_TOG        :  1; //!<[02] prepared data toggle flag of USB endpoint X transmittal (IN): 0=DATA0, 1=DATA1
      __IO uint8_t    USBHD_UEP_AUTO_TOG__USBHD_UH_T_AUTO_TOG :  1; //!<[03] enable automatic toggle after successful transfer completion on endpoint 1/2/3: 0=manual toggle, 1=automatic toggle
    } B;
    __IO uint8_t   R;
  };
  union R8_UEP7_R_CTRL__DEF                   {  //!< endpoint 7 control
    struct {
      __IO uint8_t    MASK_UEP_R_RES     :  2; //!<[00] bit mask of handshake response type for USB endpoint X receiving (OUT)
      __IO uint8_t    USBHD_UEP_R_TOG    :  1; //!<[02] expected data toggle flag of USB endpoint X receiving (OUT): 0=DATA0, 1=DATA1
      __IO uint8_t    USBHD_UEP_AUTO_TOG :  1; //!<[03] enable automatic toggle after successful transfer completion on endpoint 1/2/3: 0=manual toggle, 1=automatic toggle
    } B;
    __IO uint8_t   R;
  };
  union USB_OTG_CR_DEF                        {  //!< usb otg control
    struct {
      __IO ONE_BIT  USB_OTG_CR_DISCHARGEVBUS :  1; //!<[00] usb otg control
      __IO ONE_BIT  USB_OTG_CR_CHARGEVBUS    :  1; //!<[01] usb otg control
      __IO ONE_BIT  USB_OTG_CR_IDPU          :  1; //!<[02] usb otg control
      __IO ONE_BIT  USB_OTG_CR_OTG_EN        :  1; //!<[03] usb otg control
      __IO ONE_BIT  USB_OTG_CR_VBUS          :  1; //!<[04] usb otg control
      __IO ONE_BIT  USB_OTG_CR_SESS          :  1; //!<[05] usb otg control
    } B;
    __IO uint32_t  R;
    explicit USB_OTG_CR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      USB_OTG_CR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      USB_OTG_CR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union USB_OTG_SR_DEF                        {  //!< usb otg status
    struct {
      __IO ONE_BIT  USB_OTG_SR_VBUS_VLD :  1; //!<[00] usb otg status
      __IO ONE_BIT  USB_OTG_SR_SESS_VLD :  1; //!<[01] usb otg status
      __IO ONE_BIT  USB_OTG_SR_SESS_END :  1; //!<[02] usb otg status
      __IO ONE_BIT  USB_OTG_SR_ID_DIG   :  1; //!<[03] usb otg status
    } B;
    __IO uint32_t  R;
    explicit USB_OTG_SR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      USB_OTG_SR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      USB_OTG_SR_DEF r; r.R = R;
      R = f (r);
    }
  };
  // PERIPHERAL USB_OTG_FS REGISTERS INSTANCES
  __IO USBHD_BASE_CTRL_DEF                   USBHD_BASE_CTRL ;  //!< [0000](01)[0x00000000]
  __IO USBHD_UDEV_CTRL__USBHD_UHOST_CTRL_DEF USBHD_UDEV_CTRL__USBHD_UHOST_CTRL ;  //!< [0001](01)[0x00000000]
  __IO R8_USB_INT_EN_DEF                       R8_USB_INT_EN ;  //!< [0002](01)[0x00000000]
  __IO R8_USB_DEV_AD_DEF                       R8_USB_DEV_AD ;  //!< [0003](01)[0x00000000]
       uint8_t                                     UNUSED0 ;  //!< [0004](01)[0xFFFFFFFF]
  __I  R8_USB_MIS_ST_DEF                       R8_USB_MIS_ST ;  //!< [0005](01)[0x00000000]
  __IO R8_USB_INT_FG_DEF                       R8_USB_INT_FG ;  //!< [0006](01)[0x00000000]
  __I  R8_USB_INT_ST_DEF                       R8_USB_INT_ST ;  //!< [0007](01)[0x00000000]
  __I  uint16_t                      R16_USB_RX_LEN ;  //!< [0008](02)[0x00000000]
       uint8_t                                     UNUSED1 [2];  //!< [000a](02)[0xFFFFFFFF]
  __IO R8_UEP4_1_MOD_DEF                       R8_UEP4_1_MOD ;  //!< [000c](01)[0x00000000]
  __IO R8_UEP2_3_MOD__R8_UH_EP_MOD_DEF       R8_UEP2_3_MOD__R8_UH_EP_MOD ;  //!< [000d](01)[0x00000000]
  __IO R8_UEP5_6_MOD_DEF                       R8_UEP5_6_MOD ;  //!< [000e](01)[0x00000000]
  __IO R8_UEP7_MOD_DEF                           R8_UEP7_MOD ;  //!< [000f](01)[0x00000000]
  __IO uint32_t                          R32_UEP0_DMA ;  //!< [0010](04)[0x00000000]
  __IO uint32_t                          R32_UEP1_DMA ;  //!< [0014](04)[0x00000000]
  __IO uint32_t        R32_UEP2_DMA__R32_UH_RX_DMA ;  //!< [0018](04)[0x00000000]
  __IO uint32_t        R32_UEP3_DMA__R32_UH_TX_DMA ;  //!< [001c](04)[0x00000000]
  __IO uint32_t                          R32_UEP4_DMA ;  //!< [0020](04)[0x00000000]
  __IO uint32_t                          R32_UEP5_DMA ;  //!< [0024](04)[0x00000000]
  __IO uint32_t                          R32_UEP6_DMA ;  //!< [0028](04)[0x00000000]
  __IO uint32_t                          R32_UEP7_DMA ;  //!< [002c](04)[0x00000000]
  __IO uint8_t                         R8_UEP0_T_LEN ;  //!< [0030](01)[0x00000000]
       uint8_t                                     UNUSED2 ;  //!< [0031](01)[0xFFFFFFFF]
  __IO R8_UEP0_T_CTRL_DEF                     R8_UEP0_T_CTRL ;  //!< [0032](01)[0x00000000]
  __IO R8_UEP0_R_CTRL_DEF                     R8_UEP0_R_CTRL ;  //!< [0033](01)[0x00000000]
  __IO uint8_t                         R8_UEP1_T_LEN ;  //!< [0034](01)[0x00000000]
       uint8_t                                     UNUSED3 ;  //!< [0035](01)[0xFFFFFFFF]
  __IO R8_UEP1_T_CTRL___USBHD_UH_SETUP_DEF   R8_UEP1_T_CTRL___USBHD_UH_SETUP ;  //!< [0036](01)[0x00000000]
  __IO R8_UEP1_R_CTRL_DEF                     R8_UEP1_R_CTRL ;  //!< [0037](01)[0x00000000]
  __IO R8_UEP2_T_LEN__USBHD_UH_EP_PID_DEF    R8_UEP2_T_LEN__USBHD_UH_EP_PID ;  //!< [0038](01)[0x00000000]
       uint8_t                                     UNUSED4 ;  //!< [0039](01)[0xFFFFFFFF]
  __IO R8_UEP2_T_CTRL_DEF                     R8_UEP2_T_CTRL ;  //!< [003a](01)[0x00000000]
  __IO R8_UEP2_R_CTRL__USBHD_UH_RX_CTRL_DEF  R8_UEP2_R_CTRL__USBHD_UH_RX_CTRL ;  //!< [003b](01)[0x00000000]
  __IO uint8_t      R8_UEP3_T_LEN__USBHD_UH_TX_LEN ;  //!< [003c](01)[0x00000000]
       uint8_t                                     UNUSED5 ;  //!< [003d](01)[0xFFFFFFFF]
  __IO R8_UEP3_T_CTRL__USBHD_UH_TX_CTRL_DEF  R8_UEP3_T_CTRL__USBHD_UH_TX_CTRL ;  //!< [003e](01)[0x00000000]
  __IO R8_UEP3_R_CTRL__DEF                   R8_UEP3_R_CTRL_ ;  //!< [003f](01)[0x00000000]
  __IO uint8_t                         R8_UEP4_T_LEN ;  //!< [0040](01)[0x00000000]
       uint8_t                                     UNUSED6 ;  //!< [0041](01)[0xFFFFFFFF]
  __IO R8_UEP4_T_CTRL_DEF                     R8_UEP4_T_CTRL ;  //!< [0042](01)[0x00000000]
  __IO R8_UEP4_R_CTRL__DEF                   R8_UEP4_R_CTRL_ ;  //!< [0043](01)[0x00000000]
  __IO uint8_t                         R8_UEP5_T_LEN ;  //!< [0044](01)[0x00000000]
       uint8_t                                     UNUSED7 ;  //!< [0045](01)[0xFFFFFFFF]
  __IO R8_UEP5_T_CTRL_DEF                     R8_UEP5_T_CTRL ;  //!< [0046](01)[0x00000000]
  __IO R8_UEP5_R_CTRL__DEF                   R8_UEP5_R_CTRL_ ;  //!< [0047](01)[0x00000000]
  __IO uint8_t                         R8_UEP6_T_LEN ;  //!< [0048](01)[0x00000000]
       uint8_t                                     UNUSED8 ;  //!< [0049](01)[0xFFFFFFFF]
  __IO R8_UEP6_T_CTRL_DEF                     R8_UEP6_T_CTRL ;  //!< [004a](01)[0x00000000]
  __IO R8_UEP6_R_CTRL__DEF                   R8_UEP6_R_CTRL_ ;  //!< [004b](01)[0x00000000]
  __IO uint8_t                         R8_UEP7_T_LEN ;  //!< [004c](01)[0x00000000]
       uint8_t                                     UNUSED9 ;  //!< [004d](01)[0xFFFFFFFF]
  __IO R8_UEP7_T_CTRL_DEF                     R8_UEP7_T_CTRL ;  //!< [004e](01)[0x00000000]
  __IO R8_UEP7_R_CTRL__DEF                   R8_UEP7_R_CTRL_ ;  //!< [004f](01)[0x00000000]
       uint32_t                                  UNUSED10 ;  //!< [0050](04)[0xFFFFFFFF]
  __IO USB_OTG_CR_DEF                             USB_OTG_CR ;  //!< [0054](04)[0x00000000]
  __IO USB_OTG_SR_DEF                             USB_OTG_SR ;  //!< [0058](04)[0x00000000]
}; /* total size = 0x40000, struct size = 0x005C */

// ////////////////////+++ PFIC +-+//////////////////// //
struct PFIC_Type         { /*!< Programmable Fast Interrupt Controller */
  union ISR1_DEF      {  //!< Interrupt Status Register
    struct {
           uint32_t   UNUSED0       :  2; //!<[00] 
      __I  uint32_t   INTENSTA2_3   :  2; //!<[02] Interrupt ID Status
           uint32_t   UNUSED1       :  8; //!<[04] 
      __I  uint32_t   INTENSTA12_31 : 20; //!<[12] Interrupt ID Status
    } B;
    __I  uint32_t  R;

    explicit ISR1_DEF (volatile ISR1_DEF & o) noexcept { R = o.R; };
  };
  union ISR2_DEF      {  //!< Interrupt Status Register
    struct {
      __I  uint32_t   INTENSTA : 32; //!<[00] Interrupt ID Status
    } B;
    __I  uint32_t  R;

    explicit ISR2_DEF (volatile ISR2_DEF & o) noexcept { R = o.R; };
  };
  union ISR3_DEF      {  //!< Interrupt Status Register
    struct {
      __I  uint32_t   INTENSTA : 32; //!<[00] Interrupt ID Status
    } B;
    __I  uint32_t  R;

    explicit ISR3_DEF (volatile ISR3_DEF & o) noexcept { R = o.R; };
  };
  union ISR4_DEF      {  //!< Interrupt Status Register
    struct {
      __I  uint32_t   INTENSTA :  8; //!<[00] Interrupt ID Status
    } B;
    __I  uint32_t  R;

    explicit ISR4_DEF (volatile ISR4_DEF & o) noexcept { R = o.R; };
  };
  union IPR1_DEF      {  //!< Interrupt Pending Register
    struct {
           uint32_t   UNUSED0      :  2; //!<[00] 
      __I  uint32_t   PENDSTA2_3   :  2; //!<[02] PENDSTA
           uint32_t   UNUSED1      :  8; //!<[04] 
      __I  uint32_t   PENDSTA12_31 : 20; //!<[12] PENDSTA
    } B;
    __I  uint32_t  R;

    explicit IPR1_DEF (volatile IPR1_DEF & o) noexcept { R = o.R; };
  };
  union IPR2_DEF      {  //!< Interrupt Pending Register
    struct {
      __I  uint32_t   PENDSTA : 32; //!<[00] PENDSTA
    } B;
    __I  uint32_t  R;

    explicit IPR2_DEF (volatile IPR2_DEF & o) noexcept { R = o.R; };
  };
  union IPR3_DEF      {  //!< Interrupt Pending Register
    struct {
      __I  uint32_t   PENDSTA : 32; //!<[00] PENDSTA
    } B;
    __I  uint32_t  R;

    explicit IPR3_DEF (volatile IPR3_DEF & o) noexcept { R = o.R; };
  };
  union IPR4_DEF      {  //!< Interrupt Pending Register
    struct {
      __I  uint32_t   PENDSTA :  8; //!<[00] PENDSTA
    } B;
    __I  uint32_t  R;

    explicit IPR4_DEF (volatile IPR4_DEF & o) noexcept { R = o.R; };
  };
  union ITHRESDR_DEF  {  //!< Interrupt Priority Register
    struct {
      __IO uint32_t   THRESHOLD :  8; //!<[00] THRESHOLD
    } B;
    __IO uint32_t  R;
    explicit ITHRESDR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ITHRESDR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ITHRESDR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CFGR_DEF      {  //!< Interrupt Config Register
    struct {
           uint32_t   UNUSED0  :  7; //!<[00] 
      __O  ONE_BIT    RESETSYS :  1; //!<[07] RESETSYS
           uint32_t   UNUSED1  :  8; //!<[08] 
      __O  uint32_t   KEYCODE  : 16; //!<[16] KEYCODE
    } B;
    __IO uint32_t  R;
    explicit CFGR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CFGR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CFGR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union GISR_DEF      {  //!< Interrupt Global Register
    struct {
      __I  uint32_t   NESTSTA  :  8; //!<[00] NESTSTA
      __I  ONE_BIT    GACTSTA  :  1; //!<[08] GACTSTA
      __I  ONE_BIT    GPENDSTA :  1; //!<[09] GPENDSTA
    } B;
    __I  uint32_t  R;

    explicit GISR_DEF (volatile GISR_DEF & o) noexcept { R = o.R; };
  };
  union VTFIDR_DEF    {  //!< ID Config Register
    struct {
      __IO uint32_t   VTFID0 :  8; //!<[00] VTFID0
      __IO uint32_t   VTFID1 :  8; //!<[08] VTFID1
      __IO uint32_t   VTFID2 :  8; //!<[16] VTFID2
      __IO uint32_t   VTFID3 :  8; //!<[24] VTFID3
    } B;
    __IO uint32_t  R;
    explicit VTFIDR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      VTFIDR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      VTFIDR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union VTFADDRR0_DEF {  //!< Interrupt 0 address Register
    struct {
      __IO ONE_BIT    VTF0EN :  1; //!<[00] VTF0EN
      __IO uint32_t    ADDR0 : 31; //!<[01]  ADDR0
    } B;
    __IO uint32_t  R;
    explicit VTFADDRR0_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      VTFADDRR0_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      VTFADDRR0_DEF r; r.R = R;
      R = f (r);
    }
  };
  union VTFADDRR1_DEF {  //!< Interrupt 1 address Register
    struct {
      __IO ONE_BIT    VTF1EN :  1; //!<[00] VTF1EN
      __IO uint32_t    ADDR1 : 31; //!<[01]  ADDR1
    } B;
    __IO uint32_t  R;
    explicit VTFADDRR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      VTFADDRR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      VTFADDRR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union VTFADDRR2_DEF {  //!< Interrupt 2 address Register
    struct {
      __IO ONE_BIT    VTF2EN :  1; //!<[00] VTF2EN
      __IO uint32_t    ADDR2 : 31; //!<[01]  ADDR2
    } B;
    __IO uint32_t  R;
    explicit VTFADDRR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      VTFADDRR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      VTFADDRR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union VTFADDRR3_DEF {  //!< Interrupt 3 address Register
    struct {
      __IO ONE_BIT    VTF3EN :  1; //!<[00] VTF3EN
      __IO uint32_t    ADDR3 : 31; //!<[01]  ADDR3
    } B;
    __IO uint32_t  R;
    explicit VTFADDRR3_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      VTFADDRR3_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      VTFADDRR3_DEF r; r.R = R;
      R = f (r);
    }
  };
  union IENR1_DEF     {  //!< Interrupt Setting Register
    struct {
           uint32_t   UNUSED0 : 12; //!<[00] 
      __O  uint32_t   INTEN   : 20; //!<[12] INTEN
    } B;
    __O  uint32_t  R;
    explicit IENR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IENR1_DEF r;
      R = f (r);
    }
  };
  union IENR2_DEF     {  //!< Interrupt Setting Register
    struct {
      __O  uint32_t   INTEN : 32; //!<[00] INTEN
    } B;
    __O  uint32_t  R;
    explicit IENR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IENR2_DEF r;
      R = f (r);
    }
  };
  union IENR3_DEF     {  //!< Interrupt Setting Register
    struct {
      __O  uint32_t   INTEN : 32; //!<[00] INTEN
    } B;
    __O  uint32_t  R;
    explicit IENR3_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IENR3_DEF r;
      R = f (r);
    }
  };
  union IENR4_DEF     {  //!< Interrupt Setting Register
    struct {
      __O  uint32_t   INTEN :  8; //!<[00] INTEN
    } B;
    __O  uint32_t  R;
    explicit IENR4_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IENR4_DEF r;
      R = f (r);
    }
  };
  union IRER1_DEF     {  //!< Interrupt Clear Register
    struct {
           uint32_t   UNUSED0 : 12; //!<[00] 
      __O  uint32_t   INTRSET : 20; //!<[12] INTRSET
    } B;
    __O  uint32_t  R;
    explicit IRER1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IRER1_DEF r;
      R = f (r);
    }
  };
  union IRER2_DEF     {  //!< Interrupt Clear Register
    struct {
      __O  uint32_t   INTRSET : 32; //!<[00] INTRSET
    } B;
    __O  uint32_t  R;
    explicit IRER2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IRER2_DEF r;
      R = f (r);
    }
  };
  union IRER3_DEF     {  //!< Interrupt Clear Register
    struct {
      __O  uint32_t   INTRSET : 32; //!<[00] INTRSET
    } B;
    __O  uint32_t  R;
    explicit IRER3_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IRER3_DEF r;
      R = f (r);
    }
  };
  union IRER4_DEF     {  //!< Interrupt Clear Register
    struct {
      __O  uint32_t   INTRSET :  8; //!<[00] INTRSET
    } B;
    __O  uint32_t  R;
    explicit IRER4_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IRER4_DEF r;
      R = f (r);
    }
  };
  union IPSR1_DEF     {  //!< Interrupt Pending Register
    struct {
           uint32_t   UNUSED0      :  2; //!<[00] 
      __O  uint32_t   PENDSET2_3   :  2; //!<[02] PENDSET
           uint32_t   UNUSED1      :  8; //!<[04] 
      __O  uint32_t   PENDSET12_31 : 20; //!<[12] PENDSET
    } B;
    __O  uint32_t  R;
    explicit IPSR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IPSR1_DEF r;
      R = f (r);
    }
  };
  union IPSR2_DEF     {  //!< Interrupt Pending Register
    struct {
      __O  uint32_t   PENDSET : 32; //!<[00] PENDSET
    } B;
    __O  uint32_t  R;
    explicit IPSR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IPSR2_DEF r;
      R = f (r);
    }
  };
  union IPSR3_DEF     {  //!< Interrupt Pending Register
    struct {
      __O  uint32_t   PENDSET : 32; //!<[00] PENDSET
    } B;
    __O  uint32_t  R;
    explicit IPSR3_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IPSR3_DEF r;
      R = f (r);
    }
  };
  union IPSR4_DEF     {  //!< Interrupt Pending Register
    struct {
      __O  uint32_t   PENDSET :  8; //!<[00] PENDSET
    } B;
    __O  uint32_t  R;
    explicit IPSR4_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IPSR4_DEF r;
      R = f (r);
    }
  };
  union IPRR1_DEF     {  //!< Interrupt Pending Clear Register
    struct {
           uint32_t   UNUSED0        :  2; //!<[00] 
      __O  uint32_t   PENDRESET2_3   :  2; //!<[02] PENDRESET
           uint32_t   UNUSED1        :  8; //!<[04] 
      __O  uint32_t   PENDRESET12_31 : 20; //!<[12] PENDRESET
    } B;
    __O  uint32_t  R;
    explicit IPRR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IPRR1_DEF r;
      R = f (r);
    }
  };
  union IPRR2_DEF     {  //!< Interrupt Pending Clear Register
    struct {
      __O  uint32_t   PENDRESET : 32; //!<[00] PENDRESET
    } B;
    __O  uint32_t  R;
    explicit IPRR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IPRR2_DEF r;
      R = f (r);
    }
  };
  union IPRR3_DEF     {  //!< Interrupt Pending Clear Register
    struct {
      __O  uint32_t   PENDRESET : 32; //!<[00] PENDRESET
    } B;
    __O  uint32_t  R;
    explicit IPRR3_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IPRR3_DEF r;
      R = f (r);
    }
  };
  union IPRR4_DEF     {  //!< Interrupt Pending Clear Register
    struct {
      __O  uint32_t   PENDRESET :  8; //!<[00] PENDRESET
    } B;
    __O  uint32_t  R;
    explicit IPRR4_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IPRR4_DEF r;
      R = f (r);
    }
  };
  union IACTR1_DEF    {  //!< Interrupt ACTIVE Register
    struct {
           uint32_t   UNUSED0    :  2; //!<[00] 
      __O  uint32_t   IACTS2_3   :  2; //!<[02] IACTS
           uint32_t   UNUSED1    :  8; //!<[04] 
      __O  uint32_t   IACTS12_31 : 20; //!<[12] IACTS
    } B;
    __O  uint32_t  R;
    explicit IACTR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IACTR1_DEF r;
      R = f (r);
    }
  };
  union IACTR2_DEF    {  //!< Interrupt ACTIVE Register
    struct {
      __O  uint32_t   IACTS : 32; //!<[00] IACTS
    } B;
    __O  uint32_t  R;
    explicit IACTR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IACTR2_DEF r;
      R = f (r);
    }
  };
  union IACTR3_DEF    {  //!< Interrupt ACTIVE Register
    struct {
      __O  uint32_t   IACTS : 32; //!<[00] IACTS
    } B;
    __O  uint32_t  R;
    explicit IACTR3_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IACTR3_DEF r;
      R = f (r);
    }
  };
  union IACTR4_DEF    {  //!< Interrupt ACTIVE Register
    struct {
      __O  uint32_t   IACTS :  8; //!<[00] IACTS
    } B;
    __O  uint32_t  R;
    explicit IACTR4_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IACTR4_DEF r;
      R = f (r);
    }
  };
  union SCTLR_DEF     {  //!< System Control Register
    struct {
           ONE_BIT    UNUSED0     :  1; //!<[00] 
      __IO ONE_BIT    SLEEPONEXIT :  1; //!<[01] SLEEPONEXIT
      __IO ONE_BIT    SLEEPDEEP   :  1; //!<[02] SLEEPDEEP
      __IO ONE_BIT    WFITOWFE    :  1; //!<[03] WFITOWFE
      __IO ONE_BIT    SEVONPEND   :  1; //!<[04] SEVONPEND
      __IO ONE_BIT    SETEVENT    :  1; //!<[05] SETEVENT
           uint32_t   UNUSED1     : 25; //!<[06] 
      __IO ONE_BIT    SYSRESET    :  1; //!<[31] SYSRESET
    } B;
    __IO uint32_t  R;
    explicit SCTLR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      SCTLR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      SCTLR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union STK_CTLR_DEF  {  //!< System counter control register
    struct {
      __IO ONE_BIT    STE     :  1; //!<[00] System counter enable
      __IO ONE_BIT    STIE    :  1; //!<[01] System counter interrupt enable
      __IO ONE_BIT    STCLK   :  1; //!<[02] System selects the clock source
      __IO ONE_BIT    STRE    :  1; //!<[03] System reload register
      __IO ONE_BIT    MODE    :  1; //!<[04] System Mode
      __IO ONE_BIT    INIT    :  1; //!<[05] System Initialization update
           uint32_t   UNUSED0 : 25; //!<[06] 
      __IO ONE_BIT    SWIE    :  1; //!<[31] System software triggered interrupts enable
    } B;
    __IO uint32_t  R;
    explicit STK_CTLR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      STK_CTLR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      STK_CTLR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union STK_SR_DEF    {  //!< System START
    struct {
      __IO ONE_BIT  CNTIF :  1; //!<[00] CNTIF
    } B;
    __IO uint32_t  R;
    explicit STK_SR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      STK_SR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      STK_SR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union STK_CNTL_DEF  {  //!< System counter low register
    struct {
      __IO uint32_t   CNTL : 32; //!<[00] CNTL
    } B;
    __IO uint32_t  R;
    explicit STK_CNTL_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      STK_CNTL_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      STK_CNTL_DEF r; r.R = R;
      R = f (r);
    }
  };
  union STK_CNTH_DEF  {  //!< System counter high register
    struct {
      __IO uint32_t   CNTH : 32; //!<[00] CNTH
    } B;
    __IO uint32_t  R;
    explicit STK_CNTH_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      STK_CNTH_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      STK_CNTH_DEF r; r.R = R;
      R = f (r);
    }
  };
  union STK_CMPLR_DEF {  //!< System compare low register
    struct {
      __IO uint32_t   CMPL : 32; //!<[00] CMPL
    } B;
    __IO uint32_t  R;
    explicit STK_CMPLR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      STK_CMPLR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      STK_CMPLR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union STK_CMPHR_DEF {  //!< System compare high register
    struct {
      __IO uint32_t   CMPH : 32; //!<[00] CMPH
    } B;
    __IO uint32_t  R;
    explicit STK_CMPHR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      STK_CMPHR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      STK_CMPHR_DEF r; r.R = R;
      R = f (r);
    }
  };
  // PERIPHERAL PFIC REGISTERS INSTANCES
  __I  ISR1_DEF                 ISR1 ;  //!< [0000](04)[0x0000000C]
  __I  ISR2_DEF                 ISR2 ;  //!< [0004](04)[0x00000000]
  __I  ISR3_DEF                 ISR3 ;  //!< [0008](04)[0x00000000]
  __I  ISR4_DEF                 ISR4 ;  //!< [000c](04)[0x00000000]
       uint32_t            UNUSED0 [4];  //!< [0010](10)[0xFFFFFFFF]
  __I  IPR1_DEF                 IPR1 ;  //!< [0020](04)[0x00000000]
  __I  IPR2_DEF                 IPR2 ;  //!< [0024](04)[0x00000000]
  __I  IPR3_DEF                 IPR3 ;  //!< [0028](04)[0x00000000]
  __I  IPR4_DEF                 IPR4 ;  //!< [002c](04)[0x00000000]
       uint32_t            UNUSED1 [4];  //!< [0030](10)[0xFFFFFFFF]
  __IO ITHRESDR_DEF         ITHRESDR ;  //!< [0040](04)[0x00000000]
       uint32_t            UNUSED2 ;  //!< [0044](04)[0xFFFFFFFF]
  __IO CFGR_DEF                 CFGR ;  //!< [0048](04)[0x00000000]
  __I  GISR_DEF                 GISR ;  //!< [004c](04)[0x00000000]
  __IO VTFIDR_DEF             VTFIDR ;  //!< [0050](04)[0x00000000]
       uint32_t            UNUSED3 [3];  //!< [0054](0c)[0xFFFFFFFF]
  __IO VTFADDRR0_DEF       VTFADDRR0 ;  //!< [0060](04)[0x00000000]
  __IO VTFADDRR1_DEF       VTFADDRR1 ;  //!< [0064](04)[0x00000000]
  __IO VTFADDRR2_DEF       VTFADDRR2 ;  //!< [0068](04)[0x00000000]
  __IO VTFADDRR3_DEF       VTFADDRR3 ;  //!< [006c](04)[0x00000000]
       uint32_t            UNUSED4 [36];  //!< [0070](90)[0xFFFFFFFF]
  __O  IENR1_DEF               IENR1 ;  //!< [0100](04)[0x00000000]
  __O  IENR2_DEF               IENR2 ;  //!< [0104](04)[0x00000000]
  __O  IENR3_DEF               IENR3 ;  //!< [0108](04)[0x00000000]
  __O  IENR4_DEF               IENR4 ;  //!< [010c](04)[0x00000000]
       uint32_t            UNUSED5 [28];  //!< [0110](70)[0xFFFFFFFF]
  __O  IRER1_DEF               IRER1 ;  //!< [0180](04)[0x00000000]
  __O  IRER2_DEF               IRER2 ;  //!< [0184](04)[0x00000000]
  __O  IRER3_DEF               IRER3 ;  //!< [0188](04)[0x00000000]
  __O  IRER4_DEF               IRER4 ;  //!< [018c](04)[0x00000000]
       uint32_t            UNUSED6 [28];  //!< [0190](70)[0xFFFFFFFF]
  __O  IPSR1_DEF               IPSR1 ;  //!< [0200](04)[0x00000000]
  __O  IPSR2_DEF               IPSR2 ;  //!< [0204](04)[0x00000000]
  __O  IPSR3_DEF               IPSR3 ;  //!< [0208](04)[0x00000000]
  __O  IPSR4_DEF               IPSR4 ;  //!< [020c](04)[0x00000000]
       uint32_t            UNUSED7 [28];  //!< [0210](70)[0xFFFFFFFF]
  __O  IPRR1_DEF               IPRR1 ;  //!< [0280](04)[0x00000000]
  __O  IPRR2_DEF               IPRR2 ;  //!< [0284](04)[0x00000000]
  __O  IPRR3_DEF               IPRR3 ;  //!< [0288](04)[0x00000000]
  __O  IPRR4_DEF               IPRR4 ;  //!< [028c](04)[0x00000000]
       uint32_t            UNUSED8 [28];  //!< [0290](70)[0xFFFFFFFF]
  __O  IACTR1_DEF             IACTR1 ;  //!< [0300](04)[0x00000000]
  __O  IACTR2_DEF             IACTR2 ;  //!< [0304](04)[0x00000000]
  __O  IACTR3_DEF             IACTR3 ;  //!< [0308](04)[0x00000000]
  __O  IACTR4_DEF             IACTR4 ;  //!< [030c](04)[0x00000000]
       uint32_t            UNUSED9 [60];  //!< [0310](f0)[0xFFFFFFFF]
  __IO uint8_t             IPRIOR0 ;  //!< [0400](01)[0x00000000]
  __IO uint8_t             IPRIOR1 ;  //!< [0401](01)[0x00000000]
  __IO uint8_t             IPRIOR2 ;  //!< [0402](01)[0x00000000]
  __IO uint8_t             IPRIOR3 ;  //!< [0403](01)[0x00000000]
  __IO uint8_t             IPRIOR4 ;  //!< [0404](01)[0x00000000]
  __IO uint8_t             IPRIOR5 ;  //!< [0405](01)[0x00000000]
  __IO uint8_t             IPRIOR6 ;  //!< [0406](01)[0x00000000]
  __IO uint8_t             IPRIOR7 ;  //!< [0407](01)[0x00000000]
  __IO uint8_t             IPRIOR8 ;  //!< [0408](01)[0x00000000]
  __IO uint8_t             IPRIOR9 ;  //!< [0409](01)[0x00000000]
  __IO uint8_t           IPRIOR10 ;  //!< [040a](01)[0x00000000]
  __IO uint8_t           IPRIOR11 ;  //!< [040b](01)[0x00000000]
  __IO uint8_t           IPRIOR12 ;  //!< [040c](01)[0x00000000]
  __IO uint8_t           IPRIOR13 ;  //!< [040d](01)[0x00000000]
  __IO uint8_t           IPRIOR14 ;  //!< [040e](01)[0x00000000]
  __IO uint8_t           IPRIOR15 ;  //!< [040f](01)[0x00000000]
  __IO uint8_t           IPRIOR16 ;  //!< [0410](01)[0x00000000]
  __IO uint8_t           IPRIOR17 ;  //!< [0411](01)[0x00000000]
  __IO uint8_t           IPRIOR18 ;  //!< [0412](01)[0x00000000]
  __IO uint8_t           IPRIOR19 ;  //!< [0413](01)[0x00000000]
  __IO uint8_t           IPRIOR20 ;  //!< [0414](01)[0x00000000]
  __IO uint8_t           IPRIOR21 ;  //!< [0415](01)[0x00000000]
  __IO uint8_t           IPRIOR22 ;  //!< [0416](01)[0x00000000]
  __IO uint8_t           IPRIOR23 ;  //!< [0417](01)[0x00000000]
  __IO uint8_t           IPRIOR24 ;  //!< [0418](01)[0x00000000]
  __IO uint8_t           IPRIOR25 ;  //!< [0419](01)[0x00000000]
  __IO uint8_t           IPRIOR26 ;  //!< [041a](01)[0x00000000]
  __IO uint8_t           IPRIOR27 ;  //!< [041b](01)[0x00000000]
  __IO uint8_t           IPRIOR28 ;  //!< [041c](01)[0x00000000]
  __IO uint8_t           IPRIOR29 ;  //!< [041d](01)[0x00000000]
  __IO uint8_t           IPRIOR30 ;  //!< [041e](01)[0x00000000]
  __IO uint8_t           IPRIOR31 ;  //!< [041f](01)[0x00000000]
  __IO uint8_t           IPRIOR32 ;  //!< [0420](01)[0x00000000]
  __IO uint8_t           IPRIOR33 ;  //!< [0421](01)[0x00000000]
  __IO uint8_t           IPRIOR34 ;  //!< [0422](01)[0x00000000]
  __IO uint8_t           IPRIOR35 ;  //!< [0423](01)[0x00000000]
  __IO uint8_t           IPRIOR36 ;  //!< [0424](01)[0x00000000]
  __IO uint8_t           IPRIOR37 ;  //!< [0425](01)[0x00000000]
  __IO uint8_t           IPRIOR38 ;  //!< [0426](01)[0x00000000]
  __IO uint8_t           IPRIOR39 ;  //!< [0427](01)[0x00000000]
  __IO uint8_t           IPRIOR40 ;  //!< [0428](01)[0x00000000]
  __IO uint8_t           IPRIOR41 ;  //!< [0429](01)[0x00000000]
  __IO uint8_t           IPRIOR42 ;  //!< [042a](01)[0x00000000]
  __IO uint8_t           IPRIOR43 ;  //!< [042b](01)[0x00000000]
  __IO uint8_t           IPRIOR44 ;  //!< [042c](01)[0x00000000]
  __IO uint8_t           IPRIOR45 ;  //!< [042d](01)[0x00000000]
  __IO uint8_t           IPRIOR46 ;  //!< [042e](01)[0x00000000]
  __IO uint8_t           IPRIOR47 ;  //!< [042f](01)[0x00000000]
  __IO uint8_t           IPRIOR48 ;  //!< [0430](01)[0x00000000]
  __IO uint8_t           IPRIOR49 ;  //!< [0431](01)[0x00000000]
  __IO uint8_t           IPRIOR50 ;  //!< [0432](01)[0x00000000]
  __IO uint8_t           IPRIOR51 ;  //!< [0433](01)[0x00000000]
  __IO uint8_t           IPRIOR52 ;  //!< [0434](01)[0x00000000]
  __IO uint8_t           IPRIOR53 ;  //!< [0435](01)[0x00000000]
  __IO uint8_t           IPRIOR54 ;  //!< [0436](01)[0x00000000]
  __IO uint8_t           IPRIOR55 ;  //!< [0437](01)[0x00000000]
  __IO uint8_t           IPRIOR56 ;  //!< [0438](01)[0x00000000]
  __IO uint8_t           IPRIOR57 ;  //!< [0439](01)[0x00000000]
  __IO uint8_t           IPRIOR58 ;  //!< [043a](01)[0x00000000]
  __IO uint8_t           IPRIOR59 ;  //!< [043b](01)[0x00000000]
  __IO uint8_t           IPRIOR60 ;  //!< [043c](01)[0x00000000]
  __IO uint8_t           IPRIOR61 ;  //!< [043d](01)[0x00000000]
  __IO uint8_t           IPRIOR62 ;  //!< [043e](01)[0x00000000]
  __IO uint8_t           IPRIOR63 ;  //!< [043f](01)[0x00000000]
  __IO uint8_t           IPRIOR64 ;  //!< [0440](01)[0x00000000]
  __IO uint8_t           IPRIOR65 ;  //!< [0441](01)[0x00000000]
  __IO uint8_t           IPRIOR66 ;  //!< [0442](01)[0x00000000]
  __IO uint8_t           IPRIOR67 ;  //!< [0443](01)[0x00000000]
  __IO uint8_t           IPRIOR68 ;  //!< [0444](01)[0x00000000]
  __IO uint8_t           IPRIOR69 ;  //!< [0445](01)[0x00000000]
  __IO uint8_t           IPRIOR70 ;  //!< [0446](01)[0x00000000]
  __IO uint8_t           IPRIOR71 ;  //!< [0447](01)[0x00000000]
  __IO uint8_t           IPRIOR72 ;  //!< [0448](01)[0x00000000]
  __IO uint8_t           IPRIOR73 ;  //!< [0449](01)[0x00000000]
  __IO uint8_t           IPRIOR74 ;  //!< [044a](01)[0x00000000]
  __IO uint8_t           IPRIOR75 ;  //!< [044b](01)[0x00000000]
  __IO uint8_t           IPRIOR76 ;  //!< [044c](01)[0x00000000]
  __IO uint8_t           IPRIOR77 ;  //!< [044d](01)[0x00000000]
  __IO uint8_t           IPRIOR78 ;  //!< [044e](01)[0x00000000]
  __IO uint8_t           IPRIOR79 ;  //!< [044f](01)[0x00000000]
  __IO uint8_t           IPRIOR80 ;  //!< [0450](01)[0x00000000]
  __IO uint8_t           IPRIOR81 ;  //!< [0451](01)[0x00000000]
  __IO uint8_t           IPRIOR82 ;  //!< [0452](01)[0x00000000]
  __IO uint8_t           IPRIOR83 ;  //!< [0453](01)[0x00000000]
  __IO uint8_t           IPRIOR84 ;  //!< [0454](01)[0x00000000]
  __IO uint8_t           IPRIOR85 ;  //!< [0455](01)[0x00000000]
  __IO uint8_t           IPRIOR86 ;  //!< [0456](01)[0x00000000]
  __IO uint8_t           IPRIOR87 ;  //!< [0457](01)[0x00000000]
  __IO uint8_t           IPRIOR88 ;  //!< [0458](01)[0x00000000]
  __IO uint8_t           IPRIOR89 ;  //!< [0459](01)[0x00000000]
  __IO uint8_t           IPRIOR90 ;  //!< [045a](01)[0x00000000]
  __IO uint8_t           IPRIOR91 ;  //!< [045b](01)[0x00000000]
  __IO uint8_t           IPRIOR92 ;  //!< [045c](01)[0x00000000]
  __IO uint8_t           IPRIOR93 ;  //!< [045d](01)[0x00000000]
  __IO uint8_t           IPRIOR94 ;  //!< [045e](01)[0x00000000]
  __IO uint8_t           IPRIOR95 ;  //!< [045f](01)[0x00000000]
  __IO uint8_t           IPRIOR96 ;  //!< [0460](01)[0x00000000]
  __IO uint8_t           IPRIOR97 ;  //!< [0461](01)[0x00000000]
  __IO uint8_t           IPRIOR98 ;  //!< [0462](01)[0x00000000]
  __IO uint8_t           IPRIOR99 ;  //!< [0463](01)[0x00000000]
  __IO uint8_t         IPRIOR100 ;  //!< [0464](01)[0x00000000]
  __IO uint8_t         IPRIOR101 ;  //!< [0465](01)[0x00000000]
  __IO uint8_t         IPRIOR102 ;  //!< [0466](01)[0x00000000]
  __IO uint8_t         IPRIOR103 ;  //!< [0467](01)[0x00000000]
  __IO uint8_t         IPRIOR104 ;  //!< [0468](01)[0x00000000]
  __IO uint8_t         IPRIOR105 ;  //!< [0469](01)[0x00000000]
  __IO uint8_t         IPRIOR106 ;  //!< [046a](01)[0x00000000]
  __IO uint8_t         IPRIOR107 ;  //!< [046b](01)[0x00000000]
  __IO uint8_t         IPRIOR108 ;  //!< [046c](01)[0x00000000]
  __IO uint8_t         IPRIOR109 ;  //!< [046d](01)[0x00000000]
  __IO uint8_t         IPRIOR110 ;  //!< [046e](01)[0x00000000]
  __IO uint8_t         IPRIOR111 ;  //!< [046f](01)[0x00000000]
  __IO uint8_t         IPRIOR112 ;  //!< [0470](01)[0x00000000]
  __IO uint8_t         IPRIOR113 ;  //!< [0471](01)[0x00000000]
  __IO uint8_t         IPRIOR114 ;  //!< [0472](01)[0x00000000]
  __IO uint8_t         IPRIOR115 ;  //!< [0473](01)[0x00000000]
  __IO uint8_t         IPRIOR116 ;  //!< [0474](01)[0x00000000]
  __IO uint8_t         IPRIOR117 ;  //!< [0475](01)[0x00000000]
  __IO uint8_t         IPRIOR118 ;  //!< [0476](01)[0x00000000]
  __IO uint8_t         IPRIOR119 ;  //!< [0477](01)[0x00000000]
  __IO uint8_t         IPRIOR120 ;  //!< [0478](01)[0x00000000]
  __IO uint8_t         IPRIOR121 ;  //!< [0479](01)[0x00000000]
  __IO uint8_t         IPRIOR122 ;  //!< [047a](01)[0x00000000]
  __IO uint8_t         IPRIOR123 ;  //!< [047b](01)[0x00000000]
  __IO uint8_t         IPRIOR124 ;  //!< [047c](01)[0x00000000]
  __IO uint8_t         IPRIOR125 ;  //!< [047d](01)[0x00000000]
  __IO uint8_t         IPRIOR126 ;  //!< [047e](01)[0x00000000]
  __IO uint8_t         IPRIOR127 ;  //!< [047f](01)[0x00000000]
  __IO uint8_t         IPRIOR128 ;  //!< [0480](01)[0x00000000]
  __IO uint8_t         IPRIOR129 ;  //!< [0481](01)[0x00000000]
  __IO uint8_t         IPRIOR130 ;  //!< [0482](01)[0x00000000]
  __IO uint8_t         IPRIOR131 ;  //!< [0483](01)[0x00000000]
  __IO uint8_t         IPRIOR132 ;  //!< [0484](01)[0x00000000]
  __IO uint8_t         IPRIOR133 ;  //!< [0485](01)[0x00000000]
  __IO uint8_t         IPRIOR134 ;  //!< [0486](01)[0x00000000]
  __IO uint8_t         IPRIOR135 ;  //!< [0487](01)[0x00000000]
  __IO uint8_t         IPRIOR136 ;  //!< [0488](01)[0x00000000]
  __IO uint8_t         IPRIOR137 ;  //!< [0489](01)[0x00000000]
  __IO uint8_t         IPRIOR138 ;  //!< [048a](01)[0x00000000]
  __IO uint8_t         IPRIOR139 ;  //!< [048b](01)[0x00000000]
  __IO uint8_t         IPRIOR140 ;  //!< [048c](01)[0x00000000]
  __IO uint8_t         IPRIOR141 ;  //!< [048d](01)[0x00000000]
  __IO uint8_t         IPRIOR142 ;  //!< [048e](01)[0x00000000]
  __IO uint8_t         IPRIOR143 ;  //!< [048f](01)[0x00000000]
  __IO uint8_t         IPRIOR144 ;  //!< [0490](01)[0x00000000]
  __IO uint8_t         IPRIOR145 ;  //!< [0491](01)[0x00000000]
  __IO uint8_t         IPRIOR146 ;  //!< [0492](01)[0x00000000]
  __IO uint8_t         IPRIOR147 ;  //!< [0493](01)[0x00000000]
  __IO uint8_t         IPRIOR148 ;  //!< [0494](01)[0x00000000]
  __IO uint8_t         IPRIOR149 ;  //!< [0495](01)[0x00000000]
  __IO uint8_t         IPRIOR150 ;  //!< [0496](01)[0x00000000]
  __IO uint8_t         IPRIOR151 ;  //!< [0497](01)[0x00000000]
  __IO uint8_t         IPRIOR152 ;  //!< [0498](01)[0x00000000]
  __IO uint8_t         IPRIOR153 ;  //!< [0499](01)[0x00000000]
  __IO uint8_t         IPRIOR154 ;  //!< [049a](01)[0x00000000]
  __IO uint8_t         IPRIOR155 ;  //!< [049b](01)[0x00000000]
  __IO uint8_t         IPRIOR156 ;  //!< [049c](01)[0x00000000]
  __IO uint8_t         IPRIOR157 ;  //!< [049d](01)[0x00000000]
  __IO uint8_t         IPRIOR158 ;  //!< [049e](01)[0x00000000]
  __IO uint8_t         IPRIOR159 ;  //!< [049f](01)[0x00000000]
  __IO uint8_t         IPRIOR160 ;  //!< [04a0](01)[0x00000000]
  __IO uint8_t         IPRIOR161 ;  //!< [04a1](01)[0x00000000]
  __IO uint8_t         IPRIOR162 ;  //!< [04a2](01)[0x00000000]
  __IO uint8_t         IPRIOR163 ;  //!< [04a3](01)[0x00000000]
  __IO uint8_t         IPRIOR164 ;  //!< [04a4](01)[0x00000000]
  __IO uint8_t         IPRIOR165 ;  //!< [04a5](01)[0x00000000]
  __IO uint8_t         IPRIOR166 ;  //!< [04a6](01)[0x00000000]
  __IO uint8_t         IPRIOR167 ;  //!< [04a7](01)[0x00000000]
  __IO uint8_t         IPRIOR168 ;  //!< [04a8](01)[0x00000000]
  __IO uint8_t         IPRIOR169 ;  //!< [04a9](01)[0x00000000]
  __IO uint8_t         IPRIOR170 ;  //!< [04aa](01)[0x00000000]
  __IO uint8_t         IPRIOR171 ;  //!< [04ab](01)[0x00000000]
  __IO uint8_t         IPRIOR172 ;  //!< [04ac](01)[0x00000000]
  __IO uint8_t         IPRIOR173 ;  //!< [04ad](01)[0x00000000]
  __IO uint8_t         IPRIOR174 ;  //!< [04ae](01)[0x00000000]
  __IO uint8_t         IPRIOR175 ;  //!< [04af](01)[0x00000000]
  __IO uint8_t         IPRIOR176 ;  //!< [04b0](01)[0x00000000]
  __IO uint8_t         IPRIOR177 ;  //!< [04b1](01)[0x00000000]
  __IO uint8_t         IPRIOR178 ;  //!< [04b2](01)[0x00000000]
  __IO uint8_t         IPRIOR179 ;  //!< [04b3](01)[0x00000000]
  __IO uint8_t         IPRIOR180 ;  //!< [04b4](01)[0x00000000]
  __IO uint8_t         IPRIOR181 ;  //!< [04b5](01)[0x00000000]
  __IO uint8_t         IPRIOR182 ;  //!< [04b6](01)[0x00000000]
  __IO uint8_t         IPRIOR183 ;  //!< [04b7](01)[0x00000000]
  __IO uint8_t         IPRIOR184 ;  //!< [04b8](01)[0x00000000]
  __IO uint8_t         IPRIOR185 ;  //!< [04b9](01)[0x00000000]
  __IO uint8_t         IPRIOR186 ;  //!< [04ba](01)[0x00000000]
  __IO uint8_t         IPRIOR187 ;  //!< [04bb](01)[0x00000000]
  __IO uint8_t         IPRIOR188 ;  //!< [04bc](01)[0x00000000]
  __IO uint8_t         IPRIOR189 ;  //!< [04bd](01)[0x00000000]
  __IO uint8_t         IPRIOR190 ;  //!< [04be](01)[0x00000000]
  __IO uint8_t         IPRIOR191 ;  //!< [04bf](01)[0x00000000]
  __IO uint8_t         IPRIOR192 ;  //!< [04c0](01)[0x00000000]
  __IO uint8_t         IPRIOR193 ;  //!< [04c1](01)[0x00000000]
  __IO uint8_t         IPRIOR194 ;  //!< [04c2](01)[0x00000000]
  __IO uint8_t         IPRIOR195 ;  //!< [04c3](01)[0x00000000]
  __IO uint8_t         IPRIOR196 ;  //!< [04c4](01)[0x00000000]
  __IO uint8_t         IPRIOR197 ;  //!< [04c5](01)[0x00000000]
  __IO uint8_t         IPRIOR198 ;  //!< [04c6](01)[0x00000000]
  __IO uint8_t         IPRIOR199 ;  //!< [04c7](01)[0x00000000]
  __IO uint8_t         IPRIOR200 ;  //!< [04c8](01)[0x00000000]
  __IO uint8_t         IPRIOR201 ;  //!< [04c9](01)[0x00000000]
  __IO uint8_t         IPRIOR202 ;  //!< [04ca](01)[0x00000000]
  __IO uint8_t         IPRIOR203 ;  //!< [04cb](01)[0x00000000]
  __IO uint8_t         IPRIOR204 ;  //!< [04cc](01)[0x00000000]
  __IO uint8_t         IPRIOR205 ;  //!< [04cd](01)[0x00000000]
  __IO uint8_t         IPRIOR206 ;  //!< [04ce](01)[0x00000000]
  __IO uint8_t         IPRIOR207 ;  //!< [04cf](01)[0x00000000]
  __IO uint8_t         IPRIOR208 ;  //!< [04d0](01)[0x00000000]
  __IO uint8_t         IPRIOR209 ;  //!< [04d1](01)[0x00000000]
  __IO uint8_t         IPRIOR210 ;  //!< [04d2](01)[0x00000000]
  __IO uint8_t         IPRIOR211 ;  //!< [04d3](01)[0x00000000]
  __IO uint8_t         IPRIOR212 ;  //!< [04d4](01)[0x00000000]
  __IO uint8_t         IPRIOR213 ;  //!< [04d5](01)[0x00000000]
  __IO uint8_t         IPRIOR214 ;  //!< [04d6](01)[0x00000000]
  __IO uint8_t         IPRIOR215 ;  //!< [04d7](01)[0x00000000]
  __IO uint8_t         IPRIOR216 ;  //!< [04d8](01)[0x00000000]
  __IO uint8_t         IPRIOR217 ;  //!< [04d9](01)[0x00000000]
  __IO uint8_t         IPRIOR218 ;  //!< [04da](01)[0x00000000]
  __IO uint8_t         IPRIOR219 ;  //!< [04db](01)[0x00000000]
  __IO uint8_t         IPRIOR220 ;  //!< [04dc](01)[0x00000000]
  __IO uint8_t         IPRIOR221 ;  //!< [04dd](01)[0x00000000]
  __IO uint8_t         IPRIOR222 ;  //!< [04de](01)[0x00000000]
  __IO uint8_t         IPRIOR223 ;  //!< [04df](01)[0x00000000]
  __IO uint8_t         IPRIOR224 ;  //!< [04e0](01)[0x00000000]
  __IO uint8_t         IPRIOR225 ;  //!< [04e1](01)[0x00000000]
  __IO uint8_t         IPRIOR226 ;  //!< [04e2](01)[0x00000000]
  __IO uint8_t         IPRIOR227 ;  //!< [04e3](01)[0x00000000]
  __IO uint8_t         IPRIOR228 ;  //!< [04e4](01)[0x00000000]
  __IO uint8_t         IPRIOR229 ;  //!< [04e5](01)[0x00000000]
  __IO uint8_t         IPRIOR230 ;  //!< [04e6](01)[0x00000000]
  __IO uint8_t         IPRIOR231 ;  //!< [04e7](01)[0x00000000]
  __IO uint8_t         IPRIOR232 ;  //!< [04e8](01)[0x00000000]
  __IO uint8_t         IPRIOR233 ;  //!< [04e9](01)[0x00000000]
  __IO uint8_t         IPRIOR234 ;  //!< [04ea](01)[0x00000000]
  __IO uint8_t         IPRIOR235 ;  //!< [04eb](01)[0x00000000]
  __IO uint8_t         IPRIOR236 ;  //!< [04ec](01)[0x00000000]
  __IO uint8_t         IPRIOR237 ;  //!< [04ed](01)[0x00000000]
  __IO uint8_t         IPRIOR238 ;  //!< [04ee](01)[0x00000000]
  __IO uint8_t         IPRIOR239 ;  //!< [04ef](01)[0x00000000]
  __IO uint8_t         IPRIOR240 ;  //!< [04f0](01)[0x00000000]
  __IO uint8_t         IPRIOR241 ;  //!< [04f1](01)[0x00000000]
  __IO uint8_t         IPRIOR242 ;  //!< [04f2](01)[0x00000000]
  __IO uint8_t         IPRIOR243 ;  //!< [04f3](01)[0x00000000]
  __IO uint8_t         IPRIOR244 ;  //!< [04f4](01)[0x00000000]
  __IO uint8_t         IPRIOR245 ;  //!< [04f5](01)[0x00000000]
  __IO uint8_t         IPRIOR246 ;  //!< [04f6](01)[0x00000000]
  __IO uint8_t         IPRIOR247 ;  //!< [04f7](01)[0x00000000]
  __IO uint8_t         IPRIOR248 ;  //!< [04f8](01)[0x00000000]
  __IO uint8_t         IPRIOR249 ;  //!< [04f9](01)[0x00000000]
  __IO uint8_t         IPRIOR250 ;  //!< [04fa](01)[0x00000000]
  __IO uint8_t         IPRIOR251 ;  //!< [04fb](01)[0x00000000]
  __IO uint8_t         IPRIOR252 ;  //!< [04fc](01)[0x00000000]
  __IO uint8_t         IPRIOR253 ;  //!< [04fd](01)[0x00000000]
  __IO uint8_t         IPRIOR254 ;  //!< [04fe](01)[0x00000000]
  __IO uint8_t         IPRIOR255 ;  //!< [04ff](01)[0x00000000]
       uint32_t          UNUSED10 [516];  //!< [0500](810)[0xFFFFFFFF]
  __IO SCTLR_DEF               SCTLR ;  //!< [0d10](04)[0x00000000]
       uint32_t          UNUSED11 [187];  //!< [0d14](2ec)[0xFFFFFFFF]
  __IO STK_CTLR_DEF         STK_CTLR ;  //!< [1000](04)[0x00000000]
  __IO STK_SR_DEF             STK_SR ;  //!< [1004](04)[0x00000000]
  __IO STK_CNTL_DEF         STK_CNTL ;  //!< [1008](04)[0x00000000]
  __IO STK_CNTH_DEF         STK_CNTH ;  //!< [100c](04)[0x00000000]
  __IO STK_CMPLR_DEF       STK_CMPLR ;  //!< [1010](04)[0x00000000]
  __IO STK_CMPHR_DEF       STK_CMPHR ;  //!< [1014](04)[0x00000000]
}; /* total size = 0x1100, struct size = 0x1018 */
static TIM2_Type         & TIM2         = * reinterpret_cast<TIM2_Type         * const> (0x40000000);
static TIM2_Type         & TIM3         = * reinterpret_cast<TIM2_Type         * const> (0x40000400);
static TIM2_Type         & TIM4         = * reinterpret_cast<TIM2_Type         * const> (0x40000800);
static TIM2_Type         & TIM5         = * reinterpret_cast<TIM2_Type         * const> (0x40000c00);
static USART1_Type       & UART6        = * reinterpret_cast<USART1_Type       * const> (0x40001800);
static USART1_Type       & UART7        = * reinterpret_cast<USART1_Type       * const> (0x40001c00);
static USART1_Type       & UART8        = * reinterpret_cast<USART1_Type       * const> (0x40002000);
static RTC_Type          & RTC          = * reinterpret_cast<RTC_Type          * const> (0x40002800);
static WWDG_Type         & WWDG         = * reinterpret_cast<WWDG_Type         * const> (0x40002c00);
static IWDG_Type         & IWDG         = * reinterpret_cast<IWDG_Type         * const> (0x40003000);
static SPI2_Type         & SPI2         = * reinterpret_cast<SPI2_Type         * const> (0x40003800);
static SPI2_Type         & SPI3         = * reinterpret_cast<SPI2_Type         * const> (0x40003c00);
static USART1_Type       & USART2       = * reinterpret_cast<USART1_Type       * const> (0x40004400);
static USART1_Type       & USART3       = * reinterpret_cast<USART1_Type       * const> (0x40004800);
static USART1_Type       & UART4        = * reinterpret_cast<USART1_Type       * const> (0x40004c00);
static USART1_Type       & UART5        = * reinterpret_cast<USART1_Type       * const> (0x40005000);
static I2C1_Type         & I2C1         = * reinterpret_cast<I2C1_Type         * const> (0x40005400);
static I2C1_Type         & I2C2         = * reinterpret_cast<I2C1_Type         * const> (0x40005800);
static USB_Type          & USB          = * reinterpret_cast<USB_Type          * const> (0x40005c00);
static CAN1_Type         & CAN1         = * reinterpret_cast<CAN1_Type         * const> (0x40006400);
static BKP_Type          & BKP          = * reinterpret_cast<BKP_Type          * const> (0x40006c00);
static PWR_Type          & PWR          = * reinterpret_cast<PWR_Type          * const> (0x40007000);
static DAC_Type          & DAC          = * reinterpret_cast<DAC_Type          * const> (0x40007400);
static AFIO_Type         & AFIO         = * reinterpret_cast<AFIO_Type         * const> (0x40010000);
static EXTI_Type         & EXTI         = * reinterpret_cast<EXTI_Type         * const> (0x40010400);
static GPIOA_Type        & GPIOA        = * reinterpret_cast<GPIOA_Type        * const> (0x40010800);
static GPIOA_Type        & GPIOB        = * reinterpret_cast<GPIOA_Type        * const> (0x40010c00);
static GPIOA_Type        & GPIOC        = * reinterpret_cast<GPIOA_Type        * const> (0x40011000);
static GPIOA_Type        & GPIOD        = * reinterpret_cast<GPIOA_Type        * const> (0x40011400);
static GPIOA_Type        & GPIOE        = * reinterpret_cast<GPIOA_Type        * const> (0x40011800);
static ADC1_Type         & ADC1         = * reinterpret_cast<ADC1_Type         * const> (0x40012400);
static ADC2_Type         & ADC2         = * reinterpret_cast<ADC2_Type         * const> (0x40012800);
static TIM1_Type         & TIM1         = * reinterpret_cast<TIM1_Type         * const> (0x40012c00);
static SPI1_Type         & SPI1         = * reinterpret_cast<SPI1_Type         * const> (0x40013000);
static TIM1_Type         & TIM8         = * reinterpret_cast<TIM1_Type         * const> (0x40013400);
static USART1_Type       & USART1       = * reinterpret_cast<USART1_Type       * const> (0x40013800);
static TIM1_Type         & TIM9         = * reinterpret_cast<TIM1_Type         * const> (0x40014c00);
static TIM1_Type         & TIM10        = * reinterpret_cast<TIM1_Type         * const> (0x40015000);
static DMA1_Type         & DMA1         = * reinterpret_cast<DMA1_Type         * const> (0x40020000);
static RCC_Type          & RCC          = * reinterpret_cast<RCC_Type          * const> (0x40021000);
static FLASH_Type        & FLASH        = * reinterpret_cast<FLASH_Type        * const> (0x40022000);
static CRC_Type          & CRC          = * reinterpret_cast<CRC_Type          * const> (0x40023000);
static USBHD_Type        & USBHD        = * reinterpret_cast<USBHD_Type        * const> (0x40023400);
static EXTEND_Type       & EXTEND       = * reinterpret_cast<EXTEND_Type       * const> (0x40023800);
static OPA_Type          & OPA          = * reinterpret_cast<OPA_Type          * const> (0x40023804);
static ETHERNET_MAC_Type & ETHERNET_MAC = * reinterpret_cast<ETHERNET_MAC_Type * const> (0x40028000);
static ETHERNET_MMC_Type & ETHERNET_MMC = * reinterpret_cast<ETHERNET_MMC_Type * const> (0x40028100);
static ETHERNET_PTP_Type & ETHERNET_PTP = * reinterpret_cast<ETHERNET_PTP_Type * const> (0x40028700);
static ETHERNET_DMA_Type & ETHERNET_DMA = * reinterpret_cast<ETHERNET_DMA_Type * const> (0x40029000);
static USB_OTG_FS_Type   & USB_OTG_FS   = * reinterpret_cast<USB_OTG_FS_Type   * const> (0x50000000);
static DBG_Type          & DBG          = * reinterpret_cast<DBG_Type          * const> (0xe000d000);
static PFIC_Type         & PFIC         = * reinterpret_cast<PFIC_Type         * const> (0xe000e000);

static_assert (sizeof(struct TIM2_Type) == 80, "size error TIM2");
static_assert (sizeof(struct RTC_Type) == 40, "size error RTC");
static_assert (sizeof(struct WWDG_Type) == 12, "size error WWDG");
static_assert (sizeof(struct IWDG_Type) == 16, "size error IWDG");
static_assert (sizeof(struct SPI2_Type) == 40, "size error SPI2");
static_assert (sizeof(struct I2C1_Type) == 36, "size error I2C1");
static_assert (sizeof(struct USB_Type) == 84, "size error USB");
static_assert (sizeof(struct CAN1_Type) == 800, "size error CAN1");
static_assert (sizeof(struct BKP_Type) == 192, "size error BKP");
static_assert (sizeof(struct PWR_Type) == 8, "size error PWR");
static_assert (sizeof(struct DAC_Type) == 52, "size error DAC");
static_assert (sizeof(struct AFIO_Type) == 32, "size error AFIO");
static_assert (sizeof(struct EXTI_Type) == 24, "size error EXTI");
static_assert (sizeof(struct GPIOA_Type) == 28, "size error GPIOA");
static_assert (sizeof(struct ADC1_Type) == 80, "size error ADC1");
static_assert (sizeof(struct ADC2_Type) == 80, "size error ADC2");
static_assert (sizeof(struct TIM1_Type) == 80, "size error TIM1");
static_assert (sizeof(struct SPI1_Type) == 40, "size error SPI1");
static_assert (sizeof(struct USART1_Type) == 28, "size error USART1");
static_assert (sizeof(struct DMA1_Type) == 164, "size error DMA1");
static_assert (sizeof(struct RCC_Type) == 48, "size error RCC");
static_assert (sizeof(struct FLASH_Type) == 40, "size error FLASH");
static_assert (sizeof(struct CRC_Type) == 12, "size error CRC");
static_assert (sizeof(struct USBHD_Type) == 280, "size error USBHD");
static_assert (sizeof(struct EXTEND_Type) == 4, "size error EXTEND");
static_assert (sizeof(struct OPA_Type) == 4, "size error OPA");
static_assert (sizeof(struct ETHERNET_MAC_Type) == 96, "size error ETHERNET_MAC");
static_assert (sizeof(struct ETHERNET_MMC_Type) == 200, "size error ETHERNET_MMC");
static_assert (sizeof(struct ETHERNET_PTP_Type) == 36, "size error ETHERNET_PTP");
static_assert (sizeof(struct ETHERNET_DMA_Type) == 88, "size error ETHERNET_DMA");
static_assert (sizeof(struct USB_OTG_FS_Type) == 92, "size error USB_OTG_FS");
static_assert (sizeof(struct DBG_Type) == 8, "size error DBG");
static_assert (sizeof(struct PFIC_Type) == 4120, "size error PFIC");

/* Interrupts : conflicts cmsis part - use copy / paste */
enum IRQn {
    /******  RISC-V Processor Exceptions Numbers *******************************************************/
    NonMaskableInt_IRQn = 2, /* 2 Non Maskable Interrupt                             */
    EXC_IRQn = 3,            /* 3 Exception Interrupt                                */
    Ecall_M_Mode_IRQn = 5,   /* 5 Ecall M Mode Interrupt                             */
    Ecall_U_Mode_IRQn = 8,   /* 8 Ecall U Mode Interrupt                             */
    Break_Point_IRQn = 9,    /* 9 Break Point Interrupt                              */
    SysTicK_IRQn = 12,       /* 12 System timer Interrupt                            */
    Software_IRQn = 14,      /* 14 software Interrupt                                */

    /******  RISC-V specific Interrupt Numbers *********************************************************/
    WWDG_IRQn = 16,            /* Window WatchDog Interrupt                            */
    PVD_IRQn = 17,             /* PVD through EXTI Line detection Interrupt            */
    TAMPER_IRQn = 18,          /* Tamper Interrupt                                     */
    RTC_IRQn = 19,             /* RTC global Interrupt                                 */
    FLASH_IRQn = 20,           /* FLASH global Interrupt                               */
    RCC_IRQn = 21,             /* RCC global Interrupt                                 */
    EXTI0_IRQn = 22,           /* EXTI Line0 Interrupt                                 */
    EXTI1_IRQn = 23,           /* EXTI Line1 Interrupt                                 */
    EXTI2_IRQn = 24,           /* EXTI Line2 Interrupt                                 */
    EXTI3_IRQn = 25,           /* EXTI Line3 Interrupt                                 */
    EXTI4_IRQn = 26,           /* EXTI Line4 Interrupt                                 */
    DMA1_Channel1_IRQn = 27,   /* DMA1 Channel 1 global Interrupt                      */
    DMA1_Channel2_IRQn = 28,   /* DMA1 Channel 2 global Interrupt                      */
    DMA1_Channel3_IRQn = 29,   /* DMA1 Channel 3 global Interrupt                      */
    DMA1_Channel4_IRQn = 30,   /* DMA1 Channel 4 global Interrupt                      */
    DMA1_Channel5_IRQn = 31,   /* DMA1 Channel 5 global Interrupt                      */
    DMA1_Channel6_IRQn = 32,   /* DMA1 Channel 6 global Interrupt                      */
    DMA1_Channel7_IRQn = 33,   /* DMA1 Channel 7 global Interrupt                      */
    ADC_IRQn = 34,             /* ADC1 and ADC2 global Interrupt                       */
    USB_HP_CAN1_TX_IRQn = 35,  /* USB Device High Priority or CAN1 TX Interrupts       */
    USB_LP_CAN1_RX0_IRQn = 36, /* USB Device Low Priority or CAN1 RX0 Interrupts       */
    CAN1_RX1_IRQn = 37,        /* CAN1 RX1 Interrupt                                   */
    CAN1_SCE_IRQn = 38,        /* CAN1 SCE Interrupt                                   */
    EXTI9_5_IRQn = 39,         /* External Line[9:5] Interrupts                        */
    TIM1_BRK_IRQn = 40,        /* TIM1 Break Interrupt                                 */
    TIM1_UP_IRQn = 41,         /* TIM1 Update Interrupt                                */
    TIM1_TRG_COM_IRQn = 42,    /* TIM1 Trigger and Commutation Interrupt               */
    TIM1_CC_IRQn = 43,         /* TIM1 Capture Compare Interrupt                       */
    TIM2_IRQn = 44,            /* TIM2 global Interrupt                                */
    TIM3_IRQn = 45,            /* TIM3 global Interrupt                                */
    TIM4_IRQn = 46,            /* TIM4 global Interrupt                                */
    I2C1_EV_IRQn = 47,         /* I2C1 Event Interrupt                                 */
    I2C1_ER_IRQn = 48,         /* I2C1 Error Interrupt                                 */
    I2C2_EV_IRQn = 49,         /* I2C2 Event Interrupt                                 */
    I2C2_ER_IRQn = 50,         /* I2C2 Error Interrupt                                 */
    SPI1_IRQn = 51,            /* SPI1 global Interrupt                                */
    SPI2_IRQn = 52,            /* SPI2 global Interrupt                                */
    USART1_IRQn = 53,          /* USART1 global Interrupt                              */
    USART2_IRQn = 54,          /* USART2 global Interrupt                              */
    USART3_IRQn = 55,          /* USART3 global Interrupt                              */
    EXTI15_10_IRQn = 56,       /* External Line[15:10] Interrupts                      */
    RTCAlarm_IRQn = 57,        /* RTC Alarm through EXTI Line Interrupt                */
    USBWakeUp_IRQn = 58,       /* USB Device WakeUp from suspend through EXTI Line Interrupt 	*/
    USBFS_IRQn = 59,           /* USBFS global Interrupt                               */
    USBFSWakeUp_IRQn = 60,     /* USB Host/Device WakeUp Interrupt                     */

#ifdef CH32V20x_D6
    UART4_IRQn = 61,         /* UART4 global Interrupt                               */
    DMA1_Channel8_IRQn = 62, /* DMA1 Channel 8 global Interrupt                      */

#elif defined(CH32V20x_D8)
    ETH_IRQn = 61,           /* ETH global Interrupt               	                 */
    ETHWakeUp_IRQn = 62,     /* ETH WakeUp Interrupt                       			 */
    TIM5_IRQn = 65,          /* TIM5 global Interrupt                                */
    UART4_IRQn = 66,         /* UART4 global Interrupt                               */
    DMA1_Channel8_IRQn = 67, /* DMA1 Channel 8 global Interrupt                      */
    OSC32KCal_IRQn = 68,     /* OSC32K global Interrupt                              */
    OSCWakeUp_IRQn = 69,     /* OSC32K WakeUp Interrupt                              */

#elif defined(CH32V20x_D8W)
    ETH_IRQn = 61,           /* ETH global Interrupt               	                 */
    ETHWakeUp_IRQn = 62,     /* ETH WakeUp Interrupt                       			 */
    BB_IRQn = 63,            /* BLE BB global Interrupt                              */
    LLE_IRQn = 64,           /* BLE LLE global Interrupt                             */
    TIM5_IRQn = 65,          /* TIM5 global Interrupt                                */
    UART4_IRQn = 66,         /* UART4 global Interrupt                               */
    DMA1_Channel8_IRQn = 67, /* DMA1 Channel 8 global Interrupt                      */
    OSC32KCal_IRQn = 68,     /* OSC32K global Interrupt                              */
    OSCWakeUp_IRQn = 69,     /* OSC32K WakeUp Interrupt                              */
#endif
  
};
#endif
