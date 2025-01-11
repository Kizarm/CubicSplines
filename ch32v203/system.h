#ifndef SYSTEM_H
#define SYSTEM_H
#include "CH32V20xxx.h"
struct NVIC_Type {
    __I  uint32_t ISR[8];
    __I  uint32_t IPR[8];
    __IO uint32_t ITHRESDR;
    __IO uint32_t RESERVED;
    __IO uint32_t CFGR;
    __I  uint32_t GISR;
    __IO uint8_t VTFIDR[4];
    uint8_t RESERVED0[12];
    __IO uint32_t VTFADDR[4];
    uint8_t RESERVED1[0x90];
    __O  uint32_t IENR[8];
    uint8_t RESERVED2[0x60];
    __O  uint32_t IRER[8];
    uint8_t RESERVED3[0x60];
    __O  uint32_t IPSR[8];
    uint8_t RESERVED4[0x60];
    __O  uint32_t IPRR[8];
    uint8_t RESERVED5[0x60];
    __IO uint32_t IACTR[8];
    uint8_t RESERVED6[0xE0];
    __IO uint8_t IPRIOR[256];
    uint8_t RESERVED7[0x810];
    __IO uint32_t SCTLR;
    void EnableIRQ  (IRQn IRQ) {
      IENR [((uint32_t)(IRQ) >> 5)] = (1 << ((uint32_t)(IRQ) & 0x1F));
    }
    void DisableIRQ (IRQn IRQ) {
      IRER [((uint32_t)(IRQ) >> 5)] = (1 << ((uint32_t)(IRQ) & 0x1F));
    }
    void SetPriority(IRQn IRQ, uint8_t priority) {
      IPRIOR[(uint32_t)(IRQ)] = priority;
    }
    
};
static NVIC_Type & NVIC = * reinterpret_cast<NVIC_Type * const> (0xE000E000);
struct SysTick_Type {
  union CTLR_DEF  {
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
    template<typename F> void modify (F f) volatile {
      CTLR_DEF r; r.R = R;
      R = f (r);
    }
  };
    
  __IO CTLR_DEF         CTLR ;  //!< [1000](04)[0x00000000]
  __IO uint32_t           SR ;  //!< [1004](04)[0x00000000]
  __IO uint32_t         CNTL ;  //!< [1008](04)[0x00000000]
  __IO uint32_t         CNTH ;  //!< [100c](04)[0x00000000]
  __IO uint32_t        CMPLR ;  //!< [1010](04)[0x00000000]
  __IO uint32_t        CMPHR ;  //!< [1014](04)[0x00000000]
    
    void Config (const uint32_t ticks) {
      CNTL = 0u;
      CNTH = 0u;
      CMPLR = ticks - 1u;
      CMPHR = 0u;
      CTLR.modify ([] (CTLR_DEF & r) -> auto { // TODO ???
        r.B.STE   = SET;
        r.B.STIE  = SET;
        r.B.STCLK = SET;
        r.B.STRE  = SET;        
        return r.R;
      });
      NVIC.EnableIRQ (SysTicK_IRQn);
    }
};
static SysTick_Type & SysTick = * reinterpret_cast<SysTick_Type * const> (0xE000F000);
static constexpr unsigned SYSTEM_CORE_CLOCK = 144'000'000u; // or 96'000'000u
extern "C" {
  extern uint32_t SystemCoreClock;
  extern void SystemCoreClockUpdate (void);
  extern void SystemInit(void);
  extern void delay_init ();
  extern void delay_us       (const unsigned dly);
  extern void set_timeout_us (const uint32_t time);
  extern bool is_timeout ();
};

#endif // SYSTEM_H
