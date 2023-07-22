#ifndef STM32L4x2_HDEF
#define STM32L4x2_HDEF
/** @brief STM32L4x2 */
/* STM32L4x2 */

/* IO definitions (access restrictions to peripheral registers) */
/** defines 'read only'    permissions */
#define __I volatile
/** defines 'write only'   permissions */
#define __O volatile
/** defines 'read / write' permissions */
#define __IO volatile
#include <stdint.h>
#define MERGE union
/*
  cpuName  = CM4
  revision = r0p1
  endian   = little
*/
#define __MPU_PRESENT             1
#define __NVIC_PRIO_BITS          4
#define __Vendor_SysTickConfig    0
#define __FPU_PRESENT             1
enum ONE_BIT { RESET = 0, SET = 1 };

// ////////////////////+++ AES +-+//////////////////// //
struct AES_Type           { /*!< Advanced encryption standard hardware accelerator */
  union CR_DEF    {  //!< control register
    struct {
      __IO ONE_BIT    EN       :  1; //!<[00] AES enable
      __IO uint32_t   DATATYPE :  2; //!<[01] Data type selection (for data in and data out to/from the cryptographic block)
      __IO uint32_t   MODE     :  2; //!<[03] AES operating mode
      __IO uint32_t   CHMOD    :  2; //!<[05] AES chaining mode
      __IO ONE_BIT    CCFC     :  1; //!<[07] Computation Complete Flag Clear
      __IO ONE_BIT    ERRC     :  1; //!<[08] Error clear
      __IO ONE_BIT    CCFIE    :  1; //!<[09] CCF flag interrupt enable
      __IO ONE_BIT    ERRIE    :  1; //!<[10] Error interrupt enable
      __IO ONE_BIT    DMAINEN  :  1; //!<[11] Enable DMA management of data input phase
      __IO ONE_BIT    DMAOUTEN :  1; //!<[12] Enable DMA management of data output phase
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
  union SR_DEF    {  //!< status register
    struct {
      __I  ONE_BIT  CCF   :  1; //!<[00] Computation complete flag
      __I  ONE_BIT  RDERR :  1; //!<[01] Read error flag
      __I  ONE_BIT  WRERR :  1; //!<[02] Write error flag
    } B;
    __I  uint32_t  R;

    explicit SR_DEF (volatile SR_DEF & o) noexcept { R = o.R; };
  };
  union DINR_DEF  {  //!< data input register
    struct {
      __IO uint32_t   AES_DINR : 32; //!<[00] Data Input Register
    } B;
    __IO uint32_t  R;
    explicit DINR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DINR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DINR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DOUTR_DEF {  //!< data output register
    struct {
      __I  uint32_t   AES_DOUTR : 32; //!<[00] Data output register
    } B;
    __I  uint32_t  R;

    explicit DOUTR_DEF (volatile DOUTR_DEF & o) noexcept { R = o.R; };
  };
  union KEYR0_DEF {  //!< key register 0
    struct {
      __IO uint32_t   AES_KEYR0 : 32; //!<[00] Data Output Register (LSB key [31:0])
    } B;
    __IO uint32_t  R;
    explicit KEYR0_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      KEYR0_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      KEYR0_DEF r; r.R = R;
      R = f (r);
    }
  };
  union KEYR1_DEF {  //!< key register 1
    struct {
      __IO uint32_t   AES_KEYR1 : 32; //!<[00] AES key register (key [63:32])
    } B;
    __IO uint32_t  R;
    explicit KEYR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      KEYR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      KEYR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union KEYR2_DEF {  //!< key register 2
    struct {
      __IO uint32_t   AES_KEYR2 : 32; //!<[00] AES key register (key [95:64])
    } B;
    __IO uint32_t  R;
    explicit KEYR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      KEYR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      KEYR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union KEYR3_DEF {  //!< key register 3
    struct {
      __IO uint32_t   AES_KEYR3 : 32; //!<[00] AES key register (MSB key [127:96])
    } B;
    __IO uint32_t  R;
    explicit KEYR3_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      KEYR3_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      KEYR3_DEF r; r.R = R;
      R = f (r);
    }
  };
  union IVR0_DEF  {  //!< initialization vector register 0
    struct {
      __IO uint32_t   AES_IVR0 : 32; //!<[00] initialization vector register (LSB IVR [31:0])
    } B;
    __IO uint32_t  R;
    explicit IVR0_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IVR0_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      IVR0_DEF r; r.R = R;
      R = f (r);
    }
  };
  union IVR1_DEF  {  //!< initialization vector register 1
    struct {
      __IO uint32_t   AES_IVR1 : 32; //!<[00] Initialization Vector Register (IVR [63:32])
    } B;
    __IO uint32_t  R;
    explicit IVR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IVR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      IVR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union IVR2_DEF  {  //!< initialization vector register 2
    struct {
      __IO uint32_t   AES_IVR2 : 32; //!<[00] Initialization Vector Register (IVR [95:64])
    } B;
    __IO uint32_t  R;
    explicit IVR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IVR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      IVR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union IVR3_DEF  {  //!< initialization vector register 3
    struct {
      __IO uint32_t   AES_IVR3 : 32; //!<[00] Initialization Vector Register (MSB IVR [127:96])
    } B;
    __IO uint32_t  R;
    explicit IVR3_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IVR3_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      IVR3_DEF r; r.R = R;
      R = f (r);
    }
  };
  // PERIPHERAL AES REGISTERS INSTANCES
  __IO CR_DEF                 CR ;  //!< [0000](04)[0x00000000]
  __I  SR_DEF                 SR ;  //!< [0004](04)[0x00000000]
  __IO DINR_DEF             DINR ;  //!< [0008](04)[0x00000000]
  __I  DOUTR_DEF           DOUTR ;  //!< [000c](04)[0x00000000]
  __IO KEYR0_DEF           KEYR0 ;  //!< [0010](04)[0x00000000]
  __IO KEYR1_DEF           KEYR1 ;  //!< [0014](04)[0x00000000]
  __IO KEYR2_DEF           KEYR2 ;  //!< [0018](04)[0x00000000]
  __IO KEYR3_DEF           KEYR3 ;  //!< [001c](04)[0x00000000]
  __IO IVR0_DEF             IVR0 ;  //!< [0020](04)[0x00000000]
  __IO IVR1_DEF             IVR1 ;  //!< [0024](04)[0x00000000]
  __IO IVR2_DEF             IVR2 ;  //!< [0028](04)[0x00000000]
  __IO IVR3_DEF             IVR3 ;  //!< [002c](04)[0x00000000]
}; /* total size = 0x0400, struct size = 0x0030 */

// ////////////////////+++ ADC1 +-+//////////////////// //
struct ADC1_Type          { /*!< Analog-to-Digital Converter */
  union ADC_ISR_DEF     {  //!< ADC interrupt and status register
    enum ADRDY_ENUM /* uint32_t */ {
      ADRDY_B_0x0 = 0,  //!< ADC not yet ready to start conversion (or the flag event was already acknowledged and cleared by software)
      ADRDY_B_0x1 = 1,  //!< ADC is ready to start conversion
    };
    enum EOSMP_ENUM /* uint32_t */ {
      EOSMP_B_0x0 = 0,  //!< not at the end of the sampling phase (or the flag event was already acknowledged and cleared by software)
      EOSMP_B_0x1 = 1,  //!< End of sampling phase reached
    };
    enum EOC_ENUM /* uint32_t */ {
      EOC_B_0x0 = 0,  //!< Regular channel conversion not complete (or the flag event was already acknowledged and cleared by software)
      EOC_B_0x1 = 1,  //!< Regular channel conversion complete
    };
    enum EOS_ENUM /* uint32_t */ {
      EOS_B_0x0 = 0,  //!< Regular Conversions sequence not complete (or the flag event was already acknowledged and cleared by software)
      EOS_B_0x1 = 1,  //!< Regular Conversions sequence complete
    };
    enum OVR_ENUM /* uint32_t */ {
      OVR_B_0x0 = 0,  //!< No overrun occurred (or the flag event was already acknowledged and cleared by software)
      OVR_B_0x1 = 1,  //!< Overrun has occurred
    };
    enum JEOC_ENUM /* uint32_t */ {
      JEOC_B_0x0 = 0,  //!< Injected channel conversion not complete (or the flag event was already acknowledged and cleared by software)
      JEOC_B_0x1 = 1,  //!< Injected channel conversion complete
    };
    enum JEOS_ENUM /* uint32_t */ {
      JEOS_B_0x0 = 0,  //!< Injected conversion sequence not complete (or the flag event was already acknowledged and cleared by software)
      JEOS_B_0x1 = 1,  //!< Injected conversions complete
    };
    enum AWD1_ENUM /* uint32_t */ {
      AWD1_B_0x0 = 0,  //!< No analog watchdog 1 event occurred (or the flag event was already acknowledged and cleared by software)
      AWD1_B_0x1 = 1,  //!< Analog watchdog 1 event occurred
    };
    enum AWD2_ENUM /* uint32_t */ {
      AWD2_B_0x0 = 0,  //!< No analog watchdog 2 event occurred (or the flag event was already acknowledged and cleared by software)
      AWD2_B_0x1 = 1,  //!< Analog watchdog 2 event occurred
    };
    enum AWD3_ENUM /* uint32_t */ {
      AWD3_B_0x0 = 0,  //!< No analog watchdog 3 event occurred (or the flag event was already acknowledged and cleared by software)
      AWD3_B_0x1 = 1,  //!< Analog watchdog 3 event occurred
    };
    enum JQOVF_ENUM /* uint32_t */ {
      JQOVF_B_0x0 = 0,  //!< No injected context queue overflow occurred (or the flag event was already acknowledged and cleared by software)
      JQOVF_B_0x1 = 1,  //!< Injected context queue overflow has occurred
    };
    struct {
      __IO ADRDY_ENUM  ADRDY :  1; //!<[00] ADC ready This bit is set by hardware after the ADC has been enabled (bit ADEN = 1) and when the ADC reaches a state where it is ready to accept conversion requests.It is cleared by software writing 1 to it.
      __IO EOSMP_ENUM  EOSMP :  1; //!<[01] End of sampling flagThis bit is set by hardware during the conversion of any channel (only for regular channels), at the end of the sampling phase.
      __IO EOC_ENUM    EOC   :  1; //!<[02] End of conversion flagThis bit is set by hardware at the end of each regular conversion of a channel when a new data is available in the ADC_DR register. It is cleared by software writing 1 to it or by reading the ADC_DR register
      __IO EOS_ENUM    EOS   :  1; //!<[03] End of regular sequence flagThis bit is set by hardware at the end of the conversions of a regular sequence of channels. It is cleared by software writing 1 to it.
      __IO OVR_ENUM    OVR   :  1; //!<[04] ADC overrunThis bit is set by hardware when an overrun occurs on a regular channel, meaning that a new conversion has completed while the EOC flag was already set. It is cleared by software writing 1 to it.
      __IO JEOC_ENUM   JEOC  :  1; //!<[05] Injected channel end of conversion flagThis bit is set by hardware at the end of each injected conversion of a channel when a new data is available in the corresponding ADC_JDRy register. It is cleared by software writing 1 to it or by reading the corresponding ADC_JDRy register
      __IO JEOS_ENUM   JEOS  :  1; //!<[06] Injected channel end of sequence flagThis bit is set by hardware at the end of the conversions of all injected channels in the group. It is cleared by software writing 1 to it.
      __IO AWD1_ENUM   AWD1  :  1; //!<[07] Analog watchdog 1 flagThis bit is set by hardware when the converted voltage crosses the values programmed in the fields LT1[11:0] and HT1[11:0] of ADC_TR1 register. It is cleared by software. writing 1 to it.
      __IO AWD2_ENUM   AWD2  :  1; //!<[08] Analog watchdog 2 flagThis bit is set by hardware when the converted voltage crosses the values programmed in the fields LT2[7:0] and HT2[7:0] of ADC_TR2 register. It is cleared by software writing 1 to it.
      __IO AWD3_ENUM   AWD3  :  1; //!<[09] Analog watchdog 3 flagThis bit is set by hardware when the converted voltage crosses the values programmed in the fields LT3[7:0] and HT3[7:0] of ADC_TR3 register. It is cleared by software writing 1 to it.
      __IO JQOVF_ENUM  JQOVF :  1; //!<[10] Injected context queue overflowThis bit is set by hardware when an Overflow of the Injected Queue of Context occurs. It is cleared by software writing 1 to it. Refer to Section 16.4.21: Queue of context for injected conversions for more information.
    } B;
    __IO uint32_t  R;
    explicit ADC_ISR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ADC_ISR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ADC_ISR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ADC_IER_DEF     {  //!< ADC interrupt enable register
    enum ADRDYIE_ENUM /* uint32_t */ {
      ADRDYIE_B_0x0 = 0,  //!< ADRDY interrupt disabled
      ADRDYIE_B_0x1 = 1,  //!< ADRDY interrupt enabled. An interrupt is generated when the ADRDY bit is set.
    };
    enum EOSMPIE_ENUM /* uint32_t */ {
      EOSMPIE_B_0x0 = 0,  //!< EOSMP interrupt disabled.
      EOSMPIE_B_0x1 = 1,  //!< EOSMP interrupt enabled. An interrupt is generated when the EOSMP bit is set.
    };
    enum EOCIE_ENUM /* uint32_t */ {
      EOCIE_B_0x0 = 0,  //!< EOC interrupt disabled.
      EOCIE_B_0x1 = 1,  //!< EOC interrupt enabled. An interrupt is generated when the EOC bit is set.
    };
    enum EOSIE_ENUM /* uint32_t */ {
      EOSIE_B_0x0 = 0,  //!< EOS interrupt disabled
      EOSIE_B_0x1 = 1,  //!< EOS interrupt enabled. An interrupt is generated when the EOS bit is set.
    };
    enum OVRIE_ENUM /* uint32_t */ {
      OVRIE_B_0x0 = 0,  //!< Overrun interrupt disabled
      OVRIE_B_0x1 = 1,  //!< Overrun interrupt enabled. An interrupt is generated when the OVR bit is set.
    };
    enum JEOCIE_ENUM /* uint32_t */ {
      JEOCIE_B_0x0 = 0,  //!< JEOC interrupt disabled.
      JEOCIE_B_0x1 = 1,  //!< JEOC interrupt enabled. An interrupt is generated when the JEOC bit is set.
    };
    enum JEOSIE_ENUM /* uint32_t */ {
      JEOSIE_B_0x0 = 0,  //!< JEOS interrupt disabled
      JEOSIE_B_0x1 = 1,  //!< JEOS interrupt enabled. An interrupt is generated when the JEOS bit is set.
    };
    enum AWD1IE_ENUM /* uint32_t */ {
      AWD1IE_B_0x0 = 0,  //!< Analog watchdog 1 interrupt disabled
      AWD1IE_B_0x1 = 1,  //!< Analog watchdog 1 interrupt enabled
    };
    enum AWD2IE_ENUM /* uint32_t */ {
      AWD2IE_B_0x0 = 0,  //!< Analog watchdog 2 interrupt disabled
      AWD2IE_B_0x1 = 1,  //!< Analog watchdog 2 interrupt enabled
    };
    enum AWD3IE_ENUM /* uint32_t */ {
      AWD3IE_B_0x0 = 0,  //!< Analog watchdog 3 interrupt disabled
      AWD3IE_B_0x1 = 1,  //!< Analog watchdog 3 interrupt enabled
    };
    enum JQOVFIE_ENUM /* uint32_t */ {
      JQOVFIE_B_0x0 = 0,  //!< Injected Context Queue Overflow interrupt disabled
      JQOVFIE_B_0x1 = 1,  //!< Injected Context Queue Overflow interrupt enabled. An interrupt is generated when the JQOVF bit is set.
    };
    struct {
      __IO ADRDYIE_ENUM  ADRDYIE :  1; //!<[00] ADC ready interrupt enableThis bit is set and cleared by software to enable/disable the ADC Ready interrupt.Note: The software is allowed to write this bit only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).
      __IO EOSMPIE_ENUM  EOSMPIE :  1; //!<[01] End of sampling flag interrupt enable for regular conversionsThis bit is set and cleared by software to enable/disable the end of the sampling phase interrupt for regular conversions.Note: The software is allowed to write this bit only when ADSTART = 0 (which ensures that no regular conversion is ongoing).
      __IO EOCIE_ENUM    EOCIE   :  1; //!<[02] End of regular conversion interrupt enableThis bit is set and cleared by software to enable/disable the end of a regular conversion interrupt.Note: The software is allowed to write this bit only when ADSTART = 0 (which ensures that no regular conversion is ongoing).
      __IO EOSIE_ENUM    EOSIE   :  1; //!<[03] End of regular sequence of conversions interrupt enableThis bit is set and cleared by software to enable/disable the end of regular sequence of conversions interrupt.Note: The software is allowed to write this bit only when ADSTART = 0 (which ensures that no regular conversion is ongoing).
      __IO OVRIE_ENUM    OVRIE   :  1; //!<[04] Overrun interrupt enableThis bit is set and cleared by software to enable/disable the Overrun interrupt of a regular conversion.Note: The software is allowed to write this bit only when ADSTART = 0 (which ensures that no regular conversion is ongoing).
      __IO JEOCIE_ENUM   JEOCIE  :  1; //!<[05] End of injected conversion interrupt enableThis bit is set and cleared by software to enable/disable the end of an injected conversion interrupt.Note: The software is allowed to write this bit only when JADSTART = 0 (which ensures that no injected conversion is ongoing).
      __IO JEOSIE_ENUM   JEOSIE  :  1; //!<[06] End of injected sequence of conversions interrupt enableThis bit is set and cleared by software to enable/disable the end of injected sequence of conversions interrupt.Note: The software is allowed to write this bit only when JADSTART = 0 (which ensures that no injected conversion is ongoing).
      __IO AWD1IE_ENUM   AWD1IE  :  1; //!<[07] Analog watchdog 1 interrupt enableThis bit is set and cleared by software to enable/disable the analog watchdog 1 interrupt. Note: The software is allowed to write this bit only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).
      __IO AWD2IE_ENUM   AWD2IE  :  1; //!<[08] Analog watchdog 2 interrupt enableThis bit is set and cleared by software to enable/disable the analog watchdog 2 interrupt.Note: The software is allowed to write this bit only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).
      __IO AWD3IE_ENUM   AWD3IE  :  1; //!<[09] Analog watchdog 3 interrupt enableThis bit is set and cleared by software to enable/disable the analog watchdog 2 interrupt.Note: The software is allowed to write this bit only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).
      __IO JQOVFIE_ENUM  JQOVFIE :  1; //!<[10] Injected context queue overflow interrupt enableThis bit is set and cleared by software to enable/disable the Injected Context Queue Overflow interrupt.Note: The software is allowed to write this bit only when JADSTART = 0 (which ensures that no injected conversion is ongoing).
    } B;
    __IO uint32_t  R;
    explicit ADC_IER_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ADC_IER_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ADC_IER_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ADC_CR_DEF      {  //!< ADC control register
    enum ADEN_ENUM /* uint32_t */ {
      ADEN_B_0x0 = 0,  //!< ADC is disabled (OFF state)
      ADEN_B_0x1 = 1,  //!< Write 1 to enable the ADC.
    };
    enum ADDIS_ENUM /* uint32_t */ {
      ADDIS_B_0x0 = 0,  //!< no ADDIS command ongoing
      ADDIS_B_0x1 = 1,  //!< Write 1 to disable the ADC. Read 1 means that an ADDIS command is in progress.
    };
    enum ADSTART_ENUM /* uint32_t */ {
      ADSTART_B_0x0 = 0,  //!< No ADC regular conversion is ongoing.
      ADSTART_B_0x1 = 1,  //!< Write 1 to start regular conversions. Read 1 means that the ADC is operating and eventually converting a regular channel.
    };
    enum JADSTART_ENUM /* uint32_t */ {
      JADSTART_B_0x0 = 0,  //!< No ADC injected conversion is ongoing.
      JADSTART_B_0x1 = 1,  //!< Write 1 to start injected conversions. Read 1 means that the ADC is operating and eventually converting an injected channel.
    };
    enum ADSTP_ENUM /* uint32_t */ {
      ADSTP_B_0x0 = 0,  //!< No ADC stop regular conversion command ongoing
      ADSTP_B_0x1 = 1,  //!< Write 1 to stop regular conversions ongoing. Read 1 means that an ADSTP command is in progress.
    };
    enum JADSTP_ENUM /* uint32_t */ {
      JADSTP_B_0x0 = 0,  //!< No ADC stop injected conversion command ongoing
      JADSTP_B_0x1 = 1,  //!< Write 1 to stop injected conversions ongoing. Read 1 means that an ADSTP command is in progress.
    };
    enum ADVREGEN_ENUM /* uint32_t */ {
      ADVREGEN_B_0x0 = 0,  //!< ADC Voltage regulator disabled
      ADVREGEN_B_0x1 = 1,  //!< ADC Voltage regulator enabled.
    };
    enum DEEPPWD_ENUM /* uint32_t */ {
      DEEPPWD_B_0x0 = 0,  //!< ADC not in Deep-power down
      DEEPPWD_B_0x1 = 1,  //!< ADC in Deep-power-down (default reset state)
    };
    enum ADCALDIF_ENUM /* uint32_t */ {
      ADCALDIF_B_0x0 = 0,  //!< Writing ADCAL launches a calibration in single-ended inputs mode.
      ADCALDIF_B_0x1 = 1,  //!< Writing ADCAL launches a calibration in differential inputs mode.
    };
    enum ADCAL_ENUM /* uint32_t */ {
      ADCAL_B_0x0 = 0,  //!< Calibration complete
      ADCAL_B_0x1 = 1,  //!< Write 1 to calibrate the ADC. Read at 1 means that a calibration in progress.
    };
    struct {
      __IO ADEN_ENUM      ADEN     :  1; //!<[00] ADC enable controlThis bit is set by software to enable the ADC. The ADC is effectively ready to operate once the flag ADRDY has been set.It is cleared by hardware when the ADC is disabled, after the execution of the ADDIS command.Note: The software is allowed to set ADEN only when all bits of ADC_CR registers are 0 (ADCAL = 0, JADSTART = 0, ADSTART = 0, ADSTP = 0, ADDIS = 0 and ADEN = 0) except for bit ADVREGEN which must be 1 (and the software must have wait for the startup time of the voltage regulator)
      __IO ADDIS_ENUM     ADDIS    :  1; //!<[01] ADC disable commandThis bit is set by software to disable the ADC (ADDIS command) and put it into power-down state (OFF state).It is cleared by hardware once the ADC is effectively disabled (ADEN is also cleared by hardware at this time).Note: The software is allowed to set ADDIS only when ADEN = 1 and both ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing)
      __IO ADSTART_ENUM   ADSTART  :  1; //!<[02] ADC start of regular conversionThis bit is set by software to start ADC conversion of regular channels. Depending on the configuration bits EXTEN[1:0], a conversion starts immediately (software trigger configuration) or once a regular hardware trigger event occurs (hardware trigger configuration).It is cleared by hardware:in single conversion mode when software trigger is selected (EXTSEL = 0x0): at the assertion of the End of Regular Conversion Sequence (EOS) flag.in all cases: after the execution of the ADSTP command, at the same time that ADSTP is cleared by hardware.Note: The software is allowed to set ADSTART only when ADEN = 1 and ADDIS = 0 (ADC is enabled and there is no pending request to disable the ADC)Note: In auto-injection mode (JAUTO = 1), regular and auto-injected conversions are started by setting bit ADSTART (JADSTART must be kept cleared)
      __IO JADSTART_ENUM  JADSTART :  1; //!<[03] ADC start of injected conversionThis bit is set by software to start ADC conversion of injected channels. Depending on the configuration bits JEXTEN[1:0], a conversion starts immediately (software trigger configuration) or once an injected hardware trigger event occurs (hardware trigger configuration).It is cleared by hardware:in single conversion mode when software trigger is selected (JEXTSEL = 0x0): at the assertion of the End of Injected Conversion Sequence (JEOS) flag.in all cases: after the execution of the JADSTP command, at the same time that JADSTP is cleared by hardware.Note: The software is allowed to set JADSTART only when ADEN = 1 and ADDIS = 0 (ADC is enabled and there is no pending request to disable the ADC).Note: In auto-injection mode (JAUTO = 1), regular and auto-injected conversions are started by setting bit ADSTART (JADSTART must be kept cleared)
      __IO ADSTP_ENUM     ADSTP    :  1; //!<[04] ADC stop of regular conversion commandThis bit is set by software to stop and discard an ongoing regular conversion (ADSTP Command).It is cleared by hardware when the conversion is effectively discarded and the ADC regular sequence and triggers can be re-configured. The ADC is then ready to accept a new start of regular conversions (ADSTART command).Note: The software is allowed to set ADSTP only when ADSTART = 1 and ADDIS = 0 (ADC is enabled and eventually converting a regular conversion and there is no pending request to disable the ADC).In auto-injection mode (JAUTO = 1), setting ADSTP bit aborts both regular and injected conversions (do not use JADSTP).
      __IO JADSTP_ENUM    JADSTP   :  1; //!<[05] ADC stop of injected conversion commandThis bit is set by software to stop and discard an ongoing injected conversion (JADSTP Command).It is cleared by hardware when the conversion is effectively discarded and the ADC injected sequence and triggers can be re-configured. The ADC is then ready to accept a new start of injected conversions (JADSTART command).Note: The software is allowed to set JADSTP only when JADSTART = 1 and ADDIS = 0 (ADC is enabled and eventually converting an injected conversion and there is no pending request to disable the ADC)Note: In Auto-injection mode (JAUTO = 1), setting ADSTP bit aborts both regular and injected conversions (do not use JADSTP)
           uint32_t       UNUSED0  : 22; //!<[06] 
      __IO ADVREGEN_ENUM  ADVREGEN :  1; //!<[28] ADC voltage regulator enableThis bits is set by software to enable the ADC voltage regulator.Before performing any operation such as launching a calibration or enabling the ADC, the ADC voltage regulator must first be enabled and the software must wait for the regulator start-up time.For more details about the ADC voltage regulator enable and disable sequences, refer to Section 16.4.6: ADC Deep-power-down mode (DEEPPWD) and ADC voltage regulator (ADVREGEN).The software can program this bit field only when the ADC is disabled (ADCAL = 0, JADSTART = 0, ADSTART = 0, ADSTP = 0, ADDIS = 0 and ADEN = 0).
      __IO DEEPPWD_ENUM   DEEPPWD  :  1; //!<[29] Deep-power-down enableThis bit is set and cleared by software to put the ADC in Deep-power-down mode.Note: The software is allowed to write this bit only when the ADC is disabled (ADCAL = 0, JADSTART = 0, JADSTP = 0, ADSTART = 0, ADSTP = 0, ADDIS = 0 and ADEN = 0).
      __IO ADCALDIF_ENUM  ADCALDIF :  1; //!<[30] Differential mode for calibrationThis bit is set and cleared by software to configure the single-ended or differential inputs mode for the calibration.Note: The software is allowed to write this bit only when the ADC is disabled and is not calibrating (ADCAL = 0, JADSTART = 0, JADSTP = 0, ADSTART = 0, ADSTP = 0, ADDIS = 0 and ADEN = 0).
      __IO ADCAL_ENUM     ADCAL    :  1; //!<[31] ADC calibrationThis bit is set by software to start the calibration of the ADC. Program first the bit ADCALDIF to determine if this calibration applies for single-ended or differential inputs mode.It is cleared by hardware after calibration is complete.Note: The software is allowed to launch a calibration by setting ADCAL only when ADEN = 0.Note: The software is allowed to update the calibration factor by writing ADC_CALFACT only when ADEN = 1 and ADSTART = 0 and JADSTART = 0 (ADC enabled and no conversion is ongoing)
    } B;
    __IO uint32_t  R;
    explicit ADC_CR_DEF () noexcept { R = 0x20000000u; }
    template<typename F> void setbit (F f) volatile {
      ADC_CR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ADC_CR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ADC_CFGR_DEF    {  //!< ADC configuration register
    enum DMAEN_ENUM /* uint32_t */ {
      DMAEN_B_0x0 = 0,  //!< DMA disabled
      DMAEN_B_0x1 = 1,  //!< DMA enabled
    };
    enum DMACFG_ENUM /* uint32_t */ {
      DMACFG_B_0x0 = 0,  //!< DMA One Shot mode selected
      DMACFG_B_0x1 = 1,  //!< DMA Circular mode selected
    };
    enum DFSDMCFG_ENUM /* uint32_t */ {
      DFSDMCFG_B_0x0 = 0,  //!< DFSDM mode disabled
      DFSDMCFG_B_0x1 = 1,  //!< DFSDM mode enabled
    };
    enum RES_ENUM /* uint32_t */ {
      RES_B_0x0 = 0,  //!< 12-bit
      RES_B_0x1 = 1,  //!< 10-bit
      RES_B_0x2 = 2,  //!< 8-bit
      RES_B_0x3 = 3,  //!< 6-bit
    };
    enum ALIGN_ENUM /* uint32_t */ {
      ALIGN_B_0x0 = 0,  //!< Right alignment
      ALIGN_B_0x1 = 1,  //!< Left alignment
    };
    enum EXTSEL0_ENUM /* uint32_t */ {
      EXTSEL0_B_0x0 = 0,  //!< Event 0
      EXTSEL0_B_0x1 = 1,  //!< Event 1
    };
    enum EXTSEL1_ENUM /* uint32_t */ {
      EXTSEL1_B_0x0 = 0,  //!< Event 0
      EXTSEL1_B_0x1 = 1,  //!< Event 1
    };
    enum EXTSEL2_ENUM /* uint32_t */ {
      EXTSEL2_B_0x0 = 0,  //!< Event 0
      EXTSEL2_B_0x1 = 1,  //!< Event 1
    };
    enum EXTSEL3_ENUM /* uint32_t */ {
      EXTSEL3_B_0x0 = 0,  //!< Event 0
      EXTSEL3_B_0x1 = 1,  //!< Event 1
    };
    enum EXTEN_ENUM /* uint32_t */ {
      EXTEN_B_0x0 = 0,  //!< Hardware trigger detection disabled (conversions can be launched by software)
      EXTEN_B_0x1 = 1,  //!< Hardware trigger detection on the rising edge
      EXTEN_B_0x2 = 2,  //!< Hardware trigger detection on the falling edge
      EXTEN_B_0x3 = 3,  //!< Hardware trigger detection on both the rising and falling edges
    };
    enum OVRMOD_ENUM /* uint32_t */ {
      OVRMOD_B_0x0 = 0,  //!< ADC_DR register is preserved with the old data when an overrun is detected.
      OVRMOD_B_0x1 = 1,  //!< ADC_DR register is overwritten with the last conversion result when an overrun is detected.
    };
    enum CONT_ENUM /* uint32_t */ {
      CONT_B_0x0 = 0,  //!< Single conversion mode
      CONT_B_0x1 = 1,  //!< Continuous conversion mode
    };
    enum AUTDLY_ENUM /* uint32_t */ {
      AUTDLY_B_0x0 = 0,  //!< Auto-delayed conversion mode off
      AUTDLY_B_0x1 = 1,  //!< Auto-delayed conversion mode on
    };
    enum DISCEN_ENUM /* uint32_t */ {
      DISCEN_B_0x0 = 0,  //!< Discontinuous mode for regular channels disabled
      DISCEN_B_0x1 = 1,  //!< Discontinuous mode for regular channels enabled
    };
    enum DISCNUM_ENUM /* uint32_t */ {
      DISCNUM_B_0x0 = 0,  //!< 1 channel
      DISCNUM_B_0x1 = 1,  //!< 2 channels
      DISCNUM_B_0x7 = 7,  //!< 8 channels
    };
    enum JDISCEN_ENUM /* uint32_t */ {
      JDISCEN_B_0x0 = 0,  //!< Discontinuous mode on injected channels disabled
      JDISCEN_B_0x1 = 1,  //!< Discontinuous mode on injected channels enabled
    };
    enum JQM_ENUM /* uint32_t */ {
      JQM_B_0x0 = 0,  //!< JSQR mode 0: The Queue is never empty and maintains the last written configuration into JSQR.
      JQM_B_0x1 = 1,  //!< JSQR mode 1: The Queue can be empty and when this occurs, the software and hardware triggers of the injected sequence are both internally disabled just after the completion of the last valid injected sequence.
    };
    enum AWD1SGL_ENUM /* uint32_t */ {
      AWD1SGL_B_0x0 = 0,  //!< Analog watchdog 1 enabled on all channels
      AWD1SGL_B_0x1 = 1,  //!< Analog watchdog 1 enabled on a single channel
    };
    enum AWD1EN_ENUM /* uint32_t */ {
      AWD1EN_B_0x0 = 0,  //!< Analog watchdog 1 disabled on regular channels
      AWD1EN_B_0x1 = 1,  //!< Analog watchdog 1 enabled on regular channels
    };
    enum JAWD1EN_ENUM /* uint32_t */ {
      JAWD1EN_B_0x0 = 0,  //!< Analog watchdog 1 disabled on injected channels
      JAWD1EN_B_0x1 = 1,  //!< Analog watchdog 1 enabled on injected channels
    };
    enum JAUTO_ENUM /* uint32_t */ {
      JAUTO_B_0x0 = 0,  //!< Automatic injected group conversion disabled
      JAUTO_B_0x1 = 1,  //!< Automatic injected group conversion enabled
    };
    enum AWD1CH_ENUM /* uint32_t */ {
      AWD1CH_B_0x0 = 0,    //!< ADC analog input channel 0 monitored by AWD1 (available on ADC1 only)
      AWD1CH_B_0x1 = 1,    //!< ADC analog input channel 1 monitored by AWD1
      AWD1CH_B_0x12 = 18,  //!< ADC analog input channel 18 monitored by AWD1
    };
    enum JQDIS_ENUM /* uint32_t */ {
      JQDIS_B_0x0 = 0,  //!< Injected Queue enabled
      JQDIS_B_0x1 = 1,  //!< Injected Queue disabled
    };
    struct {
      __IO DMAEN_ENUM     DMAEN    :  1; //!<[00] Direct memory access enableThis bit is set and cleared by software to enable the generation of DMA requests. This allows to use the DMA to manage automatically the converted data. For more details, refer to Section : Managing conversions using the DMA.Note: The software is allowed to write this bit only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).Note: In dual-ADC modes, this bit is not relevant and replaced by control bits MDMA[1:0] of the ADCx_CCR register.
      __IO DMACFG_ENUM    DMACFG   :  1; //!<[01] Direct memory access configurationThis bit is set and cleared by software to select between two DMA modes of operation and is effective only when DMAEN = 1.For more details, refer to Section : Managing conversions using the DMANote: The software is allowed to write this bit only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).Note: In dual-ADC modes, this bit is not relevant and replaced by control bit DMACFG of the ADCx_CCR register.
      __IO DFSDMCFG_ENUM  DFSDMCFG :  1; //!<[02] DFSDM mode configuration This bit is set and cleared by software to enable the DFSDM mode. It is effective only whenDMAEN = 0.Note: To make sure no conversion is ongoing, the software is allowed to write this bit only when ADSTART= 0 and JADSTART= 0.
      __IO RES_ENUM       RES      :  2; //!<[03] Data resolutionThese bits are written by software to select the resolution of the conversion.Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).
      __IO ALIGN_ENUM     ALIGN    :  1; //!<[05] Data alignmentThis bit is set and cleared by software to select right or left alignment. Refer to Section : Data register, data alignment and offset (ADC_DR, OFFSETy, OFFSETy_CH, ALIGN)Note: The software is allowed to write this bit only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).
      __IO EXTSEL0_ENUM   EXTSEL0  :  1; //!<[06] External trigger selection for regular groupThese bits select the external event used to trigger the start of conversion of a regular group:...Note: The software is allowed to write these bits only when ADSTART = 0 (which ensures that no regular conversion is ongoing).
      __IO EXTSEL1_ENUM   EXTSEL1  :  1; //!<[07] External trigger selection for regular groupThese bits select the external event used to trigger the start of conversion of a regular group:...Note: The software is allowed to write these bits only when ADSTART = 0 (which ensures that no regular conversion is ongoing).
      __IO EXTSEL2_ENUM   EXTSEL2  :  1; //!<[08] External trigger selection for regular groupThese bits select the external event used to trigger the start of conversion of a regular group:...Note: The software is allowed to write these bits only when ADSTART = 0 (which ensures that no regular conversion is ongoing).
      __IO EXTSEL3_ENUM   EXTSEL3  :  1; //!<[09] External trigger selection for regular groupThese bits select the external event used to trigger the start of conversion of a regular group:...Note: The software is allowed to write these bits only when ADSTART = 0 (which ensures that no regular conversion is ongoing).
      __IO EXTEN_ENUM     EXTEN    :  2; //!<[10] External trigger enable and polarity selection for regular channelsThese bits are set and cleared by software to select the external trigger polarity and enable the trigger of a regular group.Note: The software is allowed to write these bits only when ADSTART = 0 (which ensures that no regular conversion is ongoing).
      __IO OVRMOD_ENUM    OVRMOD   :  1; //!<[12] Overrun modeThis bit is set and cleared by software and configure the way data overrun is managed.Note: The software is allowed to write this bit only when ADSTART = 0 (which ensures that no regular conversion is ongoing).
      __IO CONT_ENUM      CONT     :  1; //!<[13] Single / continuous conversion mode for regular conversionsThis bit is set and cleared by software. If it is set, regular conversion takes place continuously until it is cleared.Note: It is not possible to have both discontinuous mode and continuous mode enabled: it is forbidden to set both DISCEN = 1 and CONT = 1.Note: The software is allowed to write this bit only when ADSTART = 0 (which ensures that no regular conversion is ongoing).Note: When dual mode is enabled (DUAL bits in ADCx_CCR register are not equal to zero), the bit CONT of the slave ADC is no more writable and its content is equal to the bit CONT of the master ADC.
      __IO AUTDLY_ENUM    AUTDLY   :  1; //!<[14] Delayed conversion modeThis bit is set and cleared by software to enable/disable the Auto Delayed Conversion mode.Note: The software is allowed to write this bit only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).Note: When dual mode is enabled (DUAL bits in ADCx_CCR register are not equal to zero), the bit AUTDLY of the slave ADC is no more writable and its content is equal to the bit AUTDLY of the master ADC.
           ONE_BIT        UNUSED0  :  1; //!<[15] 
      __IO DISCEN_ENUM    DISCEN   :  1; //!<[16] Discontinuous mode for regular channelsThis bit is set and cleared by software to enable/disable Discontinuous mode for regular channels.Note: It is not possible to have both discontinuous mode and continuous mode enabled: it is forbidden to set both DISCEN = 1 and CONT = 1.Note: It is not possible to use both auto-injected mode and discontinuous mode simultaneously: the bits DISCEN and JDISCEN must be kept cleared by software when JAUTO is set. Note: The software is allowed to write this bit only when ADSTART = 0 (which ensures that no regular conversion is ongoing).Note: When dual mode is enabled (DUAL bits in ADCx_CCR register are not equal to zero), the bit DISCEN of the slave ADC is no more writable and its content is equal to the bit DISCEN of the master ADC.
      __IO DISCNUM_ENUM   DISCNUM  :  3; //!<[17] Discontinuous mode channel countThese bits are written by software to define the number of regular channels to be converted in discontinuous mode, after receiving an external trigger....Note: The software is allowed to write these bits only when ADSTART = 0 (which ensures that no regular conversion is ongoing).Note: When dual mode is enabled (DUAL bits in ADCx_CCR register are not equal to zero), the bits DISCNUM[2:0] of the slave ADC are no more writable and their content is equal to the bits DISCNUM[2:0] of the master ADC.
      __IO JDISCEN_ENUM   JDISCEN  :  1; //!<[20] Discontinuous mode on injected channelsThis bit is set and cleared by software to enable/disable discontinuous mode on the injected channels of a group.Note: The software is allowed to write this bit only when JADSTART = 0 (which ensures that no injected conversion is ongoing).Note: It is not possible to use both auto-injected mode and discontinuous mode simultaneously: the bits DISCEN and JDISCEN must be kept cleared by software when JAUTO is set.Note: When dual mode is enabled (bits DUAL of ADCx_CCR register are not equal to zero), the bit JDISCEN of the slave ADC is no more writable and its content is equal to the bit JDISCEN of the master ADC.
      __IO JQM_ENUM       JQM      :  1; //!<[21] JSQR queue modeThis bit is set and cleared by software.It defines how an empty Queue is managed.Refer to Section 16.4.21: Queue of context for injected conversions for more information.Note: The software is allowed to write this bit only when JADSTART = 0 (which ensures that no injected conversion is ongoing).Note: When dual mode is enabled (DUAL bits in ADCx_CCR register are not equal to zero), the bit JQM of the slave ADC is no more writable and its content is equal to the bit JQM of the master ADC.
      __IO AWD1SGL_ENUM   AWD1SGL  :  1; //!<[22] Enable the watchdog 1 on a single channel or on all channelsThis bit is set and cleared by software to enable the analog watchdog on the channel identified by the AWD1CH[4:0] bits or on all the channelsNote: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).
      __IO AWD1EN_ENUM    AWD1EN   :  1; //!<[23] Analog watchdog 1 enable on regular channelsThis bit is set and cleared by softwareNote: The software is allowed to write this bit only when ADSTART = 0 (which ensures that no regular conversion is ongoing).
      __IO JAWD1EN_ENUM   JAWD1EN  :  1; //!<[24] Analog watchdog 1 enable on injected channelsThis bit is set and cleared by softwareNote: The software is allowed to write this bit only when JADSTART = 0 (which ensures that no injected conversion is ongoing).
      __IO JAUTO_ENUM     JAUTO    :  1; //!<[25] Automatic injected group conversionThis bit is set and cleared by software to enable/disable automatic injected group conversion after regular group conversion.Note: The software is allowed to write this bit only when ADSTART = 0 and JADSTART = 0 (which ensures that no regular nor injected conversion is ongoing).Note: When dual mode is enabled (DUAL bits in ADCx_CCR register are not equal to zero), the bit JAUTO of the slave ADC is no more writable and its content is equal to the bit JAUTO of the master ADC.
      __IO AWD1CH_ENUM    AWD1CH   :  5; //!<[26] Analog watchdog 1 channel selectionThese bits are set and cleared by software. They select the input channel to be guarded by the analog watchdog......others: reserved, must not be usedNote: Some channels are not connected physically. Keep the corresponding AWD1CH[4:0] setting to the reset value.Note: The channel selected by AWD1CH must be also selected into the SQRi or JSQRi registers.Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).
      __IO JQDIS_ENUM     JQDIS    :  1; //!<[31] Injected Queue disableThese bits are set and cleared by software to disable the Injected Queue mechanism :Note: The software is allowed to write this bit only when ADSTART = 0 and JADSTART = 0 (which ensures that no regular nor injected conversion is ongoing).Note: A set or reset of JQDIS bit causes the injected queue to be flushed and the JSQR register is cleared.
    } B;
    __IO uint32_t  R;
    explicit ADC_CFGR_DEF () noexcept { R = 0x80000000u; }
    template<typename F> void setbit (F f) volatile {
      ADC_CFGR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ADC_CFGR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ADC_CFGR2_DEF   {  //!< ADC configuration register 2
    enum ROVSE_ENUM /* uint32_t */ {
      ROVSE_B_0x0 = 0,  //!< Regular Oversampling disabled
      ROVSE_B_0x1 = 1,  //!< Regular Oversampling enabled
    };
    enum JOVSE_ENUM /* uint32_t */ {
      JOVSE_B_0x0 = 0,  //!< Injected Oversampling disabled
      JOVSE_B_0x1 = 1,  //!< Injected Oversampling enabled
    };
    enum OVSR_ENUM /* uint32_t */ {
      OVSR_B_0x0 = 0,  //!< 2x
      OVSR_B_0x1 = 1,  //!< 4x
      OVSR_B_0x2 = 2,  //!< 8x
      OVSR_B_0x3 = 3,  //!< 16x
      OVSR_B_0x4 = 4,  //!< 32x
      OVSR_B_0x5 = 5,  //!< 64x
      OVSR_B_0x6 = 6,  //!< 128x
      OVSR_B_0x7 = 7,  //!< 256x
    };
    enum OVSS_ENUM /* uint32_t */ {
      OVSS_B_0x0 = 0,  //!< No shift
      OVSS_B_0x1 = 1,  //!< Shift 1-bit
      OVSS_B_0x2 = 2,  //!< Shift 2-bits
      OVSS_B_0x3 = 3,  //!< Shift 3-bits
      OVSS_B_0x4 = 4,  //!< Shift 4-bits
      OVSS_B_0x5 = 5,  //!< Shift 5-bits
      OVSS_B_0x6 = 6,  //!< Shift 6-bits
      OVSS_B_0x7 = 7,  //!< Shift 7-bits
      OVSS_B_0x8 = 8,  //!< Shift 8-bits
    };
    enum TROVS_ENUM /* uint32_t */ {
      TROVS_B_0x0 = 0,  //!< All oversampled conversions for a channel are done consecutively following a trigger
      TROVS_B_0x1 = 1,  //!< Each oversampled conversion for a channel needs a new trigger
    };
    enum ROVSM_ENUM /* uint32_t */ {
      ROVSM_B_0x0 = 0,  //!< Continued mode: When injected conversions are triggered, the oversampling is temporary stopped and continued after the injection sequence (oversampling buffer is maintained during injected sequence)
      ROVSM_B_0x1 = 1,  //!< Resumed mode: When injected conversions are triggered, the current oversampling is aborted and resumed from start after the injection sequence (oversampling buffer is zeroed by injected sequence start)
    };
    struct {
      __IO ROVSE_ENUM  ROVSE :  1; //!<[00] Regular Oversampling EnableThis bit is set and cleared by software to enable regular oversampling.Note: The software is allowed to write this bit only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing)
      __IO JOVSE_ENUM  JOVSE :  1; //!<[01] Injected Oversampling EnableThis bit is set and cleared by software to enable injected oversampling.Note: The software is allowed to write this bit only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing)
      __IO OVSR_ENUM   OVSR  :  3; //!<[02] Oversampling ratioThis bitfield is set and cleared by software to define the oversampling ratio.Note: The software is allowed to write these bits only when ADSTART = 0 (which ensures that no conversion is ongoing).
      __IO OVSS_ENUM   OVSS  :  4; //!<[05] Oversampling shiftThis bitfield is set and cleared by software to define the right shifting applied to the raw oversampling result.Other codes reservedNote: The software is allowed to write these bits only when ADSTART = 0 (which ensures that no conversion is ongoing).
      __IO TROVS_ENUM  TROVS :  1; //!<[09] Triggered Regular OversamplingThis bit is set and cleared by software to enable triggered oversamplingNote: The software is allowed to write this bit only when ADSTART = 0 (which ensures that no conversion is ongoing).
      __IO ROVSM_ENUM  ROVSM :  1; //!<[10] Regular Oversampling modeThis bit is set and cleared by software to select the regular oversampling mode.Note: The software is allowed to write this bit only when ADSTART = 0 (which ensures that no conversion is ongoing).
    } B;
    __IO uint32_t  R;
    explicit ADC_CFGR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ADC_CFGR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ADC_CFGR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ADC_SMPR1_DEF   {  //!< ADC sample time register 1
    enum SMP0_ENUM /* uint32_t */ {
      SMP0_B_0x0 = 0,  //!< 2.5 ADC clock cycles
      SMP0_B_0x1 = 1,  //!< 6.5 ADC clock cycles
      SMP0_B_0x2 = 2,  //!< 12.5 ADC clock cycles
      SMP0_B_0x3 = 3,  //!< 24.5 ADC clock cycles
      SMP0_B_0x4 = 4,  //!< 47.5 ADC clock cycles
      SMP0_B_0x5 = 5,  //!< 92.5 ADC clock cycles
      SMP0_B_0x6 = 6,  //!< 247.5 ADC clock cycles
      SMP0_B_0x7 = 7,  //!< 640.5 ADC clock cycles
    };
    enum SMP1_ENUM /* uint32_t */ {
      SMP1_B_0x0 = 0,  //!< 2.5 ADC clock cycles
      SMP1_B_0x1 = 1,  //!< 6.5 ADC clock cycles
      SMP1_B_0x2 = 2,  //!< 12.5 ADC clock cycles
      SMP1_B_0x3 = 3,  //!< 24.5 ADC clock cycles
      SMP1_B_0x4 = 4,  //!< 47.5 ADC clock cycles
      SMP1_B_0x5 = 5,  //!< 92.5 ADC clock cycles
      SMP1_B_0x6 = 6,  //!< 247.5 ADC clock cycles
      SMP1_B_0x7 = 7,  //!< 640.5 ADC clock cycles
    };
    enum SMP2_ENUM /* uint32_t */ {
      SMP2_B_0x0 = 0,  //!< 2.5 ADC clock cycles
      SMP2_B_0x1 = 1,  //!< 6.5 ADC clock cycles
      SMP2_B_0x2 = 2,  //!< 12.5 ADC clock cycles
      SMP2_B_0x3 = 3,  //!< 24.5 ADC clock cycles
      SMP2_B_0x4 = 4,  //!< 47.5 ADC clock cycles
      SMP2_B_0x5 = 5,  //!< 92.5 ADC clock cycles
      SMP2_B_0x6 = 6,  //!< 247.5 ADC clock cycles
      SMP2_B_0x7 = 7,  //!< 640.5 ADC clock cycles
    };
    enum SMP3_ENUM /* uint32_t */ {
      SMP3_B_0x0 = 0,  //!< 2.5 ADC clock cycles
      SMP3_B_0x1 = 1,  //!< 6.5 ADC clock cycles
      SMP3_B_0x2 = 2,  //!< 12.5 ADC clock cycles
      SMP3_B_0x3 = 3,  //!< 24.5 ADC clock cycles
      SMP3_B_0x4 = 4,  //!< 47.5 ADC clock cycles
      SMP3_B_0x5 = 5,  //!< 92.5 ADC clock cycles
      SMP3_B_0x6 = 6,  //!< 247.5 ADC clock cycles
      SMP3_B_0x7 = 7,  //!< 640.5 ADC clock cycles
    };
    enum SMP4_ENUM /* uint32_t */ {
      SMP4_B_0x0 = 0,  //!< 2.5 ADC clock cycles
      SMP4_B_0x1 = 1,  //!< 6.5 ADC clock cycles
      SMP4_B_0x2 = 2,  //!< 12.5 ADC clock cycles
      SMP4_B_0x3 = 3,  //!< 24.5 ADC clock cycles
      SMP4_B_0x4 = 4,  //!< 47.5 ADC clock cycles
      SMP4_B_0x5 = 5,  //!< 92.5 ADC clock cycles
      SMP4_B_0x6 = 6,  //!< 247.5 ADC clock cycles
      SMP4_B_0x7 = 7,  //!< 640.5 ADC clock cycles
    };
    enum SMP5_ENUM /* uint32_t */ {
      SMP5_B_0x0 = 0,  //!< 2.5 ADC clock cycles
      SMP5_B_0x1 = 1,  //!< 6.5 ADC clock cycles
      SMP5_B_0x2 = 2,  //!< 12.5 ADC clock cycles
      SMP5_B_0x3 = 3,  //!< 24.5 ADC clock cycles
      SMP5_B_0x4 = 4,  //!< 47.5 ADC clock cycles
      SMP5_B_0x5 = 5,  //!< 92.5 ADC clock cycles
      SMP5_B_0x6 = 6,  //!< 247.5 ADC clock cycles
      SMP5_B_0x7 = 7,  //!< 640.5 ADC clock cycles
    };
    enum SMP6_ENUM /* uint32_t */ {
      SMP6_B_0x0 = 0,  //!< 2.5 ADC clock cycles
      SMP6_B_0x1 = 1,  //!< 6.5 ADC clock cycles
      SMP6_B_0x2 = 2,  //!< 12.5 ADC clock cycles
      SMP6_B_0x3 = 3,  //!< 24.5 ADC clock cycles
      SMP6_B_0x4 = 4,  //!< 47.5 ADC clock cycles
      SMP6_B_0x5 = 5,  //!< 92.5 ADC clock cycles
      SMP6_B_0x6 = 6,  //!< 247.5 ADC clock cycles
      SMP6_B_0x7 = 7,  //!< 640.5 ADC clock cycles
    };
    enum SMP7_ENUM /* uint32_t */ {
      SMP7_B_0x0 = 0,  //!< 2.5 ADC clock cycles
      SMP7_B_0x1 = 1,  //!< 6.5 ADC clock cycles
      SMP7_B_0x2 = 2,  //!< 12.5 ADC clock cycles
      SMP7_B_0x3 = 3,  //!< 24.5 ADC clock cycles
      SMP7_B_0x4 = 4,  //!< 47.5 ADC clock cycles
      SMP7_B_0x5 = 5,  //!< 92.5 ADC clock cycles
      SMP7_B_0x6 = 6,  //!< 247.5 ADC clock cycles
      SMP7_B_0x7 = 7,  //!< 640.5 ADC clock cycles
    };
    enum SMP8_ENUM /* uint32_t */ {
      SMP8_B_0x0 = 0,  //!< 2.5 ADC clock cycles
      SMP8_B_0x1 = 1,  //!< 6.5 ADC clock cycles
      SMP8_B_0x2 = 2,  //!< 12.5 ADC clock cycles
      SMP8_B_0x3 = 3,  //!< 24.5 ADC clock cycles
      SMP8_B_0x4 = 4,  //!< 47.5 ADC clock cycles
      SMP8_B_0x5 = 5,  //!< 92.5 ADC clock cycles
      SMP8_B_0x6 = 6,  //!< 247.5 ADC clock cycles
      SMP8_B_0x7 = 7,  //!< 640.5 ADC clock cycles
    };
    enum SMP9_ENUM /* uint32_t */ {
      SMP9_B_0x0 = 0,  //!< 2.5 ADC clock cycles
      SMP9_B_0x1 = 1,  //!< 6.5 ADC clock cycles
      SMP9_B_0x2 = 2,  //!< 12.5 ADC clock cycles
      SMP9_B_0x3 = 3,  //!< 24.5 ADC clock cycles
      SMP9_B_0x4 = 4,  //!< 47.5 ADC clock cycles
      SMP9_B_0x5 = 5,  //!< 92.5 ADC clock cycles
      SMP9_B_0x6 = 6,  //!< 247.5 ADC clock cycles
      SMP9_B_0x7 = 7,  //!< 640.5 ADC clock cycles
    };
    enum SMPPLUS_ENUM /* uint32_t */ {
      SMPPLUS_B_0x0 = 0,  //!< The sampling time remains set to 2.5 ADC clock cycles remains
      SMPPLUS_B_0x1 = 1,  //!< 2.5 ADC clock cycle sampling time becomes 3.5 ADC clock cycles for the ADC_SMPR1 and ADC_SMPR2 registers.
    };
    struct {
      __IO SMP0_ENUM     SMP0    :  3; //!<[00] Channel x sampling time selection (x = 9 to 0)These bits are written by software to select the sampling time individually for each channel. During sample cycles, the channel selection bits must remain unchanged.Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).Note: Some channels are not connected physically. Keep the corresponding SMPx[2:0] setting to the reset value.
      __IO SMP1_ENUM     SMP1    :  3; //!<[03] Channel x sampling time selection (x = 9 to 0)These bits are written by software to select the sampling time individually for each channel. During sample cycles, the channel selection bits must remain unchanged.Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).Note: Some channels are not connected physically. Keep the corresponding SMPx[2:0] setting to the reset value.
      __IO SMP2_ENUM     SMP2    :  3; //!<[06] Channel x sampling time selection (x = 9 to 0)These bits are written by software to select the sampling time individually for each channel. During sample cycles, the channel selection bits must remain unchanged.Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).Note: Some channels are not connected physically. Keep the corresponding SMPx[2:0] setting to the reset value.
      __IO SMP3_ENUM     SMP3    :  3; //!<[09] Channel x sampling time selection (x = 9 to 0)These bits are written by software to select the sampling time individually for each channel. During sample cycles, the channel selection bits must remain unchanged.Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).Note: Some channels are not connected physically. Keep the corresponding SMPx[2:0] setting to the reset value.
      __IO SMP4_ENUM     SMP4    :  3; //!<[12] Channel x sampling time selection (x = 9 to 0)These bits are written by software to select the sampling time individually for each channel. During sample cycles, the channel selection bits must remain unchanged.Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).Note: Some channels are not connected physically. Keep the corresponding SMPx[2:0] setting to the reset value.
      __IO SMP5_ENUM     SMP5    :  3; //!<[15] Channel x sampling time selection (x = 9 to 0)These bits are written by software to select the sampling time individually for each channel. During sample cycles, the channel selection bits must remain unchanged.Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).Note: Some channels are not connected physically. Keep the corresponding SMPx[2:0] setting to the reset value.
      __IO SMP6_ENUM     SMP6    :  3; //!<[18] Channel x sampling time selection (x = 9 to 0)These bits are written by software to select the sampling time individually for each channel. During sample cycles, the channel selection bits must remain unchanged.Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).Note: Some channels are not connected physically. Keep the corresponding SMPx[2:0] setting to the reset value.
      __IO SMP7_ENUM     SMP7    :  3; //!<[21] Channel x sampling time selection (x = 9 to 0)These bits are written by software to select the sampling time individually for each channel. During sample cycles, the channel selection bits must remain unchanged.Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).Note: Some channels are not connected physically. Keep the corresponding SMPx[2:0] setting to the reset value.
      __IO SMP8_ENUM     SMP8    :  3; //!<[24] Channel x sampling time selection (x = 9 to 0)These bits are written by software to select the sampling time individually for each channel. During sample cycles, the channel selection bits must remain unchanged.Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).Note: Some channels are not connected physically. Keep the corresponding SMPx[2:0] setting to the reset value.
      __IO SMP9_ENUM     SMP9    :  3; //!<[27] Channel x sampling time selection (x = 9 to 0)These bits are written by software to select the sampling time individually for each channel. During sample cycles, the channel selection bits must remain unchanged.Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).Note: Some channels are not connected physically. Keep the corresponding SMPx[2:0] setting to the reset value.
           ONE_BIT       UNUSED0 :  1; //!<[30] 
      __IO SMPPLUS_ENUM  SMPPLUS :  1; //!<[31] Addition of one clock cycle to the sampling timeTo make sure no conversion is ongoing, the software is allowed to write this bit only when ADSTART= 0 and JADSTART= 0.
    } B;
    __IO uint32_t  R;
    explicit ADC_SMPR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ADC_SMPR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ADC_SMPR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ADC_SMPR2_DEF   {  //!< ADC sample time register 2
    enum SMP10_ENUM /* uint32_t */ {
      SMP10_B_0x0 = 0,  //!< 2.5 ADC clock cycles
      SMP10_B_0x1 = 1,  //!< 6.5 ADC clock cycles
      SMP10_B_0x2 = 2,  //!< 12.5 ADC clock cycles
      SMP10_B_0x3 = 3,  //!< 24.5 ADC clock cycles
      SMP10_B_0x4 = 4,  //!< 47.5 ADC clock cycles
      SMP10_B_0x5 = 5,  //!< 92.5 ADC clock cycles
      SMP10_B_0x6 = 6,  //!< 247.5 ADC clock cycles
      SMP10_B_0x7 = 7,  //!< 640.5 ADC clock cycles
    };
    enum SMP11_ENUM /* uint32_t */ {
      SMP11_B_0x0 = 0,  //!< 2.5 ADC clock cycles
      SMP11_B_0x1 = 1,  //!< 6.5 ADC clock cycles
      SMP11_B_0x2 = 2,  //!< 12.5 ADC clock cycles
      SMP11_B_0x3 = 3,  //!< 24.5 ADC clock cycles
      SMP11_B_0x4 = 4,  //!< 47.5 ADC clock cycles
      SMP11_B_0x5 = 5,  //!< 92.5 ADC clock cycles
      SMP11_B_0x6 = 6,  //!< 247.5 ADC clock cycles
      SMP11_B_0x7 = 7,  //!< 640.5 ADC clock cycles
    };
    enum SMP12_ENUM /* uint32_t */ {
      SMP12_B_0x0 = 0,  //!< 2.5 ADC clock cycles
      SMP12_B_0x1 = 1,  //!< 6.5 ADC clock cycles
      SMP12_B_0x2 = 2,  //!< 12.5 ADC clock cycles
      SMP12_B_0x3 = 3,  //!< 24.5 ADC clock cycles
      SMP12_B_0x4 = 4,  //!< 47.5 ADC clock cycles
      SMP12_B_0x5 = 5,  //!< 92.5 ADC clock cycles
      SMP12_B_0x6 = 6,  //!< 247.5 ADC clock cycles
      SMP12_B_0x7 = 7,  //!< 640.5 ADC clock cycles
    };
    enum SMP13_ENUM /* uint32_t */ {
      SMP13_B_0x0 = 0,  //!< 2.5 ADC clock cycles
      SMP13_B_0x1 = 1,  //!< 6.5 ADC clock cycles
      SMP13_B_0x2 = 2,  //!< 12.5 ADC clock cycles
      SMP13_B_0x3 = 3,  //!< 24.5 ADC clock cycles
      SMP13_B_0x4 = 4,  //!< 47.5 ADC clock cycles
      SMP13_B_0x5 = 5,  //!< 92.5 ADC clock cycles
      SMP13_B_0x6 = 6,  //!< 247.5 ADC clock cycles
      SMP13_B_0x7 = 7,  //!< 640.5 ADC clock cycles
    };
    enum SMP14_ENUM /* uint32_t */ {
      SMP14_B_0x0 = 0,  //!< 2.5 ADC clock cycles
      SMP14_B_0x1 = 1,  //!< 6.5 ADC clock cycles
      SMP14_B_0x2 = 2,  //!< 12.5 ADC clock cycles
      SMP14_B_0x3 = 3,  //!< 24.5 ADC clock cycles
      SMP14_B_0x4 = 4,  //!< 47.5 ADC clock cycles
      SMP14_B_0x5 = 5,  //!< 92.5 ADC clock cycles
      SMP14_B_0x6 = 6,  //!< 247.5 ADC clock cycles
      SMP14_B_0x7 = 7,  //!< 640.5 ADC clock cycles
    };
    enum SMP15_ENUM /* uint32_t */ {
      SMP15_B_0x0 = 0,  //!< 2.5 ADC clock cycles
      SMP15_B_0x1 = 1,  //!< 6.5 ADC clock cycles
      SMP15_B_0x2 = 2,  //!< 12.5 ADC clock cycles
      SMP15_B_0x3 = 3,  //!< 24.5 ADC clock cycles
      SMP15_B_0x4 = 4,  //!< 47.5 ADC clock cycles
      SMP15_B_0x5 = 5,  //!< 92.5 ADC clock cycles
      SMP15_B_0x6 = 6,  //!< 247.5 ADC clock cycles
      SMP15_B_0x7 = 7,  //!< 640.5 ADC clock cycles
    };
    enum SMP16_ENUM /* uint32_t */ {
      SMP16_B_0x0 = 0,  //!< 2.5 ADC clock cycles
      SMP16_B_0x1 = 1,  //!< 6.5 ADC clock cycles
      SMP16_B_0x2 = 2,  //!< 12.5 ADC clock cycles
      SMP16_B_0x3 = 3,  //!< 24.5 ADC clock cycles
      SMP16_B_0x4 = 4,  //!< 47.5 ADC clock cycles
      SMP16_B_0x5 = 5,  //!< 92.5 ADC clock cycles
      SMP16_B_0x6 = 6,  //!< 247.5 ADC clock cycles
      SMP16_B_0x7 = 7,  //!< 640.5 ADC clock cycles
    };
    enum SMP17_ENUM /* uint32_t */ {
      SMP17_B_0x0 = 0,  //!< 2.5 ADC clock cycles
      SMP17_B_0x1 = 1,  //!< 6.5 ADC clock cycles
      SMP17_B_0x2 = 2,  //!< 12.5 ADC clock cycles
      SMP17_B_0x3 = 3,  //!< 24.5 ADC clock cycles
      SMP17_B_0x4 = 4,  //!< 47.5 ADC clock cycles
      SMP17_B_0x5 = 5,  //!< 92.5 ADC clock cycles
      SMP17_B_0x6 = 6,  //!< 247.5 ADC clock cycles
      SMP17_B_0x7 = 7,  //!< 640.5 ADC clock cycles
    };
    enum SMP18_ENUM /* uint32_t */ {
      SMP18_B_0x0 = 0,  //!< 2.5 ADC clock cycles
      SMP18_B_0x1 = 1,  //!< 6.5 ADC clock cycles
      SMP18_B_0x2 = 2,  //!< 12.5 ADC clock cycles
      SMP18_B_0x3 = 3,  //!< 24.5 ADC clock cycles
      SMP18_B_0x4 = 4,  //!< 47.5 ADC clock cycles
      SMP18_B_0x5 = 5,  //!< 92.5 ADC clock cycles
      SMP18_B_0x6 = 6,  //!< 247.5 ADC clock cycles
      SMP18_B_0x7 = 7,  //!< 640.5 ADC clock cycles
    };
    struct {
      __IO SMP10_ENUM  SMP10 :  3; //!<[00] Channel x sampling time selection (x = 18 to 10)These bits are written by software to select the sampling time individually for each channel. During sampling cycles, the channel selection bits must remain unchanged.Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).Note: Some channels are not connected physically. Keep the corresponding SMPx[2:0] setting to the reset value.
      __IO SMP11_ENUM  SMP11 :  3; //!<[03] Channel x sampling time selection (x = 18 to 10)These bits are written by software to select the sampling time individually for each channel. During sampling cycles, the channel selection bits must remain unchanged.Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).Note: Some channels are not connected physically. Keep the corresponding SMPx[2:0] setting to the reset value.
      __IO SMP12_ENUM  SMP12 :  3; //!<[06] Channel x sampling time selection (x = 18 to 10)These bits are written by software to select the sampling time individually for each channel. During sampling cycles, the channel selection bits must remain unchanged.Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).Note: Some channels are not connected physically. Keep the corresponding SMPx[2:0] setting to the reset value.
      __IO SMP13_ENUM  SMP13 :  3; //!<[09] Channel x sampling time selection (x = 18 to 10)These bits are written by software to select the sampling time individually for each channel. During sampling cycles, the channel selection bits must remain unchanged.Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).Note: Some channels are not connected physically. Keep the corresponding SMPx[2:0] setting to the reset value.
      __IO SMP14_ENUM  SMP14 :  3; //!<[12] Channel x sampling time selection (x = 18 to 10)These bits are written by software to select the sampling time individually for each channel. During sampling cycles, the channel selection bits must remain unchanged.Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).Note: Some channels are not connected physically. Keep the corresponding SMPx[2:0] setting to the reset value.
      __IO SMP15_ENUM  SMP15 :  3; //!<[15] Channel x sampling time selection (x = 18 to 10)These bits are written by software to select the sampling time individually for each channel. During sampling cycles, the channel selection bits must remain unchanged.Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).Note: Some channels are not connected physically. Keep the corresponding SMPx[2:0] setting to the reset value.
      __IO SMP16_ENUM  SMP16 :  3; //!<[18] Channel x sampling time selection (x = 18 to 10)These bits are written by software to select the sampling time individually for each channel. During sampling cycles, the channel selection bits must remain unchanged.Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).Note: Some channels are not connected physically. Keep the corresponding SMPx[2:0] setting to the reset value.
      __IO SMP17_ENUM  SMP17 :  3; //!<[21] Channel x sampling time selection (x = 18 to 10)These bits are written by software to select the sampling time individually for each channel. During sampling cycles, the channel selection bits must remain unchanged.Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).Note: Some channels are not connected physically. Keep the corresponding SMPx[2:0] setting to the reset value.
      __IO SMP18_ENUM  SMP18 :  3; //!<[24] Channel x sampling time selection (x = 18 to 10)These bits are written by software to select the sampling time individually for each channel. During sampling cycles, the channel selection bits must remain unchanged.Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).Note: Some channels are not connected physically. Keep the corresponding SMPx[2:0] setting to the reset value.
    } B;
    __IO uint32_t  R;
    explicit ADC_SMPR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ADC_SMPR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ADC_SMPR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ADC_TR1_DEF     {  //!< ADC watchdog threshold register 1
    struct {
      __IO uint32_t   LT1     : 12; //!<[00] Analog watchdog 1 lower thresholdThese bits are written by software to define the lower threshold for the analog watchdog 1.Refer to Section 16.4.28: Analog window watchdog (AWD1EN, JAWD1EN, AWD1SGL, AWD1CH, AWD2CH, AWD3CH, AWD_HTx, AWD_LTx, AWDx)Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).
           uint32_t   UNUSED0 :  4; //!<[12] 
      __IO uint32_t   HT1     : 12; //!<[16] Analog watchdog 1 higher thresholdThese bits are written by software to define the higher threshold for the analog watchdog 1. Refer to Section 16.4.28: Analog window watchdog (AWD1EN, JAWD1EN, AWD1SGL, AWD1CH, AWD2CH, AWD3CH, AWD_HTx, AWD_LTx, AWDx)Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).
    } B;
    __IO uint32_t  R;
    explicit ADC_TR1_DEF () noexcept { R = 0x0fff0000u; }
    template<typename F> void setbit (F f) volatile {
      ADC_TR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ADC_TR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ADC_TR2_DEF     {  //!< ADC watchdog threshold register 2
    struct {
      __IO uint32_t   LT2     :  8; //!<[00] Analog watchdog 2 lower thresholdThese bits are written by software to define the lower threshold for the analog watchdog 2.Refer to Section 16.4.28: Analog window watchdog (AWD1EN, JAWD1EN, AWD1SGL, AWD1CH, AWD2CH, AWD3CH, AWD_HTx, AWD_LTx, AWDx)Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).
           uint32_t   UNUSED0 :  8; //!<[08] 
      __IO uint32_t   HT2     :  8; //!<[16] Analog watchdog 2 higher thresholdThese bits are written by software to define the higher threshold for the analog watchdog 2. Refer to Section 16.4.28: Analog window watchdog (AWD1EN, JAWD1EN, AWD1SGL, AWD1CH, AWD2CH, AWD3CH, AWD_HTx, AWD_LTx, AWDx)Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).
    } B;
    __IO uint32_t  R;
    explicit ADC_TR2_DEF () noexcept { R = 0x00ff0000u; }
    template<typename F> void setbit (F f) volatile {
      ADC_TR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ADC_TR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ADC_TR3_DEF     {  //!< ADC watchdog threshold register 3
    struct {
      __IO uint32_t   LT3     :  8; //!<[00] Analog watchdog 3 lower thresholdThese bits are written by software to define the lower threshold for the analog watchdog 3.This watchdog compares the 8-bit of LT3 with the 8 MSB of the converted data.Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).
           uint32_t   UNUSED0 :  8; //!<[08] 
      __IO uint32_t   HT3     :  8; //!<[16] Analog watchdog 3 higher thresholdThese bits are written by software to define the higher threshold for the analog watchdog 3.Refer to Section 16.4.28: Analog window watchdog (AWD1EN, JAWD1EN, AWD1SGL, AWD1CH, AWD2CH, AWD3CH, AWD_HTx, AWD_LTx, AWDx)Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).
    } B;
    __IO uint32_t  R;
    explicit ADC_TR3_DEF () noexcept { R = 0x00ff0000u; }
    template<typename F> void setbit (F f) volatile {
      ADC_TR3_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ADC_TR3_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ADC_SQR1_DEF    {  //!< ADC regular sequence register 1
    enum L_ENUM /* uint32_t */ {
      L_B_0x0 = 0,   //!< 1 conversion
      L_B_0x1 = 1,   //!< 2 conversions
      L_B_0xF = 15,  //!< 16 conversions
    };
    struct {
      __IO L_ENUM     L       :  4; //!<[00] Regular channel sequence lengthThese bits are written by software to define the total number of conversions in the regular channel conversion sequence....Note: The software is allowed to write these bits only when ADSTART = 0 (which ensures that no regular conversion is ongoing).
           uint32_t   UNUSED0 :  2; //!<[04] 
      __IO uint32_t   SQ1     :  5; //!<[06] 1st conversion in regular sequenceThese bits are written by software with the channel number (0 to 18) assigned as the 1st in the regular conversion sequence.Note: The software is allowed to write these bits only when ADSTART = 0 (which ensures that no regular conversion is ongoing).
           ONE_BIT    UNUSED1 :  1; //!<[11] 
      __IO uint32_t   SQ2     :  5; //!<[12] 2nd conversion in regular sequenceThese bits are written by software with the channel number (0 to 18) assigned as the 2nd in the regular conversion sequence.Note: The software is allowed to write these bits only when ADSTART = 0 (which ensures that no regular conversion is ongoing).
           ONE_BIT    UNUSED2 :  1; //!<[17] 
      __IO uint32_t   SQ3     :  5; //!<[18] 3rd conversion in regular sequenceThese bits are written by software with the channel number (0 to 18) assigned as the 3rd in the regular conversion sequence.Note: The software is allowed to write these bits only when ADSTART = 0 (which ensures that no regular conversion is ongoing).
           ONE_BIT    UNUSED3 :  1; //!<[23] 
      __IO uint32_t   SQ4     :  5; //!<[24] 4th conversion in regular sequenceThese bits are written by software with the channel number (0 to 18) assigned as the 4th in the regular conversion sequence.Note: The software is allowed to write these bits only when ADSTART = 0 (which ensures that no regular conversion is ongoing).
    } B;
    __IO uint32_t  R;
    explicit ADC_SQR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ADC_SQR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ADC_SQR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ADC_SQR2_DEF    {  //!< ADC regular sequence register 2
    struct {
      __IO uint32_t   SQ5     :  5; //!<[00] 5th conversion in regular sequenceThese bits are written by software with the channel number (0 to 18) assigned as the 5th in the regular conversion sequence.Note: The software is allowed to write these bits only when ADSTART = 0 (which ensures that no regular conversion is ongoing).
           ONE_BIT    UNUSED0 :  1; //!<[05] 
      __IO uint32_t   SQ6     :  5; //!<[06] 6th conversion in regular sequenceThese bits are written by software with the channel number (0 to 18) assigned as the 6th in the regular conversion sequence.Note: The software is allowed to write these bits only when ADSTART = 0 (which ensures that no regular conversion is ongoing).
           ONE_BIT    UNUSED1 :  1; //!<[11] 
      __IO uint32_t   SQ7     :  5; //!<[12] 7th conversion in regular sequenceThese bits are written by software with the channel number (0 to 18) assigned as the 7th in the regular conversion sequence.Note: The software is allowed to write these bits only when ADSTART = 0 (which ensures that no regular conversion is ongoing).
           ONE_BIT    UNUSED2 :  1; //!<[17] 
      __IO uint32_t   SQ8     :  5; //!<[18] 8th conversion in regular sequenceThese bits are written by software with the channel number (0 to 18) assigned as the 8th in the regular conversion sequenceNote: The software is allowed to write these bits only when ADSTART = 0 (which ensures that no regular conversion is ongoing).
           ONE_BIT    UNUSED3 :  1; //!<[23] 
      __IO uint32_t   SQ9     :  5; //!<[24] 9th conversion in regular sequenceThese bits are written by software with the channel number (0 to 18) assigned as the 9th in the regular conversion sequence.Note: The software is allowed to write these bits only when ADSTART = 0 (which ensures that no regular conversion is ongoing).
    } B;
    __IO uint32_t  R;
    explicit ADC_SQR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ADC_SQR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ADC_SQR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ADC_SQR3_DEF    {  //!< ADC regular sequence register 3
    struct {
      __IO uint32_t   SQ10    :  5; //!<[00] 10th conversion in regular sequenceThese bits are written by software with the channel number (0 to 18) assigned as the 10th in the regular conversion sequence.Note: The software is allowed to write these bits only when ADSTART = 0 (which ensures that no regular conversion is ongoing).
           ONE_BIT    UNUSED0 :  1; //!<[05] 
      __IO uint32_t   SQ11    :  5; //!<[06] 11th conversion in regular sequenceThese bits are written by software with the channel number (0 to 18) assigned as the 11th in the regular conversion sequence.Note: The software is allowed to write these bits only when ADSTART = 0 (which ensures that no regular conversion is ongoing).
           ONE_BIT    UNUSED1 :  1; //!<[11] 
      __IO uint32_t   SQ12    :  5; //!<[12] 12th conversion in regular sequenceThese bits are written by software with the channel number (0 to 18) assigned as the 12th in the regular conversion sequence.Note: The software is allowed to write these bits only when ADSTART = 0 (which ensures that no regular conversion is ongoing).
           ONE_BIT    UNUSED2 :  1; //!<[17] 
      __IO uint32_t   SQ13    :  5; //!<[18] 13th conversion in regular sequenceThese bits are written by software with the channel number (0 to 18) assigned as the 13th in the regular conversion sequence.Note: The software is allowed to write these bits only when ADSTART = 0 (which ensures that no regular conversion is ongoing).
           ONE_BIT    UNUSED3 :  1; //!<[23] 
      __IO uint32_t   SQ14    :  5; //!<[24] 14th conversion in regular sequenceThese bits are written by software with the channel number (0 to 18) assigned as the 14th in the regular conversion sequence.Note: The software is allowed to write these bits only when ADSTART = 0 (which ensures that no regular conversion is ongoing).
    } B;
    __IO uint32_t  R;
    explicit ADC_SQR3_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ADC_SQR3_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ADC_SQR3_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ADC_SQR4_DEF    {  //!< ADC regular sequence register 4
    struct {
      __IO uint32_t   SQ15    :  5; //!<[00] 15th conversion in regular sequenceThese bits are written by software with the channel number (0 to 18) assigned as the 15th in the regular conversion sequence.Note: The software is allowed to write these bits only when ADSTART = 0 (which ensures that no regular conversion is ongoing).
           ONE_BIT    UNUSED0 :  1; //!<[05] 
      __IO uint32_t   SQ16    :  5; //!<[06] 16th conversion in regular sequenceThese bits are written by software with the channel number (0 to 18) assigned as the 16th in the regular conversion sequence.Note: The software is allowed to write these bits only when ADSTART = 0 (which ensures that no regular conversion is ongoing).
    } B;
    __IO uint32_t  R;
    explicit ADC_SQR4_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ADC_SQR4_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ADC_SQR4_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ADC_DR_DEF      {  //!< ADC regular data register
    struct {
      __I  uint32_t   RDATA : 16; //!<[00] Regular data convertedThese bits are read-only. They contain the conversion result from the last converted regular channel. The data are left- or right-aligned as described in Section 16.4.26: Data management.
    } B;
    __IO uint32_t  R;
    explicit ADC_DR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ADC_DR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ADC_DR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ADC_JSQR_DEF    {  //!< ADC injected sequence register
    enum JL_ENUM /* uint32_t */ {
      JL_B_0x0 = 0,  //!< 1 conversion
      JL_B_0x1 = 1,  //!< 2 conversions
      JL_B_0x2 = 2,  //!< 3 conversions
      JL_B_0x3 = 3,  //!< 4 conversions
    };
    enum JEXTSEL_ENUM /* uint32_t */ {
      JEXTSEL_B_0x0 = 0,   //!< Event 0
      JEXTSEL_B_0x1 = 1,   //!< Event 1
      JEXTSEL_B_0x2 = 2,   //!< Event 2
      JEXTSEL_B_0x3 = 3,   //!< Event 3
      JEXTSEL_B_0x4 = 4,   //!< Event 4
      JEXTSEL_B_0x5 = 5,   //!< Event 5
      JEXTSEL_B_0x6 = 6,   //!< Event 6
      JEXTSEL_B_0x7 = 7,   //!< Event 7
      JEXTSEL_B_0xF = 15,  //!< Event 15
    };
    enum JEXTEN_ENUM /* uint32_t */ {
      JEXTEN_B_0x0 = 0,  //!< If JQDIS = 1 (queue disabled), Hardware trigger detection disabled (conversions can be launched by software)
      JEXTEN_B_0x1 = 1,  //!< Hardware trigger detection on the rising edge
      JEXTEN_B_0x2 = 2,  //!< Hardware trigger detection on the falling edge
      JEXTEN_B_0x3 = 3,  //!< Hardware trigger detection on both the rising and falling edges
    };
    struct {
      __IO JL_ENUM       JL      :  2; //!<[00] Injected channel sequence lengthThese bits are written by software to define the total number of conversions in the injected channel conversion sequence.Note: The software is allowed to write these bits only when JADSTART = 0 (which ensures that no injected conversion is ongoing).
      __IO JEXTSEL_ENUM  JEXTSEL :  4; //!<[02] External Trigger Selection for injected groupThese bits select the external event used to trigger the start of conversion of an injected group:...Note: The software is allowed to write these bits only when JADSTART = 0 (which ensures that no injected conversion is ongoing).
      __IO JEXTEN_ENUM   JEXTEN  :  2; //!<[06] External Trigger Enable and Polarity Selection for injected channelsThese bits are set and cleared by software to select the external trigger polarity and enable the trigger of an injected group. Note: The software is allowed to write these bits only when JADSTART = 0 (which ensures that no injected conversion is ongoing).Note: If JQM = 1 and if the Queue of Context becomes empty, the software and hardware triggers of the injected sequence are both internally disabled (refer to Section 16.4.21: Queue of context for injected conversions)
      __IO uint32_t      JSQ1    :  5; //!<[08] 1st conversion in the injected sequenceThese bits are written by software with the channel number (0 to 18) assigned as the 1st in the injected conversion sequence.Note: The software is allowed to write these bits only when JADSTART = 0 (which ensures that no injected conversion is ongoing).
           ONE_BIT       UNUSED0 :  1; //!<[13] 
      __IO uint32_t      JSQ2    :  5; //!<[14] 2nd conversion in the injected sequenceThese bits are written by software with the channel number (0 to 18) assigned as the 2nd in the injected conversion sequence.Note: The software is allowed to write these bits only when JADSTART = 0 (which ensures that no injected conversion is ongoing).
           ONE_BIT       UNUSED1 :  1; //!<[19] 
      __IO uint32_t      JSQ3    :  5; //!<[20] 3rd conversion in the injected sequenceThese bits are written by software with the channel number (0 to 18) assigned as the 3rd in the injected conversion sequence.Note: The software is allowed to write these bits only when JADSTART = 0 (which ensures that no injected conversion is ongoing).
           ONE_BIT       UNUSED2 :  1; //!<[25] 
      __IO uint32_t      JSQ4    :  5; //!<[26] 4th conversion in the injected sequenceThese bits are written by software with the channel number (0 to 18) assigned as the 4th in the injected conversion sequence.Note: The software is allowed to write these bits only when JADSTART = 0 (which ensures that no injected conversion is ongoing).
    } B;
    __IO uint32_t  R;
    explicit ADC_JSQR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ADC_JSQR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ADC_JSQR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ADC_OFR1_DEF    {  //!< ADC offset 1 register
    struct {
      __IO uint32_t   OFFSET    : 12; //!<[00] Data offset y for the channel programmed into bits OFFSETy_CH[4:0]These bits are written by software to define the offset y to be subtracted from the raw converted data when converting a channel (can be regular or injected). The channel to which applies the data offset y must be programmed in the bits OFFSETy_CH[4:0]. The conversion result can be read from in the ADC_DR (regular conversion) or from in the ADC_JDRyi registers (injected conversion). Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).If several offset (OFFSETy) point to the same channel, only the offset with the lowest x value is considered for the subtraction. Note: Ex: if OFFSET1_CH[4:0]=4 and OFFSET2_CH[4:0]=4, this is OFFSET1[11:0] which is subtracted when converting channel 4.
           uint32_t   UNUSED0   : 14; //!<[12] 
      __IO uint32_t   OFFSET_CH :  5; //!<[26] Channel selection for the data offset yThese bits are written by software to define the channel to which the offset programmed into bits OFFSETy[11:0] applies. Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).Note: Some channels are not connected physically and must not be selected for the data offset y.
      __IO ONE_BIT    OFFSET_EN :  1; //!<[31] Offset y enableThis bit is written by software to enable or disable the offset programmed into bits OFFSETy[11:0]. Note: The software is allowed to write this bit only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).
    } B;
    __IO uint32_t  R;
    explicit ADC_OFR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ADC_OFR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ADC_OFR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ADC_OFR2_DEF    {  //!< ADC offset 2 register
    struct {
      __IO uint32_t   OFFSET    : 12; //!<[00] Data offset y for the channel programmed into bits OFFSETy_CH[4:0]These bits are written by software to define the offset y to be subtracted from the raw converted data when converting a channel (can be regular or injected). The channel to which applies the data offset y must be programmed in the bits OFFSETy_CH[4:0]. The conversion result can be read from in the ADC_DR (regular conversion) or from in the ADC_JDRyi registers (injected conversion). Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).If several offset (OFFSETy) point to the same channel, only the offset with the lowest x value is considered for the subtraction. Note: Ex: if OFFSET1_CH[4:0]=4 and OFFSET2_CH[4:0]=4, this is OFFSET1[11:0] which is subtracted when converting channel 4.
           uint32_t   UNUSED0   : 14; //!<[12] 
      __IO uint32_t   OFFSET_CH :  5; //!<[26] Channel selection for the data offset yThese bits are written by software to define the channel to which the offset programmed into bits OFFSETy[11:0] applies. Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).Note: Some channels are not connected physically and must not be selected for the data offset y.
      __IO ONE_BIT    OFFSET_EN :  1; //!<[31] Offset y enableThis bit is written by software to enable or disable the offset programmed into bits OFFSETy[11:0]. Note: The software is allowed to write this bit only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).
    } B;
    __IO uint32_t  R;
    explicit ADC_OFR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ADC_OFR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ADC_OFR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ADC_OFR3_DEF    {  //!< ADC offset 3 register
    struct {
      __IO uint32_t   OFFSET    : 12; //!<[00] Data offset y for the channel programmed into bits OFFSETy_CH[4:0]These bits are written by software to define the offset y to be subtracted from the raw converted data when converting a channel (can be regular or injected). The channel to which applies the data offset y must be programmed in the bits OFFSETy_CH[4:0]. The conversion result can be read from in the ADC_DR (regular conversion) or from in the ADC_JDRyi registers (injected conversion). Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).If several offset (OFFSETy) point to the same channel, only the offset with the lowest x value is considered for the subtraction. Note: Ex: if OFFSET1_CH[4:0]=4 and OFFSET2_CH[4:0]=4, this is OFFSET1[11:0] which is subtracted when converting channel 4.
           uint32_t   UNUSED0   : 14; //!<[12] 
      __IO uint32_t   OFFSET_CH :  5; //!<[26] Channel selection for the data offset yThese bits are written by software to define the channel to which the offset programmed into bits OFFSETy[11:0] applies. Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).Note: Some channels are not connected physically and must not be selected for the data offset y.
      __IO ONE_BIT    OFFSET_EN :  1; //!<[31] Offset y enableThis bit is written by software to enable or disable the offset programmed into bits OFFSETy[11:0]. Note: The software is allowed to write this bit only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).
    } B;
    __IO uint32_t  R;
    explicit ADC_OFR3_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ADC_OFR3_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ADC_OFR3_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ADC_OFR4_DEF    {  //!< ADC offset 4 register
    struct {
      __IO uint32_t   OFFSET    : 12; //!<[00] Data offset y for the channel programmed into bits OFFSETy_CH[4:0]These bits are written by software to define the offset y to be subtracted from the raw converted data when converting a channel (can be regular or injected). The channel to which applies the data offset y must be programmed in the bits OFFSETy_CH[4:0]. The conversion result can be read from in the ADC_DR (regular conversion) or from in the ADC_JDRyi registers (injected conversion). Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).If several offset (OFFSETy) point to the same channel, only the offset with the lowest x value is considered for the subtraction. Note: Ex: if OFFSET1_CH[4:0]=4 and OFFSET2_CH[4:0]=4, this is OFFSET1[11:0] which is subtracted when converting channel 4.
           uint32_t   UNUSED0   : 14; //!<[12] 
      __IO uint32_t   OFFSET_CH :  5; //!<[26] Channel selection for the data offset yThese bits are written by software to define the channel to which the offset programmed into bits OFFSETy[11:0] applies. Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).Note: Some channels are not connected physically and must not be selected for the data offset y.
      __IO ONE_BIT    OFFSET_EN :  1; //!<[31] Offset y enableThis bit is written by software to enable or disable the offset programmed into bits OFFSETy[11:0]. Note: The software is allowed to write this bit only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).
    } B;
    __IO uint32_t  R;
    explicit ADC_OFR4_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ADC_OFR4_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ADC_OFR4_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ADC_JDR1_DEF    {  //!< ADC injected channel 1 data register
    struct {
      __I  uint32_t   JDATA : 16; //!<[00] Injected dataThese bits are read-only. They contain the conversion result from injected channel y. The data are left -or right-aligned as described in Section 16.4.26: Data management.
    } B;
    __IO uint32_t  R;
    explicit ADC_JDR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ADC_JDR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ADC_JDR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ADC_JDR2_DEF    {  //!< ADC injected channel 2 data register
    struct {
      __I  uint32_t   JDATA : 16; //!<[00] Injected dataThese bits are read-only. They contain the conversion result from injected channel y. The data are left -or right-aligned as described in Section 16.4.26: Data management.
    } B;
    __IO uint32_t  R;
    explicit ADC_JDR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ADC_JDR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ADC_JDR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ADC_JDR3_DEF    {  //!< ADC injected channel 3 data register
    struct {
      __I  uint32_t   JDATA : 16; //!<[00] Injected dataThese bits are read-only. They contain the conversion result from injected channel y. The data are left -or right-aligned as described in Section 16.4.26: Data management.
    } B;
    __IO uint32_t  R;
    explicit ADC_JDR3_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ADC_JDR3_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ADC_JDR3_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ADC_JDR4_DEF    {  //!< ADC injected channel 4 data register
    struct {
      __I  uint32_t   JDATA : 16; //!<[00] Injected dataThese bits are read-only. They contain the conversion result from injected channel y. The data are left -or right-aligned as described in Section 16.4.26: Data management.
    } B;
    __IO uint32_t  R;
    explicit ADC_JDR4_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ADC_JDR4_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ADC_JDR4_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ADC_AWD2CR_DEF  {  //!< ADC analog watchdog 2 configuration register
    struct {
      __IO uint32_t   AWD2CH : 19; //!<[00] Analog watchdog 2 channel selectionThese bits are set and cleared by software. They enable and select the input channels to be guarded by the analog watchdog 2.AWD2CH[i] = 0: ADC analog input channel i is not monitored by AWD2AWD2CH[i] = 1: ADC analog input channel i is monitored by AWD2When AWD2CH[18:0] = 000..0, the analog watchdog 2 is disabledNote: The channels selected by AWD2CH must be also selected into the SQRi or JSQRi registers.Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).Note: Some channels are not connected physically and must not be selected for the analog watchdog.
    } B;
    __IO uint32_t  R;
    explicit ADC_AWD2CR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ADC_AWD2CR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ADC_AWD2CR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ADC_AWD3CR_DEF  {  //!< ADC analog watchdog 3 configuration register
    struct {
      __IO uint32_t   AWD3CH : 19; //!<[00] Analog watchdog 3 channel selectionThese bits are set and cleared by software. They enable and select the input channels to be guarded by the analog watchdog 3.AWD3CH[i] = 0: ADC analog input channel i is not monitored by AWD3AWD3CH[i] = 1: ADC analog input channel i is monitored by AWD3When AWD3CH[18:0] = 000..0, the analog watchdog 3 is disabledNote: The channels selected by AWD3CH must be also selected into the SQRi or JSQRi registers.Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).Note: Some channels are not connected physically and must not be selected for the analog watchdog.
    } B;
    __IO uint32_t  R;
    explicit ADC_AWD3CR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ADC_AWD3CR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ADC_AWD3CR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ADC_DIFSEL_DEF  {  //!< ADC differential mode selection register
    struct {
      __IO uint32_t   DIFSEL : 19; //!<[00] Differential mode for channels 18 to 0.These bits are set and cleared by software. They allow to select if a channel is configured as single-ended or differential mode.DIFSEL[i] = 0: ADC analog input channel is configured in single ended modeDIFSEL[i] = 1: ADC analog input channel i is configured in differential modeNote: The DIFSEL bits corresponding to channels that are either connected to a single-ended I/O port or to an internal channel must be kept their reset value (single-ended input mode).Note: The software is allowed to write these bits only when the ADC is disabled (ADCAL = 0, JADSTART = 0, JADSTP = 0, ADSTART = 0, ADSTP = 0, ADDIS = 0 and ADEN = 0).
    } B;
    __IO uint32_t  R;
    explicit ADC_DIFSEL_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ADC_DIFSEL_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ADC_DIFSEL_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ADC_CALFACT_DEF {  //!< ADC calibration factors
    struct {
      __IO uint32_t   CALFACT_S :  7; //!<[00] Calibration Factors In single-ended modeThese bits are written by hardware or by software.Once a single-ended inputs calibration is complete, they are updated by hardware with the calibration factors.Software can write these bits with a new calibration factor. If the new calibration factor is different from the current one stored into the analog ADC, it is then applied once a new single-ended calibration is launched.Note: The software is allowed to write these bits only when ADEN = 1, ADSTART = 0 and JADSTART = 0 (ADC is enabled and no calibration is ongoing and no conversion is ongoing).
           uint32_t   UNUSED0   :  9; //!<[07] 
      __IO uint32_t   CALFACT_D :  7; //!<[16] Calibration Factors in differential modeThese bits are written by hardware or by software.Once a differential inputs calibration is complete, they are updated by hardware with the calibration factors.Software can write these bits with a new calibration factor. If the new calibration factor is different from the current one stored into the analog ADC, it is then applied once a new differential calibration is launched.Note: The software is allowed to write these bits only when ADEN = 1, ADSTART = 0 and JADSTART = 0 (ADC is enabled and no calibration is ongoing and no conversion is ongoing).
    } B;
    __IO uint32_t  R;
    explicit ADC_CALFACT_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ADC_CALFACT_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ADC_CALFACT_DEF r; r.R = R;
      R = f (r);
    }
  };
  // PERIPHERAL ADC1 REGISTERS INSTANCES
  __IO ADC_ISR_DEF             ADC_ISR ;  //!< [0000](04)[0x00000000]
  __IO ADC_IER_DEF             ADC_IER ;  //!< [0004](04)[0x00000000]
  __IO ADC_CR_DEF               ADC_CR ;  //!< [0008](04)[0x20000000]
  __IO ADC_CFGR_DEF           ADC_CFGR ;  //!< [000c](04)[0x80000000]
  __IO ADC_CFGR2_DEF         ADC_CFGR2 ;  //!< [0010](04)[0x00000000]
  __IO ADC_SMPR1_DEF         ADC_SMPR1 ;  //!< [0014](04)[0x00000000]
  __IO ADC_SMPR2_DEF         ADC_SMPR2 ;  //!< [0018](04)[0x00000000]
       uint32_t              UNUSED0 ;  //!< [001c](04)[0xFFFFFFFF]
  __IO ADC_TR1_DEF             ADC_TR1 ;  //!< [0020](04)[0x0FFF0000]
  __IO ADC_TR2_DEF             ADC_TR2 ;  //!< [0024](04)[0x00FF0000]
  __IO ADC_TR3_DEF             ADC_TR3 ;  //!< [0028](04)[0x00FF0000]
       uint32_t              UNUSED1 ;  //!< [002c](04)[0xFFFFFFFF]
  __IO ADC_SQR1_DEF           ADC_SQR1 ;  //!< [0030](04)[0x00000000]
  __IO ADC_SQR2_DEF           ADC_SQR2 ;  //!< [0034](04)[0x00000000]
  __IO ADC_SQR3_DEF           ADC_SQR3 ;  //!< [0038](04)[0x00000000]
  __IO ADC_SQR4_DEF           ADC_SQR4 ;  //!< [003c](04)[0x00000000]
  __IO ADC_DR_DEF               ADC_DR ;  //!< [0040](04)[0x00000000]
       uint32_t              UNUSED2 [2];  //!< [0044](08)[0xFFFFFFFF]
  __IO ADC_JSQR_DEF           ADC_JSQR ;  //!< [004c](04)[0x00000000]
       uint32_t              UNUSED3 [4];  //!< [0050](10)[0xFFFFFFFF]
  __IO ADC_OFR1_DEF           ADC_OFR1 ;  //!< [0060](04)[0x00000000]
  __IO ADC_OFR2_DEF           ADC_OFR2 ;  //!< [0064](04)[0x00000000]
  __IO ADC_OFR3_DEF           ADC_OFR3 ;  //!< [0068](04)[0x00000000]
  __IO ADC_OFR4_DEF           ADC_OFR4 ;  //!< [006c](04)[0x00000000]
       uint32_t              UNUSED4 [4];  //!< [0070](10)[0xFFFFFFFF]
  __IO ADC_JDR1_DEF           ADC_JDR1 ;  //!< [0080](04)[0x00000000]
  __IO ADC_JDR2_DEF           ADC_JDR2 ;  //!< [0084](04)[0x00000000]
  __IO ADC_JDR3_DEF           ADC_JDR3 ;  //!< [0088](04)[0x00000000]
  __IO ADC_JDR4_DEF           ADC_JDR4 ;  //!< [008c](04)[0x00000000]
       uint32_t              UNUSED5 [4];  //!< [0090](10)[0xFFFFFFFF]
  __IO ADC_AWD2CR_DEF       ADC_AWD2CR ;  //!< [00a0](04)[0x00000000]
  __IO ADC_AWD3CR_DEF       ADC_AWD3CR ;  //!< [00a4](04)[0x00000000]
       uint32_t              UNUSED6 [2];  //!< [00a8](08)[0xFFFFFFFF]
  __IO ADC_DIFSEL_DEF       ADC_DIFSEL ;  //!< [00b0](04)[0x00000000]
  __IO ADC_CALFACT_DEF     ADC_CALFACT ;  //!< [00b4](04)[0x00000000]
}; /* total size = 0x00b9, struct size = 0x00B8 */

// ////////////////////+++ ADC123_Common +-+//////////////////// //
struct ADC123_Common_Type { /*!< Analog-to-Digital Converter */
  union ADC_CSR_DEF {  //!< ADC common status register
    struct {
      __I  ONE_BIT    ADRDY_MST :  1; //!<[00] Master ADC readyThis bit is a copy of the ADRDY bit in the corresponding ADC_ISR register.
      __I  ONE_BIT    EOSMP_MST :  1; //!<[01] End of Sampling phase flag of the master ADCThis bit is a copy of the EOSMP bit in the corresponding ADC_ISR register.
      __I  ONE_BIT    EOC_MST   :  1; //!<[02] End of regular conversion of the master ADCThis bit is a copy of the EOC bit in the corresponding ADC_ISR register.
      __I  ONE_BIT    EOS_MST   :  1; //!<[03] End of regular sequence flag of the master ADCThis bit is a copy of the EOS bit in the corresponding ADC_ISR register.
      __I  ONE_BIT    OVR_MST   :  1; //!<[04] Overrun flag of the master ADCThis bit is a copy of the OVR bit in the corresponding ADC_ISR register.
      __I  ONE_BIT    JEOC_MST  :  1; //!<[05] End of injected conversion flag of the master ADCThis bit is a copy of the JEOC bit in the corresponding ADC_ISR register.
      __I  ONE_BIT    JEOS_MST  :  1; //!<[06] End of injected sequence flag of the master ADCThis bit is a copy of the JEOS bit in the corresponding ADC_ISR register.
      __I  ONE_BIT    AWD1_MST  :  1; //!<[07] Analog watchdog 1 flag of the master ADCThis bit is a copy of the AWD1 bit in the corresponding ADC_ISR register.
      __I  ONE_BIT    AWD2_MST  :  1; //!<[08] Analog watchdog 2 flag of the master ADCThis bit is a copy of the AWD2 bit in the corresponding ADC_ISR register.
      __I  ONE_BIT    AWD3_MST  :  1; //!<[09] Analog watchdog 3 flag of the master ADCThis bit is a copy of the AWD3 bit in the corresponding ADC_ISR register.
      __I  ONE_BIT    JQOVF_MST :  1; //!<[10] Injected Context Queue Overflow flag of the master ADCThis bit is a copy of the JQOVF bit in the corresponding ADC_ISR register.
           uint32_t   UNUSED0   :  5; //!<[11] 
      __I  ONE_BIT    ADRDY_SLV :  1; //!<[16] Slave ADC readyThis bit is a copy of the ADRDY bit in the corresponding ADC_ISR register.
      __I  ONE_BIT    EOSMP_SLV :  1; //!<[17] End of Sampling phase flag of the slave ADCThis bit is a copy of the EOSMP2 bit in the corresponding ADC_ISR register.
      __I  ONE_BIT    EOC_SLV   :  1; //!<[18] End of regular conversion of the slave ADCThis bit is a copy of the EOC bit in the corresponding ADC_ISR register.
      __I  ONE_BIT    EOS_SLV   :  1; //!<[19] End of regular sequence flag of the slave ADC. This bit is a copy of the EOS bit in the corresponding ADC_ISR register.
      __I  ONE_BIT    OVR_SLV   :  1; //!<[20] Overrun flag of the slave ADC This bit is a copy of the OVR bit in the corresponding ADC_ISR register.
      __I  ONE_BIT    JEOC_SLV  :  1; //!<[21] End of injected conversion flag of the slave ADC This bit is a copy of the JEOC bit in the corresponding ADC_ISR register.
      __I  ONE_BIT    JEOS_SLV  :  1; //!<[22] End of injected sequence flag of the slave ADC This bit is a copy of the JEOS bit in the corresponding ADC_ISR register.
      __I  ONE_BIT    AWD1_SLV  :  1; //!<[23] Analog watchdog 1 flag of the slave ADC This bit is a copy of the AWD1 bit in the corresponding ADC_ISR register.
      __I  ONE_BIT    AWD2_SLV  :  1; //!<[24] Analog watchdog 2 flag of the slave ADC This bit is a copy of the AWD2 bit in the corresponding ADC_ISR register.
      __I  ONE_BIT    AWD3_SLV  :  1; //!<[25] Analog watchdog 3 flag of the slave ADCThis bit is a copy of the AWD3 bit in the corresponding ADC_ISR register.
      __I  ONE_BIT    JQOVF_SLV :  1; //!<[26] Injected Context Queue Overflow flag of the slave ADC This bit is a copy of the JQOVF bit in the corresponding ADC_ISR register.
    } B;
    __IO uint32_t  R;
    explicit ADC_CSR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ADC_CSR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ADC_CSR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ADC_CCR_DEF {  //!< ADC common control register
    enum DUAL_ENUM /* uint32_t */ {
      DUAL_B_0x0 = 0,  //!< Independent mode
      DUAL_B_0x1 = 1,  //!< Combined regular simultaneous + injected simultaneous mode
      DUAL_B_0x2 = 2,  //!< Combined regular simultaneous + alternate trigger mode
      DUAL_B_0x3 = 3,  //!< Combined Interleaved mode + injected simultaneous mode
      DUAL_B_0x5 = 5,  //!< Injected simultaneous mode only
      DUAL_B_0x6 = 6,  //!< Regular simultaneous mode only
      DUAL_B_0x7 = 7,  //!< Interleaved mode only
      DUAL_B_0x9 = 9,  //!< Alternate trigger mode only
    };
    enum DMACFG_ENUM /* uint32_t */ {
      DMACFG_B_0x0 = 0,  //!< DMA One Shot mode selected
      DMACFG_B_0x1 = 1,  //!< DMA Circular mode selected
    };
    enum MDMA_ENUM /* uint32_t */ {
      MDMA_B_0x0 = 0,  //!< MDMA mode disabled
      MDMA_B_0x1 = 1,  //!< Enable dual interleaved mode to output to the master channel of DFSDM interface both Master and the Slave result (16-bit data width)
      MDMA_B_0x2 = 2,  //!< MDMA mode enabled for 12 and 10-bit resolution
      MDMA_B_0x3 = 3,  //!< MDMA mode enabled for 8 and 6-bit resolution
    };
    enum CKMODE_ENUM /* uint32_t */ {
      CKMODE_B_0x0 = 0,  //!< CK_ADCx (x = 123) (Asynchronous clock mode), generated at product level (refer to Section 6: Reset and clock control (RCC))
      CKMODE_B_0x1 = 1,  //!< HCLK/1 (Synchronous clock mode). This configuration must be enabled only if the AHB clock prescaler is set (HPRE[3:0] = 0xxx in RCC_CFGR register) and if the system clock has a 50% duty cycle.
      CKMODE_B_0x2 = 2,  //!< HCLK/2 (Synchronous clock mode)
      CKMODE_B_0x3 = 3,  //!< HCLK/4 (Synchronous clock mode)
    };
    enum PRESC_ENUM /* uint32_t */ {
      PRESC_B_0x0 = 0,   //!< input ADC clock not divided
      PRESC_B_0x1 = 1,   //!< input ADC clock divided by 2
      PRESC_B_0x2 = 2,   //!< input ADC clock divided by 4
      PRESC_B_0x3 = 3,   //!< input ADC clock divided by 6
      PRESC_B_0x4 = 4,   //!< input ADC clock divided by 8
      PRESC_B_0x5 = 5,   //!< input ADC clock divided by 10
      PRESC_B_0x6 = 6,   //!< input ADC clock divided by 12
      PRESC_B_0x7 = 7,   //!< input ADC clock divided by 16
      PRESC_B_0x8 = 8,   //!< input ADC clock divided by 32
      PRESC_B_0x9 = 9,   //!< input ADC clock divided by 64
      PRESC_B_0xA = 10,  //!< input ADC clock divided by 128
      PRESC_B_0xB = 11,  //!< input ADC clock divided by 256
    };
    enum VREFEN_ENUM /* uint32_t */ {
      VREFEN_B_0x0 = 0,  //!< V<sub>REFINT</sub> channel disabled
      VREFEN_B_0x1 = 1,  //!< V<sub>REFINT</sub> channel enabled
    };
    enum CH17SEL_ENUM /* uint32_t */ {
      CH17SEL_B_0x0 = 0,  //!< Temperature sensor channel disabled, dac_out1 selected
      CH17SEL_B_0x1 = 1,  //!< Temperature sensor channel enabled
    };
    enum CH18SEL_ENUM /* uint32_t */ {
      CH18SEL_B_0x0 = 0,  //!< V<sub>BAT</sub> channel disabled, dac_out2 selected.
      CH18SEL_B_0x1 = 1,  //!< V<sub>BAT</sub> channel enabled
    };
    struct {
      __IO DUAL_ENUM     DUAL    :  5; //!<[00] Dual ADC mode selection These bits are written by software to select the operating mode.All the ADCs independent:00001 to 01001: Dual mode, master and slave ADCs working togetherAll other combinations are reserved and must not be programmedNote: The software is allowed to write these bits only when the ADCs are disabled (ADCAL = 0, JADSTART = 0, ADSTART = 0, ADSTP = 0, ADDIS = 0 and ADEN = 0).
           uint32_t      UNUSED0 :  3; //!<[05] 
      __IO uint32_t      DELAY   :  4; //!<[08] Delay between 2 sampling phases These bits are set and cleared by software. These bits are used in dual interleaved modes. Refer to Table 112 for the value of ADC resolution versus DELAY bits values. Note: The software is allowed to write these bits only when the ADCs are disabled (ADCAL = 0, JADSTART = 0, ADSTART = 0, ADSTP = 0, ADDIS = 0 and ADEN = 0).
           ONE_BIT       UNUSED1 :  1; //!<[12] 
      __IO DMACFG_ENUM   DMACFG  :  1; //!<[13] DMA configuration (for dual ADC mode)This bit is set and cleared by software to select between two DMA modes of operation and is effective only when DMAEN = 1.For more details, refer to Section : Managing conversions using the DMANote: The software is allowed to write these bits only when ADSTART = 0 (which ensures that no regular conversion is ongoing).
      __IO MDMA_ENUM     MDMA    :  2; //!<[14] Direct memory access mode for dual ADC mode This bitfield is set and cleared by software. Refer to the DMA controller section for more details.Note: The software is allowed to write these bits only when ADSTART = 0 (which ensures that no regular conversion is ongoing).
      __IO CKMODE_ENUM   CKMODE  :  2; //!<[16] ADC clock modeThese bits are set and cleared by software to define the ADC clock scheme (which is common to both master and slave ADCs):In all synchronous clock modes, there is no jitter in the delay from a timer trigger to the start of a conversion.Note: The software is allowed to write these bits only when the ADCs are disabled (ADCAL = 0, JADSTART = 0, ADSTART = 0, ADSTP = 0, ADDIS = 0 and ADEN = 0).
      __IO PRESC_ENUM    PRESC   :  4; //!<[18] ADC prescalerThese bits are set and cleared by software to select the frequency of the clock to the ADC. The clock is common for all the ADCs.other: reservedNote: The software is allowed to write these bits only when the ADC is disabled (ADCAL = 0, JADSTART = 0, ADSTART = 0, ADSTP = 0, ADDIS = 0 and ADEN = 0). The ADC prescaler value is applied only when CKMODE[1:0] = 00.
      __IO VREFEN_ENUM   VREFEN  :  1; //!<[22] V<sub>REFINT</sub> enableThis bit is set and cleared by software to enable/disable the V<sub>REFINT</sub> channel.
      __IO CH17SEL_ENUM  CH17SEL :  1; //!<[23] CH17 selectionThis bit is set and cleared by software to control channel 17.
      __IO CH18SEL_ENUM  CH18SEL :  1; //!<[24] CH18 selectionThis bit is set and cleared by software to control channel 18.
    } B;
    __IO uint32_t  R;
    explicit ADC_CCR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ADC_CCR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ADC_CCR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ADC_CDR_DEF {  //!< ADC common regular data register for dual mode
    struct {
      __I  uint32_t   RDATA_MST : 16; //!<[00] Regular data of the master ADC.In dual mode, these bits contain the regular data of the master ADC. Refer to Section 16.4.32: Dual ADC modes.The data alignment is applied as described in Section : Data register, data alignment and offset (ADC_DR, OFFSETy, OFFSETy_CH, ALIGN))In MDMA = 11 mode, bits 15:8 contains SLV_ADC_DR[7:0], bits 7:0 contains MST_ADC_DR[7:0].
      __I  uint32_t   RDATA_SLV : 16; //!<[16] Regular data of the slave ADCIn dual mode, these bits contain the regular data of the slave ADC. Refer to Section 16.4.32: Dual ADC modes.The data alignment is applied as described in Section : Data register, data alignment and offset (ADC_DR, OFFSETy, OFFSETy_CH, ALIGN))
    } B;
    __IO uint32_t  R;
    explicit ADC_CDR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ADC_CDR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ADC_CDR_DEF r; r.R = R;
      R = f (r);
    }
  };
  // PERIPHERAL ADC123_Common REGISTERS INSTANCES
  __IO ADC_CSR_DEF         ADC_CSR ;  //!< [0000](04)[0x00000000]
       uint32_t          UNUSED0 ;  //!< [0004](04)[0xFFFFFFFF]
  __IO ADC_CCR_DEF         ADC_CCR ;  //!< [0008](04)[0x00000000]
  __IO ADC_CDR_DEF         ADC_CDR ;  //!< [000c](04)[0x00000000]
}; /* total size = 0x0011, struct size = 0x0010 */

// ////////////////////+++ DAC1 +-+//////////////////// //
struct DAC1_Type          { /*!< Digital-to-analog converter */
  union CR_DEF      {  //!< control register
    struct {
      __IO ONE_BIT    EN1       :  1; //!<[00] DAC channel1 enable
           ONE_BIT    UNUSED0   :  1; //!<[01] 
      __IO ONE_BIT    TEN1      :  1; //!<[02] DAC channel1 trigger enable
      __IO uint32_t   TSEL1     :  3; //!<[03] DAC channel1 trigger selection
      __IO uint32_t   WAVE1     :  2; //!<[06] DAC channel1 noise/triangle wave generation enable
      __IO uint32_t   MAMP1     :  4; //!<[08] DAC channel1 mask/amplitude selector
      __IO ONE_BIT    DMAEN1    :  1; //!<[12] DAC channel1 DMA enable
      __IO ONE_BIT    DMAUDRIE1 :  1; //!<[13] DAC channel1 DMA Underrun Interrupt enable
      __IO ONE_BIT    CEN1      :  1; //!<[14] DAC Channel 1 calibration enable
           ONE_BIT    UNUSED1   :  1; //!<[15] 
      __IO ONE_BIT    EN2       :  1; //!<[16] DAC channel2 enable
           ONE_BIT    UNUSED2   :  1; //!<[17] 
      __IO ONE_BIT    TEN2      :  1; //!<[18] DAC channel2 trigger enable
      __IO uint32_t   TSEL2     :  3; //!<[19] DAC channel2 trigger selection
      __IO uint32_t   WAVE2     :  2; //!<[22] DAC channel2 noise/triangle wave generation enable
      __IO uint32_t   MAMP2     :  4; //!<[24] DAC channel2 mask/amplitude selector
      __IO ONE_BIT    DMAEN2    :  1; //!<[28] DAC channel2 DMA enable
      __IO ONE_BIT    DMAUDRIE2 :  1; //!<[29] DAC channel2 DMA underrun interrupt enable
      __IO ONE_BIT    CEN2      :  1; //!<[30] DAC Channel 2 calibration enable
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
  union SWTRIGR_DEF {  //!< software trigger register
    struct {
      __O  ONE_BIT  SWTRIG1 :  1; //!<[00] DAC channel1 software trigger
      __O  ONE_BIT  SWTRIG2 :  1; //!<[01] DAC channel2 software trigger
    } B;
    __O  uint32_t  R;
    explicit SWTRIGR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      SWTRIGR_DEF r;
      R = f (r);
    }
  };
  union DHR12R1_DEF {  //!< channel1 12-bit right-aligned data holding register
    struct {
      __IO uint32_t   DACC1DHR : 12; //!<[00] DAC channel1 12-bit right-aligned data
    } B;
    __IO uint32_t  R;
    explicit DHR12R1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DHR12R1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DHR12R1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DHR12L1_DEF {  //!< channel1 12-bit left-aligned data holding register
    struct {
           uint32_t   UNUSED0  :  4; //!<[00] 
      __IO uint32_t   DACC1DHR : 12; //!<[04] DAC channel1 12-bit left-aligned data
    } B;
    __IO uint32_t  R;
    explicit DHR12L1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DHR12L1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DHR12L1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DHR8R1_DEF  {  //!< channel1 8-bit right-aligned data holding register
    struct {
      __IO uint32_t   DACC1DHR :  8; //!<[00] DAC channel1 8-bit right-aligned data
    } B;
    __IO uint32_t  R;
    explicit DHR8R1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DHR8R1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DHR8R1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DHR12R2_DEF {  //!< channel2 12-bit right aligned data holding register
    struct {
      __IO uint32_t   DACC2DHR : 12; //!<[00] DAC channel2 12-bit right-aligned data
    } B;
    __IO uint32_t  R;
    explicit DHR12R2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DHR12R2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DHR12R2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DHR12L2_DEF {  //!< channel2 12-bit left aligned data holding register
    struct {
           uint32_t   UNUSED0  :  4; //!<[00] 
      __IO uint32_t   DACC2DHR : 12; //!<[04] DAC channel2 12-bit left-aligned data
    } B;
    __IO uint32_t  R;
    explicit DHR12L2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DHR12L2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DHR12L2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DHR8R2_DEF  {  //!< channel2 8-bit right-aligned data holding register
    struct {
      __IO uint32_t   DACC2DHR :  8; //!<[00] DAC channel2 8-bit right-aligned data
    } B;
    __IO uint32_t  R;
    explicit DHR8R2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DHR8R2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DHR8R2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DHR12RD_DEF {  //!< Dual DAC 12-bit right-aligned data holding register
    struct {
      __IO uint32_t   DACC1DHR : 12; //!<[00] DAC channel1 12-bit right-aligned data
           uint32_t   UNUSED0  :  4; //!<[12] 
      __IO uint32_t   DACC2DHR : 12; //!<[16] DAC channel2 12-bit right-aligned data
    } B;
    __IO uint32_t  R;
    explicit DHR12RD_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DHR12RD_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DHR12RD_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DHR12LD_DEF {  //!< DUAL DAC 12-bit left aligned data holding register
    struct {
           uint32_t   UNUSED0  :  4; //!<[00] 
      __IO uint32_t   DACC1DHR : 12; //!<[04] DAC channel1 12-bit left-aligned data
           uint32_t   UNUSED1  :  4; //!<[16] 
      __IO uint32_t   DACC2DHR : 12; //!<[20] DAC channel2 12-bit left-aligned data
    } B;
    __IO uint32_t  R;
    explicit DHR12LD_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DHR12LD_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DHR12LD_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DHR8RD_DEF  {  //!< DUAL DAC 8-bit right aligned data holding register
    struct {
      __IO uint32_t   DACC1DHR :  8; //!<[00] DAC channel1 8-bit right-aligned data
      __IO uint32_t   DACC2DHR :  8; //!<[08] DAC channel2 8-bit right-aligned data
    } B;
    __IO uint32_t  R;
    explicit DHR8RD_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DHR8RD_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DHR8RD_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DOR1_DEF    {  //!< channel1 data output register
    struct {
      __I  uint32_t   DACC1DOR : 12; //!<[00] DAC channel1 data output
    } B;
    __I  uint32_t  R;

    explicit DOR1_DEF (volatile DOR1_DEF & o) noexcept { R = o.R; };
  };
  union DOR2_DEF    {  //!< channel2 data output register
    struct {
      __I  uint32_t   DACC2DOR : 12; //!<[00] DAC channel2 data output
    } B;
    __I  uint32_t  R;

    explicit DOR2_DEF (volatile DOR2_DEF & o) noexcept { R = o.R; };
  };
  union SR_DEF      {  //!< status register
    struct {
           uint32_t   UNUSED0   : 13; //!<[00] 
      __IO ONE_BIT    DMAUDR1   :  1; //!<[13] DAC channel1 DMA underrun flag
      __I  ONE_BIT    CAL_FLAG1 :  1; //!<[14] DAC Channel 1 calibration offset status
      __I  ONE_BIT    BWST1     :  1; //!<[15] DAC Channel 1 busy writing sample time flag
           uint32_t   UNUSED1   : 13; //!<[16] 
      __IO ONE_BIT    DMAUDR2   :  1; //!<[29] DAC channel2 DMA underrun flag
      __I  ONE_BIT    CAL_FLAG2 :  1; //!<[30] DAC Channel 2 calibration offset status
      __I  ONE_BIT    BWST2     :  1; //!<[31] DAC Channel 2 busy writing sample time flag
    } B;
    __IO uint32_t  R;
    explicit SR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      SR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      SR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CCR_DEF     {  //!< calibration control register
    struct {
      __IO uint32_t   OTRIM1  :  5; //!<[00] DAC Channel 1 offset trimming value
           uint32_t   UNUSED0 : 11; //!<[05] 
      __IO uint32_t   OTRIM2  :  5; //!<[16] DAC Channel 2 offset trimming value
    } B;
    __IO uint32_t  R;
    explicit CCR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CCR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CCR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union MCR_DEF     {  //!< mode control register
    struct {
      __IO uint32_t   MODE1   :  3; //!<[00] DAC Channel 1 mode
           uint32_t   UNUSED0 : 13; //!<[03] 
      __IO uint32_t   MODE2   :  3; //!<[16] DAC Channel 2 mode
    } B;
    __IO uint32_t  R;
    explicit MCR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      MCR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      MCR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union SHSR1_DEF   {  //!< Sample and Hold sample time register 1
    struct {
      __IO uint32_t   TSAMPLE1 : 10; //!<[00] DAC Channel 1 sample Time
    } B;
    __IO uint32_t  R;
    explicit SHSR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      SHSR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      SHSR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union SHSR2_DEF   {  //!< Sample and Hold sample time register 2
    struct {
      __IO uint32_t   TSAMPLE2 : 10; //!<[00] DAC Channel 2 sample Time
    } B;
    __IO uint32_t  R;
    explicit SHSR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      SHSR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      SHSR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union SHHR_DEF    {  //!< Sample and Hold hold time register
    struct {
      __IO uint32_t   THOLD1  : 10; //!<[00] DAC Channel 1 hold Time
           uint32_t   UNUSED0 :  6; //!<[10] 
      __IO uint32_t   THOLD2  : 10; //!<[16] DAC Channel 2 hold time
    } B;
    __IO uint32_t  R;
    explicit SHHR_DEF () noexcept { R = 0x00010001u; }
    template<typename F> void setbit (F f) volatile {
      SHHR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      SHHR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union SHRR_DEF    {  //!< Sample and Hold refresh time register
    struct {
      __IO uint32_t   TREFRESH1 :  8; //!<[00] DAC Channel 1 refresh Time
           uint32_t   UNUSED0   :  8; //!<[08] 
      __IO uint32_t   TREFRESH2 :  8; //!<[16] DAC Channel 2 refresh Time
    } B;
    __IO uint32_t  R;
    explicit SHRR_DEF () noexcept { R = 0x00000001u; }
    template<typename F> void setbit (F f) volatile {
      SHRR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      SHRR_DEF r; r.R = R;
      R = f (r);
    }
  };
  // PERIPHERAL DAC1 REGISTERS INSTANCES
  __IO CR_DEF                   CR ;  //!< [0000](04)[0x00000000]
  __O  SWTRIGR_DEF         SWTRIGR ;  //!< [0004](04)[0x00000000]
  __IO DHR12R1_DEF         DHR12R1 ;  //!< [0008](04)[0x00000000]
  __IO DHR12L1_DEF         DHR12L1 ;  //!< [000c](04)[0x00000000]
  __IO DHR8R1_DEF           DHR8R1 ;  //!< [0010](04)[0x00000000]
  __IO DHR12R2_DEF         DHR12R2 ;  //!< [0014](04)[0x00000000]
  __IO DHR12L2_DEF         DHR12L2 ;  //!< [0018](04)[0x00000000]
  __IO DHR8R2_DEF           DHR8R2 ;  //!< [001c](04)[0x00000000]
  __IO DHR12RD_DEF         DHR12RD ;  //!< [0020](04)[0x00000000]
  __IO DHR12LD_DEF         DHR12LD ;  //!< [0024](04)[0x00000000]
  __IO DHR8RD_DEF           DHR8RD ;  //!< [0028](04)[0x00000000]
  __I  DOR1_DEF               DOR1 ;  //!< [002c](04)[0x00000000]
  __I  DOR2_DEF               DOR2 ;  //!< [0030](04)[0x00000000]
  __IO SR_DEF                   SR ;  //!< [0034](04)[0x00000000]
  __IO CCR_DEF                 CCR ;  //!< [0038](04)[0x00000000]
  __IO MCR_DEF                 MCR ;  //!< [003c](04)[0x00000000]
  __IO SHSR1_DEF             SHSR1 ;  //!< [0040](04)[0x00000000]
  __IO SHSR2_DEF             SHSR2 ;  //!< [0044](04)[0x00000000]
  __IO SHHR_DEF               SHHR ;  //!< [0048](04)[0x00010001]
  __IO SHRR_DEF               SHRR ;  //!< [004c](04)[0x00000001]
}; /* total size = 0x0400, struct size = 0x0050 */

// ////////////////////+++ DMA1 +-+//////////////////// //
struct DMA1_Type          { /*!< Direct memory access controller */
  union ISR_DEF     {  //!< interrupt status register
    struct {
      __I  ONE_BIT  GIF1  :  1; //!<[00] Channel x global interrupt flag (x = 1 ..7)
      __I  ONE_BIT  TCIF1 :  1; //!<[01] Channel x transfer complete flag (x = 1 ..7)
      __I  ONE_BIT  HTIF1 :  1; //!<[02] Channel x half transfer flag (x = 1 ..7)
      __I  ONE_BIT  TEIF1 :  1; //!<[03] Channel x transfer error flag (x = 1 ..7)
      __I  ONE_BIT  GIF2  :  1; //!<[04] Channel x global interrupt flag (x = 1 ..7)
      __I  ONE_BIT  TCIF2 :  1; //!<[05] Channel x transfer complete flag (x = 1 ..7)
      __I  ONE_BIT  HTIF2 :  1; //!<[06] Channel x half transfer flag (x = 1 ..7)
      __I  ONE_BIT  TEIF2 :  1; //!<[07] Channel x transfer error flag (x = 1 ..7)
      __I  ONE_BIT  GIF3  :  1; //!<[08] Channel x global interrupt flag (x = 1 ..7)
      __I  ONE_BIT  TCIF3 :  1; //!<[09] Channel x transfer complete flag (x = 1 ..7)
      __I  ONE_BIT  HTIF3 :  1; //!<[10] Channel x half transfer flag (x = 1 ..7)
      __I  ONE_BIT  TEIF3 :  1; //!<[11] Channel x transfer error flag (x = 1 ..7)
      __I  ONE_BIT  GIF4  :  1; //!<[12] Channel x global interrupt flag (x = 1 ..7)
      __I  ONE_BIT  TCIF4 :  1; //!<[13] Channel x transfer complete flag (x = 1 ..7)
      __I  ONE_BIT  HTIF4 :  1; //!<[14] Channel x half transfer flag (x = 1 ..7)
      __I  ONE_BIT  TEIF4 :  1; //!<[15] Channel x transfer error flag (x = 1 ..7)
      __I  ONE_BIT  GIF5  :  1; //!<[16] Channel x global interrupt flag (x = 1 ..7)
      __I  ONE_BIT  TCIF5 :  1; //!<[17] Channel x transfer complete flag (x = 1 ..7)
      __I  ONE_BIT  HTIF5 :  1; //!<[18] Channel x half transfer flag (x = 1 ..7)
      __I  ONE_BIT  TEIF5 :  1; //!<[19] Channel x transfer error flag (x = 1 ..7)
      __I  ONE_BIT  GIF6  :  1; //!<[20] Channel x global interrupt flag (x = 1 ..7)
      __I  ONE_BIT  TCIF6 :  1; //!<[21] Channel x transfer complete flag (x = 1 ..7)
      __I  ONE_BIT  HTIF6 :  1; //!<[22] Channel x half transfer flag (x = 1 ..7)
      __I  ONE_BIT  TEIF6 :  1; //!<[23] Channel x transfer error flag (x = 1 ..7)
      __I  ONE_BIT  GIF7  :  1; //!<[24] Channel x global interrupt flag (x = 1 ..7)
      __I  ONE_BIT  TCIF7 :  1; //!<[25] Channel x transfer complete flag (x = 1 ..7)
      __I  ONE_BIT  HTIF7 :  1; //!<[26] Channel x half transfer flag (x = 1 ..7)
      __I  ONE_BIT  TEIF7 :  1; //!<[27] Channel x transfer error flag (x = 1 ..7)
    } B;
    __I  uint32_t  R;

    explicit ISR_DEF (volatile ISR_DEF & o) noexcept { R = o.R; };
  };
  union IFCR_DEF    {  //!< interrupt flag clear register
    struct {
      __O  ONE_BIT  CGIF1  :  1; //!<[00] Channel x global interrupt clear (x = 1 ..7)
      __O  ONE_BIT  CTCIF1 :  1; //!<[01] Channel x transfer complete clear (x = 1 ..7)
      __O  ONE_BIT  CHTIF1 :  1; //!<[02] Channel x half transfer clear (x = 1 ..7)
      __O  ONE_BIT  CTEIF1 :  1; //!<[03] Channel x transfer error clear (x = 1 ..7)
      __O  ONE_BIT  CGIF2  :  1; //!<[04] Channel x global interrupt clear (x = 1 ..7)
      __O  ONE_BIT  CTCIF2 :  1; //!<[05] Channel x transfer complete clear (x = 1 ..7)
      __O  ONE_BIT  CHTIF2 :  1; //!<[06] Channel x half transfer clear (x = 1 ..7)
      __O  ONE_BIT  CTEIF2 :  1; //!<[07] Channel x transfer error clear (x = 1 ..7)
      __O  ONE_BIT  CGIF3  :  1; //!<[08] Channel x global interrupt clear (x = 1 ..7)
      __O  ONE_BIT  CTCIF3 :  1; //!<[09] Channel x transfer complete clear (x = 1 ..7)
      __O  ONE_BIT  CHTIF3 :  1; //!<[10] Channel x half transfer clear (x = 1 ..7)
      __O  ONE_BIT  CTEIF3 :  1; //!<[11] Channel x transfer error clear (x = 1 ..7)
      __O  ONE_BIT  CGIF4  :  1; //!<[12] Channel x global interrupt clear (x = 1 ..7)
      __O  ONE_BIT  CTCIF4 :  1; //!<[13] Channel x transfer complete clear (x = 1 ..7)
      __O  ONE_BIT  CHTIF4 :  1; //!<[14] Channel x half transfer clear (x = 1 ..7)
      __O  ONE_BIT  CTEIF4 :  1; //!<[15] Channel x transfer error clear (x = 1 ..7)
      __O  ONE_BIT  CGIF5  :  1; //!<[16] Channel x global interrupt clear (x = 1 ..7)
      __O  ONE_BIT  CTCIF5 :  1; //!<[17] Channel x transfer complete clear (x = 1 ..7)
      __O  ONE_BIT  CHTIF5 :  1; //!<[18] Channel x half transfer clear (x = 1 ..7)
      __O  ONE_BIT  CTEIF5 :  1; //!<[19] Channel x transfer error clear (x = 1 ..7)
      __O  ONE_BIT  CGIF6  :  1; //!<[20] Channel x global interrupt clear (x = 1 ..7)
      __O  ONE_BIT  CTCIF6 :  1; //!<[21] Channel x transfer complete clear (x = 1 ..7)
      __O  ONE_BIT  CHTIF6 :  1; //!<[22] Channel x half transfer clear (x = 1 ..7)
      __O  ONE_BIT  CTEIF6 :  1; //!<[23] Channel x transfer error clear (x = 1 ..7)
      __O  ONE_BIT  CGIF7  :  1; //!<[24] Channel x global interrupt clear (x = 1 ..7)
      __O  ONE_BIT  CTCIF7 :  1; //!<[25] Channel x transfer complete clear (x = 1 ..7)
      __O  ONE_BIT  CHTIF7 :  1; //!<[26] Channel x half transfer clear (x = 1 ..7)
      __O  ONE_BIT  CTEIF7 :  1; //!<[27] Channel x transfer error clear (x = 1 ..7)
    } B;
    __O  uint32_t  R;
    explicit IFCR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IFCR_DEF r;
      R = f (r);
    }
  };
  union CCR1_DEF    {  //!< channel x configuration register
    struct {
      __IO ONE_BIT    EN      :  1; //!<[00] Channel enable
      __IO ONE_BIT    TCIE    :  1; //!<[01] Transfer complete interrupt enable
      __IO ONE_BIT    HTIE    :  1; //!<[02] Half transfer interrupt enable
      __IO ONE_BIT    TEIE    :  1; //!<[03] Transfer error interrupt enable
      __IO ONE_BIT    DIR     :  1; //!<[04] Data transfer direction
      __IO ONE_BIT    CIRC    :  1; //!<[05] Circular mode
      __IO ONE_BIT    PINC    :  1; //!<[06] Peripheral increment mode
      __IO ONE_BIT    MINC    :  1; //!<[07] Memory increment mode
      __IO uint32_t   PSIZE   :  2; //!<[08] Peripheral size
      __IO uint32_t   MSIZE   :  2; //!<[10] Memory size
      __IO uint32_t   PL      :  2; //!<[12] Channel priority level
      __IO ONE_BIT    MEM2MEM :  1; //!<[14] Memory to memory mode
    } B;
    __IO uint32_t  R;
    explicit CCR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CCR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CCR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CNDTR1_DEF  {  //!< channel x number of data register
    struct {
      __IO uint32_t   NDT : 16; //!<[00] Number of data to transfer
    } B;
    __IO uint32_t  R;
    explicit CNDTR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CNDTR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CNDTR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CPAR1_DEF   {  //!< channel x peripheral address register
    struct {
      __IO uint32_t   PA : 32; //!<[00] Peripheral address
    } B;
    __IO uint32_t  R;
    explicit CPAR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CPAR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CPAR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CMAR1_DEF   {  //!< channel x memory address register
    struct {
      __IO uint32_t   MA : 32; //!<[00] Memory address
    } B;
    __IO uint32_t  R;
    explicit CMAR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CMAR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CMAR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CCR2_DEF    {  //!< channel x configuration register
    struct {
      __IO ONE_BIT    EN      :  1; //!<[00] Channel enable
      __IO ONE_BIT    TCIE    :  1; //!<[01] Transfer complete interrupt enable
      __IO ONE_BIT    HTIE    :  1; //!<[02] Half transfer interrupt enable
      __IO ONE_BIT    TEIE    :  1; //!<[03] Transfer error interrupt enable
      __IO ONE_BIT    DIR     :  1; //!<[04] Data transfer direction
      __IO ONE_BIT    CIRC    :  1; //!<[05] Circular mode
      __IO ONE_BIT    PINC    :  1; //!<[06] Peripheral increment mode
      __IO ONE_BIT    MINC    :  1; //!<[07] Memory increment mode
      __IO uint32_t   PSIZE   :  2; //!<[08] Peripheral size
      __IO uint32_t   MSIZE   :  2; //!<[10] Memory size
      __IO uint32_t   PL      :  2; //!<[12] Channel priority level
      __IO ONE_BIT    MEM2MEM :  1; //!<[14] Memory to memory mode
    } B;
    __IO uint32_t  R;
    explicit CCR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CCR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CCR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CNDTR2_DEF  {  //!< channel x number of data register
    struct {
      __IO uint32_t   NDT : 16; //!<[00] Number of data to transfer
    } B;
    __IO uint32_t  R;
    explicit CNDTR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CNDTR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CNDTR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CPAR2_DEF   {  //!< channel x peripheral address register
    struct {
      __IO uint32_t   PA : 32; //!<[00] Peripheral address
    } B;
    __IO uint32_t  R;
    explicit CPAR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CPAR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CPAR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CMAR2_DEF   {  //!< channel x memory address register
    struct {
      __IO uint32_t   MA : 32; //!<[00] Memory address
    } B;
    __IO uint32_t  R;
    explicit CMAR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CMAR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CMAR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CCR3_DEF    {  //!< channel x configuration register
    struct {
      __IO ONE_BIT    EN      :  1; //!<[00] Channel enable
      __IO ONE_BIT    TCIE    :  1; //!<[01] Transfer complete interrupt enable
      __IO ONE_BIT    HTIE    :  1; //!<[02] Half transfer interrupt enable
      __IO ONE_BIT    TEIE    :  1; //!<[03] Transfer error interrupt enable
      __IO ONE_BIT    DIR     :  1; //!<[04] Data transfer direction
      __IO ONE_BIT    CIRC    :  1; //!<[05] Circular mode
      __IO ONE_BIT    PINC    :  1; //!<[06] Peripheral increment mode
      __IO ONE_BIT    MINC    :  1; //!<[07] Memory increment mode
      __IO uint32_t   PSIZE   :  2; //!<[08] Peripheral size
      __IO uint32_t   MSIZE   :  2; //!<[10] Memory size
      __IO uint32_t   PL      :  2; //!<[12] Channel priority level
      __IO ONE_BIT    MEM2MEM :  1; //!<[14] Memory to memory mode
    } B;
    __IO uint32_t  R;
    explicit CCR3_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CCR3_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CCR3_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CNDTR3_DEF  {  //!< channel x number of data register
    struct {
      __IO uint32_t   NDT : 16; //!<[00] Number of data to transfer
    } B;
    __IO uint32_t  R;
    explicit CNDTR3_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CNDTR3_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CNDTR3_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CPAR3_DEF   {  //!< channel x peripheral address register
    struct {
      __IO uint32_t   PA : 32; //!<[00] Peripheral address
    } B;
    __IO uint32_t  R;
    explicit CPAR3_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CPAR3_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CPAR3_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CMAR3_DEF   {  //!< channel x memory address register
    struct {
      __IO uint32_t   MA : 32; //!<[00] Memory address
    } B;
    __IO uint32_t  R;
    explicit CMAR3_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CMAR3_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CMAR3_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CCR4_DEF    {  //!< channel x configuration register
    struct {
      __IO ONE_BIT    EN      :  1; //!<[00] Channel enable
      __IO ONE_BIT    TCIE    :  1; //!<[01] Transfer complete interrupt enable
      __IO ONE_BIT    HTIE    :  1; //!<[02] Half transfer interrupt enable
      __IO ONE_BIT    TEIE    :  1; //!<[03] Transfer error interrupt enable
      __IO ONE_BIT    DIR     :  1; //!<[04] Data transfer direction
      __IO ONE_BIT    CIRC    :  1; //!<[05] Circular mode
      __IO ONE_BIT    PINC    :  1; //!<[06] Peripheral increment mode
      __IO ONE_BIT    MINC    :  1; //!<[07] Memory increment mode
      __IO uint32_t   PSIZE   :  2; //!<[08] Peripheral size
      __IO uint32_t   MSIZE   :  2; //!<[10] Memory size
      __IO uint32_t   PL      :  2; //!<[12] Channel priority level
      __IO ONE_BIT    MEM2MEM :  1; //!<[14] Memory to memory mode
    } B;
    __IO uint32_t  R;
    explicit CCR4_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CCR4_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CCR4_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CNDTR4_DEF  {  //!< channel x number of data register
    struct {
      __IO uint32_t   NDT : 16; //!<[00] Number of data to transfer
    } B;
    __IO uint32_t  R;
    explicit CNDTR4_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CNDTR4_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CNDTR4_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CPAR4_DEF   {  //!< channel x peripheral address register
    struct {
      __IO uint32_t   PA : 32; //!<[00] Peripheral address
    } B;
    __IO uint32_t  R;
    explicit CPAR4_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CPAR4_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CPAR4_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CMAR4_DEF   {  //!< channel x memory address register
    struct {
      __IO uint32_t   MA : 32; //!<[00] Memory address
    } B;
    __IO uint32_t  R;
    explicit CMAR4_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CMAR4_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CMAR4_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CCR5_DEF    {  //!< channel x configuration register
    struct {
      __IO ONE_BIT    EN      :  1; //!<[00] Channel enable
      __IO ONE_BIT    TCIE    :  1; //!<[01] Transfer complete interrupt enable
      __IO ONE_BIT    HTIE    :  1; //!<[02] Half transfer interrupt enable
      __IO ONE_BIT    TEIE    :  1; //!<[03] Transfer error interrupt enable
      __IO ONE_BIT    DIR     :  1; //!<[04] Data transfer direction
      __IO ONE_BIT    CIRC    :  1; //!<[05] Circular mode
      __IO ONE_BIT    PINC    :  1; //!<[06] Peripheral increment mode
      __IO ONE_BIT    MINC    :  1; //!<[07] Memory increment mode
      __IO uint32_t   PSIZE   :  2; //!<[08] Peripheral size
      __IO uint32_t   MSIZE   :  2; //!<[10] Memory size
      __IO uint32_t   PL      :  2; //!<[12] Channel priority level
      __IO ONE_BIT    MEM2MEM :  1; //!<[14] Memory to memory mode
    } B;
    __IO uint32_t  R;
    explicit CCR5_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CCR5_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CCR5_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CNDTR5_DEF  {  //!< channel x number of data register
    struct {
      __IO uint32_t   NDT : 16; //!<[00] Number of data to transfer
    } B;
    __IO uint32_t  R;
    explicit CNDTR5_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CNDTR5_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CNDTR5_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CPAR5_DEF   {  //!< channel x peripheral address register
    struct {
      __IO uint32_t   PA : 32; //!<[00] Peripheral address
    } B;
    __IO uint32_t  R;
    explicit CPAR5_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CPAR5_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CPAR5_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CMAR5_DEF   {  //!< channel x memory address register
    struct {
      __IO uint32_t   MA : 32; //!<[00] Memory address
    } B;
    __IO uint32_t  R;
    explicit CMAR5_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CMAR5_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CMAR5_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CCR6_DEF    {  //!< channel x configuration register
    struct {
      __IO ONE_BIT    EN      :  1; //!<[00] Channel enable
      __IO ONE_BIT    TCIE    :  1; //!<[01] Transfer complete interrupt enable
      __IO ONE_BIT    HTIE    :  1; //!<[02] Half transfer interrupt enable
      __IO ONE_BIT    TEIE    :  1; //!<[03] Transfer error interrupt enable
      __IO ONE_BIT    DIR     :  1; //!<[04] Data transfer direction
      __IO ONE_BIT    CIRC    :  1; //!<[05] Circular mode
      __IO ONE_BIT    PINC    :  1; //!<[06] Peripheral increment mode
      __IO ONE_BIT    MINC    :  1; //!<[07] Memory increment mode
      __IO uint32_t   PSIZE   :  2; //!<[08] Peripheral size
      __IO uint32_t   MSIZE   :  2; //!<[10] Memory size
      __IO uint32_t   PL      :  2; //!<[12] Channel priority level
      __IO ONE_BIT    MEM2MEM :  1; //!<[14] Memory to memory mode
    } B;
    __IO uint32_t  R;
    explicit CCR6_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CCR6_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CCR6_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CNDTR6_DEF  {  //!< channel x number of data register
    struct {
      __IO uint32_t   NDT : 16; //!<[00] Number of data to transfer
    } B;
    __IO uint32_t  R;
    explicit CNDTR6_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CNDTR6_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CNDTR6_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CPAR6_DEF   {  //!< channel x peripheral address register
    struct {
      __IO uint32_t   PA : 32; //!<[00] Peripheral address
    } B;
    __IO uint32_t  R;
    explicit CPAR6_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CPAR6_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CPAR6_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CMAR6_DEF   {  //!< channel x memory address register
    struct {
      __IO uint32_t   MA : 32; //!<[00] Memory address
    } B;
    __IO uint32_t  R;
    explicit CMAR6_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CMAR6_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CMAR6_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CCR7_DEF    {  //!< channel x configuration register
    struct {
      __IO ONE_BIT    EN      :  1; //!<[00] Channel enable
      __IO ONE_BIT    TCIE    :  1; //!<[01] Transfer complete interrupt enable
      __IO ONE_BIT    HTIE    :  1; //!<[02] Half transfer interrupt enable
      __IO ONE_BIT    TEIE    :  1; //!<[03] Transfer error interrupt enable
      __IO ONE_BIT    DIR     :  1; //!<[04] Data transfer direction
      __IO ONE_BIT    CIRC    :  1; //!<[05] Circular mode
      __IO ONE_BIT    PINC    :  1; //!<[06] Peripheral increment mode
      __IO ONE_BIT    MINC    :  1; //!<[07] Memory increment mode
      __IO uint32_t   PSIZE   :  2; //!<[08] Peripheral size
      __IO uint32_t   MSIZE   :  2; //!<[10] Memory size
      __IO uint32_t   PL      :  2; //!<[12] Channel priority level
      __IO ONE_BIT    MEM2MEM :  1; //!<[14] Memory to memory mode
    } B;
    __IO uint32_t  R;
    explicit CCR7_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CCR7_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CCR7_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CNDTR7_DEF  {  //!< channel x number of data register
    struct {
      __IO uint32_t   NDT : 16; //!<[00] Number of data to transfer
    } B;
    __IO uint32_t  R;
    explicit CNDTR7_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CNDTR7_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CNDTR7_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CPAR7_DEF   {  //!< channel x peripheral address register
    struct {
      __IO uint32_t   PA : 32; //!<[00] Peripheral address
    } B;
    __IO uint32_t  R;
    explicit CPAR7_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CPAR7_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CPAR7_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CMAR7_DEF   {  //!< channel x memory address register
    struct {
      __IO uint32_t   MA : 32; //!<[00] Memory address
    } B;
    __IO uint32_t  R;
    explicit CMAR7_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CMAR7_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CMAR7_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CSELR_DEF   {  //!< channel selection register
    struct {
      __IO uint32_t   C1S :  4; //!<[00] DMA channel 1 selection
      __IO uint32_t   C2S :  4; //!<[04] DMA channel 2 selection
      __IO uint32_t   C3S :  4; //!<[08] DMA channel 3 selection
      __IO uint32_t   C4S :  4; //!<[12] DMA channel 4 selection
      __IO uint32_t   C5S :  4; //!<[16] DMA channel 5 selection
      __IO uint32_t   C6S :  4; //!<[20] DMA channel 6 selection
      __IO uint32_t   C7S :  4; //!<[24] DMA channel 7 selection
    } B;
    __IO uint32_t  R;
    explicit CSELR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CSELR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CSELR_DEF r; r.R = R;
      R = f (r);
    }
  };
  // PERIPHERAL DMA1 REGISTERS INSTANCES
  __I  ISR_DEF                 ISR ;  //!< [0000](04)[0x00000000]
  __O  IFCR_DEF               IFCR ;  //!< [0004](04)[0x00000000]
  __IO CCR1_DEF               CCR1 ;  //!< [0008](04)[0x00000000]
  __IO CNDTR1_DEF           CNDTR1 ;  //!< [000c](04)[0x00000000]
  __IO CPAR1_DEF             CPAR1 ;  //!< [0010](04)[0x00000000]
  __IO CMAR1_DEF             CMAR1 ;  //!< [0014](04)[0x00000000]
       uint32_t          UNUSED0 ;  //!< [0018](04)[0xFFFFFFFF]
  __IO CCR2_DEF               CCR2 ;  //!< [001c](04)[0x00000000]
  __IO CNDTR2_DEF           CNDTR2 ;  //!< [0020](04)[0x00000000]
  __IO CPAR2_DEF             CPAR2 ;  //!< [0024](04)[0x00000000]
  __IO CMAR2_DEF             CMAR2 ;  //!< [0028](04)[0x00000000]
       uint32_t          UNUSED1 ;  //!< [002c](04)[0xFFFFFFFF]
  __IO CCR3_DEF               CCR3 ;  //!< [0030](04)[0x00000000]
  __IO CNDTR3_DEF           CNDTR3 ;  //!< [0034](04)[0x00000000]
  __IO CPAR3_DEF             CPAR3 ;  //!< [0038](04)[0x00000000]
  __IO CMAR3_DEF             CMAR3 ;  //!< [003c](04)[0x00000000]
       uint32_t          UNUSED2 ;  //!< [0040](04)[0xFFFFFFFF]
  __IO CCR4_DEF               CCR4 ;  //!< [0044](04)[0x00000000]
  __IO CNDTR4_DEF           CNDTR4 ;  //!< [0048](04)[0x00000000]
  __IO CPAR4_DEF             CPAR4 ;  //!< [004c](04)[0x00000000]
  __IO CMAR4_DEF             CMAR4 ;  //!< [0050](04)[0x00000000]
       uint32_t          UNUSED3 ;  //!< [0054](04)[0xFFFFFFFF]
  __IO CCR5_DEF               CCR5 ;  //!< [0058](04)[0x00000000]
  __IO CNDTR5_DEF           CNDTR5 ;  //!< [005c](04)[0x00000000]
  __IO CPAR5_DEF             CPAR5 ;  //!< [0060](04)[0x00000000]
  __IO CMAR5_DEF             CMAR5 ;  //!< [0064](04)[0x00000000]
       uint32_t          UNUSED4 ;  //!< [0068](04)[0xFFFFFFFF]
  __IO CCR6_DEF               CCR6 ;  //!< [006c](04)[0x00000000]
  __IO CNDTR6_DEF           CNDTR6 ;  //!< [0070](04)[0x00000000]
  __IO CPAR6_DEF             CPAR6 ;  //!< [0074](04)[0x00000000]
  __IO CMAR6_DEF             CMAR6 ;  //!< [0078](04)[0x00000000]
       uint32_t          UNUSED5 ;  //!< [007c](04)[0xFFFFFFFF]
  __IO CCR7_DEF               CCR7 ;  //!< [0080](04)[0x00000000]
  __IO CNDTR7_DEF           CNDTR7 ;  //!< [0084](04)[0x00000000]
  __IO CPAR7_DEF             CPAR7 ;  //!< [0088](04)[0x00000000]
  __IO CMAR7_DEF             CMAR7 ;  //!< [008c](04)[0x00000000]
       uint32_t          UNUSED6 [6];  //!< [0090](18)[0xFFFFFFFF]
  __IO CSELR_DEF             CSELR ;  //!< [00a8](04)[0x00000000]
}; /* total size = 0x0400, struct size = 0x00AC */

// ////////////////////+++ CRC +-+//////////////////// //
struct CRC_Type           { /*!< Cyclic redundancy check calculation unit */
  union DR_DEF      {  //!< Data register
    struct {
      __IO uint32_t   DR : 32; //!<[00] Data register bits
    } B;
    __IO uint32_t  R;
    explicit DR_DEF () noexcept { R = 0xffffffffu; }
    template<typename F> void setbit (F f) volatile {
      DR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union IDR_DEF     {  //!< Independent data register
    struct {
      __IO uint32_t   IDR :  8; //!<[00] General-purpose 8-bit data register bits
    } B;
    __IO uint32_t  R;
    explicit IDR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IDR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      IDR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CR_DEF      {  //!< Control register
    struct {
      __O  ONE_BIT    RESET    :  1; //!<[00] RESET bit
           uint32_t   UNUSED0  :  2; //!<[01] 
      __IO uint32_t   POLYSIZE :  2; //!<[03] Polynomial size
      __IO uint32_t   REV_IN   :  2; //!<[05] Reverse input data
      __IO ONE_BIT    REV_OUT  :  1; //!<[07] Reverse output data
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
  union INIT_DEF    {  //!< Initial CRC value
    struct {
      __IO uint32_t   CRC_INIT : 32; //!<[00] Programmable initial CRC value
    } B;
    __IO uint32_t  R;
    explicit INIT_DEF () noexcept { R = 0xffffffffu; }
    template<typename F> void setbit (F f) volatile {
      INIT_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      INIT_DEF r; r.R = R;
      R = f (r);
    }
  };
  union POL_DEF     {  //!< polynomial
    struct {
      __IO uint32_t   Polynomialcoefficients : 32; //!<[00] Programmable polynomial
    } B;
    __IO uint32_t  R;
    explicit POL_DEF () noexcept { R = 0x04c11db7u; }
    template<typename F> void setbit (F f) volatile {
      POL_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      POL_DEF r; r.R = R;
      R = f (r);
    }
  };
  // PERIPHERAL CRC REGISTERS INSTANCES
  __IO DR_DEF                   DR ;  //!< [0000](04)[0xFFFFFFFF]
  __IO IDR_DEF                 IDR ;  //!< [0004](04)[0x00000000]
  __IO CR_DEF                   CR ;  //!< [0008](04)[0x00000000]
       uint32_t          UNUSED0 ;  //!< [000c](04)[0xFFFFFFFF]
  __IO INIT_DEF               INIT ;  //!< [0010](04)[0xFFFFFFFF]
  __IO POL_DEF                 POL ;  //!< [0014](04)[0x04C11DB7]
}; /* total size = 0x0400, struct size = 0x0018 */

// ////////////////////+++ LCD +-+//////////////////// //
struct LCD_Type           { /*!< Liquid crystal display controller */
  union CR_DEF       {  //!< control register
    struct {
      __IO ONE_BIT    LCDEN   :  1; //!<[00] LCD controller enable
      __IO ONE_BIT    VSEL    :  1; //!<[01] Voltage source selection
      __IO uint32_t   DUTY    :  3; //!<[02] Duty selection
      __IO uint32_t   BIAS    :  2; //!<[05] Bias selector
      __IO ONE_BIT    MUX_SEG :  1; //!<[07] Mux segment enable
      __IO ONE_BIT    BUFEN   :  1; //!<[08] Voltage output buffer enable
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
  union FCR_DEF      {  //!< frame control register
    struct {
      __IO ONE_BIT    HD      :  1; //!<[00] High drive enable
      __IO ONE_BIT    SOFIE   :  1; //!<[01] Start of frame interrupt enable
           ONE_BIT    UNUSED0 :  1; //!<[02] 
      __IO ONE_BIT    UDDIE   :  1; //!<[03] Update display done interrupt enable
      __IO uint32_t   PON     :  3; //!<[04] Pulse ON duration
      __IO uint32_t   DEAD    :  3; //!<[07] Dead time duration
      __IO uint32_t   CC      :  3; //!<[10] Contrast control
      __IO uint32_t   BLINKF  :  3; //!<[13] Blink frequency selection
      __IO uint32_t   BLINK   :  2; //!<[16] Blink mode selection
      __IO uint32_t   DIV     :  4; //!<[18] DIV clock divider
      __IO uint32_t   PS      :  4; //!<[22] PS 16-bit prescaler
    } B;
    __IO uint32_t  R;
    explicit FCR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      FCR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      FCR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union SR_DEF       {  //!< status register
    struct {
      __I  ONE_BIT  ENS   :  1; //!<[00] ENS
      __I  ONE_BIT  SOF   :  1; //!<[01] Start of frame flag
      __O  ONE_BIT  UDR   :  1; //!<[02] Update display request
      __I  ONE_BIT  UDD   :  1; //!<[03] Update Display Done
      __I  ONE_BIT  RDY   :  1; //!<[04] Ready flag
      __I  ONE_BIT  FCRSF :  1; //!<[05] LCD Frame Control Register Synchronization flag
    } B;
    __IO uint32_t  R;
    explicit SR_DEF () noexcept { R = 0x00000020u; }
    template<typename F> void setbit (F f) volatile {
      SR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      SR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CLR_DEF      {  //!< clear register
    struct {
           ONE_BIT  UNUSED0 :  1; //!<[00] 
      __O  ONE_BIT  SOFC    :  1; //!<[01] Start of frame flag clear
           ONE_BIT  UNUSED1 :  1; //!<[02] 
      __O  ONE_BIT  UDDC    :  1; //!<[03] Update display done clear
    } B;
    __O  uint32_t  R;
    explicit CLR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CLR_DEF r;
      R = f (r);
    }
  };
  union RAM_COM0_DEF {  //!< display memory
    struct {
      __IO ONE_BIT  S00 :  1; //!<[00] S00
      __IO ONE_BIT  S01 :  1; //!<[01] S01
      __IO ONE_BIT  S02 :  1; //!<[02] S02
      __IO ONE_BIT  S03 :  1; //!<[03] S03
      __IO ONE_BIT  S04 :  1; //!<[04] S04
      __IO ONE_BIT  S05 :  1; //!<[05] S05
      __IO ONE_BIT  S06 :  1; //!<[06] S06
      __IO ONE_BIT  S07 :  1; //!<[07] S07
      __IO ONE_BIT  S08 :  1; //!<[08] S08
      __IO ONE_BIT  S09 :  1; //!<[09] S09
      __IO ONE_BIT  S10 :  1; //!<[10] S10
      __IO ONE_BIT  S11 :  1; //!<[11] S11
      __IO ONE_BIT  S12 :  1; //!<[12] S12
      __IO ONE_BIT  S13 :  1; //!<[13] S13
      __IO ONE_BIT  S14 :  1; //!<[14] S14
      __IO ONE_BIT  S15 :  1; //!<[15] S15
      __IO ONE_BIT  S16 :  1; //!<[16] S16
      __IO ONE_BIT  S17 :  1; //!<[17] S17
      __IO ONE_BIT  S18 :  1; //!<[18] S18
      __IO ONE_BIT  S19 :  1; //!<[19] S19
      __IO ONE_BIT  S20 :  1; //!<[20] S20
      __IO ONE_BIT  S21 :  1; //!<[21] S21
      __IO ONE_BIT  S22 :  1; //!<[22] S22
      __IO ONE_BIT  S23 :  1; //!<[23] S23
      __IO ONE_BIT  S24 :  1; //!<[24] S24
      __IO ONE_BIT  S25 :  1; //!<[25] S25
      __IO ONE_BIT  S26 :  1; //!<[26] S26
      __IO ONE_BIT  S27 :  1; //!<[27] S27
      __IO ONE_BIT  S28 :  1; //!<[28] S28
      __IO ONE_BIT  S29 :  1; //!<[29] S29
      __IO ONE_BIT  S30 :  1; //!<[30] S30
    } B;
    __IO uint32_t  R;
    explicit RAM_COM0_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      RAM_COM0_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      RAM_COM0_DEF r; r.R = R;
      R = f (r);
    }
  };
  union RAM_COM1_DEF {  //!< display memory
    struct {
      __IO ONE_BIT  S00 :  1; //!<[00] S00
      __IO ONE_BIT  S01 :  1; //!<[01] S01
      __IO ONE_BIT  S02 :  1; //!<[02] S02
      __IO ONE_BIT  S03 :  1; //!<[03] S03
      __IO ONE_BIT  S04 :  1; //!<[04] S04
      __IO ONE_BIT  S05 :  1; //!<[05] S05
      __IO ONE_BIT  S06 :  1; //!<[06] S06
      __IO ONE_BIT  S07 :  1; //!<[07] S07
      __IO ONE_BIT  S08 :  1; //!<[08] S08
      __IO ONE_BIT  S09 :  1; //!<[09] S09
      __IO ONE_BIT  S10 :  1; //!<[10] S10
      __IO ONE_BIT  S11 :  1; //!<[11] S11
      __IO ONE_BIT  S12 :  1; //!<[12] S12
      __IO ONE_BIT  S13 :  1; //!<[13] S13
      __IO ONE_BIT  S14 :  1; //!<[14] S14
      __IO ONE_BIT  S15 :  1; //!<[15] S15
      __IO ONE_BIT  S16 :  1; //!<[16] S16
      __IO ONE_BIT  S17 :  1; //!<[17] S17
      __IO ONE_BIT  S18 :  1; //!<[18] S18
      __IO ONE_BIT  S19 :  1; //!<[19] S19
      __IO ONE_BIT  S20 :  1; //!<[20] S20
      __IO ONE_BIT  S21 :  1; //!<[21] S21
      __IO ONE_BIT  S22 :  1; //!<[22] S22
      __IO ONE_BIT  S23 :  1; //!<[23] S23
      __IO ONE_BIT  S24 :  1; //!<[24] S24
      __IO ONE_BIT  S25 :  1; //!<[25] S25
      __IO ONE_BIT  S26 :  1; //!<[26] S26
      __IO ONE_BIT  S27 :  1; //!<[27] S27
      __IO ONE_BIT  S28 :  1; //!<[28] S28
      __IO ONE_BIT  S29 :  1; //!<[29] S29
      __IO ONE_BIT  S30 :  1; //!<[30] S30
      __IO ONE_BIT  S31 :  1; //!<[31] S31
    } B;
    __IO uint32_t  R;
    explicit RAM_COM1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      RAM_COM1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      RAM_COM1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union RAM_COM2_DEF {  //!< display memory
    struct {
      __IO ONE_BIT  S00 :  1; //!<[00] S00
      __IO ONE_BIT  S01 :  1; //!<[01] S01
      __IO ONE_BIT  S02 :  1; //!<[02] S02
      __IO ONE_BIT  S03 :  1; //!<[03] S03
      __IO ONE_BIT  S04 :  1; //!<[04] S04
      __IO ONE_BIT  S05 :  1; //!<[05] S05
      __IO ONE_BIT  S06 :  1; //!<[06] S06
      __IO ONE_BIT  S07 :  1; //!<[07] S07
      __IO ONE_BIT  S08 :  1; //!<[08] S08
      __IO ONE_BIT  S09 :  1; //!<[09] S09
      __IO ONE_BIT  S10 :  1; //!<[10] S10
      __IO ONE_BIT  S11 :  1; //!<[11] S11
      __IO ONE_BIT  S12 :  1; //!<[12] S12
      __IO ONE_BIT  S13 :  1; //!<[13] S13
      __IO ONE_BIT  S14 :  1; //!<[14] S14
      __IO ONE_BIT  S15 :  1; //!<[15] S15
      __IO ONE_BIT  S16 :  1; //!<[16] S16
      __IO ONE_BIT  S17 :  1; //!<[17] S17
      __IO ONE_BIT  S18 :  1; //!<[18] S18
      __IO ONE_BIT  S19 :  1; //!<[19] S19
      __IO ONE_BIT  S20 :  1; //!<[20] S20
      __IO ONE_BIT  S21 :  1; //!<[21] S21
      __IO ONE_BIT  S22 :  1; //!<[22] S22
      __IO ONE_BIT  S23 :  1; //!<[23] S23
      __IO ONE_BIT  S24 :  1; //!<[24] S24
      __IO ONE_BIT  S25 :  1; //!<[25] S25
      __IO ONE_BIT  S26 :  1; //!<[26] S26
      __IO ONE_BIT  S27 :  1; //!<[27] S27
      __IO ONE_BIT  S28 :  1; //!<[28] S28
      __IO ONE_BIT  S29 :  1; //!<[29] S29
      __IO ONE_BIT  S30 :  1; //!<[30] S30
      __IO ONE_BIT  S31 :  1; //!<[31] S31
    } B;
    __IO uint32_t  R;
    explicit RAM_COM2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      RAM_COM2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      RAM_COM2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union RAM_COM3_DEF {  //!< display memory
    struct {
      __IO ONE_BIT  S00 :  1; //!<[00] S00
      __IO ONE_BIT  S01 :  1; //!<[01] S01
      __IO ONE_BIT  S02 :  1; //!<[02] S02
      __IO ONE_BIT  S03 :  1; //!<[03] S03
      __IO ONE_BIT  S04 :  1; //!<[04] S04
      __IO ONE_BIT  S05 :  1; //!<[05] S05
      __IO ONE_BIT  S06 :  1; //!<[06] S06
      __IO ONE_BIT  S07 :  1; //!<[07] S07
      __IO ONE_BIT  S08 :  1; //!<[08] S08
      __IO ONE_BIT  S09 :  1; //!<[09] S09
      __IO ONE_BIT  S10 :  1; //!<[10] S10
      __IO ONE_BIT  S11 :  1; //!<[11] S11
      __IO ONE_BIT  S12 :  1; //!<[12] S12
      __IO ONE_BIT  S13 :  1; //!<[13] S13
      __IO ONE_BIT  S14 :  1; //!<[14] S14
      __IO ONE_BIT  S15 :  1; //!<[15] S15
      __IO ONE_BIT  S16 :  1; //!<[16] S16
      __IO ONE_BIT  S17 :  1; //!<[17] S17
      __IO ONE_BIT  S18 :  1; //!<[18] S18
      __IO ONE_BIT  S19 :  1; //!<[19] S19
      __IO ONE_BIT  S20 :  1; //!<[20] S20
      __IO ONE_BIT  S21 :  1; //!<[21] S21
      __IO ONE_BIT  S22 :  1; //!<[22] S22
      __IO ONE_BIT  S23 :  1; //!<[23] S23
      __IO ONE_BIT  S24 :  1; //!<[24] S24
      __IO ONE_BIT  S25 :  1; //!<[25] S25
      __IO ONE_BIT  S26 :  1; //!<[26] S26
      __IO ONE_BIT  S27 :  1; //!<[27] S27
      __IO ONE_BIT  S28 :  1; //!<[28] S28
      __IO ONE_BIT  S29 :  1; //!<[29] S29
      __IO ONE_BIT  S30 :  1; //!<[30] S30
      __IO ONE_BIT  S31 :  1; //!<[31] S31
    } B;
    __IO uint32_t  R;
    explicit RAM_COM3_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      RAM_COM3_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      RAM_COM3_DEF r; r.R = R;
      R = f (r);
    }
  };
  union RAM_COM4_DEF {  //!< display memory
    struct {
      __IO ONE_BIT  S00 :  1; //!<[00] S00
      __IO ONE_BIT  S01 :  1; //!<[01] S01
      __IO ONE_BIT  S02 :  1; //!<[02] S02
      __IO ONE_BIT  S03 :  1; //!<[03] S03
      __IO ONE_BIT  S04 :  1; //!<[04] S04
      __IO ONE_BIT  S05 :  1; //!<[05] S05
      __IO ONE_BIT  S06 :  1; //!<[06] S06
      __IO ONE_BIT  S07 :  1; //!<[07] S07
      __IO ONE_BIT  S08 :  1; //!<[08] S08
      __IO ONE_BIT  S09 :  1; //!<[09] S09
      __IO ONE_BIT  S10 :  1; //!<[10] S10
      __IO ONE_BIT  S11 :  1; //!<[11] S11
      __IO ONE_BIT  S12 :  1; //!<[12] S12
      __IO ONE_BIT  S13 :  1; //!<[13] S13
      __IO ONE_BIT  S14 :  1; //!<[14] S14
      __IO ONE_BIT  S15 :  1; //!<[15] S15
      __IO ONE_BIT  S16 :  1; //!<[16] S16
      __IO ONE_BIT  S17 :  1; //!<[17] S17
      __IO ONE_BIT  S18 :  1; //!<[18] S18
      __IO ONE_BIT  S19 :  1; //!<[19] S19
      __IO ONE_BIT  S20 :  1; //!<[20] S20
      __IO ONE_BIT  S21 :  1; //!<[21] S21
      __IO ONE_BIT  S22 :  1; //!<[22] S22
      __IO ONE_BIT  S23 :  1; //!<[23] S23
      __IO ONE_BIT  S24 :  1; //!<[24] S24
      __IO ONE_BIT  S25 :  1; //!<[25] S25
      __IO ONE_BIT  S26 :  1; //!<[26] S26
      __IO ONE_BIT  S27 :  1; //!<[27] S27
      __IO ONE_BIT  S28 :  1; //!<[28] S28
      __IO ONE_BIT  S29 :  1; //!<[29] S29
      __IO ONE_BIT  S30 :  1; //!<[30] S30
      __IO ONE_BIT  S31 :  1; //!<[31] S31
    } B;
    __IO uint32_t  R;
    explicit RAM_COM4_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      RAM_COM4_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      RAM_COM4_DEF r; r.R = R;
      R = f (r);
    }
  };
  union RAM_COM5_DEF {  //!< display memory
    struct {
      __IO ONE_BIT  S00 :  1; //!<[00] S00
      __IO ONE_BIT  S01 :  1; //!<[01] S01
      __IO ONE_BIT  S02 :  1; //!<[02] S02
      __IO ONE_BIT  S03 :  1; //!<[03] S03
      __IO ONE_BIT  S04 :  1; //!<[04] S04
      __IO ONE_BIT  S05 :  1; //!<[05] S05
      __IO ONE_BIT  S06 :  1; //!<[06] S06
      __IO ONE_BIT  S07 :  1; //!<[07] S07
      __IO ONE_BIT  S08 :  1; //!<[08] S08
      __IO ONE_BIT  S09 :  1; //!<[09] S09
      __IO ONE_BIT  S10 :  1; //!<[10] S10
      __IO ONE_BIT  S11 :  1; //!<[11] S11
      __IO ONE_BIT  S12 :  1; //!<[12] S12
      __IO ONE_BIT  S13 :  1; //!<[13] S13
      __IO ONE_BIT  S14 :  1; //!<[14] S14
      __IO ONE_BIT  S15 :  1; //!<[15] S15
      __IO ONE_BIT  S16 :  1; //!<[16] S16
      __IO ONE_BIT  S17 :  1; //!<[17] S17
      __IO ONE_BIT  S18 :  1; //!<[18] S18
      __IO ONE_BIT  S19 :  1; //!<[19] S19
      __IO ONE_BIT  S20 :  1; //!<[20] S20
      __IO ONE_BIT  S21 :  1; //!<[21] S21
      __IO ONE_BIT  S22 :  1; //!<[22] S22
      __IO ONE_BIT  S23 :  1; //!<[23] S23
      __IO ONE_BIT  S24 :  1; //!<[24] S24
      __IO ONE_BIT  S25 :  1; //!<[25] S25
      __IO ONE_BIT  S26 :  1; //!<[26] S26
      __IO ONE_BIT  S27 :  1; //!<[27] S27
      __IO ONE_BIT  S28 :  1; //!<[28] S28
      __IO ONE_BIT  S29 :  1; //!<[29] S29
      __IO ONE_BIT  S30 :  1; //!<[30] S30
      __IO ONE_BIT  S31 :  1; //!<[31] S31
    } B;
    __IO uint32_t  R;
    explicit RAM_COM5_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      RAM_COM5_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      RAM_COM5_DEF r; r.R = R;
      R = f (r);
    }
  };
  union RAM_COM6_DEF {  //!< display memory
    struct {
      __IO ONE_BIT  S00 :  1; //!<[00] S00
      __IO ONE_BIT  S01 :  1; //!<[01] S01
      __IO ONE_BIT  S02 :  1; //!<[02] S02
      __IO ONE_BIT  S03 :  1; //!<[03] S03
      __IO ONE_BIT  S04 :  1; //!<[04] S04
      __IO ONE_BIT  S05 :  1; //!<[05] S05
      __IO ONE_BIT  S06 :  1; //!<[06] S06
      __IO ONE_BIT  S07 :  1; //!<[07] S07
      __IO ONE_BIT  S08 :  1; //!<[08] S08
      __IO ONE_BIT  S09 :  1; //!<[09] S09
      __IO ONE_BIT  S10 :  1; //!<[10] S10
      __IO ONE_BIT  S11 :  1; //!<[11] S11
      __IO ONE_BIT  S12 :  1; //!<[12] S12
      __IO ONE_BIT  S13 :  1; //!<[13] S13
      __IO ONE_BIT  S14 :  1; //!<[14] S14
      __IO ONE_BIT  S15 :  1; //!<[15] S15
      __IO ONE_BIT  S16 :  1; //!<[16] S16
      __IO ONE_BIT  S17 :  1; //!<[17] S17
      __IO ONE_BIT  S18 :  1; //!<[18] S18
      __IO ONE_BIT  S19 :  1; //!<[19] S19
      __IO ONE_BIT  S20 :  1; //!<[20] S20
      __IO ONE_BIT  S21 :  1; //!<[21] S21
      __IO ONE_BIT  S22 :  1; //!<[22] S22
      __IO ONE_BIT  S23 :  1; //!<[23] S23
      __IO ONE_BIT  S24 :  1; //!<[24] S24
      __IO ONE_BIT  S25 :  1; //!<[25] S25
      __IO ONE_BIT  S26 :  1; //!<[26] S26
      __IO ONE_BIT  S27 :  1; //!<[27] S27
      __IO ONE_BIT  S28 :  1; //!<[28] S28
      __IO ONE_BIT  S29 :  1; //!<[29] S29
      __IO ONE_BIT  S30 :  1; //!<[30] S30
      __IO ONE_BIT  S31 :  1; //!<[31] S31
    } B;
    __IO uint32_t  R;
    explicit RAM_COM6_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      RAM_COM6_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      RAM_COM6_DEF r; r.R = R;
      R = f (r);
    }
  };
  union RAM_COM7_DEF {  //!< display memory
    struct {
      __IO ONE_BIT  S00 :  1; //!<[00] S00
      __IO ONE_BIT  S01 :  1; //!<[01] S01
      __IO ONE_BIT  S02 :  1; //!<[02] S02
      __IO ONE_BIT  S03 :  1; //!<[03] S03
      __IO ONE_BIT  S04 :  1; //!<[04] S04
      __IO ONE_BIT  S05 :  1; //!<[05] S05
      __IO ONE_BIT  S06 :  1; //!<[06] S06
      __IO ONE_BIT  S07 :  1; //!<[07] S07
      __IO ONE_BIT  S08 :  1; //!<[08] S08
      __IO ONE_BIT  S09 :  1; //!<[09] S09
      __IO ONE_BIT  S10 :  1; //!<[10] S10
      __IO ONE_BIT  S11 :  1; //!<[11] S11
      __IO ONE_BIT  S12 :  1; //!<[12] S12
      __IO ONE_BIT  S13 :  1; //!<[13] S13
      __IO ONE_BIT  S14 :  1; //!<[14] S14
      __IO ONE_BIT  S15 :  1; //!<[15] S15
      __IO ONE_BIT  S16 :  1; //!<[16] S16
      __IO ONE_BIT  S17 :  1; //!<[17] S17
      __IO ONE_BIT  S18 :  1; //!<[18] S18
      __IO ONE_BIT  S19 :  1; //!<[19] S19
      __IO ONE_BIT  S20 :  1; //!<[20] S20
      __IO ONE_BIT  S21 :  1; //!<[21] S21
      __IO ONE_BIT  S22 :  1; //!<[22] S22
      __IO ONE_BIT  S23 :  1; //!<[23] S23
      __IO ONE_BIT  S24 :  1; //!<[24] S24
      __IO ONE_BIT  S25 :  1; //!<[25] S25
      __IO ONE_BIT  S26 :  1; //!<[26] S26
      __IO ONE_BIT  S27 :  1; //!<[27] S27
      __IO ONE_BIT  S28 :  1; //!<[28] S28
      __IO ONE_BIT  S29 :  1; //!<[29] S29
      __IO ONE_BIT  S30 :  1; //!<[30] S30
      __IO ONE_BIT  S31 :  1; //!<[31] S31
    } B;
    __IO uint32_t  R;
    explicit RAM_COM7_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      RAM_COM7_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      RAM_COM7_DEF r; r.R = R;
      R = f (r);
    }
  };
  // PERIPHERAL LCD REGISTERS INSTANCES
  __IO CR_DEF                    CR ;  //!< [0000](04)[0x00000000]
  __IO FCR_DEF                  FCR ;  //!< [0004](04)[0x00000000]
  __IO SR_DEF                    SR ;  //!< [0008](04)[0x00000020]
  __O  CLR_DEF                  CLR ;  //!< [000c](04)[0x00000000]
       uint32_t           UNUSED0 ;  //!< [0010](04)[0xFFFFFFFF]
  __IO RAM_COM0_DEF        RAM_COM0 ;  //!< [0014](04)[0x00000000]
       uint32_t           UNUSED1 ;  //!< [0018](04)[0xFFFFFFFF]
  __IO RAM_COM1_DEF        RAM_COM1 ;  //!< [001c](04)[0x00000000]
       uint32_t           UNUSED2 ;  //!< [0020](04)[0xFFFFFFFF]
  __IO RAM_COM2_DEF        RAM_COM2 ;  //!< [0024](04)[0x00000000]
       uint32_t           UNUSED3 ;  //!< [0028](04)[0xFFFFFFFF]
  __IO RAM_COM3_DEF        RAM_COM3 ;  //!< [002c](04)[0x00000000]
       uint32_t           UNUSED4 ;  //!< [0030](04)[0xFFFFFFFF]
  __IO RAM_COM4_DEF        RAM_COM4 ;  //!< [0034](04)[0x00000000]
       uint32_t           UNUSED5 ;  //!< [0038](04)[0xFFFFFFFF]
  __IO RAM_COM5_DEF        RAM_COM5 ;  //!< [003c](04)[0x00000000]
       uint32_t           UNUSED6 ;  //!< [0040](04)[0xFFFFFFFF]
  __IO RAM_COM6_DEF        RAM_COM6 ;  //!< [0044](04)[0x00000000]
       uint32_t           UNUSED7 ;  //!< [0048](04)[0xFFFFFFFF]
  __IO RAM_COM7_DEF        RAM_COM7 ;  //!< [004c](04)[0x00000000]
}; /* total size = 0x0400, struct size = 0x0050 */

// ////////////////////+++ TSC +-+//////////////////// //
struct TSC_Type           { /*!< Touch sensing controller */
  union CR_DEF      {  //!< control register
    struct {
      __IO ONE_BIT    TSCE    :  1; //!<[00] Touch sensing controller enable
      __IO ONE_BIT    START   :  1; //!<[01] Start a new acquisition
      __IO ONE_BIT    AM      :  1; //!<[02] Acquisition mode
      __IO ONE_BIT    SYNCPOL :  1; //!<[03] Synchronization pin polarity
      __IO ONE_BIT    IODEF   :  1; //!<[04] I/O Default mode
      __IO uint32_t   MCV     :  3; //!<[05] Max count value
           uint32_t   UNUSED0 :  4; //!<[08] 
      __IO uint32_t   PGPSC   :  3; //!<[12] pulse generator prescaler
      __IO ONE_BIT    SSPSC   :  1; //!<[15] Spread spectrum prescaler
      __IO ONE_BIT    SSE     :  1; //!<[16] Spread spectrum enable
      __IO uint32_t   SSD     :  7; //!<[17] Spread spectrum deviation
      __IO uint32_t   CTPL    :  4; //!<[24] Charge transfer pulse low
      __IO uint32_t   CTPH    :  4; //!<[28] Charge transfer pulse high
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
  union IER_DEF     {  //!< interrupt enable register
    struct {
      __IO ONE_BIT  EOAIE :  1; //!<[00] End of acquisition interrupt enable
      __IO ONE_BIT  MCEIE :  1; //!<[01] Max count error interrupt enable
    } B;
    __IO uint32_t  R;
    explicit IER_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IER_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      IER_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ICR_DEF     {  //!< interrupt clear register
    struct {
      __IO ONE_BIT  EOAIC :  1; //!<[00] End of acquisition interrupt clear
      __IO ONE_BIT  MCEIC :  1; //!<[01] Max count error interrupt clear
    } B;
    __IO uint32_t  R;
    explicit ICR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ICR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ICR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ISR_DEF     {  //!< interrupt status register
    struct {
      __IO ONE_BIT  EOAF :  1; //!<[00] End of acquisition flag
      __IO ONE_BIT  MCEF :  1; //!<[01] Max count error flag
    } B;
    __IO uint32_t  R;
    explicit ISR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ISR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ISR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union IOHCR_DEF   {  //!< I/O hysteresis control register
    struct {
      __IO ONE_BIT  G1_IO1 :  1; //!<[00] G1_IO1
      __IO ONE_BIT  G1_IO2 :  1; //!<[01] G1_IO2
      __IO ONE_BIT  G1_IO3 :  1; //!<[02] G1_IO3
      __IO ONE_BIT  G1_IO4 :  1; //!<[03] G1_IO4
      __IO ONE_BIT  G2_IO1 :  1; //!<[04] G2_IO1
      __IO ONE_BIT  G2_IO2 :  1; //!<[05] G2_IO2
      __IO ONE_BIT  G2_IO3 :  1; //!<[06] G2_IO3
      __IO ONE_BIT  G2_IO4 :  1; //!<[07] G2_IO4
      __IO ONE_BIT  G3_IO1 :  1; //!<[08] G3_IO1
      __IO ONE_BIT  G3_IO2 :  1; //!<[09] G3_IO2
      __IO ONE_BIT  G3_IO3 :  1; //!<[10] G3_IO3
      __IO ONE_BIT  G3_IO4 :  1; //!<[11] G3_IO4
      __IO ONE_BIT  G4_IO1 :  1; //!<[12] G4_IO1
      __IO ONE_BIT  G4_IO2 :  1; //!<[13] G4_IO2
      __IO ONE_BIT  G4_IO3 :  1; //!<[14] G4_IO3
      __IO ONE_BIT  G4_IO4 :  1; //!<[15] G4_IO4
      __IO ONE_BIT  G5_IO1 :  1; //!<[16] G5_IO1
      __IO ONE_BIT  G5_IO2 :  1; //!<[17] G5_IO2
      __IO ONE_BIT  G5_IO3 :  1; //!<[18] G5_IO3
      __IO ONE_BIT  G5_IO4 :  1; //!<[19] G5_IO4
      __IO ONE_BIT  G6_IO1 :  1; //!<[20] G6_IO1
      __IO ONE_BIT  G6_IO2 :  1; //!<[21] G6_IO2
      __IO ONE_BIT  G6_IO3 :  1; //!<[22] G6_IO3
      __IO ONE_BIT  G6_IO4 :  1; //!<[23] G6_IO4
      __IO ONE_BIT  G7_IO1 :  1; //!<[24] G7_IO1
      __IO ONE_BIT  G7_IO2 :  1; //!<[25] G7_IO2
      __IO ONE_BIT  G7_IO3 :  1; //!<[26] G7_IO3
      __IO ONE_BIT  G7_IO4 :  1; //!<[27] G7_IO4
      __IO ONE_BIT  G8_IO1 :  1; //!<[28] G8_IO1
      __IO ONE_BIT  G8_IO2 :  1; //!<[29] G8_IO2
      __IO ONE_BIT  G8_IO3 :  1; //!<[30] G8_IO3
      __IO ONE_BIT  G8_IO4 :  1; //!<[31] G8_IO4
    } B;
    __IO uint32_t  R;
    explicit IOHCR_DEF () noexcept { R = 0xffffffffu; }
    template<typename F> void setbit (F f) volatile {
      IOHCR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      IOHCR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union IOASCR_DEF  {  //!< I/O analog switch control register
    struct {
      __IO ONE_BIT  G1_IO1 :  1; //!<[00] G1_IO1
      __IO ONE_BIT  G1_IO2 :  1; //!<[01] G1_IO2
      __IO ONE_BIT  G1_IO3 :  1; //!<[02] G1_IO3
      __IO ONE_BIT  G1_IO4 :  1; //!<[03] G1_IO4
      __IO ONE_BIT  G2_IO1 :  1; //!<[04] G2_IO1
      __IO ONE_BIT  G2_IO2 :  1; //!<[05] G2_IO2
      __IO ONE_BIT  G2_IO3 :  1; //!<[06] G2_IO3
      __IO ONE_BIT  G2_IO4 :  1; //!<[07] G2_IO4
      __IO ONE_BIT  G3_IO1 :  1; //!<[08] G3_IO1
      __IO ONE_BIT  G3_IO2 :  1; //!<[09] G3_IO2
      __IO ONE_BIT  G3_IO3 :  1; //!<[10] G3_IO3
      __IO ONE_BIT  G3_IO4 :  1; //!<[11] G3_IO4
      __IO ONE_BIT  G4_IO1 :  1; //!<[12] G4_IO1
      __IO ONE_BIT  G4_IO2 :  1; //!<[13] G4_IO2
      __IO ONE_BIT  G4_IO3 :  1; //!<[14] G4_IO3
      __IO ONE_BIT  G4_IO4 :  1; //!<[15] G4_IO4
      __IO ONE_BIT  G5_IO1 :  1; //!<[16] G5_IO1
      __IO ONE_BIT  G5_IO2 :  1; //!<[17] G5_IO2
      __IO ONE_BIT  G5_IO3 :  1; //!<[18] G5_IO3
      __IO ONE_BIT  G5_IO4 :  1; //!<[19] G5_IO4
      __IO ONE_BIT  G6_IO1 :  1; //!<[20] G6_IO1
      __IO ONE_BIT  G6_IO2 :  1; //!<[21] G6_IO2
      __IO ONE_BIT  G6_IO3 :  1; //!<[22] G6_IO3
      __IO ONE_BIT  G6_IO4 :  1; //!<[23] G6_IO4
      __IO ONE_BIT  G7_IO1 :  1; //!<[24] G7_IO1
      __IO ONE_BIT  G7_IO2 :  1; //!<[25] G7_IO2
      __IO ONE_BIT  G7_IO3 :  1; //!<[26] G7_IO3
      __IO ONE_BIT  G7_IO4 :  1; //!<[27] G7_IO4
      __IO ONE_BIT  G8_IO1 :  1; //!<[28] G8_IO1
      __IO ONE_BIT  G8_IO2 :  1; //!<[29] G8_IO2
      __IO ONE_BIT  G8_IO3 :  1; //!<[30] G8_IO3
      __IO ONE_BIT  G8_IO4 :  1; //!<[31] G8_IO4
    } B;
    __IO uint32_t  R;
    explicit IOASCR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IOASCR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      IOASCR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union IOSCR_DEF   {  //!< I/O sampling control register
    struct {
      __IO ONE_BIT  G1_IO1 :  1; //!<[00] G1_IO1
      __IO ONE_BIT  G1_IO2 :  1; //!<[01] G1_IO2
      __IO ONE_BIT  G1_IO3 :  1; //!<[02] G1_IO3
      __IO ONE_BIT  G1_IO4 :  1; //!<[03] G1_IO4
      __IO ONE_BIT  G2_IO1 :  1; //!<[04] G2_IO1
      __IO ONE_BIT  G2_IO2 :  1; //!<[05] G2_IO2
      __IO ONE_BIT  G2_IO3 :  1; //!<[06] G2_IO3
      __IO ONE_BIT  G2_IO4 :  1; //!<[07] G2_IO4
      __IO ONE_BIT  G3_IO1 :  1; //!<[08] G3_IO1
      __IO ONE_BIT  G3_IO2 :  1; //!<[09] G3_IO2
      __IO ONE_BIT  G3_IO3 :  1; //!<[10] G3_IO3
      __IO ONE_BIT  G3_IO4 :  1; //!<[11] G3_IO4
      __IO ONE_BIT  G4_IO1 :  1; //!<[12] G4_IO1
      __IO ONE_BIT  G4_IO2 :  1; //!<[13] G4_IO2
      __IO ONE_BIT  G4_IO3 :  1; //!<[14] G4_IO3
      __IO ONE_BIT  G4_IO4 :  1; //!<[15] G4_IO4
      __IO ONE_BIT  G5_IO1 :  1; //!<[16] G5_IO1
      __IO ONE_BIT  G5_IO2 :  1; //!<[17] G5_IO2
      __IO ONE_BIT  G5_IO3 :  1; //!<[18] G5_IO3
      __IO ONE_BIT  G5_IO4 :  1; //!<[19] G5_IO4
      __IO ONE_BIT  G6_IO1 :  1; //!<[20] G6_IO1
      __IO ONE_BIT  G6_IO2 :  1; //!<[21] G6_IO2
      __IO ONE_BIT  G6_IO3 :  1; //!<[22] G6_IO3
      __IO ONE_BIT  G6_IO4 :  1; //!<[23] G6_IO4
      __IO ONE_BIT  G7_IO1 :  1; //!<[24] G7_IO1
      __IO ONE_BIT  G7_IO2 :  1; //!<[25] G7_IO2
      __IO ONE_BIT  G7_IO3 :  1; //!<[26] G7_IO3
      __IO ONE_BIT  G7_IO4 :  1; //!<[27] G7_IO4
      __IO ONE_BIT  G8_IO1 :  1; //!<[28] G8_IO1
      __IO ONE_BIT  G8_IO2 :  1; //!<[29] G8_IO2
      __IO ONE_BIT  G8_IO3 :  1; //!<[30] G8_IO3
      __IO ONE_BIT  G8_IO4 :  1; //!<[31] G8_IO4
    } B;
    __IO uint32_t  R;
    explicit IOSCR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IOSCR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      IOSCR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union IOCCR_DEF   {  //!< I/O channel control register
    struct {
      __IO ONE_BIT  G1_IO1 :  1; //!<[00] G1_IO1
      __IO ONE_BIT  G1_IO2 :  1; //!<[01] G1_IO2
      __IO ONE_BIT  G1_IO3 :  1; //!<[02] G1_IO3
      __IO ONE_BIT  G1_IO4 :  1; //!<[03] G1_IO4
      __IO ONE_BIT  G2_IO1 :  1; //!<[04] G2_IO1
      __IO ONE_BIT  G2_IO2 :  1; //!<[05] G2_IO2
      __IO ONE_BIT  G2_IO3 :  1; //!<[06] G2_IO3
      __IO ONE_BIT  G2_IO4 :  1; //!<[07] G2_IO4
      __IO ONE_BIT  G3_IO1 :  1; //!<[08] G3_IO1
      __IO ONE_BIT  G3_IO2 :  1; //!<[09] G3_IO2
      __IO ONE_BIT  G3_IO3 :  1; //!<[10] G3_IO3
      __IO ONE_BIT  G3_IO4 :  1; //!<[11] G3_IO4
      __IO ONE_BIT  G4_IO1 :  1; //!<[12] G4_IO1
      __IO ONE_BIT  G4_IO2 :  1; //!<[13] G4_IO2
      __IO ONE_BIT  G4_IO3 :  1; //!<[14] G4_IO3
      __IO ONE_BIT  G4_IO4 :  1; //!<[15] G4_IO4
      __IO ONE_BIT  G5_IO1 :  1; //!<[16] G5_IO1
      __IO ONE_BIT  G5_IO2 :  1; //!<[17] G5_IO2
      __IO ONE_BIT  G5_IO3 :  1; //!<[18] G5_IO3
      __IO ONE_BIT  G5_IO4 :  1; //!<[19] G5_IO4
      __IO ONE_BIT  G6_IO1 :  1; //!<[20] G6_IO1
      __IO ONE_BIT  G6_IO2 :  1; //!<[21] G6_IO2
      __IO ONE_BIT  G6_IO3 :  1; //!<[22] G6_IO3
      __IO ONE_BIT  G6_IO4 :  1; //!<[23] G6_IO4
      __IO ONE_BIT  G7_IO1 :  1; //!<[24] G7_IO1
      __IO ONE_BIT  G7_IO2 :  1; //!<[25] G7_IO2
      __IO ONE_BIT  G7_IO3 :  1; //!<[26] G7_IO3
      __IO ONE_BIT  G7_IO4 :  1; //!<[27] G7_IO4
      __IO ONE_BIT  G8_IO1 :  1; //!<[28] G8_IO1
      __IO ONE_BIT  G8_IO2 :  1; //!<[29] G8_IO2
      __IO ONE_BIT  G8_IO3 :  1; //!<[30] G8_IO3
      __IO ONE_BIT  G8_IO4 :  1; //!<[31] G8_IO4
    } B;
    __IO uint32_t  R;
    explicit IOCCR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IOCCR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      IOCCR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union IOGCSR_DEF  {  //!< I/O group control status register
    struct {
      __IO ONE_BIT    G1E     :  1; //!<[00] Analog I/O group x enable
      __IO ONE_BIT    G2E     :  1; //!<[01] Analog I/O group x enable
      __IO ONE_BIT    G3E     :  1; //!<[02] Analog I/O group x enable
      __IO ONE_BIT    G4E     :  1; //!<[03] Analog I/O group x enable
      __IO ONE_BIT    G5E     :  1; //!<[04] Analog I/O group x enable
      __IO ONE_BIT    G6E     :  1; //!<[05] Analog I/O group x enable
      __IO ONE_BIT    G7E     :  1; //!<[06] Analog I/O group x enable
      __IO ONE_BIT    G8E     :  1; //!<[07] Analog I/O group x enable
           uint32_t   UNUSED0 :  8; //!<[08] 
      __I  ONE_BIT    G1S     :  1; //!<[16] Analog I/O group x status
      __I  ONE_BIT    G2S     :  1; //!<[17] Analog I/O group x status
      __I  ONE_BIT    G3S     :  1; //!<[18] Analog I/O group x status
      __I  ONE_BIT    G4S     :  1; //!<[19] Analog I/O group x status
      __I  ONE_BIT    G5S     :  1; //!<[20] Analog I/O group x status
      __I  ONE_BIT    G6S     :  1; //!<[21] Analog I/O group x status
      __I  ONE_BIT    G7S     :  1; //!<[22] Analog I/O group x status
      __I  ONE_BIT    G8S     :  1; //!<[23] Analog I/O group x status
    } B;
    __IO uint32_t  R;
    explicit IOGCSR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IOGCSR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      IOGCSR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union IOG1CR_DEF  {  //!< I/O group x counter register
    struct {
      __I  uint32_t   CNT : 14; //!<[00] Counter value
    } B;
    __I  uint32_t  R;

    explicit IOG1CR_DEF (volatile IOG1CR_DEF & o) noexcept { R = o.R; };
  };
  union IOG2CR_DEF  {  //!< I/O group x counter register
    struct {
      __I  uint32_t   CNT : 14; //!<[00] Counter value
    } B;
    __I  uint32_t  R;

    explicit IOG2CR_DEF (volatile IOG2CR_DEF & o) noexcept { R = o.R; };
  };
  union IOG3CR_DEF  {  //!< I/O group x counter register
    struct {
      __I  uint32_t   CNT : 14; //!<[00] Counter value
    } B;
    __I  uint32_t  R;

    explicit IOG3CR_DEF (volatile IOG3CR_DEF & o) noexcept { R = o.R; };
  };
  union IOG4CR_DEF  {  //!< I/O group x counter register
    struct {
      __I  uint32_t   CNT : 14; //!<[00] Counter value
    } B;
    __I  uint32_t  R;

    explicit IOG4CR_DEF (volatile IOG4CR_DEF & o) noexcept { R = o.R; };
  };
  union IOG5CR_DEF  {  //!< I/O group x counter register
    struct {
      __I  uint32_t   CNT : 14; //!<[00] Counter value
    } B;
    __I  uint32_t  R;

    explicit IOG5CR_DEF (volatile IOG5CR_DEF & o) noexcept { R = o.R; };
  };
  union IOG6CR_DEF  {  //!< I/O group x counter register
    struct {
      __I  uint32_t   CNT : 14; //!<[00] Counter value
    } B;
    __I  uint32_t  R;

    explicit IOG6CR_DEF (volatile IOG6CR_DEF & o) noexcept { R = o.R; };
  };
  union IOG7CR_DEF  {  //!< I/O group x counter register
    struct {
      __I  uint32_t   CNT : 14; //!<[00] Counter value
    } B;
    __I  uint32_t  R;

    explicit IOG7CR_DEF (volatile IOG7CR_DEF & o) noexcept { R = o.R; };
  };
  union IOG8CR_DEF  {  //!< I/O group x counter register
    struct {
      __I  uint32_t   CNT : 14; //!<[00] Counter value
    } B;
    __I  uint32_t  R;

    explicit IOG8CR_DEF (volatile IOG8CR_DEF & o) noexcept { R = o.R; };
  };
  // PERIPHERAL TSC REGISTERS INSTANCES
  __IO CR_DEF                   CR ;  //!< [0000](04)[0x00000000]
  __IO IER_DEF                 IER ;  //!< [0004](04)[0x00000000]
  __IO ICR_DEF                 ICR ;  //!< [0008](04)[0x00000000]
  __IO ISR_DEF                 ISR ;  //!< [000c](04)[0x00000000]
  __IO IOHCR_DEF             IOHCR ;  //!< [0010](04)[0xFFFFFFFF]
       uint32_t          UNUSED0 ;  //!< [0014](04)[0xFFFFFFFF]
  __IO IOASCR_DEF           IOASCR ;  //!< [0018](04)[0x00000000]
       uint32_t          UNUSED1 ;  //!< [001c](04)[0xFFFFFFFF]
  __IO IOSCR_DEF             IOSCR ;  //!< [0020](04)[0x00000000]
       uint32_t          UNUSED2 ;  //!< [0024](04)[0xFFFFFFFF]
  __IO IOCCR_DEF             IOCCR ;  //!< [0028](04)[0x00000000]
       uint32_t          UNUSED3 ;  //!< [002c](04)[0xFFFFFFFF]
  __IO IOGCSR_DEF           IOGCSR ;  //!< [0030](04)[0x00000000]
  __I  IOG1CR_DEF           IOG1CR ;  //!< [0034](04)[0x00000000]
  __I  IOG2CR_DEF           IOG2CR ;  //!< [0038](04)[0x00000000]
  __I  IOG3CR_DEF           IOG3CR ;  //!< [003c](04)[0x00000000]
  __I  IOG4CR_DEF           IOG4CR ;  //!< [0040](04)[0x00000000]
  __I  IOG5CR_DEF           IOG5CR ;  //!< [0044](04)[0x00000000]
  __I  IOG6CR_DEF           IOG6CR ;  //!< [0048](04)[0x00000000]
  __I  IOG7CR_DEF           IOG7CR ;  //!< [004c](04)[0x00000000]
  __I  IOG8CR_DEF           IOG8CR ;  //!< [0050](04)[0x00000000]
}; /* total size = 0x0400, struct size = 0x0054 */

// ////////////////////+++ IWDG +-+//////////////////// //
struct IWDG_Type          { /*!< Independent watchdog */
  union KR_DEF   {  //!< Key register
    struct {
      __O  uint32_t   KEY : 16; //!<[00] Key value (write only, read 0x0000)
    } B;
    __O  uint32_t  R;
    explicit KR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      KR_DEF r;
      R = f (r);
    }
  };
  union PR_DEF   {  //!< Prescaler register
    struct {
      __IO uint32_t   PR :  3; //!<[00] Prescaler divider
    } B;
    __IO uint32_t  R;
    explicit PR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      PR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      PR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union RLR_DEF  {  //!< Reload register
    struct {
      __IO uint32_t   RL : 12; //!<[00] Watchdog counter reload value
    } B;
    __IO uint32_t  R;
    explicit RLR_DEF () noexcept { R = 0x00000fffu; }
    template<typename F> void setbit (F f) volatile {
      RLR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      RLR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union SR_DEF   {  //!< Status register
    struct {
      __I  ONE_BIT  PVU :  1; //!<[00] Watchdog prescaler value update
      __I  ONE_BIT  RVU :  1; //!<[01] Watchdog counter reload value update
      __I  ONE_BIT  WVU :  1; //!<[02] Watchdog counter window value update
    } B;
    __I  uint32_t  R;

    explicit SR_DEF (volatile SR_DEF & o) noexcept { R = o.R; };
  };
  union WINR_DEF {  //!< Window register
    struct {
      __IO uint32_t   WIN : 12; //!<[00] Watchdog counter window value
    } B;
    __IO uint32_t  R;
    explicit WINR_DEF () noexcept { R = 0x00000fffu; }
    template<typename F> void setbit (F f) volatile {
      WINR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      WINR_DEF r; r.R = R;
      R = f (r);
    }
  };
  // PERIPHERAL IWDG REGISTERS INSTANCES
  __O  KR_DEF                KR ;  //!< [0000](04)[0x00000000]
  __IO PR_DEF                PR ;  //!< [0004](04)[0x00000000]
  __IO RLR_DEF              RLR ;  //!< [0008](04)[0x00000FFF]
  __I  SR_DEF                SR ;  //!< [000c](04)[0x00000000]
  __IO WINR_DEF            WINR ;  //!< [0010](04)[0x00000FFF]
}; /* total size = 0x0400, struct size = 0x0014 */

// ////////////////////+++ WWDG +-+//////////////////// //
struct WWDG_Type          { /*!< System window watchdog */
  union CR_DEF  {  //!< Control register
    struct {
      __IO uint32_t   T    :  7; //!<[00] 7-bit counter (MSB to LSB)
      __IO ONE_BIT    WDGA :  1; //!<[07] Activation bit
    } B;
    __IO uint32_t  R;
    explicit CR_DEF () noexcept { R = 0x0000007fu; }
    template<typename F> void setbit (F f) volatile {
      CR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CFR_DEF {  //!< Configuration register
    struct {
      __IO uint32_t   W     :  7; //!<[00] 7-bit window value
      __IO uint32_t   WDGTB :  2; //!<[07] Timer base
      __IO ONE_BIT    EWI   :  1; //!<[09] Early wakeup interrupt
    } B;
    __IO uint32_t  R;
    explicit CFR_DEF () noexcept { R = 0x0000007fu; }
    template<typename F> void setbit (F f) volatile {
      CFR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CFR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union SR_DEF  {  //!< Status register
    struct {
      __IO ONE_BIT  EWIF :  1; //!<[00] Early wakeup interrupt flag
    } B;
    __IO uint32_t  R;
    explicit SR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      SR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      SR_DEF r; r.R = R;
      R = f (r);
    }
  };
  // PERIPHERAL WWDG REGISTERS INSTANCES
  __IO CR_DEF               CR ;  //!< [0000](04)[0x0000007F]
  __IO CFR_DEF             CFR ;  //!< [0004](04)[0x0000007F]
  __IO SR_DEF               SR ;  //!< [0008](04)[0x00000000]
}; /* total size = 0x0400, struct size = 0x000C */

// ////////////////////+++ COMP +-+//////////////////// //
struct COMP_Type          { /*!< Comparator */
  union COMP1_CSR_DEF {  //!< Comparator 1 control and status register
    struct {
      __IO ONE_BIT    COMP1_EN       :  1; //!<[00] Comparator 1 enable bit
           ONE_BIT    UNUSED0        :  1; //!<[01] 
      __IO uint32_t   COMP1_PWRMODE  :  2; //!<[02] Power Mode of the comparator 1
      __IO uint32_t   COMP1_INMSEL   :  3; //!<[04] Comparator 1 Input Minus connection configuration bit
      __IO uint32_t   COMP1_INPSEL   :  2; //!<[07] Comparator1 input plus selection bit
           uint32_t   UNUSED1        :  6; //!<[09] 
      __IO ONE_BIT    COMP1_POLARITY :  1; //!<[15] Comparator 1 polarity selection bit
      __IO uint32_t   COMP1_HYST     :  2; //!<[16] Comparator 1 hysteresis selection bits
      __IO uint32_t   COMP1_BLANKING :  3; //!<[18] Comparator 1 blanking source selection bits
           ONE_BIT    UNUSED2        :  1; //!<[21] 
      __IO ONE_BIT    COMP1_BRGEN    :  1; //!<[22] Scaler bridge enable
      __IO ONE_BIT    COMP1_SCALEN   :  1; //!<[23] Voltage scaler enable bit
           ONE_BIT    UNUSED3        :  1; //!<[24] 
      __IO uint32_t   COMP1_INMESEL  :  2; //!<[25] comparator 1 input minus extended selection bits
           uint32_t   UNUSED4        :  3; //!<[27] 
      __I  ONE_BIT    COMP1_VALUE    :  1; //!<[30] Comparator 1 output status bit
      __O  ONE_BIT    COMP1_LOCK     :  1; //!<[31] COMP1_CSR register lock bit
    } B;
    __IO uint32_t  R;
    explicit COMP1_CSR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      COMP1_CSR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      COMP1_CSR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union COMP2_CSR_DEF {  //!< Comparator 2 control and status register
    struct {
      __IO ONE_BIT    COMP2_EN       :  1; //!<[00] Comparator 2 enable bit
           ONE_BIT    UNUSED0        :  1; //!<[01] 
      __IO uint32_t   COMP2_PWRMODE  :  2; //!<[02] Power Mode of the comparator 2
      __IO uint32_t   COMP2_INMSEL   :  3; //!<[04] Comparator 2 Input Minus connection configuration bit
      __IO uint32_t   COMP2_INPSEL   :  2; //!<[07] Comparator 2 Input Plus connection configuration bit
      __IO ONE_BIT    COMP2_WINMODE  :  1; //!<[09] Windows mode selection bit
           uint32_t   UNUSED1        :  5; //!<[10] 
      __IO ONE_BIT    COMP2_POLARITY :  1; //!<[15] Comparator 2 polarity selection bit
      __IO uint32_t   COMP2_HYST     :  2; //!<[16] Comparator 2 hysteresis selection bits
      __IO uint32_t   COMP2_BLANKING :  3; //!<[18] Comparator 2 blanking source selection bits
           ONE_BIT    UNUSED2        :  1; //!<[21] 
      __IO ONE_BIT    COMP2_BRGEN    :  1; //!<[22] Scaler bridge enable
      __IO ONE_BIT    COMP2_SCALEN   :  1; //!<[23] Voltage scaler enable bit
           ONE_BIT    UNUSED3        :  1; //!<[24] 
      __IO uint32_t   COMP2_INMESEL  :  2; //!<[25] comparator 2 input minus extended selection bits
           uint32_t   UNUSED4        :  3; //!<[27] 
      __I  ONE_BIT    COMP2_VALUE    :  1; //!<[30] Comparator 2 output status bit
      __O  ONE_BIT    COMP2_LOCK     :  1; //!<[31] COMP2_CSR register lock bit
    } B;
    __IO uint32_t  R;
    explicit COMP2_CSR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      COMP2_CSR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      COMP2_CSR_DEF r; r.R = R;
      R = f (r);
    }
  };
  // PERIPHERAL COMP REGISTERS INSTANCES
  __IO COMP1_CSR_DEF       COMP1_CSR ;  //!< [0000](04)[0x00000000]
  __IO COMP2_CSR_DEF       COMP2_CSR ;  //!< [0004](04)[0x00000000]
}; /* total size = 0x0200, struct size = 0x0008 */

// ////////////////////+++ FIREWALL +-+//////////////////// //
struct FIREWALL_Type      { /*!< Firewall */
  union CSSA_DEF    {  //!< Code segment start address
    struct {
           uint32_t   UNUSED0 :  8; //!<[00] 
      __IO uint32_t   ADD     : 16; //!<[08] code segment start address
    } B;
    __IO uint32_t  R;
    explicit CSSA_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CSSA_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CSSA_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CSL_DEF     {  //!< Code segment length
    struct {
           uint32_t   UNUSED0 :  8; //!<[00] 
      __IO uint32_t   LENG    : 14; //!<[08] code segment length
    } B;
    __IO uint32_t  R;
    explicit CSL_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CSL_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CSL_DEF r; r.R = R;
      R = f (r);
    }
  };
  union NVDSSA_DEF  {  //!< Non-volatile data segment start address
    struct {
           uint32_t   UNUSED0 :  8; //!<[00] 
      __IO uint32_t   ADD     : 16; //!<[08] Non-volatile data segment start address
    } B;
    __IO uint32_t  R;
    explicit NVDSSA_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      NVDSSA_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      NVDSSA_DEF r; r.R = R;
      R = f (r);
    }
  };
  union NVDSL_DEF   {  //!< Non-volatile data segment length
    struct {
           uint32_t   UNUSED0 :  8; //!<[00] 
      __IO uint32_t   LENG    : 14; //!<[08] Non-volatile data segment length
    } B;
    __IO uint32_t  R;
    explicit NVDSL_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      NVDSL_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      NVDSL_DEF r; r.R = R;
      R = f (r);
    }
  };
  union VDSSA_DEF   {  //!< Volatile data segment start address
    struct {
           uint32_t   UNUSED0 :  6; //!<[00] 
      __IO uint32_t   ADD     : 10; //!<[06] Volatile data segment start address
    } B;
    __IO uint32_t  R;
    explicit VDSSA_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      VDSSA_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      VDSSA_DEF r; r.R = R;
      R = f (r);
    }
  };
  union VDSL_DEF    {  //!< Volatile data segment length
    struct {
           uint32_t   UNUSED0 :  6; //!<[00] 
      __IO uint32_t   LENG    : 10; //!<[06] Non-volatile data segment length
    } B;
    __IO uint32_t  R;
    explicit VDSL_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      VDSL_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      VDSL_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CR_DEF      {  //!< Configuration register
    struct {
      __IO ONE_BIT  FPA :  1; //!<[00] Firewall pre alarm
      __IO ONE_BIT  VDS :  1; //!<[01] Volatile data shared
      __IO ONE_BIT  VDE :  1; //!<[02] Volatile data execution
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
  // PERIPHERAL FIREWALL REGISTERS INSTANCES
  __IO CSSA_DEF               CSSA ;  //!< [0000](04)[0x00000000]
  __IO CSL_DEF                 CSL ;  //!< [0004](04)[0x00000000]
  __IO NVDSSA_DEF           NVDSSA ;  //!< [0008](04)[0x00000000]
  __IO NVDSL_DEF             NVDSL ;  //!< [000c](04)[0x00000000]
  __IO VDSSA_DEF             VDSSA ;  //!< [0010](04)[0x00000000]
  __IO VDSL_DEF               VDSL ;  //!< [0014](04)[0x00000000]
       uint32_t          UNUSED0 [2];  //!< [0018](08)[0xFFFFFFFF]
  __IO CR_DEF                   CR ;  //!< [0020](04)[0x00000000]
}; /* total size = 0x0400, struct size = 0x0024 */

// ////////////////////+++ I2C1 +-+//////////////////// //
struct I2C1_Type          { /*!< Inter-integrated circuit */
  union CR1_DEF      {  //!< Control register 1
    struct {
      __IO ONE_BIT    PE        :  1; //!<[00] Peripheral enable
      __IO ONE_BIT    TXIE      :  1; //!<[01] TX Interrupt enable
      __IO ONE_BIT    RXIE      :  1; //!<[02] RX Interrupt enable
      __IO ONE_BIT    ADDRIE    :  1; //!<[03] Address match interrupt enable (slave only)
      __IO ONE_BIT    NACKIE    :  1; //!<[04] Not acknowledge received interrupt enable
      __IO ONE_BIT    STOPIE    :  1; //!<[05] STOP detection Interrupt enable
      __IO ONE_BIT    TCIE      :  1; //!<[06] Transfer Complete interrupt enable
      __IO ONE_BIT    ERRIE     :  1; //!<[07] Error interrupts enable
      __IO uint32_t   DNF       :  4; //!<[08] Digital noise filter
      __IO ONE_BIT    ANFOFF    :  1; //!<[12] Analog noise filter OFF
           ONE_BIT    UNUSED0   :  1; //!<[13] 
      __IO ONE_BIT    TXDMAEN   :  1; //!<[14] DMA transmission requests enable
      __IO ONE_BIT    RXDMAEN   :  1; //!<[15] DMA reception requests enable
      __IO ONE_BIT    SBC       :  1; //!<[16] Slave byte control
      __IO ONE_BIT    NOSTRETCH :  1; //!<[17] Clock stretching disable
      __IO ONE_BIT    WUPEN     :  1; //!<[18] Wakeup from STOP enable
      __IO ONE_BIT    GCEN      :  1; //!<[19] General call enable
      __IO ONE_BIT    SMBHEN    :  1; //!<[20] SMBus Host address enable
      __IO ONE_BIT    SMBDEN    :  1; //!<[21] SMBus Device Default address enable
      __IO ONE_BIT    ALERTEN   :  1; //!<[22] SMBUS alert enable
      __IO ONE_BIT    PECEN     :  1; //!<[23] PEC enable
    } B;
    __IO uint32_t  R;
    explicit CR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CR2_DEF      {  //!< Control register 2
    struct {
      __IO uint32_t   SADD    : 10; //!<[00] Slave address bit (master mode)
      __IO ONE_BIT    RD_WRN  :  1; //!<[10] Transfer direction (master mode)
      __IO ONE_BIT    ADD10   :  1; //!<[11] 10-bit addressing mode (master mode)
      __IO ONE_BIT    HEAD10R :  1; //!<[12] 10-bit address header only read direction (master receiver mode)
      __IO ONE_BIT    START   :  1; //!<[13] Start generation
      __IO ONE_BIT    STOP    :  1; //!<[14] Stop generation (master mode)
      __IO ONE_BIT    NACK    :  1; //!<[15] NACK generation (slave mode)
      __IO uint32_t   NBYTES  :  8; //!<[16] Number of bytes
      __IO ONE_BIT    RELOAD  :  1; //!<[24] NBYTES reload mode
      __IO ONE_BIT    AUTOEND :  1; //!<[25] Automatic end mode (master mode)
      __IO ONE_BIT    PECBYTE :  1; //!<[26] Packet error checking byte
    } B;
    __IO uint32_t  R;
    explicit CR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union OAR1_DEF     {  //!< Own address register 1
    struct {
      __IO uint32_t   OA1     : 10; //!<[00] Interface address
      __IO ONE_BIT    OA1MODE :  1; //!<[10] Own Address 1 10-bit mode
           uint32_t   UNUSED0 :  4; //!<[11] 
      __IO ONE_BIT    OA1EN   :  1; //!<[15] Own Address 1 enable
    } B;
    __IO uint32_t  R;
    explicit OAR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      OAR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      OAR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union OAR2_DEF     {  //!< Own address register 2
    struct {
           ONE_BIT    UNUSED0 :  1; //!<[00] 
      __IO uint32_t   OA2     :  7; //!<[01] Interface address
      __IO uint32_t   OA2MSK  :  3; //!<[08] Own Address 2 masks
           uint32_t   UNUSED1 :  4; //!<[11] 
      __IO ONE_BIT    OA2EN   :  1; //!<[15] Own Address 2 enable
    } B;
    __IO uint32_t  R;
    explicit OAR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      OAR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      OAR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union TIMINGR_DEF  {  //!< Timing register
    struct {
      __IO uint32_t   SCLL    :  8; //!<[00] SCL low period (master mode)
      __IO uint32_t   SCLH    :  8; //!<[08] SCL high period (master mode)
      __IO uint32_t   SDADEL  :  4; //!<[16] Data hold time
      __IO uint32_t   SCLDEL  :  4; //!<[20] Data setup time
           uint32_t   UNUSED0 :  4; //!<[24] 
      __IO uint32_t   PRESC   :  4; //!<[28] Timing prescaler
    } B;
    __IO uint32_t  R;
    explicit TIMINGR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      TIMINGR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      TIMINGR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union TIMEOUTR_DEF {  //!< Status register 1
    struct {
      __IO uint32_t   TIMEOUTA : 12; //!<[00] Bus timeout A
      __IO ONE_BIT    TIDLE    :  1; //!<[12] Idle clock timeout detection
           uint32_t   UNUSED0  :  2; //!<[13] 
      __IO ONE_BIT    TIMOUTEN :  1; //!<[15] Clock timeout enable
      __IO uint32_t   TIMEOUTB : 12; //!<[16] Bus timeout B
           uint32_t   UNUSED1  :  3; //!<[28] 
      __IO ONE_BIT    TEXTEN   :  1; //!<[31] Extended clock timeout enable
    } B;
    __IO uint32_t  R;
    explicit TIMEOUTR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      TIMEOUTR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      TIMEOUTR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ISR_DEF      {  //!< Interrupt and Status register
    struct {
      __IO ONE_BIT    TXE     :  1; //!<[00] Transmit data register empty (transmitters)
      __IO ONE_BIT    TXIS    :  1; //!<[01] Transmit interrupt status (transmitters)
      __I  ONE_BIT    RXNE    :  1; //!<[02] Receive data register not empty (receivers)
      __I  ONE_BIT    ADDR    :  1; //!<[03] Address matched (slave mode)
      __I  ONE_BIT    NACKF   :  1; //!<[04] Not acknowledge received flag
      __I  ONE_BIT    STOPF   :  1; //!<[05] Stop detection flag
      __I  ONE_BIT    TC      :  1; //!<[06] Transfer Complete (master mode)
      __I  ONE_BIT    TCR     :  1; //!<[07] Transfer Complete Reload
      __I  ONE_BIT    BERR    :  1; //!<[08] Bus error
      __I  ONE_BIT    ARLO    :  1; //!<[09] Arbitration lost
      __I  ONE_BIT    OVR     :  1; //!<[10] Overrun/Underrun (slave mode)
      __I  ONE_BIT    PECERR  :  1; //!<[11] PEC Error in reception
      __I  ONE_BIT    TIMEOUT :  1; //!<[12] Timeout or t_low detection flag
      __I  ONE_BIT    ALERT   :  1; //!<[13] SMBus alert
           ONE_BIT    UNUSED0 :  1; //!<[14] 
      __I  ONE_BIT    BUSY    :  1; //!<[15] Bus busy
      __I  ONE_BIT    DIR     :  1; //!<[16] Transfer direction (Slave mode)
      __I  uint32_t   ADDCODE :  7; //!<[17] Address match code (Slave mode)
    } B;
    __IO uint32_t  R;
    explicit ISR_DEF () noexcept { R = 0x00000001u; }
    template<typename F> void setbit (F f) volatile {
      ISR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ISR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ICR_DEF      {  //!< Interrupt clear register
    struct {
           uint32_t   UNUSED0  :  3; //!<[00] 
      __O  ONE_BIT    ADDRCF   :  1; //!<[03] Address Matched flag clear
      __O  ONE_BIT    NACKCF   :  1; //!<[04] Not Acknowledge flag clear
      __O  ONE_BIT    STOPCF   :  1; //!<[05] Stop detection flag clear
           uint32_t   UNUSED1  :  2; //!<[06] 
      __O  ONE_BIT    BERRCF   :  1; //!<[08] Bus error flag clear
      __O  ONE_BIT    ARLOCF   :  1; //!<[09] Arbitration lost flag clear
      __O  ONE_BIT    OVRCF    :  1; //!<[10] Overrun/Underrun flag clear
      __O  ONE_BIT    PECCF    :  1; //!<[11] PEC Error flag clear
      __O  ONE_BIT    TIMOUTCF :  1; //!<[12] Timeout detection flag clear
      __O  ONE_BIT    ALERTCF  :  1; //!<[13] Alert flag clear
    } B;
    __O  uint32_t  R;
    explicit ICR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ICR_DEF r;
      R = f (r);
    }
  };
  union PECR_DEF     {  //!< PEC register
    struct {
      __I  uint32_t   PEC :  8; //!<[00] Packet error checking register
    } B;
    __I  uint32_t  R;

    explicit PECR_DEF (volatile PECR_DEF & o) noexcept { R = o.R; };
  };
  union RXDR_DEF     {  //!< Receive data register
    struct {
      __I  uint32_t   RXDATA :  8; //!<[00] 8-bit receive data
    } B;
    __I  uint32_t  R;

    explicit RXDR_DEF (volatile RXDR_DEF & o) noexcept { R = o.R; };
  };
  union TXDR_DEF     {  //!< Transmit data register
    struct {
      __IO uint32_t   TXDATA :  8; //!<[00] 8-bit transmit data
    } B;
    __IO uint32_t  R;
    explicit TXDR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      TXDR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      TXDR_DEF r; r.R = R;
      R = f (r);
    }
  };
  // PERIPHERAL I2C1 REGISTERS INSTANCES
  __IO CR1_DEF                  CR1 ;  //!< [0000](04)[0x00000000]
  __IO CR2_DEF                  CR2 ;  //!< [0004](04)[0x00000000]
  __IO OAR1_DEF                OAR1 ;  //!< [0008](04)[0x00000000]
  __IO OAR2_DEF                OAR2 ;  //!< [000c](04)[0x00000000]
  __IO TIMINGR_DEF          TIMINGR ;  //!< [0010](04)[0x00000000]
  __IO TIMEOUTR_DEF        TIMEOUTR ;  //!< [0014](04)[0x00000000]
  __IO ISR_DEF                  ISR ;  //!< [0018](04)[0x00000001]
  __O  ICR_DEF                  ICR ;  //!< [001c](04)[0x00000000]
  __I  PECR_DEF                PECR ;  //!< [0020](04)[0x00000000]
  __I  RXDR_DEF                RXDR ;  //!< [0024](04)[0x00000000]
  __IO TXDR_DEF                TXDR ;  //!< [0028](04)[0x00000000]
}; /* total size = 0x0400, struct size = 0x002C */

// ////////////////////+++ FLASH +-+//////////////////// //
struct FLASH_Type         { /*!< Flash */
  union ACR_DEF      {  //!< Access control register
    struct {
      __IO uint32_t   LATENCY  :  3; //!<[00] Latency
           uint32_t   UNUSED0  :  5; //!<[03] 
      __IO ONE_BIT    PRFTEN   :  1; //!<[08] Prefetch enable
      __IO ONE_BIT    ICEN     :  1; //!<[09] Instruction cache enable
      __IO ONE_BIT    DCEN     :  1; //!<[10] Data cache enable
      __IO ONE_BIT    ICRST    :  1; //!<[11] Instruction cache reset
      __IO ONE_BIT    DCRST    :  1; //!<[12] Data cache reset
      __IO ONE_BIT    RUN_PD   :  1; //!<[13] Flash Power-down mode during Low-power run mode
      __IO ONE_BIT    SLEEP_PD :  1; //!<[14] Flash Power-down mode during Low-power sleep mode
    } B;
    __IO uint32_t  R;
    explicit ACR_DEF () noexcept { R = 0x00000600u; }
    template<typename F> void setbit (F f) volatile {
      ACR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ACR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union PDKEYR_DEF   {  //!< Power down key register
    struct {
      __O  uint32_t   PDKEYR : 32; //!<[00] RUN_PD in FLASH_ACR key
    } B;
    __O  uint32_t  R;
    explicit PDKEYR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      PDKEYR_DEF r;
      R = f (r);
    }
  };
  union KEYR_DEF     {  //!< Flash key register
    struct {
      __O  uint32_t   KEYR : 32; //!<[00] KEYR
    } B;
    __O  uint32_t  R;
    explicit KEYR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      KEYR_DEF r;
      R = f (r);
    }
  };
  union OPTKEYR_DEF  {  //!< Option byte key register
    struct {
      __O  uint32_t   OPTKEYR : 32; //!<[00] Option byte key
    } B;
    __O  uint32_t  R;
    explicit OPTKEYR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      OPTKEYR_DEF r;
      R = f (r);
    }
  };
  union SR_DEF       {  //!< Status register
    struct {
      __IO ONE_BIT    EOP     :  1; //!<[00] End of operation
      __IO ONE_BIT    OPERR   :  1; //!<[01] Operation error
           ONE_BIT    UNUSED0 :  1; //!<[02] 
      __IO ONE_BIT    PROGERR :  1; //!<[03] Programming error
      __IO ONE_BIT    WRPERR  :  1; //!<[04] Write protected error
      __IO ONE_BIT    PGAERR  :  1; //!<[05] Programming alignment error
      __IO ONE_BIT    SIZERR  :  1; //!<[06] Size error
      __IO ONE_BIT    PGSERR  :  1; //!<[07] Programming sequence error
      __IO ONE_BIT    MISERR  :  1; //!<[08] Fast programming data miss error
      __IO ONE_BIT    FASTERR :  1; //!<[09] Fast programming error
           uint32_t   UNUSED1 :  4; //!<[10] 
      __IO ONE_BIT    RDERR   :  1; //!<[14] PCROP read error
      __IO ONE_BIT    OPTVERR :  1; //!<[15] Option validity error
      __I  ONE_BIT    BSY     :  1; //!<[16] Busy
    } B;
    __IO uint32_t  R;
    explicit SR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      SR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      SR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CR_DEF       {  //!< Flash control register
    struct {
      __IO ONE_BIT    PG         :  1; //!<[00] Programming
      __IO ONE_BIT    PER        :  1; //!<[01] Page erase
      __IO ONE_BIT    MER1       :  1; //!<[02] Bank 1 Mass erase
      __IO uint32_t   PNB        :  8; //!<[03] Page number
      __IO ONE_BIT    BKER       :  1; //!<[11] Bank erase
           uint32_t   UNUSED0    :  3; //!<[12] 
      __IO ONE_BIT    MER2       :  1; //!<[15] Bank 2 Mass erase
      __IO ONE_BIT    START      :  1; //!<[16] Start
      __IO ONE_BIT    OPTSTRT    :  1; //!<[17] Options modification start
      __IO ONE_BIT    FSTPG      :  1; //!<[18] Fast programming
           uint32_t   UNUSED1    :  5; //!<[19] 
      __IO ONE_BIT    EOPIE      :  1; //!<[24] End of operation interrupt enable
      __IO ONE_BIT    ERRIE      :  1; //!<[25] Error interrupt enable
      __IO ONE_BIT    RDERRIE    :  1; //!<[26] PCROP read error interrupt enable
      __IO ONE_BIT    OBL_LAUNCH :  1; //!<[27] Force the option byte loading
           uint32_t   UNUSED2    :  2; //!<[28] 
      __IO ONE_BIT    OPTLOCK    :  1; //!<[30] Options Lock
      __IO ONE_BIT    LOCK       :  1; //!<[31] FLASH_CR Lock
    } B;
    __IO uint32_t  R;
    explicit CR_DEF () noexcept { R = 0xc0000000u; }
    template<typename F> void setbit (F f) volatile {
      CR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ECCR_DEF     {  //!< Flash ECC register
    struct {
      __I  uint32_t   ADDR_ECC : 19; //!<[00] ECC fail address
      __I  ONE_BIT    BK_ECC   :  1; //!<[19] ECC fail bank
      __I  ONE_BIT    SYSF_ECC :  1; //!<[20] System Flash ECC fail
           uint32_t   UNUSED0  :  3; //!<[21] 
      __IO ONE_BIT    ECCIE    :  1; //!<[24] ECC correction interrupt enable
           uint32_t   UNUSED1  :  5; //!<[25] 
      __IO ONE_BIT    ECCC     :  1; //!<[30] ECC correction
      __IO ONE_BIT    ECCD     :  1; //!<[31] ECC detection
    } B;
    __IO uint32_t  R;
    explicit ECCR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ECCR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ECCR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union OPTR_DEF     {  //!< Flash option register
    struct {
      __IO uint32_t   RDP        :  8; //!<[00] Read protection level
      __IO uint32_t   BOR_LEV    :  3; //!<[08] BOR reset Level
           ONE_BIT    UNUSED0    :  1; //!<[11] 
      __IO ONE_BIT    nRST_STOP  :  1; //!<[12] nRST_STOP
      __IO ONE_BIT    nRST_STDBY :  1; //!<[13] nRST_STDBY
      __IO ONE_BIT    nRST_SHDW  :  1; //!<[14] nRST_SHDW
           ONE_BIT    UNUSED1    :  1; //!<[15] 
      __IO ONE_BIT    IWDG_SW    :  1; //!<[16] Independent watchdog selection
      __IO ONE_BIT    IWDG_STOP  :  1; //!<[17] Independent watchdog counter freeze in Stop mode
      __IO ONE_BIT    IWDG_STDBY :  1; //!<[18] Independent watchdog counter freeze in Standby mode
      __IO ONE_BIT    WWDG_SW    :  1; //!<[19] Window watchdog selection
           uint32_t   UNUSED2    :  3; //!<[20] 
      __IO ONE_BIT    nBOOT1     :  1; //!<[23] Boot configuration
      __IO ONE_BIT    SRAM2_PE   :  1; //!<[24] SRAM2 parity check enable
      __IO ONE_BIT    SRAM2_RST  :  1; //!<[25] SRAM2 Erase when system reset
      __IO ONE_BIT    nSWBOOT0   :  1; //!<[26] Software BOOT0
      __IO ONE_BIT    nBOOT0     :  1; //!<[27] nBOOT0 option bit
    } B;
    __IO uint32_t  R;
    explicit OPTR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      OPTR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      OPTR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union PCROP1SR_DEF {  //!< Flash Bank 1 PCROP Start address register
    struct {
      __IO uint32_t   PCROP1_STRT : 16; //!<[00] Bank 1 PCROP area start offset
    } B;
    __IO uint32_t  R;
    explicit PCROP1SR_DEF () noexcept { R = 0xffff0000u; }
    template<typename F> void setbit (F f) volatile {
      PCROP1SR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      PCROP1SR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union PCROP1ER_DEF {  //!< Flash Bank 1 PCROP End address register
    struct {
      __IO uint32_t   PCROP1_END : 16; //!<[00] Bank 1 PCROP area end offset
           uint32_t   UNUSED0    : 15; //!<[16] 
      __IO ONE_BIT    PCROP_RDP  :  1; //!<[31] PCROP area preserved when RDP level decreased
    } B;
    __IO uint32_t  R;
    explicit PCROP1ER_DEF () noexcept { R = 0x0fff0000u; }
    template<typename F> void setbit (F f) volatile {
      PCROP1ER_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      PCROP1ER_DEF r; r.R = R;
      R = f (r);
    }
  };
  union WRP1AR_DEF   {  //!< Flash Bank 1 WRP area A address register
    struct {
      __IO uint32_t   WRP1A_STRT :  8; //!<[00] WRP first area A start offset
           uint32_t   UNUSED0    :  8; //!<[08] 
      __IO uint32_t   WRP1A_END  :  8; //!<[16] WRP first area A end offset
    } B;
    __IO uint32_t  R;
    explicit WRP1AR_DEF () noexcept { R = 0xff00ff00u; }
    template<typename F> void setbit (F f) volatile {
      WRP1AR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      WRP1AR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union WRP1BR_DEF   {  //!< Flash Bank 1 WRP area B address register
    struct {
      __IO uint32_t   WRP1B_STRT :  8; //!<[00] Bank 1 WRP second area B start offset
           uint32_t   UNUSED0    :  8; //!<[08] 
      __IO uint32_t   WRP1B_END  :  8; //!<[16] Bank 1 WRP second area B end offset
    } B;
    __IO uint32_t  R;
    explicit WRP1BR_DEF () noexcept { R = 0xff00ff00u; }
    template<typename F> void setbit (F f) volatile {
      WRP1BR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      WRP1BR_DEF r; r.R = R;
      R = f (r);
    }
  };
  // PERIPHERAL FLASH REGISTERS INSTANCES
  __IO ACR_DEF                  ACR ;  //!< [0000](04)[0x00000600]
  __O  PDKEYR_DEF            PDKEYR ;  //!< [0004](04)[0x00000000]
  __O  KEYR_DEF                KEYR ;  //!< [0008](04)[0x00000000]
  __O  OPTKEYR_DEF          OPTKEYR ;  //!< [000c](04)[0x00000000]
  __IO SR_DEF                    SR ;  //!< [0010](04)[0x00000000]
  __IO CR_DEF                    CR ;  //!< [0014](04)[0xC0000000]
  __IO ECCR_DEF                ECCR ;  //!< [0018](04)[0x00000000]
       uint32_t           UNUSED0 ;  //!< [001c](04)[0xFFFFFFFF]
  __IO OPTR_DEF                OPTR ;  //!< [0020](04)[0x00000000]
  __IO PCROP1SR_DEF        PCROP1SR ;  //!< [0024](04)[0xFFFF0000]
  __IO PCROP1ER_DEF        PCROP1ER ;  //!< [0028](04)[0x0FFF0000]
  __IO WRP1AR_DEF            WRP1AR ;  //!< [002c](04)[0xFF00FF00]
  __IO WRP1BR_DEF            WRP1BR ;  //!< [0030](04)[0xFF00FF00]
}; /* total size = 0x0400, struct size = 0x0034 */

// ////////////////////+++ RCC +-+//////////////////// //
struct RCC_Type           { /*!< Reset and clock control */
  union CR_DEF          {  //!< Clock control register
    struct {
      __IO ONE_BIT    MSION      :  1; //!<[00] MSI clock enable
      __I  ONE_BIT    MSIRDY     :  1; //!<[01] MSI clock ready flag
      __IO ONE_BIT    MSIPLLEN   :  1; //!<[02] MSI clock PLL enable
      __O  ONE_BIT    MSIRGSEL   :  1; //!<[03] MSI clock range selection
      __IO uint32_t   MSIRANGE   :  4; //!<[04] MSI clock ranges
      __IO ONE_BIT    HSION      :  1; //!<[08] HSI clock enable
      __IO ONE_BIT    HSIKERON   :  1; //!<[09] HSI always enable for peripheral kernels
      __I  ONE_BIT    HSIRDY     :  1; //!<[10] HSI clock ready flag
      __IO ONE_BIT    HSIASFS    :  1; //!<[11] HSI automatic start from Stop
           uint32_t   UNUSED0    :  4; //!<[12] 
      __IO ONE_BIT    HSEON      :  1; //!<[16] HSE clock enable
      __I  ONE_BIT    HSERDY     :  1; //!<[17] HSE clock ready flag
      __IO ONE_BIT    HSEBYP     :  1; //!<[18] HSE crystal oscillator bypass
      __O  ONE_BIT    CSSON      :  1; //!<[19] Clock security system enable
           uint32_t   UNUSED1    :  4; //!<[20] 
      __IO ONE_BIT    PLLON      :  1; //!<[24] Main PLL enable
      __I  ONE_BIT    PLLRDY     :  1; //!<[25] Main PLL clock ready flag
      __IO ONE_BIT    PLLSAI1ON  :  1; //!<[26] SAI1 PLL enable
      __I  ONE_BIT    PLLSAI1RDY :  1; //!<[27] SAI1 PLL clock ready flag
    } B;
    __IO uint32_t  R;
    explicit CR_DEF () noexcept { R = 0x00000063u; }
    template<typename F> void setbit (F f) volatile {
      CR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ICSCR_DEF       {  //!< Internal clock sources calibration register
    struct {
      __I  uint32_t   MSICAL  :  8; //!<[00] MSI clock calibration
      __IO uint32_t   MSITRIM :  8; //!<[08] MSI clock trimming
      __I  uint32_t   HSICAL  :  8; //!<[16] HSI clock calibration
      __IO uint32_t   HSITRIM :  5; //!<[24] HSI clock trimming
    } B;
    __IO uint32_t  R;
    explicit ICSCR_DEF () noexcept { R = 0x10000000u; }
    template<typename F> void setbit (F f) volatile {
      ICSCR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ICSCR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CFGR_DEF        {  //!< Clock configuration register
    struct {
      __IO uint32_t   SW       :  2; //!<[00] System clock switch
      __I  uint32_t   SWS      :  2; //!<[02] System clock switch status
      __IO uint32_t   HPRE     :  4; //!<[04] AHB prescaler
      __IO uint32_t   PPRE1    :  3; //!<[08] PB low-speed prescaler (APB1)
      __IO uint32_t   PPRE2    :  3; //!<[11] APB high-speed prescaler (APB2)
           ONE_BIT    UNUSED0  :  1; //!<[14] 
      __IO ONE_BIT    STOPWUCK :  1; //!<[15] Wakeup from Stop and CSS backup clock selection
           uint32_t   UNUSED1  :  8; //!<[16] 
      __IO uint32_t   MCOSEL   :  3; //!<[24] Microcontroller clock output
           ONE_BIT    UNUSED2  :  1; //!<[27] 
      __I  uint32_t   MCOPRE   :  3; //!<[28] Microcontroller clock output prescaler
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
  union PLLCFGR_DEF     {  //!< PLL configuration register
    struct {
      __IO uint32_t   PLLSRC  :  2; //!<[00] Main PLL, PLLSAI1 and PLLSAI2 entry clock source
           uint32_t   UNUSED0 :  2; //!<[02] 
      __IO uint32_t   PLLM    :  3; //!<[04] Division factor for the main PLL and audio PLL (PLLSAI1 and PLLSAI2) input clock
           ONE_BIT    UNUSED1 :  1; //!<[07] 
      __IO uint32_t   PLLN    :  7; //!<[08] Main PLL multiplication factor for VCO
           ONE_BIT    UNUSED2 :  1; //!<[15] 
      __IO ONE_BIT    PLLPEN  :  1; //!<[16] Main PLL PLLSAI3CLK output enable
      __IO ONE_BIT    PLLP    :  1; //!<[17] Main PLL division factor for PLLSAI3CLK (SAI1 and SAI2 clock)
           uint32_t   UNUSED3 :  2; //!<[18] 
      __IO ONE_BIT    PLLQEN  :  1; //!<[20] Main PLL PLLUSB1CLK output enable
      __IO uint32_t   PLLQ    :  2; //!<[21] Main PLL division factor for PLLUSB1CLK(48 MHz clock)
           ONE_BIT    UNUSED4 :  1; //!<[23] 
      __IO ONE_BIT    PLLREN  :  1; //!<[24] Main PLL PLLCLK output enable
      __IO uint32_t   PLLR    :  2; //!<[25] Main PLL division factor for PLLCLK (system clock)
      __IO uint32_t   PLLPDIV :  5; //!<[27] Main PLL division factor for PLLSAI2CLK
    } B;
    __IO uint32_t  R;
    explicit PLLCFGR_DEF () noexcept { R = 0x00001000u; }
    template<typename F> void setbit (F f) volatile {
      PLLCFGR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      PLLCFGR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union PLLSAI1CFGR_DEF {  //!< PLLSAI1 configuration register
    struct {
           uint32_t   UNUSED0     :  8; //!<[00] 
      __IO uint32_t   PLLSAI1N    :  7; //!<[08] SAI1PLL multiplication factor for VCO
           ONE_BIT    UNUSED1     :  1; //!<[15] 
      __IO ONE_BIT    PLLSAI1PEN  :  1; //!<[16] SAI1PLL PLLSAI1CLK output enable
      __IO ONE_BIT    PLLSAI1P    :  1; //!<[17] SAI1PLL division factor for PLLSAI1CLK (SAI1 or SAI2 clock)
           uint32_t   UNUSED2     :  2; //!<[18] 
      __IO ONE_BIT    PLLSAI1QEN  :  1; //!<[20] SAI1PLL PLLUSB2CLK output enable
      __IO uint32_t   PLLSAI1Q    :  2; //!<[21] SAI1PLL division factor for PLLUSB2CLK (48 MHz clock)
           ONE_BIT    UNUSED3     :  1; //!<[23] 
      __IO ONE_BIT    PLLSAI1REN  :  1; //!<[24] PLLSAI1 PLLADC1CLK output enable
      __IO uint32_t   PLLSAI1R    :  2; //!<[25] PLLSAI1 division factor for PLLADC1CLK (ADC clock)
      __IO uint32_t   PLLSAI1PDIV :  5; //!<[27] PLLSAI1 division factor for PLLSAI1CLK
    } B;
    __IO uint32_t  R;
    explicit PLLSAI1CFGR_DEF () noexcept { R = 0x00001000u; }
    template<typename F> void setbit (F f) volatile {
      PLLSAI1CFGR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      PLLSAI1CFGR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CIER_DEF        {  //!< Clock interrupt enable register
    struct {
      __IO ONE_BIT    LSIRDYIE     :  1; //!<[00] LSI ready interrupt enable
      __IO ONE_BIT    LSERDYIE     :  1; //!<[01] LSE ready interrupt enable
      __IO ONE_BIT    MSIRDYIE     :  1; //!<[02] MSI ready interrupt enable
      __IO ONE_BIT    HSIRDYIE     :  1; //!<[03] HSI ready interrupt enable
      __IO ONE_BIT    HSERDYIE     :  1; //!<[04] HSE ready interrupt enable
      __IO ONE_BIT    PLLRDYIE     :  1; //!<[05] PLL ready interrupt enable
      __IO ONE_BIT    PLLSAI1RDYIE :  1; //!<[06] PLLSAI1 ready interrupt enable
           uint32_t   UNUSED0      :  2; //!<[07] 
      __IO ONE_BIT    LSECSSIE     :  1; //!<[09] LSE clock security system interrupt enable
      __IO ONE_BIT    HSI48RDYIE   :  1; //!<[10] HSI48 ready interrupt enable
    } B;
    __IO uint32_t  R;
    explicit CIER_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CIER_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CIER_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CIFR_DEF        {  //!< Clock interrupt flag register
    struct {
      __I  ONE_BIT  LSIRDYF     :  1; //!<[00] LSI ready interrupt flag
      __I  ONE_BIT  LSERDYF     :  1; //!<[01] LSE ready interrupt flag
      __I  ONE_BIT  MSIRDYF     :  1; //!<[02] MSI ready interrupt flag
      __I  ONE_BIT  HSIRDYF     :  1; //!<[03] HSI ready interrupt flag
      __I  ONE_BIT  HSERDYF     :  1; //!<[04] HSE ready interrupt flag
      __I  ONE_BIT  PLLRDYF     :  1; //!<[05] PLL ready interrupt flag
      __I  ONE_BIT  PLLSAI1RDYF :  1; //!<[06] PLLSAI1 ready interrupt flag
           ONE_BIT  UNUSED0     :  1; //!<[07] 
      __I  ONE_BIT  CSSF        :  1; //!<[08] Clock security system interrupt flag
      __I  ONE_BIT  LSECSSF     :  1; //!<[09] LSE Clock security system interrupt flag
      __I  ONE_BIT  HSI48RDYF   :  1; //!<[10] HSI48 ready interrupt flag
    } B;
    __I  uint32_t  R;

    explicit CIFR_DEF (volatile CIFR_DEF & o) noexcept { R = o.R; };
  };
  union CICR_DEF        {  //!< Clock interrupt clear register
    struct {
      __O  ONE_BIT  LSIRDYC     :  1; //!<[00] LSI ready interrupt clear
      __O  ONE_BIT  LSERDYC     :  1; //!<[01] LSE ready interrupt clear
      __O  ONE_BIT  MSIRDYC     :  1; //!<[02] MSI ready interrupt clear
      __O  ONE_BIT  HSIRDYC     :  1; //!<[03] HSI ready interrupt clear
      __O  ONE_BIT  HSERDYC     :  1; //!<[04] HSE ready interrupt clear
      __O  ONE_BIT  PLLRDYC     :  1; //!<[05] PLL ready interrupt clear
      __O  ONE_BIT  PLLSAI1RDYC :  1; //!<[06] PLLSAI1 ready interrupt clear
           ONE_BIT  UNUSED0     :  1; //!<[07] 
      __O  ONE_BIT  CSSC        :  1; //!<[08] Clock security system interrupt clear
      __O  ONE_BIT  LSECSSC     :  1; //!<[09] LSE Clock security system interrupt clear
      __O  ONE_BIT  HSI48RDYC   :  1; //!<[10] HSI48 oscillator ready interrupt clear
    } B;
    __O  uint32_t  R;
    explicit CICR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CICR_DEF r;
      R = f (r);
    }
  };
  union AHB1RSTR_DEF    {  //!< AHB1 peripheral reset register
    struct {
      __IO ONE_BIT    DMA1RST  :  1; //!<[00] DMA1 reset
      __IO ONE_BIT    DMA2RST  :  1; //!<[01] DMA2 reset
           uint32_t   UNUSED0  :  6; //!<[02] 
      __IO ONE_BIT    FLASHRST :  1; //!<[08] Flash memory interface reset
           uint32_t   UNUSED1  :  2; //!<[09] 
      __IO ONE_BIT    CRCRST   :  1; //!<[11] CRC reset
           uint32_t   UNUSED2  :  4; //!<[12] 
      __IO ONE_BIT    TSCRST   :  1; //!<[16] Touch Sensing Controller reset
    } B;
    __IO uint32_t  R;
    explicit AHB1RSTR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      AHB1RSTR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      AHB1RSTR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union AHB2RSTR_DEF    {  //!< AHB2 peripheral reset register
    struct {
      __IO ONE_BIT    GPIOARST :  1; //!<[00] IO port A reset
      __IO ONE_BIT    GPIOBRST :  1; //!<[01] IO port B reset
      __IO ONE_BIT    GPIOCRST :  1; //!<[02] IO port C reset
      __IO ONE_BIT    GPIODRST :  1; //!<[03] IO port D reset
      __IO ONE_BIT    GPIOERST :  1; //!<[04] IO port E reset
           uint32_t   UNUSED0  :  2; //!<[05] 
      __IO ONE_BIT    GPIOHRST :  1; //!<[07] IO port H reset
           uint32_t   UNUSED1  :  5; //!<[08] 
      __IO ONE_BIT    ADCRST   :  1; //!<[13] ADC reset
           uint32_t   UNUSED2  :  2; //!<[14] 
      __IO ONE_BIT    AESRST   :  1; //!<[16] AES hardware accelerator reset
           ONE_BIT    UNUSED3  :  1; //!<[17] 
      __IO ONE_BIT    RNGRST   :  1; //!<[18] Random number generator reset
    } B;
    __IO uint32_t  R;
    explicit AHB2RSTR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      AHB2RSTR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      AHB2RSTR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union AHB3RSTR_DEF    {  //!< AHB3 peripheral reset register
    struct {
           uint32_t   UNUSED0 :  8; //!<[00] 
      __IO ONE_BIT    QSPIRST :  1; //!<[08] Quad SPI memory interface reset
    } B;
    __IO uint32_t  R;
    explicit AHB3RSTR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      AHB3RSTR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      AHB3RSTR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union APB1RSTR1_DEF   {  //!< APB1 peripheral reset register 1
    struct {
      __IO ONE_BIT    TIM2RST   :  1; //!<[00] TIM2 timer reset
           uint32_t   UNUSED0   :  3; //!<[01] 
      __IO ONE_BIT    TIM6RST   :  1; //!<[04] TIM6 timer reset
      __IO ONE_BIT    TIM7RST   :  1; //!<[05] TIM7 timer reset
           uint32_t   UNUSED1   :  3; //!<[06] 
      __IO ONE_BIT    LCDRST    :  1; //!<[09] LCD interface reset
           uint32_t   UNUSED2   :  4; //!<[10] 
      __IO ONE_BIT    SPI2RST   :  1; //!<[14] SPI2 reset
      __IO ONE_BIT    SPI3RST   :  1; //!<[15] SPI3 reset
           ONE_BIT    UNUSED3   :  1; //!<[16] 
      __IO ONE_BIT    USART2RST :  1; //!<[17] USART2 reset
      __IO ONE_BIT    USART1RST :  1; //!<[18] USART1 reset
      __IO ONE_BIT    USART4RST :  1; //!<[19] USART4 reset.
           ONE_BIT    UNUSED4   :  1; //!<[20] 
      __IO ONE_BIT    I2C1RST   :  1; //!<[21] I2C1 reset
      __IO ONE_BIT    I2C2RST   :  1; //!<[22] I2C2 reset
      __IO ONE_BIT    I2C3RST   :  1; //!<[23] I2C3 reset
      __IO ONE_BIT    CRSRST    :  1; //!<[24] CRS reset
      __IO ONE_BIT    CAN1RST   :  1; //!<[25] CAN1 reset
      __IO ONE_BIT    USBFSRST  :  1; //!<[26] USB FS reset
           ONE_BIT    UNUSED5   :  1; //!<[27] 
      __IO ONE_BIT    PWRRST    :  1; //!<[28] Power interface reset
      __IO ONE_BIT    DAC1RST   :  1; //!<[29] DAC1 interface reset
      __IO ONE_BIT    OPAMPRST  :  1; //!<[30] OPAMP interface reset
      __IO ONE_BIT    LPTIM1RST :  1; //!<[31] Low Power Timer 1 reset
    } B;
    __IO uint32_t  R;
    explicit APB1RSTR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      APB1RSTR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      APB1RSTR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union APB1RSTR2_DEF   {  //!< APB1 peripheral reset register 2
    struct {
      __IO ONE_BIT    LPUART1RST :  1; //!<[00] Low-power UART 1 reset
      __IO ONE_BIT    I2C4RST    :  1; //!<[01] I2C4 reset
      __IO ONE_BIT    SWPMI1RST  :  1; //!<[02] Single wire protocol reset
           uint32_t   UNUSED0    :  2; //!<[03] 
      __IO ONE_BIT    LPTIM2RST  :  1; //!<[05] Low-power timer 2 reset
    } B;
    __IO uint32_t  R;
    explicit APB1RSTR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      APB1RSTR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      APB1RSTR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union APB2RSTR_DEF    {  //!< APB2 peripheral reset register
    struct {
      __IO ONE_BIT    SYSCFGRST :  1; //!<[00] System configuration (SYSCFG) reset
           uint32_t   UNUSED0   :  9; //!<[01] 
      __IO ONE_BIT    SDMMCRST  :  1; //!<[10] SDMMC reset
      __IO ONE_BIT    TIM1RST   :  1; //!<[11] TIM1 timer reset
      __IO ONE_BIT    SPI1RST   :  1; //!<[12] SPI1 reset
           ONE_BIT    UNUSED1   :  1; //!<[13] 
      __IO ONE_BIT    USART1RST :  1; //!<[14] USART1 reset
           ONE_BIT    UNUSED2   :  1; //!<[15] 
      __IO ONE_BIT    TIM15RST  :  1; //!<[16] TIM15 timer reset
      __IO ONE_BIT    TIM16RST  :  1; //!<[17] TIM16 timer reset
           uint32_t   UNUSED3   :  3; //!<[18] 
      __IO ONE_BIT    SAI1RST   :  1; //!<[21] Serial audio interface 1 (SAI1) reset
           uint32_t   UNUSED4   :  2; //!<[22] 
      __IO ONE_BIT    DFSDMRST  :  1; //!<[24] DFSDM filter reset
    } B;
    __IO uint32_t  R;
    explicit APB2RSTR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      APB2RSTR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      APB2RSTR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union AHB1ENR_DEF     {  //!< AHB1 peripheral clock enable register
    struct {
      __IO ONE_BIT    DMA1EN  :  1; //!<[00] DMA1 clock enable
      __IO ONE_BIT    DMA2EN  :  1; //!<[01] DMA2 clock enable
           uint32_t   UNUSED0 :  6; //!<[02] 
      __IO ONE_BIT    FLASHEN :  1; //!<[08] Flash memory interface clock enable
           uint32_t   UNUSED1 :  3; //!<[09] 
      __IO ONE_BIT    CRCEN   :  1; //!<[12] CRC clock enable
           uint32_t   UNUSED2 :  3; //!<[13] 
      __IO ONE_BIT    TSCEN   :  1; //!<[16] Touch Sensing Controller clock enable
    } B;
    __IO uint32_t  R;
    explicit AHB1ENR_DEF () noexcept { R = 0x00000100u; }
    template<typename F> void setbit (F f) volatile {
      AHB1ENR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      AHB1ENR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union AHB2ENR_DEF     {  //!< AHB2 peripheral clock enable register
    struct {
      __IO ONE_BIT    GPIOAEN :  1; //!<[00] IO port A clock enable
      __IO ONE_BIT    GPIOBEN :  1; //!<[01] IO port B clock enable
      __IO ONE_BIT    GPIOCEN :  1; //!<[02] IO port C clock enable
      __IO ONE_BIT    GPIODEN :  1; //!<[03] IO port D clock enable
      __IO ONE_BIT    GPIOEEN :  1; //!<[04] IO port E clock enable
           uint32_t   UNUSED0 :  2; //!<[05] 
      __IO ONE_BIT    GPIOHEN :  1; //!<[07] IO port H clock enable
           uint32_t   UNUSED1 :  5; //!<[08] 
      __IO ONE_BIT    ADCEN   :  1; //!<[13] ADC clock enable
           uint32_t   UNUSED2 :  2; //!<[14] 
      __IO ONE_BIT    AESEN   :  1; //!<[16] AES accelerator clock enable
           ONE_BIT    UNUSED3 :  1; //!<[17] 
      __IO ONE_BIT    RNGEN   :  1; //!<[18] Random Number Generator clock enable
    } B;
    __IO uint32_t  R;
    explicit AHB2ENR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      AHB2ENR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      AHB2ENR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union AHB3ENR_DEF     {  //!< AHB3 peripheral clock enable register
    struct {
           uint32_t   UNUSED0 :  8; //!<[00] 
      __IO ONE_BIT    QSPIEN  :  1; //!<[08] QSPIEN
    } B;
    __IO uint32_t  R;
    explicit AHB3ENR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      AHB3ENR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      AHB3ENR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union APB1ENR1_DEF    {  //!< APB1ENR1
    struct {
      __IO ONE_BIT    TIM2EN   :  1; //!<[00] TIM2 timer clock enable
      __IO ONE_BIT    TIM3EN   :  1; //!<[01] TIM3 timer clock enable
           uint32_t   UNUSED0  :  2; //!<[02] 
      __IO ONE_BIT    TIM6EN   :  1; //!<[04] TIM6 timer clock enable
      __IO ONE_BIT    TIM7EN   :  1; //!<[05] TIM7 timer clock enable
           uint32_t   UNUSED1  :  3; //!<[06] 
      __IO ONE_BIT    LCDEN    :  1; //!<[09] LCD clock enable
      __IO ONE_BIT    RTCAPBEN :  1; //!<[10] RTC APB clock enable
      __IO ONE_BIT    WWDGEN   :  1; //!<[11] Window watchdog clock enable
           uint32_t   UNUSED2  :  2; //!<[12] 
      __IO ONE_BIT    SPI1EN   :  1; //!<[14] SPI1 clock enable
      __IO ONE_BIT    SPI3EN   :  1; //!<[15] SPI3 clock enable
           ONE_BIT    UNUSED3  :  1; //!<[16] 
      __IO ONE_BIT    USART2EN :  1; //!<[17] USART2 clock enable
      __IO ONE_BIT    USART1EN :  1; //!<[18] USART1 clock enable
      __IO ONE_BIT    UART4EN  :  1; //!<[19] UART4 clock enable
           ONE_BIT    UNUSED4  :  1; //!<[20] 
      __IO ONE_BIT    I2C1EN   :  1; //!<[21] I2C1 clock enable
      __IO ONE_BIT    I2C2EN   :  1; //!<[22] I2C2 clock enable
      __IO ONE_BIT    I2C3EN   :  1; //!<[23] I2C3 clock enable
      __IO ONE_BIT    CRSEN    :  1; //!<[24] CRS clock enable
      __IO ONE_BIT    CAN1EN   :  1; //!<[25] CAN1 clock enable
      __IO ONE_BIT    USBF     :  1; //!<[26] USB FS clock enable
           ONE_BIT    UNUSED5  :  1; //!<[27] 
      __IO ONE_BIT    PWREN    :  1; //!<[28] Power interface clock enable
      __IO ONE_BIT    DAC1EN   :  1; //!<[29] DAC1 interface clock enable
      __IO ONE_BIT    OPAMPEN  :  1; //!<[30] OPAMP interface clock enable
      __IO ONE_BIT    LPTIM1EN :  1; //!<[31] Low power timer 1 clock enable
    } B;
    __IO uint32_t  R;
    explicit APB1ENR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      APB1ENR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      APB1ENR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union APB1ENR2_DEF    {  //!< APB1 peripheral clock enable register 2
    struct {
      __IO ONE_BIT    LPUART1EN :  1; //!<[00] Low power UART 1 clock enable
      __IO ONE_BIT    I2C4EN    :  1; //!<[01] I2C4 clock enable
      __IO ONE_BIT    SWPMI1EN  :  1; //!<[02] Single wire protocol clock enable
           uint32_t   UNUSED0   :  2; //!<[03] 
      __IO ONE_BIT    LPTIM2EN  :  1; //!<[05] LPTIM2EN
           uint32_t   UNUSED1   : 18; //!<[06] 
      __IO ONE_BIT    DFSDMEN   :  1; //!<[24] DFSDMEN enable
    } B;
    __IO uint32_t  R;
    explicit APB1ENR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      APB1ENR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      APB1ENR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union APB2ENR_DEF     {  //!< APB2ENR
    struct {
      __IO ONE_BIT    SYSCFGEN   :  1; //!<[00] SYSCFG clock enable
           uint32_t   UNUSED0    :  6; //!<[01] 
      __IO ONE_BIT    FIREWALLEN :  1; //!<[07] Firewall clock enable
           uint32_t   UNUSED1    :  2; //!<[08] 
      __IO ONE_BIT    SDMMCEN    :  1; //!<[10] SDMMC clock enable
      __IO ONE_BIT    TIM1EN     :  1; //!<[11] TIM1 timer clock enable
      __IO ONE_BIT    SPI1EN     :  1; //!<[12] SPI1 clock enable
           ONE_BIT    UNUSED2    :  1; //!<[13] 
      __IO ONE_BIT    USART1EN   :  1; //!<[14] USART1clock enable
           ONE_BIT    UNUSED3    :  1; //!<[15] 
      __IO ONE_BIT    TIM15EN    :  1; //!<[16] TIM15 timer clock enable
      __IO ONE_BIT    TIM16EN    :  1; //!<[17] TIM16 timer clock enable
           uint32_t   UNUSED4    :  3; //!<[18] 
      __IO ONE_BIT    SAI1EN     :  1; //!<[21] SAI1 clock enable
    } B;
    __IO uint32_t  R;
    explicit APB2ENR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      APB2ENR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      APB2ENR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union AHB1SMENR_DEF   {  //!< AHB1 peripheral clocks enable in Sleep and Stop modes register
    struct {
      __IO ONE_BIT    DMA1SMEN  :  1; //!<[00] DMA1 clocks enable during Sleep and Stop modes
      __IO ONE_BIT    DMA2SMEN  :  1; //!<[01] DMA2 clocks enable during Sleep and Stop modes
           uint32_t   UNUSED0   :  6; //!<[02] 
      __IO ONE_BIT    FLASHSMEN :  1; //!<[08] Flash memory interface clocks enable during Sleep and Stop modes
      __IO ONE_BIT    SRAM1SMEN :  1; //!<[09] SRAM1 interface clocks enable during Sleep and Stop modes
           uint32_t   UNUSED1   :  2; //!<[10] 
      __IO ONE_BIT    CRCSMEN   :  1; //!<[12] CRCSMEN
           uint32_t   UNUSED2   :  3; //!<[13] 
      __IO ONE_BIT    TSCSMEN   :  1; //!<[16] Touch Sensing Controller clocks enable during Sleep and Stop modes
    } B;
    __IO uint32_t  R;
    explicit AHB1SMENR_DEF () noexcept { R = 0x00011303u; }
    template<typename F> void setbit (F f) volatile {
      AHB1SMENR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      AHB1SMENR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union AHB2SMENR_DEF   {  //!< AHB2 peripheral clocks enable in Sleep and Stop modes register
    struct {
      __IO ONE_BIT    GPIOASMEN :  1; //!<[00] IO port A clocks enable during Sleep and Stop modes
      __IO ONE_BIT    GPIOBSMEN :  1; //!<[01] IO port B clocks enable during Sleep and Stop modes
      __IO ONE_BIT    GPIOCSMEN :  1; //!<[02] IO port C clocks enable during Sleep and Stop modes
      __IO ONE_BIT    GPIODSMEN :  1; //!<[03] IO port D clocks enable during Sleep and Stop modes
      __IO ONE_BIT    GPIOESMEN :  1; //!<[04] IO port E clocks enable during Sleep and Stop modes
           uint32_t   UNUSED0   :  2; //!<[05] 
      __IO ONE_BIT    GPIOHSMEN :  1; //!<[07] IO port H clocks enable during Sleep and Stop modes
           ONE_BIT    UNUSED1   :  1; //!<[08] 
      __IO ONE_BIT    SRAM2SMEN :  1; //!<[09] SRAM2 interface clocks enable during Sleep and Stop modes
           uint32_t   UNUSED2   :  3; //!<[10] 
      __IO ONE_BIT    ADCFSSMEN :  1; //!<[13] ADC clocks enable during Sleep and Stop modes
           uint32_t   UNUSED3   :  2; //!<[14] 
      __IO ONE_BIT    AESSMEN   :  1; //!<[16] AES accelerator clocks enable during Sleep and Stop modes
           ONE_BIT    UNUSED4   :  1; //!<[17] 
      __IO ONE_BIT    RNGSMEN   :  1; //!<[18] Random Number Generator clocks enable during Sleep and Stop modes
    } B;
    __IO uint32_t  R;
    explicit AHB2SMENR_DEF () noexcept { R = 0x000532ffu; }
    template<typename F> void setbit (F f) volatile {
      AHB2SMENR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      AHB2SMENR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union AHB3SMENR_DEF   {  //!< AHB3 peripheral clocks enable in Sleep and Stop modes register
    struct {
           uint32_t   UNUSED0  :  8; //!<[00] 
      __IO ONE_BIT    QSPISMEN :  1; //!<[08] QSPISMEN
    } B;
    __IO uint32_t  R;
    explicit AHB3SMENR_DEF () noexcept { R = 0x00000101u; }
    template<typename F> void setbit (F f) volatile {
      AHB3SMENR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      AHB3SMENR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union APB1SMENR1_DEF  {  //!< APB1SMENR1
    struct {
      __IO ONE_BIT    TIM2SMEN   :  1; //!<[00] TIM2 timer clocks enable during Sleep and Stop modes
           uint32_t   UNUSED0    :  3; //!<[01] 
      __IO ONE_BIT    TIM6SMEN   :  1; //!<[04] TIM6 timer clocks enable during Sleep and Stop modes
      __IO ONE_BIT    TIM7SMEN   :  1; //!<[05] TIM7 timer clocks enable during Sleep and Stop modes
           uint32_t   UNUSED1    :  3; //!<[06] 
      __IO ONE_BIT    LCDSMEN    :  1; //!<[09] LCD clocks enable during Sleep and Stop modes
      __IO ONE_BIT    RTCAPBSMEN :  1; //!<[10] RTC APB clock enable during Sleep and Stop modes
      __IO ONE_BIT    WWDGSMEN   :  1; //!<[11] Window watchdog clocks enable during Sleep and Stop modes
           uint32_t   UNUSED2    :  2; //!<[12] 
      __IO ONE_BIT    SPI2SMEN   :  1; //!<[14] SPI2 clocks enable during Sleep and Stop modes
      __IO ONE_BIT    SP3SMEN    :  1; //!<[15] SPI3 clocks enable during Sleep and Stop modes
           ONE_BIT    UNUSED3    :  1; //!<[16] 
      __IO ONE_BIT    USART1SMEN :  1; //!<[17] USART1 clocks enable during Sleep and Stop modes
      __IO ONE_BIT    USART2SMEN :  1; //!<[18] USART2 clocks enable during Sleep and Stop modes
           uint32_t   UNUSED4    :  2; //!<[19] 
      __IO ONE_BIT    I2C1SMEN   :  1; //!<[21] I2C1 clocks enable during Sleep and Stop modes
      __IO ONE_BIT    I2C2SMEN   :  1; //!<[22] I2C2 clocks enable during Sleep and Stop modes
      __IO ONE_BIT    I2C3SMEN   :  1; //!<[23] I2C3 clocks enable during Sleep and Stop modes
      __IO ONE_BIT    CRSSMEN    :  1; //!<[24] CRS clock enable during Sleep and Stop modes
      __IO ONE_BIT    CAN1SMEN   :  1; //!<[25] CAN1 clocks enable during Sleep and Stop modes
      __IO ONE_BIT    USBFSSMEN  :  1; //!<[26] USB FS clock enable during Sleep and Stop modes
           ONE_BIT    UNUSED5    :  1; //!<[27] 
      __IO ONE_BIT    PWRSMEN    :  1; //!<[28] Power interface clocks enable during Sleep and Stop modes
      __IO ONE_BIT    DAC1SMEN   :  1; //!<[29] DAC1 interface clocks enable during Sleep and Stop modes
      __IO ONE_BIT    OPAMPSMEN  :  1; //!<[30] OPAMP interface clocks enable during Sleep and Stop modes
      __IO ONE_BIT    LPTIM1SMEN :  1; //!<[31] Low power timer 1 clocks enable during Sleep and Stop modes
    } B;
    __IO uint32_t  R;
    explicit APB1SMENR1_DEF () noexcept { R = 0xf2feca3fu; }
    template<typename F> void setbit (F f) volatile {
      APB1SMENR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      APB1SMENR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union APB1SMENR2_DEF  {  //!< APB1 peripheral clocks enable in Sleep and Stop modes register 2
    struct {
      __IO ONE_BIT    LPUART1SMEN :  1; //!<[00] Low power UART 1 clocks enable during Sleep and Stop modes
           ONE_BIT    UNUSED0     :  1; //!<[01] 
      __IO ONE_BIT    SWPMI1SMEN  :  1; //!<[02] Single wire protocol clocks enable during Sleep and Stop modes
           uint32_t   UNUSED1     :  2; //!<[03] 
      __IO ONE_BIT    LPTIM2SMEN  :  1; //!<[05] LPTIM2SMEN
    } B;
    __IO uint32_t  R;
    explicit APB1SMENR2_DEF () noexcept { R = 0x00000025u; }
    template<typename F> void setbit (F f) volatile {
      APB1SMENR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      APB1SMENR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union APB2SMENR_DEF   {  //!< APB2SMENR
    struct {
      __IO ONE_BIT    SYSCFGSMEN :  1; //!<[00] SYSCFG clocks enable during Sleep and Stop modes
           uint32_t   UNUSED0    :  9; //!<[01] 
      __IO ONE_BIT    SDMMCSMEN  :  1; //!<[10] SDMMC clocks enable during Sleep and Stop modes
      __IO ONE_BIT    TIM1SMEN   :  1; //!<[11] TIM1 timer clocks enable during Sleep and Stop modes
      __IO ONE_BIT    SPI1SMEN   :  1; //!<[12] SPI1 clocks enable during Sleep and Stop modes
           ONE_BIT    UNUSED1    :  1; //!<[13] 
      __IO ONE_BIT    USART1SMEN :  1; //!<[14] USART1clocks enable during Sleep and Stop modes
           ONE_BIT    UNUSED2    :  1; //!<[15] 
      __IO ONE_BIT    TIM15SMEN  :  1; //!<[16] TIM15 timer clocks enable during Sleep and Stop modes
      __IO ONE_BIT    TIM16SMEN  :  1; //!<[17] TIM16 timer clocks enable during Sleep and Stop modes
           uint32_t   UNUSED3    :  3; //!<[18] 
      __IO ONE_BIT    SAI1SMEN   :  1; //!<[21] SAI1 clocks enable during Sleep and Stop modes
    } B;
    __IO uint32_t  R;
    explicit APB2SMENR_DEF () noexcept { R = 0x01677c01u; }
    template<typename F> void setbit (F f) volatile {
      APB2SMENR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      APB2SMENR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CCIPR_DEF       {  //!< CCIPR
    struct {
      __IO uint32_t   USART1SEL  :  2; //!<[00] USART1 clock source selection
      __IO uint32_t   USART2SEL  :  2; //!<[02] USART2 clock source selection
      __IO uint32_t   USART3SEL  :  2; //!<[04] USART3 clock source selection
      __IO uint32_t   USART4SEL  :  2; //!<[06] USART4 clock source selection
           uint32_t   UNUSED0    :  2; //!<[08] 
      __IO uint32_t   LPUART1SEL :  2; //!<[10] LPUART1 clock source selection
      __IO uint32_t   I2C1SEL    :  2; //!<[12] I2C1 clock source selection
      __IO uint32_t   I2C2SEL    :  2; //!<[14] I2C2 clock source selection
      __IO uint32_t   I2C3SEL    :  2; //!<[16] I2C3 clock source selection
      __IO uint32_t   LPTIM1SEL  :  2; //!<[18] Low power timer 1 clock source selection
      __IO uint32_t   LPTIM2SEL  :  2; //!<[20] Low power timer 2 clock source selection
      __IO uint32_t   SAI1SEL    :  2; //!<[22] SAI1 clock source selection
           uint32_t   UNUSED1    :  2; //!<[24] 
      __IO uint32_t   CLK48SEL   :  2; //!<[26] 48 MHz clock source selection
      __IO uint32_t   ADCSEL     :  2; //!<[28] ADCs clock source selection
      __IO ONE_BIT    SWPMI1SEL  :  1; //!<[30] SWPMI1 clock source selection
    } B;
    __IO uint32_t  R;
    explicit CCIPR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CCIPR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CCIPR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union BDCR_DEF        {  //!< BDCR
    struct {
      __IO ONE_BIT    LSEON    :  1; //!<[00] LSE oscillator enable
      __I  ONE_BIT    LSERDY   :  1; //!<[01] LSE oscillator ready
      __IO ONE_BIT    LSEBYP   :  1; //!<[02] LSE oscillator bypass
      __IO uint32_t   LSEDRV   :  2; //!<[03] SE oscillator drive capability
      __IO ONE_BIT    LSECSSON :  1; //!<[05] LSECSSON
      __I  ONE_BIT    LSECSSD  :  1; //!<[06] LSECSSD
           ONE_BIT    UNUSED0  :  1; //!<[07] 
      __IO uint32_t   RTCSEL   :  2; //!<[08] RTC clock source selection
           uint32_t   UNUSED1  :  5; //!<[10] 
      __IO ONE_BIT    RTCEN    :  1; //!<[15] RTC clock enable
      __IO ONE_BIT    BDRST    :  1; //!<[16] Backup domain software reset
           uint32_t   UNUSED2  :  7; //!<[17] 
      __IO ONE_BIT    LSCOEN   :  1; //!<[24] Low speed clock output enable
      __IO ONE_BIT    LSCOSEL  :  1; //!<[25] Low speed clock output selection
    } B;
    __IO uint32_t  R;
    explicit BDCR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      BDCR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      BDCR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CSR_DEF         {  //!< CSR
    struct {
      __IO ONE_BIT    LSION        :  1; //!<[00] LSI oscillator enable
      __I  ONE_BIT    LSIRDY       :  1; //!<[01] LSI oscillator ready
           uint32_t   UNUSED0      :  6; //!<[02] 
      __IO uint32_t   MSISRANGE    :  4; //!<[08] SI range after Standby mode
           uint32_t   UNUSED1      : 11; //!<[12] 
      __IO ONE_BIT    RMVF         :  1; //!<[23] Remove reset flag
      __I  ONE_BIT    FIREWALLRSTF :  1; //!<[24] Firewall reset flag
      __I  ONE_BIT    OBLRSTF      :  1; //!<[25] Option byte loader reset flag
      __I  ONE_BIT    PINRSTF      :  1; //!<[26] Pin reset flag
      __I  ONE_BIT    BORRSTF      :  1; //!<[27] BOR flag
      __I  ONE_BIT    SFTRSTF      :  1; //!<[28] Software reset flag
      __I  ONE_BIT    IWDGRSTF     :  1; //!<[29] Independent window watchdog reset flag
      __I  ONE_BIT    WWDGRSTF     :  1; //!<[30] Window watchdog reset flag
      __I  ONE_BIT    LPWRSTF      :  1; //!<[31] Low-power reset flag
    } B;
    __IO uint32_t  R;
    explicit CSR_DEF () noexcept { R = 0x0c000600u; }
    template<typename F> void setbit (F f) volatile {
      CSR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CSR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CRRCR_DEF       {  //!< Clock recovery RC register
    struct {
      __IO ONE_BIT    HSI48ON  :  1; //!<[00] HSI48 clock enable
      __I  ONE_BIT    HSI48RDY :  1; //!<[01] HSI48 clock ready flag
           uint32_t   UNUSED0  :  5; //!<[02] 
      __I  uint32_t   HSI48CAL :  9; //!<[07] HSI48 clock calibration
    } B;
    __IO uint32_t  R;
    explicit CRRCR_DEF () noexcept { R = 0x0c000600u; }
    template<typename F> void setbit (F f) volatile {
      CRRCR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CRRCR_DEF r; r.R = R;
      R = f (r);
    }
  };
  // PERIPHERAL RCC REGISTERS INSTANCES
  __IO CR_DEF                       CR ;  //!< [0000](04)[0x00000063]
  __IO ICSCR_DEF                 ICSCR ;  //!< [0004](04)[0x10000000]
  __IO CFGR_DEF                   CFGR ;  //!< [0008](04)[0x00000000]
  __IO PLLCFGR_DEF             PLLCFGR ;  //!< [000c](04)[0x00001000]
  __IO PLLSAI1CFGR_DEF     PLLSAI1CFGR ;  //!< [0010](04)[0x00001000]
       uint32_t              UNUSED0 ;  //!< [0014](04)[0xFFFFFFFF]
  __IO CIER_DEF                   CIER ;  //!< [0018](04)[0x00000000]
  __I  CIFR_DEF                   CIFR ;  //!< [001c](04)[0x00000000]
  __O  CICR_DEF                   CICR ;  //!< [0020](04)[0x00000000]
       uint32_t              UNUSED1 ;  //!< [0024](04)[0xFFFFFFFF]
  __IO AHB1RSTR_DEF           AHB1RSTR ;  //!< [0028](04)[0x00000000]
  __IO AHB2RSTR_DEF           AHB2RSTR ;  //!< [002c](04)[0x00000000]
  __IO AHB3RSTR_DEF           AHB3RSTR ;  //!< [0030](04)[0x00000000]
       uint32_t              UNUSED2 ;  //!< [0034](04)[0xFFFFFFFF]
  __IO APB1RSTR1_DEF         APB1RSTR1 ;  //!< [0038](04)[0x00000000]
  __IO APB1RSTR2_DEF         APB1RSTR2 ;  //!< [003c](04)[0x00000000]
  __IO APB2RSTR_DEF           APB2RSTR ;  //!< [0040](04)[0x00000000]
       uint32_t              UNUSED3 ;  //!< [0044](04)[0xFFFFFFFF]
  __IO AHB1ENR_DEF             AHB1ENR ;  //!< [0048](04)[0x00000100]
  __IO AHB2ENR_DEF             AHB2ENR ;  //!< [004c](04)[0x00000000]
  __IO AHB3ENR_DEF             AHB3ENR ;  //!< [0050](04)[0x00000000]
       uint32_t              UNUSED4 ;  //!< [0054](04)[0xFFFFFFFF]
  __IO APB1ENR1_DEF           APB1ENR1 ;  //!< [0058](04)[0x00000000]
  __IO APB1ENR2_DEF           APB1ENR2 ;  //!< [005c](04)[0x00000000]
  __IO APB2ENR_DEF             APB2ENR ;  //!< [0060](04)[0x00000000]
       uint32_t              UNUSED5 ;  //!< [0064](04)[0xFFFFFFFF]
  __IO AHB1SMENR_DEF         AHB1SMENR ;  //!< [0068](04)[0x00011303]
  __IO AHB2SMENR_DEF         AHB2SMENR ;  //!< [006c](04)[0x000532FF]
  __IO AHB3SMENR_DEF         AHB3SMENR ;  //!< [0070](04)[0x00000101]
       uint32_t              UNUSED6 ;  //!< [0074](04)[0xFFFFFFFF]
  __IO APB1SMENR1_DEF       APB1SMENR1 ;  //!< [0078](04)[0xF2FECA3F]
  __IO APB1SMENR2_DEF       APB1SMENR2 ;  //!< [007c](04)[0x00000025]
  __IO APB2SMENR_DEF         APB2SMENR ;  //!< [0080](04)[0x01677C01]
       uint32_t              UNUSED7 ;  //!< [0084](04)[0xFFFFFFFF]
  __IO CCIPR_DEF                 CCIPR ;  //!< [0088](04)[0x00000000]
       uint32_t              UNUSED8 ;  //!< [008c](04)[0xFFFFFFFF]
  __IO BDCR_DEF                   BDCR ;  //!< [0090](04)[0x00000000]
  __IO CSR_DEF                     CSR ;  //!< [0094](04)[0x0C000600]
  __IO CRRCR_DEF                 CRRCR ;  //!< [0098](04)[0x0C000600]
}; /* total size = 0x0400, struct size = 0x009C */

// ////////////////////+++ PWR +-+//////////////////// //
struct PWR_Type           { /*!< Power control */
  union CR1_DEF     {  //!< Power control register 1
    struct {
      __IO uint32_t   LPMS    :  3; //!<[00] Low-power mode selection
           uint32_t   UNUSED0 :  5; //!<[03] 
      __IO ONE_BIT    DBP     :  1; //!<[08] Disable backup domain write protection
      __IO uint32_t   VOS     :  2; //!<[09] Voltage scaling range selection
           uint32_t   UNUSED1 :  3; //!<[11] 
      __IO ONE_BIT    LPR     :  1; //!<[14] Low-power run
    } B;
    __IO uint32_t  R;
    explicit CR1_DEF () noexcept { R = 0x00000200u; }
    template<typename F> void setbit (F f) volatile {
      CR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CR2_DEF     {  //!< Power control register 2
    struct {
      __IO ONE_BIT    PVDE    :  1; //!<[00] Power voltage detector enable
      __IO uint32_t   PLS     :  3; //!<[01] Power voltage detector level selection
      __IO ONE_BIT    PVME1   :  1; //!<[04] Peripheral voltage monitoring 1 enable: VDDUSB vs. 1.2V
           ONE_BIT    UNUSED0 :  1; //!<[05] 
      __IO ONE_BIT    PVME3   :  1; //!<[06] Peripheral voltage monitoring 3 enable: VDDA vs. 1.62V
      __IO ONE_BIT    PVME4   :  1; //!<[07] Peripheral voltage monitoring 4 enable: VDDA vs. 2.2V
           uint32_t   UNUSED1 :  2; //!<[08] 
      __IO ONE_BIT    USV     :  1; //!<[10] VDDUSB USB supply valid
    } B;
    __IO uint32_t  R;
    explicit CR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CR3_DEF     {  //!< Power control register 3
    struct {
      __IO ONE_BIT    EWUP1   :  1; //!<[00] Enable Wakeup pin WKUP1
      __IO ONE_BIT    EWUP2   :  1; //!<[01] Enable Wakeup pin WKUP2
      __IO ONE_BIT    EWUP3   :  1; //!<[02] Enable Wakeup pin WKUP3
      __IO ONE_BIT    EWUP4   :  1; //!<[03] Enable Wakeup pin WKUP4
      __IO ONE_BIT    EWUP5   :  1; //!<[04] Enable Wakeup pin WKUP5
           uint32_t   UNUSED0 :  3; //!<[05] 
      __IO ONE_BIT    RRS     :  1; //!<[08] SRAM2 retention in Standby mode
           ONE_BIT    UNUSED1 :  1; //!<[09] 
      __IO ONE_BIT    APC     :  1; //!<[10] Apply pull-up and pull-down configuration
      __IO ONE_BIT    ENULP   :  1; //!<[11] Enable ULP sampling of BOR and PVD
           uint32_t   UNUSED2 :  3; //!<[12] 
      __IO ONE_BIT    EIWUL   :  1; //!<[15] Enable internal wakeup line
    } B;
    __IO uint32_t  R;
    explicit CR3_DEF () noexcept { R = 0x00008000u; }
    template<typename F> void setbit (F f) volatile {
      CR3_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CR3_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CR4_DEF     {  //!< Power control register 4
    struct {
      __IO ONE_BIT    WP1         :  1; //!<[00] Wakeup pin WKUP1 polarity
      __IO ONE_BIT    WP2         :  1; //!<[01] Wakeup pin WKUP2 polarity
      __IO ONE_BIT    WP3         :  1; //!<[02] Wakeup pin WKUP3 polarity
      __IO ONE_BIT    WP4         :  1; //!<[03] Wakeup pin WKUP4 polarity
      __IO ONE_BIT    WP5         :  1; //!<[04] Wakeup pin WKUP5 polarity
           uint32_t   UNUSED0     :  3; //!<[05] 
      __IO ONE_BIT    VBE         :  1; //!<[08] VBAT battery charging enable
      __IO ONE_BIT    VBRS        :  1; //!<[09] VBAT battery charging resistor selection
           uint32_t   UNUSED1     :  3; //!<[10] 
      __IO ONE_BIT    EXT_SMPS_ON :  1; //!<[13] External SMPS On
    } B;
    __IO uint32_t  R;
    explicit CR4_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CR4_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CR4_DEF r; r.R = R;
      R = f (r);
    }
  };
  union SR1_DEF     {  //!< Power status register 1
    struct {
      __I  ONE_BIT    WUF1         :  1; //!<[00] Wakeup flag 1
      __I  ONE_BIT    WUF2         :  1; //!<[01] Wakeup flag 2
      __I  ONE_BIT    WUF3         :  1; //!<[02] Wakeup flag 3
      __I  ONE_BIT    WUF4         :  1; //!<[03] Wakeup flag 4
      __I  ONE_BIT    WUF5         :  1; //!<[04] Wakeup flag 5
           uint32_t   UNUSED0      :  3; //!<[05] 
      __I  ONE_BIT    SBF          :  1; //!<[08] Standby flag
           uint32_t   UNUSED1      :  4; //!<[09] 
      __I  ONE_BIT    EXT_SMPS_RDY :  1; //!<[13] External SMPS Ready
           ONE_BIT    UNUSED2      :  1; //!<[14] 
      __I  ONE_BIT    WUFI         :  1; //!<[15] Wakeup flag internal
    } B;
    __I  uint32_t  R;

    explicit SR1_DEF (volatile SR1_DEF & o) noexcept { R = o.R; };
  };
  union SR2_DEF     {  //!< Power status register 2
    struct {
           uint32_t   UNUSED0 :  8; //!<[00] 
      __I  ONE_BIT    REGLPS  :  1; //!<[08] Low-power regulator started
      __I  ONE_BIT    REGLPF  :  1; //!<[09] Low-power regulator flag
      __I  ONE_BIT    VOSF    :  1; //!<[10] Voltage scaling flag
      __I  ONE_BIT    PVDO    :  1; //!<[11] Power voltage detector output
      __I  ONE_BIT    PVMO1   :  1; //!<[12] Peripheral voltage monitoring output: VDDUSB vs. 1.2 V
           ONE_BIT    UNUSED1 :  1; //!<[13] 
      __I  ONE_BIT    PVMO3   :  1; //!<[14] Peripheral voltage monitoring output: VDDA vs. 1.62 V
      __I  ONE_BIT    PVMO4   :  1; //!<[15] Peripheral voltage monitoring output: VDDA vs. 2.2 V
    } B;
    __I  uint32_t  R;

    explicit SR2_DEF (volatile SR2_DEF & o) noexcept { R = o.R; };
  };
  union SCR_DEF     {  //!< Power status clear register
    struct {
      __O  ONE_BIT    CWUF1   :  1; //!<[00] Clear wakeup flag 1
      __O  ONE_BIT    CWUF2   :  1; //!<[01] Clear wakeup flag 2
      __O  ONE_BIT    CWUF3   :  1; //!<[02] Clear wakeup flag 3
      __O  ONE_BIT    CWUF4   :  1; //!<[03] Clear wakeup flag 4
      __O  ONE_BIT    CWUF5   :  1; //!<[04] Clear wakeup flag 5
           uint32_t   UNUSED0 :  3; //!<[05] 
      __O  ONE_BIT    CSBF    :  1; //!<[08] Clear standby flag
    } B;
    __O  uint32_t  R;
    explicit SCR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      SCR_DEF r;
      R = f (r);
    }
  };
  union PUCRA_DEF   {  //!< Power Port A pull-up control register
    struct {
      __IO ONE_BIT  PU0     :  1; //!<[00] Port A pull-up bit y (y=0..15)
      __IO ONE_BIT  PU1     :  1; //!<[01] Port A pull-up bit y (y=0..15)
      __IO ONE_BIT  PU2     :  1; //!<[02] Port A pull-up bit y (y=0..15)
      __IO ONE_BIT  PU3     :  1; //!<[03] Port A pull-up bit y (y=0..15)
      __IO ONE_BIT  PU4     :  1; //!<[04] Port A pull-up bit y (y=0..15)
      __IO ONE_BIT  PU5     :  1; //!<[05] Port A pull-up bit y (y=0..15)
      __IO ONE_BIT  PU6     :  1; //!<[06] Port A pull-up bit y (y=0..15)
      __IO ONE_BIT  PU7     :  1; //!<[07] Port A pull-up bit y (y=0..15)
      __IO ONE_BIT  PU8     :  1; //!<[08] Port A pull-up bit y (y=0..15)
      __IO ONE_BIT  PU9     :  1; //!<[09] Port A pull-up bit y (y=0..15)
      __IO ONE_BIT  PU10    :  1; //!<[10] Port A pull-up bit y (y=0..15)
      __IO ONE_BIT  PU11    :  1; //!<[11] Port A pull-up bit y (y=0..15)
      __IO ONE_BIT  PU12    :  1; //!<[12] Port A pull-up bit y (y=0..15)
      __IO ONE_BIT  PU13    :  1; //!<[13] Port A pull-up bit y (y=0..15)
           ONE_BIT  UNUSED0 :  1; //!<[14] 
      __IO ONE_BIT  PU15    :  1; //!<[15] Port A pull-up bit y (y=0..15)
    } B;
    __IO uint32_t  R;
    explicit PUCRA_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      PUCRA_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      PUCRA_DEF r; r.R = R;
      R = f (r);
    }
  };
  union PDCRA_DEF   {  //!< Power Port A pull-down control register
    struct {
      __IO ONE_BIT  PD0  :  1; //!<[00] Port A pull-down bit y (y=0..15)
      __IO ONE_BIT  PD1  :  1; //!<[01] Port A pull-down bit y (y=0..15)
      __IO ONE_BIT  PD2  :  1; //!<[02] Port A pull-down bit y (y=0..15)
      __IO ONE_BIT  PD3  :  1; //!<[03] Port A pull-down bit y (y=0..15)
      __IO ONE_BIT  PD4  :  1; //!<[04] Port A pull-down bit y (y=0..15)
      __IO ONE_BIT  PD5  :  1; //!<[05] Port A pull-down bit y (y=0..15)
      __IO ONE_BIT  PD6  :  1; //!<[06] Port A pull-down bit y (y=0..15)
      __IO ONE_BIT  PD7  :  1; //!<[07] Port A pull-down bit y (y=0..15)
      __IO ONE_BIT  PD8  :  1; //!<[08] Port A pull-down bit y (y=0..15)
      __IO ONE_BIT  PD9  :  1; //!<[09] Port A pull-down bit y (y=0..15)
      __IO ONE_BIT  PD10 :  1; //!<[10] Port A pull-down bit y (y=0..15)
      __IO ONE_BIT  PD11 :  1; //!<[11] Port A pull-down bit y (y=0..15)
      __IO ONE_BIT  PD12 :  1; //!<[12] Port A pull-down bit y (y=0..15)
    } B;
    __IO uint32_t  R;
    explicit PDCRA_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      PDCRA_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      PDCRA_DEF r; r.R = R;
      R = f (r);
    }
  };
  union PUCRB_DEF   {  //!< Power Port B pull-up control register
    struct {
      __IO ONE_BIT  PU0  :  1; //!<[00] Port B pull-up bit y (y=0..15)
      __IO ONE_BIT  PU1  :  1; //!<[01] Port B pull-up bit y (y=0..15)
      __IO ONE_BIT  PU2  :  1; //!<[02] Port B pull-up bit y (y=0..15)
      __IO ONE_BIT  PU3  :  1; //!<[03] Port B pull-up bit y (y=0..15)
      __IO ONE_BIT  PU4  :  1; //!<[04] Port B pull-up bit y (y=0..15)
      __IO ONE_BIT  PU5  :  1; //!<[05] Port B pull-up bit y (y=0..15)
      __IO ONE_BIT  PU6  :  1; //!<[06] Port B pull-up bit y (y=0..15)
      __IO ONE_BIT  PU7  :  1; //!<[07] Port B pull-up bit y (y=0..15)
      __IO ONE_BIT  PU8  :  1; //!<[08] Port B pull-up bit y (y=0..15)
      __IO ONE_BIT  PU9  :  1; //!<[09] Port B pull-up bit y (y=0..15)
      __IO ONE_BIT  PU10 :  1; //!<[10] Port B pull-up bit y (y=0..15)
      __IO ONE_BIT  PU11 :  1; //!<[11] Port B pull-up bit y (y=0..15)
      __IO ONE_BIT  PU12 :  1; //!<[12] Port B pull-up bit y (y=0..15)
      __IO ONE_BIT  PU13 :  1; //!<[13] Port B pull-up bit y (y=0..15)
      __IO ONE_BIT  PU14 :  1; //!<[14] Port B pull-up bit y (y=0..15)
      __IO ONE_BIT  PU15 :  1; //!<[15] Port B pull-up bit y (y=0..15)
    } B;
    __IO uint32_t  R;
    explicit PUCRB_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      PUCRB_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      PUCRB_DEF r; r.R = R;
      R = f (r);
    }
  };
  union PDCRB_DEF   {  //!< Power Port B pull-down control register
    struct {
      __IO ONE_BIT  PD0     :  1; //!<[00] Port B pull-down bit y (y=0..15)
      __IO ONE_BIT  PD1     :  1; //!<[01] Port B pull-down bit y (y=0..15)
      __IO ONE_BIT  PD2     :  1; //!<[02] Port B pull-down bit y (y=0..15)
      __IO ONE_BIT  PD3     :  1; //!<[03] Port B pull-down bit y (y=0..15)
           ONE_BIT  UNUSED0 :  1; //!<[04] 
      __IO ONE_BIT  PD5     :  1; //!<[05] Port B pull-down bit y (y=0..15)
      __IO ONE_BIT  PD6     :  1; //!<[06] Port B pull-down bit y (y=0..15)
      __IO ONE_BIT  PD7     :  1; //!<[07] Port B pull-down bit y (y=0..15)
      __IO ONE_BIT  PD8     :  1; //!<[08] Port B pull-down bit y (y=0..15)
      __IO ONE_BIT  PD9     :  1; //!<[09] Port B pull-down bit y (y=0..15)
      __IO ONE_BIT  PD10    :  1; //!<[10] Port B pull-down bit y (y=0..15)
      __IO ONE_BIT  PD11    :  1; //!<[11] Port B pull-down bit y (y=0..15)
      __IO ONE_BIT  PD12    :  1; //!<[12] Port B pull-down bit y (y=0..15)
      __IO ONE_BIT  PD13    :  1; //!<[13] Port B pull-down bit y (y=0..15)
      __IO ONE_BIT  PD14    :  1; //!<[14] Port B pull-down bit y (y=0..15)
      __IO ONE_BIT  PD15    :  1; //!<[15] Port B pull-down bit y (y=0..15)
    } B;
    __IO uint32_t  R;
    explicit PDCRB_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      PDCRB_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      PDCRB_DEF r; r.R = R;
      R = f (r);
    }
  };
  union PUCRC_DEF   {  //!< Power Port C pull-up control register
    struct {
      __IO ONE_BIT  PU0  :  1; //!<[00] Port C pull-up bit y (y=0..15)
      __IO ONE_BIT  PU1  :  1; //!<[01] Port C pull-up bit y (y=0..15)
      __IO ONE_BIT  PU2  :  1; //!<[02] Port C pull-up bit y (y=0..15)
      __IO ONE_BIT  PU3  :  1; //!<[03] Port C pull-up bit y (y=0..15)
      __IO ONE_BIT  PU4  :  1; //!<[04] Port C pull-up bit y (y=0..15)
      __IO ONE_BIT  PU5  :  1; //!<[05] Port C pull-up bit y (y=0..15)
      __IO ONE_BIT  PU6  :  1; //!<[06] Port C pull-up bit y (y=0..15)
      __IO ONE_BIT  PU7  :  1; //!<[07] Port C pull-up bit y (y=0..15)
      __IO ONE_BIT  PU8  :  1; //!<[08] Port C pull-up bit y (y=0..15)
      __IO ONE_BIT  PU9  :  1; //!<[09] Port C pull-up bit y (y=0..15)
      __IO ONE_BIT  PU10 :  1; //!<[10] Port C pull-up bit y (y=0..15)
      __IO ONE_BIT  PU11 :  1; //!<[11] Port C pull-up bit y (y=0..15)
      __IO ONE_BIT  PU12 :  1; //!<[12] Port C pull-up bit y (y=0..15)
      __IO ONE_BIT  PU13 :  1; //!<[13] Port C pull-up bit y (y=0..15)
      __IO ONE_BIT  PU14 :  1; //!<[14] Port C pull-up bit y (y=0..15)
      __IO ONE_BIT  PU15 :  1; //!<[15] Port C pull-up bit y (y=0..15)
    } B;
    __IO uint32_t  R;
    explicit PUCRC_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      PUCRC_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      PUCRC_DEF r; r.R = R;
      R = f (r);
    }
  };
  union PDCRC_DEF   {  //!< Power Port C pull-down control register
    struct {
      __IO ONE_BIT  PD0  :  1; //!<[00] Port C pull-down bit y (y=0..15)
      __IO ONE_BIT  PD1  :  1; //!<[01] Port C pull-down bit y (y=0..15)
      __IO ONE_BIT  PD2  :  1; //!<[02] Port C pull-down bit y (y=0..15)
      __IO ONE_BIT  PD3  :  1; //!<[03] Port C pull-down bit y (y=0..15)
      __IO ONE_BIT  PD4  :  1; //!<[04] Port C pull-down bit y (y=0..15)
      __IO ONE_BIT  PD5  :  1; //!<[05] Port C pull-down bit y (y=0..15)
      __IO ONE_BIT  PD6  :  1; //!<[06] Port C pull-down bit y (y=0..15)
      __IO ONE_BIT  PD7  :  1; //!<[07] Port C pull-down bit y (y=0..15)
      __IO ONE_BIT  PD8  :  1; //!<[08] Port C pull-down bit y (y=0..15)
      __IO ONE_BIT  PD9  :  1; //!<[09] Port C pull-down bit y (y=0..15)
      __IO ONE_BIT  PD10 :  1; //!<[10] Port C pull-down bit y (y=0..15)
      __IO ONE_BIT  PD11 :  1; //!<[11] Port C pull-down bit y (y=0..15)
      __IO ONE_BIT  PD12 :  1; //!<[12] Port C pull-down bit y (y=0..15)
      __IO ONE_BIT  PD13 :  1; //!<[13] Port C pull-down bit y (y=0..15)
      __IO ONE_BIT  PD14 :  1; //!<[14] Port C pull-down bit y (y=0..15)
      __IO ONE_BIT  PD15 :  1; //!<[15] Port C pull-down bit y (y=0..15)
    } B;
    __IO uint32_t  R;
    explicit PDCRC_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      PDCRC_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      PDCRC_DEF r; r.R = R;
      R = f (r);
    }
  };
  union PUCRD_DEF   {  //!< Power Port D pull-up control register
    struct {
      __IO ONE_BIT  PU0  :  1; //!<[00] Port D pull-up bit y (y=0..15)
      __IO ONE_BIT  PU1  :  1; //!<[01] Port D pull-up bit y (y=0..15)
      __IO ONE_BIT  PU2  :  1; //!<[02] Port D pull-up bit y (y=0..15)
      __IO ONE_BIT  PU3  :  1; //!<[03] Port D pull-up bit y (y=0..15)
      __IO ONE_BIT  PU4  :  1; //!<[04] Port D pull-up bit y (y=0..15)
      __IO ONE_BIT  PU5  :  1; //!<[05] Port D pull-up bit y (y=0..15)
      __IO ONE_BIT  PU6  :  1; //!<[06] Port D pull-up bit y (y=0..15)
      __IO ONE_BIT  PU7  :  1; //!<[07] Port D pull-up bit y (y=0..15)
      __IO ONE_BIT  PU8  :  1; //!<[08] Port D pull-up bit y (y=0..15)
      __IO ONE_BIT  PU9  :  1; //!<[09] Port D pull-up bit y (y=0..15)
      __IO ONE_BIT  PU10 :  1; //!<[10] Port D pull-up bit y (y=0..15)
      __IO ONE_BIT  PU11 :  1; //!<[11] Port D pull-up bit y (y=0..15)
      __IO ONE_BIT  PU12 :  1; //!<[12] Port D pull-up bit y (y=0..15)
      __IO ONE_BIT  PU13 :  1; //!<[13] Port D pull-up bit y (y=0..15)
      __IO ONE_BIT  PU14 :  1; //!<[14] Port D pull-up bit y (y=0..15)
      __IO ONE_BIT  PU15 :  1; //!<[15] Port D pull-up bit y (y=0..15)
    } B;
    __IO uint32_t  R;
    explicit PUCRD_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      PUCRD_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      PUCRD_DEF r; r.R = R;
      R = f (r);
    }
  };
  union PDCRD_DEF   {  //!< Power Port D pull-down control register
    struct {
      __IO ONE_BIT  PD0  :  1; //!<[00] Port D pull-down bit y (y=0..15)
      __IO ONE_BIT  PD1  :  1; //!<[01] Port D pull-down bit y (y=0..15)
      __IO ONE_BIT  PD2  :  1; //!<[02] Port D pull-down bit y (y=0..15)
      __IO ONE_BIT  PD3  :  1; //!<[03] Port D pull-down bit y (y=0..15)
      __IO ONE_BIT  PD4  :  1; //!<[04] Port D pull-down bit y (y=0..15)
      __IO ONE_BIT  PD5  :  1; //!<[05] Port D pull-down bit y (y=0..15)
      __IO ONE_BIT  PD6  :  1; //!<[06] Port D pull-down bit y (y=0..15)
      __IO ONE_BIT  PD7  :  1; //!<[07] Port D pull-down bit y (y=0..15)
      __IO ONE_BIT  PD8  :  1; //!<[08] Port D pull-down bit y (y=0..15)
      __IO ONE_BIT  PD9  :  1; //!<[09] Port D pull-down bit y (y=0..15)
      __IO ONE_BIT  PD10 :  1; //!<[10] Port D pull-down bit y (y=0..15)
      __IO ONE_BIT  PD11 :  1; //!<[11] Port D pull-down bit y (y=0..15)
      __IO ONE_BIT  PD12 :  1; //!<[12] Port D pull-down bit y (y=0..15)
      __IO ONE_BIT  PD13 :  1; //!<[13] Port D pull-down bit y (y=0..15)
      __IO ONE_BIT  PD14 :  1; //!<[14] Port D pull-down bit y (y=0..15)
      __IO ONE_BIT  PD15 :  1; //!<[15] Port D pull-down bit y (y=0..15)
    } B;
    __IO uint32_t  R;
    explicit PDCRD_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      PDCRD_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      PDCRD_DEF r; r.R = R;
      R = f (r);
    }
  };
  union PUCRE_DEF   {  //!< Power Port E pull-up control register
    struct {
      __IO ONE_BIT  PU0  :  1; //!<[00] Port E pull-up bit y (y=0..15)
      __IO ONE_BIT  PU1  :  1; //!<[01] Port E pull-up bit y (y=0..15)
      __IO ONE_BIT  PU2  :  1; //!<[02] Port E pull-up bit y (y=0..15)
      __IO ONE_BIT  PU3  :  1; //!<[03] Port E pull-up bit y (y=0..15)
      __IO ONE_BIT  PU4  :  1; //!<[04] Port E pull-up bit y (y=0..15)
      __IO ONE_BIT  PU5  :  1; //!<[05] Port E pull-up bit y (y=0..15)
      __IO ONE_BIT  PU6  :  1; //!<[06] Port E pull-up bit y (y=0..15)
      __IO ONE_BIT  PU7  :  1; //!<[07] Port E pull-up bit y (y=0..15)
      __IO ONE_BIT  PU8  :  1; //!<[08] Port E pull-up bit y (y=0..15)
      __IO ONE_BIT  PU9  :  1; //!<[09] Port E pull-up bit y (y=0..15)
      __IO ONE_BIT  PU10 :  1; //!<[10] Port E pull-up bit y (y=0..15)
      __IO ONE_BIT  PU11 :  1; //!<[11] Port E pull-up bit y (y=0..15)
      __IO ONE_BIT  PU12 :  1; //!<[12] Port E pull-up bit y (y=0..15)
      __IO ONE_BIT  PU13 :  1; //!<[13] Port E pull-up bit y (y=0..15)
      __IO ONE_BIT  PU14 :  1; //!<[14] Port E pull-up bit y (y=0..15)
      __IO ONE_BIT  PU15 :  1; //!<[15] Port E pull-up bit y (y=0..15)
    } B;
    __IO uint32_t  R;
    explicit PUCRE_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      PUCRE_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      PUCRE_DEF r; r.R = R;
      R = f (r);
    }
  };
  union PDCRE_DEF   {  //!< Power Port E pull-down control register
    struct {
      __IO ONE_BIT  PD0  :  1; //!<[00] Port E pull-down bit y (y=0..15)
      __IO ONE_BIT  PD1  :  1; //!<[01] Port E pull-down bit y (y=0..15)
      __IO ONE_BIT  PD2  :  1; //!<[02] Port E pull-down bit y (y=0..15)
      __IO ONE_BIT  PD3  :  1; //!<[03] Port E pull-down bit y (y=0..15)
      __IO ONE_BIT  PD4  :  1; //!<[04] Port E pull-down bit y (y=0..15)
      __IO ONE_BIT  PD5  :  1; //!<[05] Port E pull-down bit y (y=0..15)
      __IO ONE_BIT  PD6  :  1; //!<[06] Port E pull-down bit y (y=0..15)
      __IO ONE_BIT  PD7  :  1; //!<[07] Port E pull-down bit y (y=0..15)
      __IO ONE_BIT  PD8  :  1; //!<[08] Port E pull-down bit y (y=0..15)
      __IO ONE_BIT  PD9  :  1; //!<[09] Port E pull-down bit y (y=0..15)
      __IO ONE_BIT  PD10 :  1; //!<[10] Port E pull-down bit y (y=0..15)
      __IO ONE_BIT  PD11 :  1; //!<[11] Port E pull-down bit y (y=0..15)
      __IO ONE_BIT  PD12 :  1; //!<[12] Port E pull-down bit y (y=0..15)
      __IO ONE_BIT  PD13 :  1; //!<[13] Port E pull-down bit y (y=0..15)
      __IO ONE_BIT  PD14 :  1; //!<[14] Port E pull-down bit y (y=0..15)
      __IO ONE_BIT  PD15 :  1; //!<[15] Port E pull-down bit y (y=0..15)
    } B;
    __IO uint32_t  R;
    explicit PDCRE_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      PDCRE_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      PDCRE_DEF r; r.R = R;
      R = f (r);
    }
  };
  union PUCRH_DEF   {  //!< Power Port H pull-up control register
    struct {
      __IO ONE_BIT  PU0     :  1; //!<[00] Port H pull-up bit y (y=0..1)
      __IO ONE_BIT  PU1     :  1; //!<[01] Port H pull-up bit y (y=0..1)
           ONE_BIT  UNUSED0 :  1; //!<[02] 
      __IO ONE_BIT  PU3     :  1; //!<[03] Port H pull-up bit y (y=0..1)
    } B;
    __IO uint32_t  R;
    explicit PUCRH_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      PUCRH_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      PUCRH_DEF r; r.R = R;
      R = f (r);
    }
  };
  union PDCRH_DEF   {  //!< Power Port H pull-down control register
    struct {
      __IO ONE_BIT  PD0     :  1; //!<[00] Port H pull-down bit y (y=0..1)
      __IO ONE_BIT  PD1     :  1; //!<[01] Port H pull-down bit y (y=0..1)
           ONE_BIT  UNUSED0 :  1; //!<[02] 
      __IO ONE_BIT  PD3     :  1; //!<[03] Port H pull-down bit y (y=0..1)
    } B;
    __IO uint32_t  R;
    explicit PDCRH_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      PDCRH_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      PDCRH_DEF r; r.R = R;
      R = f (r);
    }
  };
  // PERIPHERAL PWR REGISTERS INSTANCES
  __IO CR1_DEF                 CR1 ;  //!< [0000](04)[0x00000200]
  __IO CR2_DEF                 CR2 ;  //!< [0004](04)[0x00000000]
  __IO CR3_DEF                 CR3 ;  //!< [0008](04)[0x00008000]
  __IO CR4_DEF                 CR4 ;  //!< [000c](04)[0x00000000]
  __I  SR1_DEF                 SR1 ;  //!< [0010](04)[0x00000000]
  __I  SR2_DEF                 SR2 ;  //!< [0014](04)[0x00000000]
  __O  SCR_DEF                 SCR ;  //!< [0018](04)[0x00000000]
       uint32_t          UNUSED0 ;  //!< [001c](04)[0xFFFFFFFF]
  __IO PUCRA_DEF             PUCRA ;  //!< [0020](04)[0x00000000]
  __IO PDCRA_DEF             PDCRA ;  //!< [0024](04)[0x00000000]
  __IO PUCRB_DEF             PUCRB ;  //!< [0028](04)[0x00000000]
  __IO PDCRB_DEF             PDCRB ;  //!< [002c](04)[0x00000000]
  __IO PUCRC_DEF             PUCRC ;  //!< [0030](04)[0x00000000]
  __IO PDCRC_DEF             PDCRC ;  //!< [0034](04)[0x00000000]
  __IO PUCRD_DEF             PUCRD ;  //!< [0038](04)[0x00000000]
  __IO PDCRD_DEF             PDCRD ;  //!< [003c](04)[0x00000000]
  __IO PUCRE_DEF             PUCRE ;  //!< [0040](04)[0x00000000]
  __IO PDCRE_DEF             PDCRE ;  //!< [0044](04)[0x00000000]
       uint32_t          UNUSED1 [4];  //!< [0048](10)[0xFFFFFFFF]
  __IO PUCRH_DEF             PUCRH ;  //!< [0058](04)[0x00000000]
  __IO PDCRH_DEF             PDCRH ;  //!< [005c](04)[0x00000000]
}; /* total size = 0x0400, struct size = 0x0060 */

// ////////////////////+++ SYSCFG +-+//////////////////// //
struct SYSCFG_Type        { /*!< System configuration controller */
  union MEMRMP_DEF  {  //!< memory remap register
    struct {
      __IO uint32_t   MEM_MODE :  3; //!<[00] Memory mapping selection
      __IO ONE_BIT    QFS      :  1; //!<[03] QUADSPI memory mapping swap
           uint32_t   UNUSED0  :  4; //!<[04] 
      __IO ONE_BIT    FB_MODE  :  1; //!<[08] Flash Bank mode selection
    } B;
    __IO uint32_t  R;
    explicit MEMRMP_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      MEMRMP_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      MEMRMP_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CFGR1_DEF   {  //!< configuration register 1
    struct {
      __IO ONE_BIT    FWDIS       :  1; //!<[00] Firewall disable
           uint32_t   UNUSED0     :  7; //!<[01] 
      __IO ONE_BIT    BOOSTEN     :  1; //!<[08] I/O analog switch voltage booster enable
           uint32_t   UNUSED1     :  7; //!<[09] 
      __IO ONE_BIT    I2C_PB6_FMP :  1; //!<[16] Fast-mode Plus (Fm+) driving capability activation on PB6
      __IO ONE_BIT    I2C_PB7_FMP :  1; //!<[17] Fast-mode Plus (Fm+) driving capability activation on PB7
      __IO ONE_BIT    I2C_PB8_FMP :  1; //!<[18] Fast-mode Plus (Fm+) driving capability activation on PB8
      __IO ONE_BIT    I2C_PB9_FMP :  1; //!<[19] Fast-mode Plus (Fm+) driving capability activation on PB9
      __IO ONE_BIT    I2C1_FMP    :  1; //!<[20] I2C1 Fast-mode Plus driving capability activation
      __IO ONE_BIT    I2C2_FMP    :  1; //!<[21] I2C2 Fast-mode Plus driving capability activation
      __IO ONE_BIT    I2C3_FMP    :  1; //!<[22] I2C3 Fast-mode Plus driving capability activation
           uint32_t   UNUSED2     :  3; //!<[23] 
      __IO uint32_t   FPU_IE      :  6; //!<[26] Floating Point Unit interrupts enable bits
    } B;
    __IO uint32_t  R;
    explicit CFGR1_DEF () noexcept { R = 0x7c000001u; }
    template<typename F> void setbit (F f) volatile {
      CFGR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CFGR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union EXTICR1_DEF {  //!< external interrupt configuration register 1
    struct {
      __IO uint32_t   EXTI0   :  3; //!<[00] EXTI 0 configuration bits
           ONE_BIT    UNUSED0 :  1; //!<[03] 
      __IO uint32_t   EXTI1   :  3; //!<[04] EXTI 1 configuration bits
           ONE_BIT    UNUSED1 :  1; //!<[07] 
      __IO uint32_t   EXTI2   :  3; //!<[08] EXTI 2 configuration bits
           ONE_BIT    UNUSED2 :  1; //!<[11] 
      __IO uint32_t   EXTI3   :  3; //!<[12] EXTI 3 configuration bits
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
  union EXTICR2_DEF {  //!< external interrupt configuration register 2
    struct {
      __IO uint32_t   EXTI4   :  3; //!<[00] EXTI 4 configuration bits
           ONE_BIT    UNUSED0 :  1; //!<[03] 
      __IO uint32_t   EXTI5   :  3; //!<[04] EXTI 5 configuration bits
           ONE_BIT    UNUSED1 :  1; //!<[07] 
      __IO uint32_t   EXTI6   :  3; //!<[08] EXTI 6 configuration bits
           ONE_BIT    UNUSED2 :  1; //!<[11] 
      __IO uint32_t   EXTI7   :  3; //!<[12] EXTI 7 configuration bits
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
  union EXTICR3_DEF {  //!< external interrupt configuration register 3
    struct {
      __IO uint32_t   EXTI8   :  3; //!<[00] EXTI 8 configuration bits
           ONE_BIT    UNUSED0 :  1; //!<[03] 
      __IO uint32_t   EXTI9   :  3; //!<[04] EXTI 9 configuration bits
           ONE_BIT    UNUSED1 :  1; //!<[07] 
      __IO uint32_t   EXTI10  :  3; //!<[08] EXTI 10 configuration bits
           ONE_BIT    UNUSED2 :  1; //!<[11] 
      __IO uint32_t   EXTI11  :  3; //!<[12] EXTI 11 configuration bits
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
  union EXTICR4_DEF {  //!< external interrupt configuration register 4
    struct {
      __IO uint32_t   EXTI12  :  3; //!<[00] EXTI12 configuration bits
           ONE_BIT    UNUSED0 :  1; //!<[03] 
      __IO uint32_t   EXTI13  :  3; //!<[04] EXTI13 configuration bits
           ONE_BIT    UNUSED1 :  1; //!<[07] 
      __IO uint32_t   EXTI14  :  3; //!<[08] EXTI14 configuration bits
           ONE_BIT    UNUSED2 :  1; //!<[11] 
      __IO uint32_t   EXTI15  :  3; //!<[12] EXTI15 configuration bits
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
  union SCSR_DEF    {  //!< SCSR
    struct {
      __IO ONE_BIT  SRAM2ER  :  1; //!<[00] SRAM2 Erase
      __I  ONE_BIT  SRAM2BSY :  1; //!<[01] SRAM2 busy by erase operation
    } B;
    __IO uint32_t  R;
    explicit SCSR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      SCSR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      SCSR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CFGR2_DEF   {  //!< CFGR2
    struct {
      __O  ONE_BIT    CLL     :  1; //!<[00] OCKUP (Hardfault) output enable bit
      __O  ONE_BIT    SPL     :  1; //!<[01] SRAM2 parity lock bit
      __O  ONE_BIT    PVDL    :  1; //!<[02] PVD lock enable bit
      __O  ONE_BIT    ECCL    :  1; //!<[03] ECC Lock
           uint32_t   UNUSED0 :  4; //!<[04] 
      __IO ONE_BIT    SPF     :  1; //!<[08] SRAM2 parity error flag
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
  union SWPR_DEF    {  //!< SWPR
    struct {
      __O  ONE_BIT  P0WP  :  1; //!<[00] P0WP
      __O  ONE_BIT  P1WP  :  1; //!<[01] P1WP
      __O  ONE_BIT  P2WP  :  1; //!<[02] P2WP
      __O  ONE_BIT  P3WP  :  1; //!<[03] P3WP
      __O  ONE_BIT  P4WP  :  1; //!<[04] P4WP
      __O  ONE_BIT  P5WP  :  1; //!<[05] P5WP
      __O  ONE_BIT  P6WP  :  1; //!<[06] P6WP
      __O  ONE_BIT  P7WP  :  1; //!<[07] P7WP
      __O  ONE_BIT  P8WP  :  1; //!<[08] P8WP
      __O  ONE_BIT  P9WP  :  1; //!<[09] P9WP
      __O  ONE_BIT  P10WP :  1; //!<[10] P10WP
      __O  ONE_BIT  P11WP :  1; //!<[11] P11WP
      __O  ONE_BIT  P12WP :  1; //!<[12] P12WP
      __O  ONE_BIT  P13WP :  1; //!<[13] P13WP
      __O  ONE_BIT  P14WP :  1; //!<[14] P14WP
      __O  ONE_BIT  P15WP :  1; //!<[15] P15WP
      __O  ONE_BIT  P16WP :  1; //!<[16] P16WP
      __O  ONE_BIT  P17WP :  1; //!<[17] P17WP
      __O  ONE_BIT  P18WP :  1; //!<[18] P18WP
      __O  ONE_BIT  P19WP :  1; //!<[19] P19WP
      __O  ONE_BIT  P20WP :  1; //!<[20] P20WP
      __O  ONE_BIT  P21WP :  1; //!<[21] P21WP
      __O  ONE_BIT  P22WP :  1; //!<[22] P22WP
      __O  ONE_BIT  P23WP :  1; //!<[23] P23WP
      __O  ONE_BIT  P24WP :  1; //!<[24] P24WP
      __O  ONE_BIT  P25WP :  1; //!<[25] P25WP
      __O  ONE_BIT  P26WP :  1; //!<[26] P26WP
      __O  ONE_BIT  P27WP :  1; //!<[27] P27WP
      __O  ONE_BIT  P28WP :  1; //!<[28] P28WP
      __O  ONE_BIT  P29WP :  1; //!<[29] P29WP
      __O  ONE_BIT  P30WP :  1; //!<[30] P30WP
      __O  ONE_BIT  P31WP :  1; //!<[31] SRAM2 page 31 write protection
    } B;
    __O  uint32_t  R;
    explicit SWPR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      SWPR_DEF r;
      R = f (r);
    }
  };
  union SKR_DEF     {  //!< SKR
    struct {
      __O  uint32_t   KEY :  8; //!<[00] SRAM2 write protection key for software erase
    } B;
    __O  uint32_t  R;
    explicit SKR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      SKR_DEF r;
      R = f (r);
    }
  };
  // PERIPHERAL SYSCFG REGISTERS INSTANCES
  __IO MEMRMP_DEF           MEMRMP ;  //!< [0000](04)[0x00000000]
  __IO CFGR1_DEF             CFGR1 ;  //!< [0004](04)[0x7C000001]
  __IO EXTICR1_DEF         EXTICR1 ;  //!< [0008](04)[0x00000000]
  __IO EXTICR2_DEF         EXTICR2 ;  //!< [000c](04)[0x00000000]
  __IO EXTICR3_DEF         EXTICR3 ;  //!< [0010](04)[0x00000000]
  __IO EXTICR4_DEF         EXTICR4 ;  //!< [0014](04)[0x00000000]
  __IO SCSR_DEF               SCSR ;  //!< [0018](04)[0x00000000]
  __IO CFGR2_DEF             CFGR2 ;  //!< [001c](04)[0x00000000]
  __O  SWPR_DEF               SWPR ;  //!< [0020](04)[0x00000000]
  __O  SKR_DEF                 SKR ;  //!< [0024](04)[0x00000000]
}; /* total size = 0x0030, struct size = 0x0028 */

// ////////////////////+++ RNG +-+//////////////////// //
struct RNG_Type           { /*!< Random number generator */
  union CR_DEF {  //!< control register
    struct {
           uint32_t   UNUSED0 :  2; //!<[00] 
      __IO ONE_BIT    RNGEN   :  1; //!<[02] Random number generator enable
      __IO ONE_BIT    IE      :  1; //!<[03] Interrupt enable
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
  union SR_DEF {  //!< status register
    struct {
      __I  ONE_BIT    DRDY    :  1; //!<[00] Data ready
      __I  ONE_BIT    CECS    :  1; //!<[01] Clock error current status
      __I  ONE_BIT    SECS    :  1; //!<[02] Seed error current status
           uint32_t   UNUSED0 :  2; //!<[03] 
      __IO ONE_BIT    CEIS    :  1; //!<[05] Clock error interrupt status
      __IO ONE_BIT    SEIS    :  1; //!<[06] Seed error interrupt status
    } B;
    __IO uint32_t  R;
    explicit SR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      SR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      SR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DR_DEF {  //!< data register
    struct {
      __I  uint32_t   RNDATA : 32; //!<[00] Random data
    } B;
    __I  uint32_t  R;

    explicit DR_DEF (volatile DR_DEF & o) noexcept { R = o.R; };
  };
  // PERIPHERAL RNG REGISTERS INSTANCES
  __IO CR_DEF              CR ;  //!< [0000](04)[0x00000000]
  __IO SR_DEF              SR ;  //!< [0004](04)[0x00000000]
  __I  DR_DEF              DR ;  //!< [0008](04)[0x00000000]
}; /* total size = 0x0400, struct size = 0x000C */

// ////////////////////+++ GPIOA +-+//////////////////// //
struct GPIOA_Type         { /*!< General-purpose I/Os */
  union MODER_DEF   {  //!< GPIO port mode register
    struct {
      __IO uint32_t   MODER0  :  2; //!<[00] Port x configuration bits (y = 0..15)
      __IO uint32_t   MODER1  :  2; //!<[02] Port x configuration bits (y = 0..15)
      __IO uint32_t   MODER2  :  2; //!<[04] Port x configuration bits (y = 0..15)
      __IO uint32_t   MODER3  :  2; //!<[06] Port x configuration bits (y = 0..15)
      __IO uint32_t   MODER4  :  2; //!<[08] Port x configuration bits (y = 0..15)
      __IO uint32_t   MODER5  :  2; //!<[10] Port x configuration bits (y = 0..15)
      __IO uint32_t   MODER6  :  2; //!<[12] Port x configuration bits (y = 0..15)
      __IO uint32_t   MODER7  :  2; //!<[14] Port x configuration bits (y = 0..15)
      __IO uint32_t   MODER8  :  2; //!<[16] Port x configuration bits (y = 0..15)
      __IO uint32_t   MODER9  :  2; //!<[18] Port x configuration bits (y = 0..15)
      __IO uint32_t   MODER10 :  2; //!<[20] Port x configuration bits (y = 0..15)
      __IO uint32_t   MODER11 :  2; //!<[22] Port x configuration bits (y = 0..15)
      __IO uint32_t   MODER12 :  2; //!<[24] Port x configuration bits (y = 0..15)
      __IO uint32_t   MODER13 :  2; //!<[26] Port x configuration bits (y = 0..15)
      __IO uint32_t   MODER14 :  2; //!<[28] Port x configuration bits (y = 0..15)
      __IO uint32_t   MODER15 :  2; //!<[30] Port x configuration bits (y = 0..15)
    } B;
    __IO uint32_t  R;
    explicit MODER_DEF () noexcept { R = 0xa8000000u; }
    template<typename F> void setbit (F f) volatile {
      MODER_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      MODER_DEF r; r.R = R;
      R = f (r);
    }
  };
  union OTYPER_DEF  {  //!< GPIO port output type register
    struct {
      __IO ONE_BIT  OT0  :  1; //!<[00] Port x configuration bits (y = 0..15)
      __IO ONE_BIT  OT1  :  1; //!<[01] Port x configuration bits (y = 0..15)
      __IO ONE_BIT  OT2  :  1; //!<[02] Port x configuration bits (y = 0..15)
      __IO ONE_BIT  OT3  :  1; //!<[03] Port x configuration bits (y = 0..15)
      __IO ONE_BIT  OT4  :  1; //!<[04] Port x configuration bits (y = 0..15)
      __IO ONE_BIT  OT5  :  1; //!<[05] Port x configuration bits (y = 0..15)
      __IO ONE_BIT  OT6  :  1; //!<[06] Port x configuration bits (y = 0..15)
      __IO ONE_BIT  OT7  :  1; //!<[07] Port x configuration bits (y = 0..15)
      __IO ONE_BIT  OT8  :  1; //!<[08] Port x configuration bits (y = 0..15)
      __IO ONE_BIT  OT9  :  1; //!<[09] Port x configuration bits (y = 0..15)
      __IO ONE_BIT  OT10 :  1; //!<[10] Port x configuration bits (y = 0..15)
      __IO ONE_BIT  OT11 :  1; //!<[11] Port x configuration bits (y = 0..15)
      __IO ONE_BIT  OT12 :  1; //!<[12] Port x configuration bits (y = 0..15)
      __IO ONE_BIT  OT13 :  1; //!<[13] Port x configuration bits (y = 0..15)
      __IO ONE_BIT  OT14 :  1; //!<[14] Port x configuration bits (y = 0..15)
      __IO ONE_BIT  OT15 :  1; //!<[15] Port x configuration bits (y = 0..15)
    } B;
    __IO uint32_t  R;
    explicit OTYPER_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      OTYPER_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      OTYPER_DEF r; r.R = R;
      R = f (r);
    }
  };
  union OSPEEDR_DEF {  //!< GPIO port output speed register
    struct {
      __IO uint32_t   OSPEEDR0  :  2; //!<[00] Port x configuration bits (y = 0..15)
      __IO uint32_t   OSPEEDR1  :  2; //!<[02] Port x configuration bits (y = 0..15)
      __IO uint32_t   OSPEEDR2  :  2; //!<[04] Port x configuration bits (y = 0..15)
      __IO uint32_t   OSPEEDR3  :  2; //!<[06] Port x configuration bits (y = 0..15)
      __IO uint32_t   OSPEEDR4  :  2; //!<[08] Port x configuration bits (y = 0..15)
      __IO uint32_t   OSPEEDR5  :  2; //!<[10] Port x configuration bits (y = 0..15)
      __IO uint32_t   OSPEEDR6  :  2; //!<[12] Port x configuration bits (y = 0..15)
      __IO uint32_t   OSPEEDR7  :  2; //!<[14] Port x configuration bits (y = 0..15)
      __IO uint32_t   OSPEEDR8  :  2; //!<[16] Port x configuration bits (y = 0..15)
      __IO uint32_t   OSPEEDR9  :  2; //!<[18] Port x configuration bits (y = 0..15)
      __IO uint32_t   OSPEEDR10 :  2; //!<[20] Port x configuration bits (y = 0..15)
      __IO uint32_t   OSPEEDR11 :  2; //!<[22] Port x configuration bits (y = 0..15)
      __IO uint32_t   OSPEEDR12 :  2; //!<[24] Port x configuration bits (y = 0..15)
      __IO uint32_t   OSPEEDR13 :  2; //!<[26] Port x configuration bits (y = 0..15)
      __IO uint32_t   OSPEEDR14 :  2; //!<[28] Port x configuration bits (y = 0..15)
      __IO uint32_t   OSPEEDR15 :  2; //!<[30] Port x configuration bits (y = 0..15)
    } B;
    __IO uint32_t  R;
    explicit OSPEEDR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      OSPEEDR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      OSPEEDR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union PUPDR_DEF   {  //!< GPIO port pull-up/pull-down register
    struct {
      __IO uint32_t   PUPDR0  :  2; //!<[00] Port x configuration bits (y = 0..15)
      __IO uint32_t   PUPDR1  :  2; //!<[02] Port x configuration bits (y = 0..15)
      __IO uint32_t   PUPDR2  :  2; //!<[04] Port x configuration bits (y = 0..15)
      __IO uint32_t   PUPDR3  :  2; //!<[06] Port x configuration bits (y = 0..15)
      __IO uint32_t   PUPDR4  :  2; //!<[08] Port x configuration bits (y = 0..15)
      __IO uint32_t   PUPDR5  :  2; //!<[10] Port x configuration bits (y = 0..15)
      __IO uint32_t   PUPDR6  :  2; //!<[12] Port x configuration bits (y = 0..15)
      __IO uint32_t   PUPDR7  :  2; //!<[14] Port x configuration bits (y = 0..15)
      __IO uint32_t   PUPDR8  :  2; //!<[16] Port x configuration bits (y = 0..15)
      __IO uint32_t   PUPDR9  :  2; //!<[18] Port x configuration bits (y = 0..15)
      __IO uint32_t   PUPDR10 :  2; //!<[20] Port x configuration bits (y = 0..15)
      __IO uint32_t   PUPDR11 :  2; //!<[22] Port x configuration bits (y = 0..15)
      __IO uint32_t   PUPDR12 :  2; //!<[24] Port x configuration bits (y = 0..15)
      __IO uint32_t   PUPDR13 :  2; //!<[26] Port x configuration bits (y = 0..15)
      __IO uint32_t   PUPDR14 :  2; //!<[28] Port x configuration bits (y = 0..15)
      __IO uint32_t   PUPDR15 :  2; //!<[30] Port x configuration bits (y = 0..15)
    } B;
    __IO uint32_t  R;
    explicit PUPDR_DEF () noexcept { R = 0x64000000u; }
    template<typename F> void setbit (F f) volatile {
      PUPDR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      PUPDR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union IDR_DEF     {  //!< GPIO port input data register
    struct {
      __I  ONE_BIT  IDR0  :  1; //!<[00] Port input data (y = 0..15)
      __I  ONE_BIT  IDR1  :  1; //!<[01] Port input data (y = 0..15)
      __I  ONE_BIT  IDR2  :  1; //!<[02] Port input data (y = 0..15)
      __I  ONE_BIT  IDR3  :  1; //!<[03] Port input data (y = 0..15)
      __I  ONE_BIT  IDR4  :  1; //!<[04] Port input data (y = 0..15)
      __I  ONE_BIT  IDR5  :  1; //!<[05] Port input data (y = 0..15)
      __I  ONE_BIT  IDR6  :  1; //!<[06] Port input data (y = 0..15)
      __I  ONE_BIT  IDR7  :  1; //!<[07] Port input data (y = 0..15)
      __I  ONE_BIT  IDR8  :  1; //!<[08] Port input data (y = 0..15)
      __I  ONE_BIT  IDR9  :  1; //!<[09] Port input data (y = 0..15)
      __I  ONE_BIT  IDR10 :  1; //!<[10] Port input data (y = 0..15)
      __I  ONE_BIT  IDR11 :  1; //!<[11] Port input data (y = 0..15)
      __I  ONE_BIT  IDR12 :  1; //!<[12] Port input data (y = 0..15)
      __I  ONE_BIT  IDR13 :  1; //!<[13] Port input data (y = 0..15)
      __I  ONE_BIT  IDR14 :  1; //!<[14] Port input data (y = 0..15)
      __I  ONE_BIT  IDR15 :  1; //!<[15] Port input data (y = 0..15)
    } B;
    __I  uint32_t  R;

    explicit IDR_DEF (volatile IDR_DEF & o) noexcept { R = o.R; };
  };
  union ODR_DEF     {  //!< GPIO port output data register
    struct {
      __IO ONE_BIT  ODR0  :  1; //!<[00] Port output data (y = 0..15)
      __IO ONE_BIT  ODR1  :  1; //!<[01] Port output data (y = 0..15)
      __IO ONE_BIT  ODR2  :  1; //!<[02] Port output data (y = 0..15)
      __IO ONE_BIT  ODR3  :  1; //!<[03] Port output data (y = 0..15)
      __IO ONE_BIT  ODR4  :  1; //!<[04] Port output data (y = 0..15)
      __IO ONE_BIT  ODR5  :  1; //!<[05] Port output data (y = 0..15)
      __IO ONE_BIT  ODR6  :  1; //!<[06] Port output data (y = 0..15)
      __IO ONE_BIT  ODR7  :  1; //!<[07] Port output data (y = 0..15)
      __IO ONE_BIT  ODR8  :  1; //!<[08] Port output data (y = 0..15)
      __IO ONE_BIT  ODR9  :  1; //!<[09] Port output data (y = 0..15)
      __IO ONE_BIT  ODR10 :  1; //!<[10] Port output data (y = 0..15)
      __IO ONE_BIT  ODR11 :  1; //!<[11] Port output data (y = 0..15)
      __IO ONE_BIT  ODR12 :  1; //!<[12] Port output data (y = 0..15)
      __IO ONE_BIT  ODR13 :  1; //!<[13] Port output data (y = 0..15)
      __IO ONE_BIT  ODR14 :  1; //!<[14] Port output data (y = 0..15)
      __IO ONE_BIT  ODR15 :  1; //!<[15] Port output data (y = 0..15)
    } B;
    __IO uint32_t  R;
    explicit ODR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ODR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ODR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union BSRR_DEF    {  //!< GPIO port bit set/reset register
    struct {
      __O  ONE_BIT  BS0  :  1; //!<[00] Port x set bit y (y= 0..15)
      __O  ONE_BIT  BS1  :  1; //!<[01] Port x set bit y (y= 0..15)
      __O  ONE_BIT  BS2  :  1; //!<[02] Port x set bit y (y= 0..15)
      __O  ONE_BIT  BS3  :  1; //!<[03] Port x set bit y (y= 0..15)
      __O  ONE_BIT  BS4  :  1; //!<[04] Port x set bit y (y= 0..15)
      __O  ONE_BIT  BS5  :  1; //!<[05] Port x set bit y (y= 0..15)
      __O  ONE_BIT  BS6  :  1; //!<[06] Port x set bit y (y= 0..15)
      __O  ONE_BIT  BS7  :  1; //!<[07] Port x set bit y (y= 0..15)
      __O  ONE_BIT  BS8  :  1; //!<[08] Port x set bit y (y= 0..15)
      __O  ONE_BIT  BS9  :  1; //!<[09] Port x set bit y (y= 0..15)
      __O  ONE_BIT  BS10 :  1; //!<[10] Port x set bit y (y= 0..15)
      __O  ONE_BIT  BS11 :  1; //!<[11] Port x set bit y (y= 0..15)
      __O  ONE_BIT  BS12 :  1; //!<[12] Port x set bit y (y= 0..15)
      __O  ONE_BIT  BS13 :  1; //!<[13] Port x set bit y (y= 0..15)
      __O  ONE_BIT  BS14 :  1; //!<[14] Port x set bit y (y= 0..15)
      __O  ONE_BIT  BS15 :  1; //!<[15] Port x set bit y (y= 0..15)
      __O  ONE_BIT  BR0  :  1; //!<[16] Port x set bit y (y= 0..15)
      __O  ONE_BIT  BR1  :  1; //!<[17] Port x reset bit y (y = 0..15)
      __O  ONE_BIT  BR2  :  1; //!<[18] Port x reset bit y (y = 0..15)
      __O  ONE_BIT  BR3  :  1; //!<[19] Port x reset bit y (y = 0..15)
      __O  ONE_BIT  BR4  :  1; //!<[20] Port x reset bit y (y = 0..15)
      __O  ONE_BIT  BR5  :  1; //!<[21] Port x reset bit y (y = 0..15)
      __O  ONE_BIT  BR6  :  1; //!<[22] Port x reset bit y (y = 0..15)
      __O  ONE_BIT  BR7  :  1; //!<[23] Port x reset bit y (y = 0..15)
      __O  ONE_BIT  BR8  :  1; //!<[24] Port x reset bit y (y = 0..15)
      __O  ONE_BIT  BR9  :  1; //!<[25] Port x reset bit y (y = 0..15)
      __O  ONE_BIT  BR10 :  1; //!<[26] Port x reset bit y (y = 0..15)
      __O  ONE_BIT  BR11 :  1; //!<[27] Port x reset bit y (y = 0..15)
      __O  ONE_BIT  BR12 :  1; //!<[28] Port x reset bit y (y = 0..15)
      __O  ONE_BIT  BR13 :  1; //!<[29] Port x reset bit y (y = 0..15)
      __O  ONE_BIT  BR14 :  1; //!<[30] Port x reset bit y (y = 0..15)
      __O  ONE_BIT  BR15 :  1; //!<[31] Port x reset bit y (y = 0..15)
    } B;
    __O  uint32_t  R;
    explicit BSRR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      BSRR_DEF r;
      R = f (r);
    }
  };
  union LCKR_DEF    {  //!< GPIO port configuration lock register
    struct {
      __IO ONE_BIT  LCK0  :  1; //!<[00] Port x lock bit y (y= 0..15)
      __IO ONE_BIT  LCK1  :  1; //!<[01] Port x lock bit y (y= 0..15)
      __IO ONE_BIT  LCK2  :  1; //!<[02] Port x lock bit y (y= 0..15)
      __IO ONE_BIT  LCK3  :  1; //!<[03] Port x lock bit y (y= 0..15)
      __IO ONE_BIT  LCK4  :  1; //!<[04] Port x lock bit y (y= 0..15)
      __IO ONE_BIT  LCK5  :  1; //!<[05] Port x lock bit y (y= 0..15)
      __IO ONE_BIT  LCK6  :  1; //!<[06] Port x lock bit y (y= 0..15)
      __IO ONE_BIT  LCK7  :  1; //!<[07] Port x lock bit y (y= 0..15)
      __IO ONE_BIT  LCK8  :  1; //!<[08] Port x lock bit y (y= 0..15)
      __IO ONE_BIT  LCK9  :  1; //!<[09] Port x lock bit y (y= 0..15)
      __IO ONE_BIT  LCK10 :  1; //!<[10] Port x lock bit y (y= 0..15)
      __IO ONE_BIT  LCK11 :  1; //!<[11] Port x lock bit y (y= 0..15)
      __IO ONE_BIT  LCK12 :  1; //!<[12] Port x lock bit y (y= 0..15)
      __IO ONE_BIT  LCK13 :  1; //!<[13] Port x lock bit y (y= 0..15)
      __IO ONE_BIT  LCK14 :  1; //!<[14] Port x lock bit y (y= 0..15)
      __IO ONE_BIT  LCK15 :  1; //!<[15] Port x lock bit y (y= 0..15)
      __IO ONE_BIT  LCKK  :  1; //!<[16] Port x lock bit y (y= 0..15)
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
  union AFRL_DEF    {  //!< GPIO alternate function low register
    struct {
      __IO uint32_t   AFRL0 :  4; //!<[00] Alternate function selection for port x bit y (y = 0..7)
      __IO uint32_t   AFRL1 :  4; //!<[04] Alternate function selection for port x bit y (y = 0..7)
      __IO uint32_t   AFRL2 :  4; //!<[08] Alternate function selection for port x bit y (y = 0..7)
      __IO uint32_t   AFRL3 :  4; //!<[12] Alternate function selection for port x bit y (y = 0..7)
      __IO uint32_t   AFRL4 :  4; //!<[16] Alternate function selection for port x bit y (y = 0..7)
      __IO uint32_t   AFRL5 :  4; //!<[20] Alternate function selection for port x bit y (y = 0..7)
      __IO uint32_t   AFRL6 :  4; //!<[24] Alternate function selection for port x bit y (y = 0..7)
      __IO uint32_t   AFRL7 :  4; //!<[28] Alternate function selection for port x bit y (y = 0..7)
    } B;
    __IO uint32_t  R;
    explicit AFRL_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      AFRL_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      AFRL_DEF r; r.R = R;
      R = f (r);
    }
  };
  union AFRH_DEF    {  //!< GPIO alternate function high register
    struct {
      __IO uint32_t   AFRH8  :  4; //!<[00] Alternate function selection for port x bit y (y = 8..15)
      __IO uint32_t   AFRH9  :  4; //!<[04] Alternate function selection for port x bit y (y = 8..15)
      __IO uint32_t   AFRH10 :  4; //!<[08] Alternate function selection for port x bit y (y = 8..15)
      __IO uint32_t   AFRH11 :  4; //!<[12] Alternate function selection for port x bit y (y = 8..15)
      __IO uint32_t   AFRH12 :  4; //!<[16] Alternate function selection for port x bit y (y = 8..15)
      __IO uint32_t   AFRH13 :  4; //!<[20] Alternate function selection for port x bit y (y = 8..15)
      __IO uint32_t   AFRH14 :  4; //!<[24] Alternate function selection for port x bit y (y = 8..15)
      __IO uint32_t   AFRH15 :  4; //!<[28] Alternate function selection for port x bit y (y = 8..15)
    } B;
    __IO uint32_t  R;
    explicit AFRH_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      AFRH_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      AFRH_DEF r; r.R = R;
      R = f (r);
    }
  };
  // PERIPHERAL GPIOA REGISTERS INSTANCES
  __IO MODER_DEF             MODER ;  //!< [0000](04)[0xA8000000]
  __IO OTYPER_DEF           OTYPER ;  //!< [0004](04)[0x00000000]
  __IO OSPEEDR_DEF         OSPEEDR ;  //!< [0008](04)[0x00000000]
  __IO PUPDR_DEF             PUPDR ;  //!< [000c](04)[0x64000000]
  __I  IDR_DEF                 IDR ;  //!< [0010](04)[0x00000000]
  __IO ODR_DEF                 ODR ;  //!< [0014](04)[0x00000000]
  __O  BSRR_DEF               BSRR ;  //!< [0018](04)[0x00000000]
  __IO LCKR_DEF               LCKR ;  //!< [001c](04)[0x00000000]
  __IO AFRL_DEF               AFRL ;  //!< [0020](04)[0x00000000]
  __IO AFRH_DEF               AFRH ;  //!< [0024](04)[0x00000000]
}; /* total size = 0x0400, struct size = 0x0028 */

// ////////////////////+++ SAI1 +-+//////////////////// //
struct SAI1_Type          { /*!< Serial audio interface */
  union ACR1_DEF    {  //!< AConfiguration register 1
    struct {
      __IO uint32_t   MODE     :  2; //!<[00] Audio block mode
      __IO uint32_t   PRTCFG   :  2; //!<[02] Protocol configuration
           ONE_BIT    UNUSED0  :  1; //!<[04] 
      __IO uint32_t   DS       :  3; //!<[05] Data size
      __IO ONE_BIT    LSBFIRST :  1; //!<[08] Least significant bit first
      __IO ONE_BIT    CKSTR    :  1; //!<[09] Clock strobing edge
      __IO uint32_t   SYNCEN   :  2; //!<[10] Synchronization enable
      __IO ONE_BIT    MONO     :  1; //!<[12] Mono mode
      __IO ONE_BIT    OutDri   :  1; //!<[13] Output drive
           uint32_t   UNUSED1  :  2; //!<[14] 
      __IO ONE_BIT    SAIAEN   :  1; //!<[16] Audio block A enable
      __IO ONE_BIT    DMAEN    :  1; //!<[17] DMA enable
           ONE_BIT    UNUSED2  :  1; //!<[18] 
      __IO ONE_BIT    NODIV    :  1; //!<[19] No divider
      __IO uint32_t   MCKDIV   :  4; //!<[20] Master clock divider
    } B;
    __IO uint32_t  R;
    explicit ACR1_DEF () noexcept { R = 0x00000040u; }
    template<typename F> void setbit (F f) volatile {
      ACR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ACR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ACR2_DEF    {  //!< AConfiguration register 2
    struct {
      __IO uint32_t   FTH     :  3; //!<[00] FIFO threshold
      __IO ONE_BIT    FFLUS   :  1; //!<[03] FIFO flush
      __IO ONE_BIT    TRIS    :  1; //!<[04] Tristate management on data line
      __IO ONE_BIT    MUTE    :  1; //!<[05] Mute
      __IO ONE_BIT    MUTEVAL :  1; //!<[06] Mute value
      __IO uint32_t   MUTECN  :  6; //!<[07] Mute counter
      __IO ONE_BIT    CPL     :  1; //!<[13] Complement bit
      __IO uint32_t   COMP    :  2; //!<[14] Companding mode
    } B;
    __IO uint32_t  R;
    explicit ACR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ACR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ACR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union AFRCR_DEF   {  //!< AFRCR
    struct {
      __IO uint32_t   FRL     :  8; //!<[00] Frame length
      __IO uint32_t   FSALL   :  7; //!<[08] Frame synchronization active level length
           ONE_BIT    UNUSED0 :  1; //!<[15] 
      __IO ONE_BIT    FSDEF   :  1; //!<[16] Frame synchronization definition
      __IO ONE_BIT    FSPOL   :  1; //!<[17] Frame synchronization polarity
      __IO ONE_BIT    FSOFF   :  1; //!<[18] Frame synchronization offset
    } B;
    __IO uint32_t  R;
    explicit AFRCR_DEF () noexcept { R = 0x00000007u; }
    template<typename F> void setbit (F f) volatile {
      AFRCR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      AFRCR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ASLOTR_DEF  {  //!< ASlot register
    struct {
      __IO uint32_t   FBOFF   :  5; //!<[00] First bit offset
           ONE_BIT    UNUSED0 :  1; //!<[05] 
      __IO uint32_t   SLOTSZ  :  2; //!<[06] Slot size
      __IO uint32_t   NBSLOT  :  4; //!<[08] Number of slots in an audio frame
           uint32_t   UNUSED1 :  4; //!<[12] 
      __IO uint32_t   SLOTEN  : 16; //!<[16] Slot enable
    } B;
    __IO uint32_t  R;
    explicit ASLOTR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ASLOTR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ASLOTR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union AIM_DEF     {  //!< AInterrupt mask register2
    struct {
      __IO ONE_BIT  OVRUDRIE :  1; //!<[00] Overrun/underrun interrupt enable
      __IO ONE_BIT  MUTEDET  :  1; //!<[01] Mute detection interrupt enable
      __IO ONE_BIT  WCKCFG   :  1; //!<[02] Wrong clock configuration interrupt enable
      __IO ONE_BIT  FREQIE   :  1; //!<[03] FIFO request interrupt enable
      __IO ONE_BIT  CNRDYIE  :  1; //!<[04] Codec not ready interrupt enable
      __IO ONE_BIT  AFSDETIE :  1; //!<[05] Anticipated frame synchronization detection interrupt enable
      __IO ONE_BIT  LFSDET   :  1; //!<[06] Late frame synchronization detection interrupt enable
    } B;
    __IO uint32_t  R;
    explicit AIM_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      AIM_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      AIM_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ASR_DEF     {  //!< AStatus register
    struct {
      __IO ONE_BIT    OVRUDR  :  1; //!<[00] Overrun / underrun
      __IO ONE_BIT    MUTEDET :  1; //!<[01] Mute detection
      __IO ONE_BIT    WCKCFG  :  1; //!<[02] Wrong clock configuration flag. This bit is read only
      __IO ONE_BIT    FREQ    :  1; //!<[03] FIFO request
      __IO ONE_BIT    CNRDY   :  1; //!<[04] Codec not ready
      __IO ONE_BIT    AFSDET  :  1; //!<[05] Anticipated frame synchronization detection
      __IO ONE_BIT    LFSDET  :  1; //!<[06] Late frame synchronization detection
           uint32_t   UNUSED0 :  9; //!<[07] 
      __IO uint32_t   FLVL    :  3; //!<[16] FIFO level threshold
    } B;
    __IO uint32_t  R;
    explicit ASR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ASR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ASR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ACLRFR_DEF  {  //!< AClear flag register
    struct {
      __IO ONE_BIT  OVRUDR  :  1; //!<[00] Clear overrun / underrun
      __IO ONE_BIT  MUTEDET :  1; //!<[01] Mute detection flag
      __IO ONE_BIT  WCKCFG  :  1; //!<[02] Clear wrong clock configuration flag
           ONE_BIT  UNUSED0 :  1; //!<[03] 
      __IO ONE_BIT  CNRDY   :  1; //!<[04] Clear codec not ready flag
      __IO ONE_BIT  CAFSDET :  1; //!<[05] Clear anticipated frame synchronization detection flag
      __IO ONE_BIT  LFSDET  :  1; //!<[06] Clear late frame synchronization detection flag
    } B;
    __IO uint32_t  R;
    explicit ACLRFR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ACLRFR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ACLRFR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ADR_DEF     {  //!< AData register
    struct {
      __IO uint32_t   DATA : 32; //!<[00] Data
    } B;
    __IO uint32_t  R;
    explicit ADR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ADR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ADR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union BCR1_DEF    {  //!< BConfiguration register 1
    struct {
      __IO uint32_t   MODE     :  2; //!<[00] Audio block mode
      __IO uint32_t   PRTCFG   :  2; //!<[02] Protocol configuration
           ONE_BIT    UNUSED0  :  1; //!<[04] 
      __IO uint32_t   DS       :  3; //!<[05] Data size
      __IO ONE_BIT    LSBFIRST :  1; //!<[08] Least significant bit first
      __IO ONE_BIT    CKSTR    :  1; //!<[09] Clock strobing edge
      __IO uint32_t   SYNCEN   :  2; //!<[10] Synchronization enable
      __IO ONE_BIT    MONO     :  1; //!<[12] Mono mode
      __IO ONE_BIT    OutDri   :  1; //!<[13] Output drive
           uint32_t   UNUSED1  :  2; //!<[14] 
      __IO ONE_BIT    SAIBEN   :  1; //!<[16] Audio block B enable
      __IO ONE_BIT    DMAEN    :  1; //!<[17] DMA enable
           ONE_BIT    UNUSED2  :  1; //!<[18] 
      __IO ONE_BIT    NODIV    :  1; //!<[19] No divider
      __IO uint32_t   MCKDIV   :  4; //!<[20] Master clock divider
    } B;
    __IO uint32_t  R;
    explicit BCR1_DEF () noexcept { R = 0x00000040u; }
    template<typename F> void setbit (F f) volatile {
      BCR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      BCR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union BCR2_DEF    {  //!< BConfiguration register 2
    struct {
      __IO uint32_t   FTH     :  3; //!<[00] FIFO threshold
      __IO ONE_BIT    FFLUS   :  1; //!<[03] FIFO flush
      __IO ONE_BIT    TRIS    :  1; //!<[04] Tristate management on data line
      __IO ONE_BIT    MUTE    :  1; //!<[05] Mute
      __IO ONE_BIT    MUTEVAL :  1; //!<[06] Mute value
      __IO uint32_t   MUTECN  :  6; //!<[07] Mute counter
      __IO ONE_BIT    CPL     :  1; //!<[13] Complement bit
      __IO uint32_t   COMP    :  2; //!<[14] Companding mode
    } B;
    __IO uint32_t  R;
    explicit BCR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      BCR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      BCR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union BFRCR_DEF   {  //!< BFRCR
    struct {
      __IO uint32_t   FRL     :  8; //!<[00] Frame length
      __IO uint32_t   FSALL   :  7; //!<[08] Frame synchronization active level length
           ONE_BIT    UNUSED0 :  1; //!<[15] 
      __IO ONE_BIT    FSDEF   :  1; //!<[16] Frame synchronization definition
      __IO ONE_BIT    FSPOL   :  1; //!<[17] Frame synchronization polarity
      __IO ONE_BIT    FSOFF   :  1; //!<[18] Frame synchronization offset
    } B;
    __IO uint32_t  R;
    explicit BFRCR_DEF () noexcept { R = 0x00000007u; }
    template<typename F> void setbit (F f) volatile {
      BFRCR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      BFRCR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union BSLOTR_DEF  {  //!< BSlot register
    struct {
      __IO uint32_t   FBOFF   :  5; //!<[00] First bit offset
           ONE_BIT    UNUSED0 :  1; //!<[05] 
      __IO uint32_t   SLOTSZ  :  2; //!<[06] Slot size
      __IO uint32_t   NBSLOT  :  4; //!<[08] Number of slots in an audio frame
           uint32_t   UNUSED1 :  4; //!<[12] 
      __IO uint32_t   SLOTEN  : 16; //!<[16] Slot enable
    } B;
    __IO uint32_t  R;
    explicit BSLOTR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      BSLOTR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      BSLOTR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union BIM_DEF     {  //!< BInterrupt mask register2
    struct {
      __IO ONE_BIT  OVRUDRIE :  1; //!<[00] Overrun/underrun interrupt enable
      __IO ONE_BIT  MUTEDET  :  1; //!<[01] Mute detection interrupt enable
      __IO ONE_BIT  WCKCFG   :  1; //!<[02] Wrong clock configuration interrupt enable
      __IO ONE_BIT  FREQIE   :  1; //!<[03] FIFO request interrupt enable
      __IO ONE_BIT  CNRDYIE  :  1; //!<[04] Codec not ready interrupt enable
      __IO ONE_BIT  AFSDETIE :  1; //!<[05] Anticipated frame synchronization detection interrupt enable
      __IO ONE_BIT  LFSDETIE :  1; //!<[06] Late frame synchronization detection interrupt enable
    } B;
    __IO uint32_t  R;
    explicit BIM_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      BIM_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      BIM_DEF r; r.R = R;
      R = f (r);
    }
  };
  union BSR_DEF     {  //!< BStatus register
    struct {
      __I  ONE_BIT    OVRUDR  :  1; //!<[00] Overrun / underrun
      __I  ONE_BIT    MUTEDET :  1; //!<[01] Mute detection
      __I  ONE_BIT    WCKCFG  :  1; //!<[02] Wrong clock configuration flag
      __I  ONE_BIT    FREQ    :  1; //!<[03] FIFO request
      __I  ONE_BIT    CNRDY   :  1; //!<[04] Codec not ready
      __I  ONE_BIT    AFSDET  :  1; //!<[05] Anticipated frame synchronization detection
      __I  ONE_BIT    LFSDET  :  1; //!<[06] Late frame synchronization detection
           uint32_t   UNUSED0 :  9; //!<[07] 
      __I  uint32_t   FLVL    :  3; //!<[16] FIFO level threshold
    } B;
    __I  uint32_t  R;

    explicit BSR_DEF (volatile BSR_DEF & o) noexcept { R = o.R; };
  };
  union BCLRFR_DEF  {  //!< BClear flag register
    struct {
      __O  ONE_BIT  OVRUDR  :  1; //!<[00] Clear overrun / underrun
      __O  ONE_BIT  MUTEDET :  1; //!<[01] Mute detection flag
      __O  ONE_BIT  WCKCFG  :  1; //!<[02] Clear wrong clock configuration flag
           ONE_BIT  UNUSED0 :  1; //!<[03] 
      __O  ONE_BIT  CNRDY   :  1; //!<[04] Clear codec not ready flag
      __O  ONE_BIT  CAFSDET :  1; //!<[05] Clear anticipated frame synchronization detection flag
      __O  ONE_BIT  LFSDET  :  1; //!<[06] Clear late frame synchronization detection flag
    } B;
    __O  uint32_t  R;
    explicit BCLRFR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      BCLRFR_DEF r;
      R = f (r);
    }
  };
  union BDR_DEF     {  //!< BData register
    struct {
      __IO uint32_t   DATA : 32; //!<[00] Data
    } B;
    __IO uint32_t  R;
    explicit BDR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      BDR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      BDR_DEF r; r.R = R;
      R = f (r);
    }
  };
  // PERIPHERAL SAI1 REGISTERS INSTANCES
       uint32_t          UNUSED0 ;  //!< [0000](04)[0xFFFFFFFF]
  __IO ACR1_DEF               ACR1 ;  //!< [0004](04)[0x00000040]
  __IO ACR2_DEF               ACR2 ;  //!< [0008](04)[0x00000000]
  __IO AFRCR_DEF             AFRCR ;  //!< [000c](04)[0x00000007]
  __IO ASLOTR_DEF           ASLOTR ;  //!< [0010](04)[0x00000000]
  __IO AIM_DEF                 AIM ;  //!< [0014](04)[0x00000000]
  __IO ASR_DEF                 ASR ;  //!< [0018](04)[0x00000000]
  __IO ACLRFR_DEF           ACLRFR ;  //!< [001c](04)[0x00000000]
  __IO ADR_DEF                 ADR ;  //!< [0020](04)[0x00000000]
  __IO BCR1_DEF               BCR1 ;  //!< [0024](04)[0x00000040]
  __IO BCR2_DEF               BCR2 ;  //!< [0028](04)[0x00000000]
  __IO BFRCR_DEF             BFRCR ;  //!< [002c](04)[0x00000007]
  __IO BSLOTR_DEF           BSLOTR ;  //!< [0030](04)[0x00000000]
  __IO BIM_DEF                 BIM ;  //!< [0034](04)[0x00000000]
  __I  BSR_DEF                 BSR ;  //!< [0038](04)[0x00000000]
  __O  BCLRFR_DEF           BCLRFR ;  //!< [003c](04)[0x00000000]
  __IO BDR_DEF                 BDR ;  //!< [0040](04)[0x00000000]
}; /* total size = 0x0400, struct size = 0x0044 */

// ////////////////////+++ TIM2 +-+//////////////////// //
struct TIM2_Type          { /*!< General-purpose-timers */
  union CR1_DEF          {  //!< control register 1
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
    explicit CR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CR2_DEF          {  //!< control register 2
    struct {
           uint32_t   UNUSED0 :  3; //!<[00] 
      __IO ONE_BIT    CCDS    :  1; //!<[03] Capture/compare DMA selection
      __IO uint32_t   MMS     :  3; //!<[04] Master mode selection
      __IO ONE_BIT    TI1S    :  1; //!<[07] TI1 selection
    } B;
    __IO uint32_t  R;
    explicit CR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union SMCR_DEF         {  //!< slave mode control register
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
    explicit SMCR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      SMCR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      SMCR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DIER_DEF         {  //!< DMA/Interrupt enable register
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
    explicit DIER_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DIER_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DIER_DEF r; r.R = R;
      R = f (r);
    }
  };
  union SR_DEF           {  //!< status register
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
    explicit SR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      SR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      SR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union EGR_DEF          {  //!< event generation register
    struct {
      __O  ONE_BIT  UG      :  1; //!<[00] Update generation
      __O  ONE_BIT  CC1G    :  1; //!<[01] Capture/compare 1 generation
      __O  ONE_BIT  CC2G    :  1; //!<[02] Capture/compare 2 generation
      __O  ONE_BIT  CC3G    :  1; //!<[03] Capture/compare 3 generation
      __O  ONE_BIT  CC4G    :  1; //!<[04] Capture/compare 4 generation
           ONE_BIT  UNUSED0 :  1; //!<[05] 
      __O  ONE_BIT  TG      :  1; //!<[06] Trigger generation
    } B;
    __O  uint32_t  R;
    explicit EGR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      EGR_DEF r;
      R = f (r);
    }
  };
  union CCMR1_Output_DEF {  //!< capture/compare mode register 1 (output mode)
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
    explicit CCMR1_Output_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CCMR1_Output_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CCMR1_Output_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CCMR1_Input_DEF  {  //!< capture/compare mode register 1 (input mode)
    struct {
      __IO uint32_t   CC1S   :  2; //!<[00] Capture/Compare 1 selection
      __IO uint32_t   IC1PSC :  2; //!<[02] Input capture 1 prescaler
      __IO uint32_t   IC1F   :  4; //!<[04] Input capture 1 filter
      __IO uint32_t   CC2S   :  2; //!<[08] Capture/compare 2 selection
      __IO uint32_t   IC2PSC :  2; //!<[10] Input capture 2 prescaler
      __IO uint32_t   IC2F   :  4; //!<[12] Input capture 2 filter
    } B;
    __IO uint32_t  R;
    explicit CCMR1_Input_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CCMR1_Input_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CCMR1_Input_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CCMR2_Output_DEF {  //!< capture/compare mode register 2 (output mode)
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
    explicit CCMR2_Output_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CCMR2_Output_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CCMR2_Output_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CCMR2_Input_DEF  {  //!< capture/compare mode register 2 (input mode)
    struct {
      __IO uint32_t   CC3S   :  2; //!<[00] Capture/Compare 3 selection
      __IO uint32_t   IC3PSC :  2; //!<[02] Input capture 3 prescaler
      __IO uint32_t   IC3F   :  4; //!<[04] Input capture 3 filter
      __IO uint32_t   CC4S   :  2; //!<[08] Capture/Compare 4 selection
      __IO uint32_t   IC4PSC :  2; //!<[10] Input capture 4 prescaler
      __IO uint32_t   IC4F   :  4; //!<[12] Input capture 4 filter
    } B;
    __IO uint32_t  R;
    explicit CCMR2_Input_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CCMR2_Input_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CCMR2_Input_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CCER_DEF         {  //!< capture/compare enable register
    struct {
      __IO ONE_BIT  CC1E    :  1; //!<[00] Capture/Compare 1 output enable
      __IO ONE_BIT  CC1P    :  1; //!<[01] Capture/Compare 1 output Polarity
           ONE_BIT  UNUSED0 :  1; //!<[02] 
      __IO ONE_BIT  CC1NP   :  1; //!<[03] Capture/Compare 1 output Polarity
      __IO ONE_BIT  CC2E    :  1; //!<[04] Capture/Compare 2 output enable
      __IO ONE_BIT  CC2P    :  1; //!<[05] Capture/Compare 2 output Polarity
           ONE_BIT  UNUSED1 :  1; //!<[06] 
      __IO ONE_BIT  CC2NP   :  1; //!<[07] Capture/Compare 2 output Polarity
      __IO ONE_BIT  CC3E    :  1; //!<[08] Capture/Compare 3 output enable
      __IO ONE_BIT  CC3P    :  1; //!<[09] Capture/Compare 3 output Polarity
           ONE_BIT  UNUSED2 :  1; //!<[10] 
      __IO ONE_BIT  CC3NP   :  1; //!<[11] Capture/Compare 3 output Polarity
      __IO ONE_BIT  CC4E    :  1; //!<[12] Capture/Compare 4 output enable
      __IO ONE_BIT  CC4P    :  1; //!<[13] Capture/Compare 3 output Polarity
           ONE_BIT  UNUSED3 :  1; //!<[14] 
      __IO ONE_BIT  CC4NP   :  1; //!<[15] Capture/Compare 4 output Polarity
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
  union CNT_DEF          {  //!< counter
    struct {
      __IO uint32_t   CNT_L : 16; //!<[00] Low counter value
      __IO uint32_t   CNT_H : 16; //!<[16] High counter value (TIM2 only)
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
  union PSC_DEF          {  //!< prescaler
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
  union ARR_DEF          {  //!< auto-reload register
    struct {
      __IO uint32_t   ARR_L : 16; //!<[00] Low Auto-reload value
      __IO uint32_t   ARR_H : 16; //!<[16] High Auto-reload value (TIM2 only)
    } B;
    __IO uint32_t  R;
    explicit ARR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ARR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ARR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CCR1_DEF         {  //!< capture/compare register 1
    struct {
      __IO uint32_t   CCR1_L : 16; //!<[00] Low Capture/Compare 1 value
      __IO uint32_t   CCR1_H : 16; //!<[16] High Capture/Compare 1 value (TIM2 only)
    } B;
    __IO uint32_t  R;
    explicit CCR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CCR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CCR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CCR2_DEF         {  //!< capture/compare register 2
    struct {
      __IO uint32_t   CCR2_L : 16; //!<[00] Low Capture/Compare 2 value
      __IO uint32_t   CCR2_H : 16; //!<[16] High Capture/Compare 2 value (TIM2 only)
    } B;
    __IO uint32_t  R;
    explicit CCR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CCR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CCR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CCR3_DEF         {  //!< capture/compare register 3
    struct {
      __IO uint32_t   CCR3_L : 16; //!<[00] Low Capture/Compare value
      __IO uint32_t   CCR3_H : 16; //!<[16] High Capture/Compare value (TIM2 only)
    } B;
    __IO uint32_t  R;
    explicit CCR3_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CCR3_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CCR3_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CCR4_DEF         {  //!< capture/compare register 4
    struct {
      __IO uint32_t   CCR4_L : 16; //!<[00] Low Capture/Compare value
      __IO uint32_t   CCR4_H : 16; //!<[16] High Capture/Compare value (TIM2 only)
    } B;
    __IO uint32_t  R;
    explicit CCR4_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CCR4_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CCR4_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DCR_DEF          {  //!< DMA control register
    struct {
      __IO uint32_t   DBA     :  5; //!<[00] DMA base address
           uint32_t   UNUSED0 :  3; //!<[05] 
      __IO uint32_t   DBL     :  5; //!<[08] DMA burst length
    } B;
    __IO uint32_t  R;
    explicit DCR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DCR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DCR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DMAR_DEF         {  //!< DMA address for full transfer
    struct {
      __IO uint32_t   DMAB : 16; //!<[00] DMA register for burst accesses
    } B;
    __IO uint32_t  R;
    explicit DMAR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DMAR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DMAR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union OR_DEF           {  //!< TIM2 option register
    struct {
      __IO uint32_t   ETR_RMP :  3; //!<[00] Timer2 ETR remap
      __IO uint32_t   TI4_RMP :  2; //!<[03] Internal trigger
    } B;
    __IO uint32_t  R;
    explicit OR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      OR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      OR_DEF r; r.R = R;
      R = f (r);
    }
  };
  // PERIPHERAL TIM2 REGISTERS INSTANCES
  __IO CR1_DEF                      CR1 ;  //!< [0000](04)[0x00000000]
  __IO CR2_DEF                      CR2 ;  //!< [0004](04)[0x00000000]
  __IO SMCR_DEF                    SMCR ;  //!< [0008](04)[0x00000000]
  __IO DIER_DEF                    DIER ;  //!< [000c](04)[0x00000000]
  __IO SR_DEF                        SR ;  //!< [0010](04)[0x00000000]
  __O  EGR_DEF                      EGR ;  //!< [0014](04)[0x00000000]
  MERGE {
  __IO CCMR1_Output_DEF    CCMR1_Output ;  //!< [0018](04)[0x00000000]
  __IO CCMR1_Input_DEF      CCMR1_Input ;  //!< [0018](04)[0x00000000]
  };
  MERGE {
  __IO CCMR2_Output_DEF    CCMR2_Output ;  //!< [001c](04)[0x00000000]
  __IO CCMR2_Input_DEF      CCMR2_Input ;  //!< [001c](04)[0x00000000]
  };
  __IO CCER_DEF                    CCER ;  //!< [0020](04)[0x00000000]
  __IO CNT_DEF                      CNT ;  //!< [0024](04)[0x00000000]
  __IO PSC_DEF                      PSC ;  //!< [0028](04)[0x00000000]
  __IO ARR_DEF                      ARR ;  //!< [002c](04)[0x00000000]
       uint32_t               UNUSED0 ;  //!< [0030](04)[0xFFFFFFFF]
  __IO CCR1_DEF                    CCR1 ;  //!< [0034](04)[0x00000000]
  __IO CCR2_DEF                    CCR2 ;  //!< [0038](04)[0x00000000]
  __IO CCR3_DEF                    CCR3 ;  //!< [003c](04)[0x00000000]
  __IO CCR4_DEF                    CCR4 ;  //!< [0040](04)[0x00000000]
       uint32_t               UNUSED1 ;  //!< [0044](04)[0xFFFFFFFF]
  __IO DCR_DEF                      DCR ;  //!< [0048](04)[0x00000000]
  __IO DMAR_DEF                    DMAR ;  //!< [004c](04)[0x00000000]
  __IO OR_DEF                        OR ;  //!< [0050](04)[0x00000000]
}; /* total size = 0x0400, struct size = 0x0054 */

// ////////////////////+++ TIM15 +-+//////////////////// //
struct TIM15_Type         { /*!< General purpose timers */
  union CR1_DEF         {  //!< control register 1
    struct {
      __IO ONE_BIT    CEN      :  1; //!<[00] Counter enable
      __IO ONE_BIT    UDIS     :  1; //!<[01] Update disable
      __IO ONE_BIT    URS      :  1; //!<[02] Update request source
      __IO ONE_BIT    OPM      :  1; //!<[03] One-pulse mode
           uint32_t   UNUSED0  :  3; //!<[04] 
      __IO ONE_BIT    ARPE     :  1; //!<[07] Auto-reload preload enable
      __IO uint32_t   CKD      :  2; //!<[08] Clock division
           ONE_BIT    UNUSED1  :  1; //!<[10] 
      __IO ONE_BIT    UIFREMAP :  1; //!<[11] UIF status bit remapping
    } B;
    __IO uint32_t  R;
    explicit CR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CR2_DEF         {  //!< control register 2
    struct {
      __IO ONE_BIT    CCPC    :  1; //!<[00] Capture/compare preloaded control
           ONE_BIT    UNUSED0 :  1; //!<[01] 
      __IO ONE_BIT    CCUS    :  1; //!<[02] Capture/compare control update selection
      __IO ONE_BIT    CCDS    :  1; //!<[03] Capture/compare DMA selection
      __IO uint32_t   MMS     :  3; //!<[04] Master mode selection
      __IO ONE_BIT    TI1S    :  1; //!<[07] TI1 selection
      __IO ONE_BIT    OIS1    :  1; //!<[08] Output Idle state 1
      __IO ONE_BIT    OIS1N   :  1; //!<[09] Output Idle state 1
      __IO ONE_BIT    OIS2    :  1; //!<[10] Output idle state 2 (OC2 output)
    } B;
    __IO uint32_t  R;
    explicit CR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union SMCR_DEF        {  //!< TIM15 slave mode control register
    struct {
      __IO uint32_t   SMS     :  3; //!<[00] Slave mode selection
           ONE_BIT    UNUSED0 :  1; //!<[03] 
      __IO uint32_t   TS      :  3; //!<[04] Trigger selection
      __IO ONE_BIT    MSM     :  1; //!<[07] Master/slave mode
           uint32_t   UNUSED1 :  8; //!<[08] 
      __IO ONE_BIT    SMS_3   :  1; //!<[16] Slave mode selection - bit 3
    } B;
    __IO uint32_t  R;
    explicit SMCR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      SMCR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      SMCR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DIER_DEF        {  //!< DMA/Interrupt enable register
    struct {
      __IO ONE_BIT    UIE     :  1; //!<[00] Update interrupt enable
      __IO ONE_BIT    CC1IE   :  1; //!<[01] Capture/Compare 1 interrupt enable
      __IO ONE_BIT    CC2IE   :  1; //!<[02] Capture/Compare 2 interrupt enable
           uint32_t   UNUSED0 :  2; //!<[03] 
      __IO ONE_BIT    COMIE   :  1; //!<[05] COM interrupt enable
      __IO ONE_BIT    TIE     :  1; //!<[06] Trigger interrupt enable
      __IO ONE_BIT    BIE     :  1; //!<[07] Break interrupt enable
      __IO ONE_BIT    UDE     :  1; //!<[08] Update DMA request enable
      __IO ONE_BIT    CC1DE   :  1; //!<[09] Capture/Compare 1 DMA request enable
      __IO ONE_BIT    CC2DE   :  1; //!<[10] Capture/Compare 2 DMA request enable
           uint32_t   UNUSED1 :  2; //!<[11] 
      __IO ONE_BIT    COMDE   :  1; //!<[13] COM DMA request enable
      __IO ONE_BIT    TDE     :  1; //!<[14] Trigger DMA request enable
    } B;
    __IO uint32_t  R;
    explicit DIER_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DIER_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DIER_DEF r; r.R = R;
      R = f (r);
    }
  };
  union SR_DEF          {  //!< status register
    struct {
      __IO ONE_BIT    UIF     :  1; //!<[00] Update interrupt flag
      __IO ONE_BIT    CC1IF   :  1; //!<[01] Capture/compare 1 interrupt flag
      __IO ONE_BIT    CC2IF   :  1; //!<[02] Capture/Compare 2 interrupt flag
           uint32_t   UNUSED0 :  2; //!<[03] 
      __IO ONE_BIT    COMIF   :  1; //!<[05] COM interrupt flag
      __IO ONE_BIT    TIF     :  1; //!<[06] Trigger interrupt flag
      __IO ONE_BIT    BIF     :  1; //!<[07] Break interrupt flag
           ONE_BIT    UNUSED1 :  1; //!<[08] 
      __IO ONE_BIT    CC1OF   :  1; //!<[09] Capture/Compare 1 overcapture flag
      __IO ONE_BIT    CC2OF   :  1; //!<[10] Capture/Compare 2 overcapture flag
    } B;
    __IO uint32_t  R;
    explicit SR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      SR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      SR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union EGR_DEF         {  //!< event generation register
    struct {
      __O  ONE_BIT    UG      :  1; //!<[00] Update generation
      __O  ONE_BIT    CC1G    :  1; //!<[01] Capture/compare 1 generation
      __O  ONE_BIT    CC2G    :  1; //!<[02] Capture/Compare 2 generation
           uint32_t   UNUSED0 :  2; //!<[03] 
      __O  ONE_BIT    COMG    :  1; //!<[05] Capture/Compare control update generation
      __O  ONE_BIT    TG      :  1; //!<[06] Trigger generation
      __O  ONE_BIT    BG      :  1; //!<[07] Break generation
    } B;
    __O  uint32_t  R;
    explicit EGR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      EGR_DEF r;
      R = f (r);
    }
  };
  union CCMR1_Input_DEF {  //!< capture/compare mode register 1 (input mode)
    struct {
      __IO uint32_t   CC1S   :  2; //!<[00] Capture/Compare 1 selection
      __IO uint32_t   IC1PSC :  2; //!<[02] Input capture 1 prescaler
      __IO uint32_t   IC1F   :  4; //!<[04] Input capture 1 filter
      __IO uint32_t   CC2S   :  2; //!<[08] Capture/Compare 2 selection
      __IO uint32_t   IC2PSC :  2; //!<[10] Input capture 2 prescaler
      __IO uint32_t   IC2F   :  4; //!<[12] Input capture 2 filter
    } B;
    __IO uint32_t  R;
    explicit CCMR1_Input_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CCMR1_Input_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CCMR1_Input_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CCMR1_Output_DEF  {  //!< capture/compare mode register (output mode)
    struct {
      __IO uint32_t   CC1S    :  2; //!<[00] Capture/Compare 1 selection
      __IO ONE_BIT    OC1FE   :  1; //!<[02] Output Compare 1 fast enable
      __IO ONE_BIT    OC1PE   :  1; //!<[03] Output Compare 1 preload enable
      __IO uint32_t   OC1M    :  3; //!<[04] Output Compare 1 mode
           ONE_BIT    UNUSED0 :  1; //!<[07] 
      __IO uint32_t   CC2S    :  2; //!<[08] Capture/Compare 2 selection
      __IO ONE_BIT    OC2FE   :  1; //!<[10] Output Compare 2 fast enable
      __IO ONE_BIT    OC2PE   :  1; //!<[11] Output Compare 2 preload enable
      __IO uint32_t   OC2M    :  3; //!<[12] Output Compare 2 mode
           ONE_BIT    UNUSED1 :  1; //!<[15] 
      __IO ONE_BIT    OC1M_3  :  1; //!<[16] Output Compare 1 mode
           uint32_t   UNUSED2 :  7; //!<[17] 
      __IO ONE_BIT    OC2M_3  :  1; //!<[24] Output Compare 2 mode - bit 3
    } B;
    __IO uint32_t  R;
    explicit CCMR1_Output_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CCMR1_Output_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CCMR1_Output_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CCER_DEF        {  //!< capture/compare enable register
    struct {
      __IO ONE_BIT  CC1E    :  1; //!<[00] Capture/Compare 1 output enable
      __IO ONE_BIT  CC1P    :  1; //!<[01] Capture/Compare 1 output Polarity
      __IO ONE_BIT  CC1NE   :  1; //!<[02] Capture/Compare 1 complementary output enable
      __IO ONE_BIT  CC1NP   :  1; //!<[03] Capture/Compare 1 output Polarity
      __IO ONE_BIT  CC2E    :  1; //!<[04] Capture/Compare 2 output enable
      __IO ONE_BIT  CC2P    :  1; //!<[05] Capture/Compare 2 output polarity
           ONE_BIT  UNUSED0 :  1; //!<[06] 
      __IO ONE_BIT  CC2NP   :  1; //!<[07] Capture/Compare 2 complementary output polarity
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
  union CNT_DEF         {  //!< counter
    struct {
      __IO uint32_t   CNT     : 16; //!<[00] counter value
           uint32_t   UNUSED0 : 15; //!<[16] 
      __I  ONE_BIT    UIFCPY  :  1; //!<[31] UIF Copy
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
  union PSC_DEF         {  //!< prescaler
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
  union ARR_DEF         {  //!< auto-reload register
    struct {
      __IO uint32_t   ARR : 16; //!<[00] Auto-reload value
    } B;
    __IO uint32_t  R;
    explicit ARR_DEF () noexcept { R = 0x0000ffffu; }
    template<typename F> void setbit (F f) volatile {
      ARR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ARR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union RCR_DEF         {  //!< repetition counter register
    struct {
      __IO uint32_t   REP :  8; //!<[00] Repetition counter value
    } B;
    __IO uint32_t  R;
    explicit RCR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      RCR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      RCR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CCR1_DEF        {  //!< capture/compare register 1
    struct {
      __IO uint32_t   CCR1 : 16; //!<[00] Capture/Compare 1 value
    } B;
    __IO uint32_t  R;
    explicit CCR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CCR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CCR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CCR2_DEF        {  //!< TIM15 capture/compare register 2
    struct {
      __IO uint32_t   CCR2 : 16; //!<[00] Capture/Compare 2 value
    } B;
    __IO uint32_t  R;
    explicit CCR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CCR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CCR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union BDTR_DEF        {  //!< break and dead-time register
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
  union DCR_DEF         {  //!< DMA control register
    struct {
      __IO uint32_t   DBA     :  5; //!<[00] DMA base address
           uint32_t   UNUSED0 :  3; //!<[05] 
      __IO uint32_t   DBL     :  5; //!<[08] DMA burst length
    } B;
    __IO uint32_t  R;
    explicit DCR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DCR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DCR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DMAR_DEF        {  //!< DMA address for full transfer
    struct {
      __IO uint32_t   DMAB : 16; //!<[00] DMA register for burst accesses
    } B;
    __IO uint32_t  R;
    explicit DMAR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DMAR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DMAR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union OR1_DEF         {  //!< TIM15 option register 1
    struct {
      __IO ONE_BIT    TI1_RMP      :  1; //!<[00] Input capture 1 remap
      __IO uint32_t   ENCODER_MODE :  2; //!<[01] Encoder mode
    } B;
    __IO uint32_t  R;
    explicit OR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      OR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      OR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union OR2_DEF         {  //!< TIM15 option register 2
    struct {
      __IO ONE_BIT    BKINE   :  1; //!<[00] BRK BKIN input enable
      __IO ONE_BIT    BKCMP1E :  1; //!<[01] BRK COMP1 enable
      __IO ONE_BIT    BKCMP2E :  1; //!<[02] BRK COMP2 enable
           uint32_t   UNUSED0 :  6; //!<[03] 
      __IO ONE_BIT    BKINP   :  1; //!<[09] BRK BKIN input polarity
      __IO ONE_BIT    BKCMP1P :  1; //!<[10] BRK COMP1 input polarity
      __IO ONE_BIT    BKCMP2P :  1; //!<[11] BRK COMP2 input polarity
    } B;
    __IO uint32_t  R;
    explicit OR2_DEF () noexcept { R = 0x00000001u; }
    template<typename F> void setbit (F f) volatile {
      OR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      OR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  // PERIPHERAL TIM15 REGISTERS INSTANCES
  __IO CR1_DEF                     CR1 ;  //!< [0000](04)[0x00000000]
  __IO CR2_DEF                     CR2 ;  //!< [0004](04)[0x00000000]
  __IO SMCR_DEF                   SMCR ;  //!< [0008](04)[0x00000000]
  __IO DIER_DEF                   DIER ;  //!< [000c](04)[0x00000000]
  __IO SR_DEF                       SR ;  //!< [0010](04)[0x00000000]
  __O  EGR_DEF                     EGR ;  //!< [0014](04)[0x00000000]
  MERGE {
  __IO CCMR1_Input_DEF     CCMR1_Input ;  //!< [0018](04)[0x00000000]
  __IO CCMR1_Output_DEF     CCMR1_Output ;  //!< [0018](04)[0x00000000]
  };
       uint32_t              UNUSED0 ;  //!< [001c](04)[0xFFFFFFFF]
  __IO CCER_DEF                   CCER ;  //!< [0020](04)[0x00000000]
  __IO CNT_DEF                     CNT ;  //!< [0024](04)[0x00000000]
  __IO PSC_DEF                     PSC ;  //!< [0028](04)[0x00000000]
  __IO ARR_DEF                     ARR ;  //!< [002c](04)[0x0000FFFF]
  __IO RCR_DEF                     RCR ;  //!< [0030](04)[0x00000000]
  __IO CCR1_DEF                   CCR1 ;  //!< [0034](04)[0x00000000]
  __IO CCR2_DEF                   CCR2 ;  //!< [0038](04)[0x00000000]
       uint32_t              UNUSED1 [2];  //!< [003c](08)[0xFFFFFFFF]
  __IO BDTR_DEF                   BDTR ;  //!< [0044](04)[0x00000000]
  __IO DCR_DEF                     DCR ;  //!< [0048](04)[0x00000000]
  __IO DMAR_DEF                   DMAR ;  //!< [004c](04)[0x00000000]
  __IO OR1_DEF                     OR1 ;  //!< [0050](04)[0x00000000]
       uint32_t              UNUSED2 [3];  //!< [0054](0c)[0xFFFFFFFF]
  __IO OR2_DEF                     OR2 ;  //!< [0060](04)[0x00000001]
}; /* total size = 0x0400, struct size = 0x0064 */

// ////////////////////+++ TIM16 +-+//////////////////// //
struct TIM16_Type         { /*!< General purpose timers */
  union CR1_DEF         {  //!< control register 1
    struct {
      __IO ONE_BIT    CEN      :  1; //!<[00] Counter enable
      __IO ONE_BIT    UDIS     :  1; //!<[01] Update disable
      __IO ONE_BIT    URS      :  1; //!<[02] Update request source
      __IO ONE_BIT    OPM      :  1; //!<[03] One-pulse mode
           uint32_t   UNUSED0  :  3; //!<[04] 
      __IO ONE_BIT    ARPE     :  1; //!<[07] Auto-reload preload enable
      __IO uint32_t   CKD      :  2; //!<[08] Clock division
           ONE_BIT    UNUSED1  :  1; //!<[10] 
      __IO ONE_BIT    UIFREMAP :  1; //!<[11] UIF status bit remapping
    } B;
    __IO uint32_t  R;
    explicit CR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CR2_DEF         {  //!< control register 2
    struct {
      __IO ONE_BIT    CCPC    :  1; //!<[00] Capture/compare preloaded control
           ONE_BIT    UNUSED0 :  1; //!<[01] 
      __IO ONE_BIT    CCUS    :  1; //!<[02] Capture/compare control update selection
      __IO ONE_BIT    CCDS    :  1; //!<[03] Capture/compare DMA selection
           uint32_t   UNUSED1 :  4; //!<[04] 
      __IO ONE_BIT    OIS1    :  1; //!<[08] Output Idle state 1
      __IO ONE_BIT    OIS1N   :  1; //!<[09] Output Idle state 1
    } B;
    __IO uint32_t  R;
    explicit CR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DIER_DEF        {  //!< DMA/Interrupt enable register
    struct {
      __IO ONE_BIT    UIE     :  1; //!<[00] Update interrupt enable
      __IO ONE_BIT    CC1IE   :  1; //!<[01] Capture/Compare 1 interrupt enable
           uint32_t   UNUSED0 :  3; //!<[02] 
      __IO ONE_BIT    COMIE   :  1; //!<[05] COM interrupt enable
      __IO ONE_BIT    TIE     :  1; //!<[06] Trigger interrupt enable
      __IO ONE_BIT    BIE     :  1; //!<[07] Break interrupt enable
      __IO ONE_BIT    UDE     :  1; //!<[08] Update DMA request enable
      __IO ONE_BIT    CC1DE   :  1; //!<[09] Capture/Compare 1 DMA request enable
           uint32_t   UNUSED1 :  3; //!<[10] 
      __IO ONE_BIT    COMDE   :  1; //!<[13] COM DMA request enable
      __IO ONE_BIT    TDE     :  1; //!<[14] Trigger DMA request enable
    } B;
    __IO uint32_t  R;
    explicit DIER_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DIER_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DIER_DEF r; r.R = R;
      R = f (r);
    }
  };
  union SR_DEF          {  //!< status register
    struct {
      __IO ONE_BIT    UIF     :  1; //!<[00] Update interrupt flag
      __IO ONE_BIT    CC1IF   :  1; //!<[01] Capture/compare 1 interrupt flag
           uint32_t   UNUSED0 :  3; //!<[02] 
      __IO ONE_BIT    COMIF   :  1; //!<[05] COM interrupt flag
      __IO ONE_BIT    TIF     :  1; //!<[06] Trigger interrupt flag
      __IO ONE_BIT    BIF     :  1; //!<[07] Break interrupt flag
           ONE_BIT    UNUSED1 :  1; //!<[08] 
      __IO ONE_BIT    CC1OF   :  1; //!<[09] Capture/Compare 1 overcapture flag
    } B;
    __IO uint32_t  R;
    explicit SR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      SR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      SR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union EGR_DEF         {  //!< event generation register
    struct {
      __O  ONE_BIT    UG      :  1; //!<[00] Update generation
      __O  ONE_BIT    CC1G    :  1; //!<[01] Capture/compare 1 generation
           uint32_t   UNUSED0 :  3; //!<[02] 
      __O  ONE_BIT    COMG    :  1; //!<[05] Capture/Compare control update generation
      __O  ONE_BIT    TG      :  1; //!<[06] Trigger generation
      __O  ONE_BIT    BG      :  1; //!<[07] Break generation
    } B;
    __O  uint32_t  R;
    explicit EGR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      EGR_DEF r;
      R = f (r);
    }
  };
  union CCMR1_Input_DEF {  //!< capture/compare mode register 1 (input mode)
    struct {
      __IO uint32_t   CC1S   :  2; //!<[00] Capture/Compare 1 selection
      __IO uint32_t   IC1PSC :  2; //!<[02] Input capture 1 prescaler
      __IO uint32_t   IC1F   :  4; //!<[04] Input capture 1 filter
    } B;
    __IO uint32_t  R;
    explicit CCMR1_Input_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CCMR1_Input_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CCMR1_Input_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CCMR1_Output_DEF  {  //!< capture/compare mode register (output mode)
    struct {
      __IO uint32_t   CC1S    :  2; //!<[00] Capture/Compare 1 selection
      __IO ONE_BIT    OC1FE   :  1; //!<[02] Output Compare 1 fast enable
      __IO ONE_BIT    OC1PE   :  1; //!<[03] Output Compare 1 preload enable
      __IO uint32_t   OC1M    :  3; //!<[04] Output Compare 1 mode
           uint32_t   UNUSED0 :  9; //!<[07] 
      __IO ONE_BIT    OC1M_2  :  1; //!<[16] Output Compare 1 mode
    } B;
    __IO uint32_t  R;
    explicit CCMR1_Output_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CCMR1_Output_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CCMR1_Output_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CCER_DEF        {  //!< capture/compare enable register
    struct {
      __IO ONE_BIT  CC1E  :  1; //!<[00] Capture/Compare 1 output enable
      __IO ONE_BIT  CC1P  :  1; //!<[01] Capture/Compare 1 output Polarity
      __IO ONE_BIT  CC1NE :  1; //!<[02] Capture/Compare 1 complementary output enable
      __IO ONE_BIT  CC1NP :  1; //!<[03] Capture/Compare 1 output Polarity
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
  union CNT_DEF         {  //!< counter
    struct {
      __IO uint32_t   CNT     : 16; //!<[00] counter value
           uint32_t   UNUSED0 : 15; //!<[16] 
      __I  ONE_BIT    UIFCPY  :  1; //!<[31] UIF Copy
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
  union PSC_DEF         {  //!< prescaler
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
  union ARR_DEF         {  //!< auto-reload register
    struct {
      __IO uint32_t   ARR : 16; //!<[00] Auto-reload value
    } B;
    __IO uint32_t  R;
    explicit ARR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ARR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ARR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union RCR_DEF         {  //!< repetition counter register
    struct {
      __IO uint32_t   REP :  8; //!<[00] Repetition counter value
    } B;
    __IO uint32_t  R;
    explicit RCR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      RCR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      RCR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CCR1_DEF        {  //!< capture/compare register 1
    struct {
      __IO uint32_t   CCR1 : 16; //!<[00] Capture/Compare 1 value
    } B;
    __IO uint32_t  R;
    explicit CCR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CCR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CCR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union BDTR_DEF        {  //!< break and dead-time register
    struct {
      __IO uint32_t   DTG  :  8; //!<[00] Dead-time generator setup
      __IO uint32_t   LOCK :  2; //!<[08] Lock configuration
      __IO ONE_BIT    OSSI :  1; //!<[10] Off-state selection for Idle mode
      __IO ONE_BIT    OSSR :  1; //!<[11] Off-state selection for Run mode
      __IO ONE_BIT    BKE  :  1; //!<[12] Break enable
      __IO ONE_BIT    BKP  :  1; //!<[13] Break polarity
      __IO ONE_BIT    AOE  :  1; //!<[14] Automatic output enable
      __IO ONE_BIT    MOE  :  1; //!<[15] Main output enable
      __IO uint32_t   BKF  :  4; //!<[16] Break filter
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
  union DCR_DEF         {  //!< DMA control register
    struct {
      __IO uint32_t   DBA     :  5; //!<[00] DMA base address
           uint32_t   UNUSED0 :  3; //!<[05] 
      __IO uint32_t   DBL     :  5; //!<[08] DMA burst length
    } B;
    __IO uint32_t  R;
    explicit DCR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DCR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DCR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DMAR_DEF        {  //!< DMA address for full transfer
    struct {
      __IO uint32_t   DMAB : 16; //!<[00] DMA register for burst accesses
    } B;
    __IO uint32_t  R;
    explicit DMAR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DMAR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DMAR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union OR1_DEF         {  //!< TIM16 option register 1
    struct {
      __IO uint32_t   TI1_RMP :  2; //!<[00] Input capture 1 remap
    } B;
    __IO uint32_t  R;
    explicit OR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      OR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      OR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union OR2_DEF         {  //!< TIM17 option register 1
    struct {
      __IO ONE_BIT    BKINE    :  1; //!<[00] BRK BKIN input enable
      __IO ONE_BIT    BKCMP1E  :  1; //!<[01] BRK COMP1 enable
      __IO ONE_BIT    BKCMP2E  :  1; //!<[02] BRK COMP2 enable
           uint32_t   UNUSED0  :  5; //!<[03] 
      __IO ONE_BIT    BKDFBK1E :  1; //!<[08] BRK DFSDM_BREAK1 enable
      __IO ONE_BIT    BKINP    :  1; //!<[09] BRK BKIN input polarity
      __IO ONE_BIT    BKCMP1P  :  1; //!<[10] BRK COMP1 input polarity
      __IO ONE_BIT    BKCMP2P  :  1; //!<[11] BRK COMP2 input polarit
    } B;
    __IO uint32_t  R;
    explicit OR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      OR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      OR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  // PERIPHERAL TIM16 REGISTERS INSTANCES
  __IO CR1_DEF                     CR1 ;  //!< [0000](04)[0x00000000]
  __IO CR2_DEF                     CR2 ;  //!< [0004](04)[0x00000000]
       uint32_t              UNUSED0 ;  //!< [0008](04)[0xFFFFFFFF]
  __IO DIER_DEF                   DIER ;  //!< [000c](04)[0x00000000]
  __IO SR_DEF                       SR ;  //!< [0010](04)[0x00000000]
  __O  EGR_DEF                     EGR ;  //!< [0014](04)[0x00000000]
  MERGE {
  __IO CCMR1_Input_DEF     CCMR1_Input ;  //!< [0018](04)[0x00000000]
  __IO CCMR1_Output_DEF     CCMR1_Output ;  //!< [0018](04)[0x00000000]
  };
       uint32_t              UNUSED1 ;  //!< [001c](04)[0xFFFFFFFF]
  __IO CCER_DEF                   CCER ;  //!< [0020](04)[0x00000000]
  __IO CNT_DEF                     CNT ;  //!< [0024](04)[0x00000000]
  __IO PSC_DEF                     PSC ;  //!< [0028](04)[0x00000000]
  __IO ARR_DEF                     ARR ;  //!< [002c](04)[0x00000000]
  __IO RCR_DEF                     RCR ;  //!< [0030](04)[0x00000000]
  __IO CCR1_DEF                   CCR1 ;  //!< [0034](04)[0x00000000]
       uint32_t              UNUSED2 [3];  //!< [0038](0c)[0xFFFFFFFF]
  __IO BDTR_DEF                   BDTR ;  //!< [0044](04)[0x00000000]
  __IO DCR_DEF                     DCR ;  //!< [0048](04)[0x00000000]
  __IO DMAR_DEF                   DMAR ;  //!< [004c](04)[0x00000000]
  __IO OR1_DEF                     OR1 ;  //!< [0050](04)[0x00000000]
       uint32_t              UNUSED3 [3];  //!< [0054](0c)[0xFFFFFFFF]
  __IO OR2_DEF                     OR2 ;  //!< [0060](04)[0x00000000]
}; /* total size = 0x0400, struct size = 0x0064 */

// ////////////////////+++ TIM1 +-+//////////////////// //
struct TIM1_Type          { /*!< Advanced-timers */
  union CR1_DEF          {  //!< control register 1
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
    explicit CR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CR2_DEF          {  //!< control register 2
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
    explicit CR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union SMCR_DEF         {  //!< slave mode control register
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
    explicit SMCR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      SMCR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      SMCR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DIER_DEF         {  //!< DMA/Interrupt enable register
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
    explicit DIER_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DIER_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DIER_DEF r; r.R = R;
      R = f (r);
    }
  };
  union SR_DEF           {  //!< status register
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
    explicit SR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      SR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      SR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union EGR_DEF          {  //!< event generation register
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
    explicit EGR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      EGR_DEF r;
      R = f (r);
    }
  };
  union CCMR1_Input_DEF  {  //!< capture/compare mode register 1 (input mode)
    struct {
      __IO uint32_t   CC1S   :  2; //!<[00] Capture/Compare 1 selection
      __IO uint32_t   ICPCS  :  2; //!<[02] Input capture 1 prescaler
      __IO uint32_t   IC1F   :  4; //!<[04] Input capture 1 filter
      __IO uint32_t   CC2S   :  2; //!<[08] Capture/Compare 2 selection
      __IO uint32_t   IC2PCS :  2; //!<[10] Input capture 2 prescaler
      __IO uint32_t   IC2F   :  4; //!<[12] Input capture 2 filter
    } B;
    __IO uint32_t  R;
    explicit CCMR1_Input_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CCMR1_Input_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CCMR1_Input_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CCMR1_Output_DEF {  //!< capture/compare mode register 1 (output mode)
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
    explicit CCMR1_Output_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CCMR1_Output_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CCMR1_Output_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CCMR2_Input_DEF  {  //!< capture/compare mode register 2 (input mode)
    struct {
      __IO uint32_t   CC3S   :  2; //!<[00] Capture/compare 3 selection
      __IO uint32_t   IC3PSC :  2; //!<[02] Input capture 3 prescaler
      __IO uint32_t   IC3F   :  4; //!<[04] Input capture 3 filter
      __IO uint32_t   CC4S   :  2; //!<[08] Capture/Compare 4 selection
      __IO uint32_t   IC4PSC :  2; //!<[10] Input capture 4 prescaler
      __IO uint32_t   IC4F   :  4; //!<[12] Input capture 4 filter
    } B;
    __IO uint32_t  R;
    explicit CCMR2_Input_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CCMR2_Input_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CCMR2_Input_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CCMR2_Output_DEF {  //!< capture/compare mode register 2 (output mode)
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
    explicit CCMR2_Output_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CCMR2_Output_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CCMR2_Output_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CCER_DEF         {  //!< capture/compare enable register
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
  union CNT_DEF          {  //!< counter
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
  union PSC_DEF          {  //!< prescaler
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
  union ARR_DEF          {  //!< auto-reload register
    struct {
      __IO uint32_t   ARR : 16; //!<[00] Auto-reload value
    } B;
    __IO uint32_t  R;
    explicit ARR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ARR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ARR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union RCR_DEF          {  //!< repetition counter register
    struct {
      __IO uint32_t   REP :  8; //!<[00] Repetition counter value
    } B;
    __IO uint32_t  R;
    explicit RCR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      RCR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      RCR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CCR1_DEF         {  //!< capture/compare register 1
    struct {
      __IO uint32_t   CCR1 : 16; //!<[00] Capture/Compare 1 value
    } B;
    __IO uint32_t  R;
    explicit CCR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CCR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CCR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CCR2_DEF         {  //!< capture/compare register 2
    struct {
      __IO uint32_t   CCR2 : 16; //!<[00] Capture/Compare 2 value
    } B;
    __IO uint32_t  R;
    explicit CCR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CCR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CCR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CCR3_DEF         {  //!< capture/compare register 3
    struct {
      __IO uint32_t   CCR3 : 16; //!<[00] Capture/Compare value
    } B;
    __IO uint32_t  R;
    explicit CCR3_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CCR3_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CCR3_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CCR4_DEF         {  //!< capture/compare register 4
    struct {
      __IO uint32_t   CCR4 : 16; //!<[00] Capture/Compare value
    } B;
    __IO uint32_t  R;
    explicit CCR4_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CCR4_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CCR4_DEF r; r.R = R;
      R = f (r);
    }
  };
  union BDTR_DEF         {  //!< break and dead-time register
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
  union DCR_DEF          {  //!< DMA control register
    struct {
      __IO uint32_t   DBA     :  5; //!<[00] DMA base address
           uint32_t   UNUSED0 :  3; //!<[05] 
      __IO uint32_t   DBL     :  5; //!<[08] DMA burst length
    } B;
    __IO uint32_t  R;
    explicit DCR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DCR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DCR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DMAR_DEF         {  //!< DMA address for full transfer
    struct {
      __IO uint32_t   DMAB : 16; //!<[00] DMA register for burst accesses
    } B;
    __IO uint32_t  R;
    explicit DMAR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DMAR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DMAR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union OR1_DEF          {  //!< DMA address for full transfer
    struct {
      __IO uint32_t   ETR_ADC1_RMP :  2; //!<[00] External trigger remap on ADC1 analog watchdog
      __IO uint32_t   ETR_ADC3_RMP :  2; //!<[02] External trigger remap on ADC3 analog watchdog
      __IO ONE_BIT    TI1_RMP      :  1; //!<[04] Input Capture 1 remap
    } B;
    __IO uint32_t  R;
    explicit OR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      OR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      OR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CCMR3_Output_DEF {  //!< capture/compare mode register 2 (output mode)
    struct {
           uint32_t   UNUSED0   :  2; //!<[00] 
      __IO ONE_BIT    OC5FE     :  1; //!<[02] Output compare 5 fast enable
      __IO ONE_BIT    OC5PE     :  1; //!<[03] Output compare 5 preload enable
      __IO uint32_t   OC5M      :  3; //!<[04] Output compare 5 mode
      __IO ONE_BIT    OC5CE     :  1; //!<[07] Output compare 5 clear enable
           uint32_t   UNUSED1   :  2; //!<[08] 
      __IO ONE_BIT    OC6FE     :  1; //!<[10] Output compare 6 fast enable
      __IO ONE_BIT    OC6PE     :  1; //!<[11] Output compare 6 preload enable
      __IO uint32_t   OC6M      :  3; //!<[12] Output compare 6 mode
      __IO ONE_BIT    OC6CE     :  1; //!<[15] Output compare 6 clear enable
      __IO uint32_t   OC5M_bit3 :  3; //!<[16] Output Compare 5 mode bit 3
           uint32_t   UNUSED2   :  5; //!<[19] 
      __IO ONE_BIT    OC6M_bit3 :  1; //!<[24] Output Compare 6 mode bit 3
    } B;
    __IO uint32_t  R;
    explicit CCMR3_Output_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CCMR3_Output_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CCMR3_Output_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CCR5_DEF         {  //!< capture/compare register 4
    struct {
      __IO uint32_t   CCR5    : 16; //!<[00] Capture/Compare value
           uint32_t   UNUSED0 : 13; //!<[16] 
      __IO ONE_BIT    GC5C1   :  1; //!<[29] Group Channel 5 and Channel 1
      __IO ONE_BIT    GC5C2   :  1; //!<[30] Group Channel 5 and Channel 2
      __IO ONE_BIT    GC5C3   :  1; //!<[31] Group Channel 5 and Channel 3
    } B;
    __IO uint32_t  R;
    explicit CCR5_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CCR5_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CCR5_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CCR6_DEF         {  //!< capture/compare register 4
    struct {
      __IO uint32_t   CCR6 : 16; //!<[00] Capture/Compare value
    } B;
    __IO uint32_t  R;
    explicit CCR6_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CCR6_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CCR6_DEF r; r.R = R;
      R = f (r);
    }
  };
  union OR2_DEF          {  //!< DMA address for full transfer
    struct {
      __IO ONE_BIT    BKINE    :  1; //!<[00] BRK BKIN input enable
      __IO ONE_BIT    BKCMP1E  :  1; //!<[01] BRK COMP1 enable
      __IO ONE_BIT    BKCMP2E  :  1; //!<[02] BRK COMP2 enable
           uint32_t   UNUSED0  :  5; //!<[03] 
      __IO ONE_BIT    BKDFBK0E :  1; //!<[08] BRK DFSDM_BREAK0 enable
      __IO ONE_BIT    BKINP    :  1; //!<[09] BRK BKIN input polarity
      __IO ONE_BIT    BKCMP1P  :  1; //!<[10] BRK COMP1 input polarity
      __IO ONE_BIT    BKCMP2P  :  1; //!<[11] BRK COMP2 input polarity
           uint32_t   UNUSED1  :  2; //!<[12] 
      __IO uint32_t   ETRSEL   :  3; //!<[14] ETR source selection
    } B;
    __IO uint32_t  R;
    explicit OR2_DEF () noexcept { R = 0x00000001u; }
    template<typename F> void setbit (F f) volatile {
      OR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      OR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union OR3_DEF          {  //!< DMA address for full transfer
    struct {
      __IO ONE_BIT    BK2INE    :  1; //!<[00] BRK2 BKIN input enable
      __IO ONE_BIT    BK2CMP1E  :  1; //!<[01] BRK2 COMP1 enable
      __IO ONE_BIT    BK2CMP2E  :  1; //!<[02] BRK2 COMP2 enable
           uint32_t   UNUSED0   :  5; //!<[03] 
      __IO ONE_BIT    BK2DFBK0E :  1; //!<[08] BRK2 DFSDM_BREAK0 enable
      __IO ONE_BIT    BK2INP    :  1; //!<[09] BRK2 BKIN input polarity
      __IO ONE_BIT    BK2CMP1P  :  1; //!<[10] BRK2 COMP1 input polarity
      __IO ONE_BIT    BK2CMP2P  :  1; //!<[11] BRK2 COMP2 input polarity
    } B;
    __IO uint32_t  R;
    explicit OR3_DEF () noexcept { R = 0x00000001u; }
    template<typename F> void setbit (F f) volatile {
      OR3_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      OR3_DEF r; r.R = R;
      R = f (r);
    }
  };
  // PERIPHERAL TIM1 REGISTERS INSTANCES
  __IO CR1_DEF                      CR1 ;  //!< [0000](04)[0x00000000]
  __IO CR2_DEF                      CR2 ;  //!< [0004](04)[0x00000000]
  __IO SMCR_DEF                    SMCR ;  //!< [0008](04)[0x00000000]
  __IO DIER_DEF                    DIER ;  //!< [000c](04)[0x00000000]
  __IO SR_DEF                        SR ;  //!< [0010](04)[0x00000000]
  __O  EGR_DEF                      EGR ;  //!< [0014](04)[0x00000000]
  MERGE {
  __IO CCMR1_Input_DEF      CCMR1_Input ;  //!< [0018](04)[0x00000000]
  __IO CCMR1_Output_DEF    CCMR1_Output ;  //!< [0018](04)[0x00000000]
  };
  MERGE {
  __IO CCMR2_Input_DEF      CCMR2_Input ;  //!< [001c](04)[0x00000000]
  __IO CCMR2_Output_DEF    CCMR2_Output ;  //!< [001c](04)[0x00000000]
  };
  __IO CCER_DEF                    CCER ;  //!< [0020](04)[0x00000000]
  __IO CNT_DEF                      CNT ;  //!< [0024](04)[0x00000000]
  __IO PSC_DEF                      PSC ;  //!< [0028](04)[0x00000000]
  __IO ARR_DEF                      ARR ;  //!< [002c](04)[0x00000000]
  __IO RCR_DEF                      RCR ;  //!< [0030](04)[0x00000000]
  __IO CCR1_DEF                    CCR1 ;  //!< [0034](04)[0x00000000]
  __IO CCR2_DEF                    CCR2 ;  //!< [0038](04)[0x00000000]
  __IO CCR3_DEF                    CCR3 ;  //!< [003c](04)[0x00000000]
  __IO CCR4_DEF                    CCR4 ;  //!< [0040](04)[0x00000000]
  __IO BDTR_DEF                    BDTR ;  //!< [0044](04)[0x00000000]
  __IO DCR_DEF                      DCR ;  //!< [0048](04)[0x00000000]
  __IO DMAR_DEF                    DMAR ;  //!< [004c](04)[0x00000000]
  __IO OR1_DEF                      OR1 ;  //!< [0050](04)[0x00000000]
  __IO CCMR3_Output_DEF    CCMR3_Output ;  //!< [0054](04)[0x00000000]
  __IO CCR5_DEF                    CCR5 ;  //!< [0058](04)[0x00000000]
  __IO CCR6_DEF                    CCR6 ;  //!< [005c](04)[0x00000000]
  __IO OR2_DEF                      OR2 ;  //!< [0060](04)[0x00000001]
  __IO OR3_DEF                      OR3 ;  //!< [0064](04)[0x00000001]
}; /* total size = 0x0400, struct size = 0x0068 */

// ////////////////////+++ TIM6 +-+//////////////////// //
struct TIM6_Type          { /*!< Basic-timers */
  union CR1_DEF     {  //!< control register 1
    struct {
      __IO ONE_BIT    CEN     :  1; //!<[00] Counter enable
      __IO ONE_BIT    UDIS    :  1; //!<[01] Update disable
      __IO ONE_BIT    URS     :  1; //!<[02] Update request source
      __IO ONE_BIT    OPM     :  1; //!<[03] One-pulse mode
           uint32_t   UNUSED0 :  3; //!<[04] 
      __IO ONE_BIT    ARPE    :  1; //!<[07] Auto-reload preload enable
    } B;
    __IO uint32_t  R;
    explicit CR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CR2_DEF     {  //!< control register 2
    struct {
           uint32_t   UNUSED0 :  4; //!<[00] 
      __IO uint32_t   MMS     :  3; //!<[04] Master mode selection
    } B;
    __IO uint32_t  R;
    explicit CR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DIER_DEF    {  //!< DMA/Interrupt enable register
    struct {
      __IO ONE_BIT    UIE     :  1; //!<[00] Update interrupt enable
           uint32_t   UNUSED0 :  7; //!<[01] 
      __IO ONE_BIT    UDE     :  1; //!<[08] Update DMA request enable
    } B;
    __IO uint32_t  R;
    explicit DIER_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DIER_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DIER_DEF r; r.R = R;
      R = f (r);
    }
  };
  union SR_DEF      {  //!< status register
    struct {
      __IO ONE_BIT  UIF :  1; //!<[00] Update interrupt flag
    } B;
    __IO uint32_t  R;
    explicit SR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      SR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      SR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union EGR_DEF     {  //!< event generation register
    struct {
      __O  ONE_BIT  UG :  1; //!<[00] Update generation
    } B;
    __O  uint32_t  R;
    explicit EGR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      EGR_DEF r;
      R = f (r);
    }
  };
  union CNT_DEF     {  //!< counter
    struct {
      __IO uint32_t   CNT : 16; //!<[00] Low counter value
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
  union PSC_DEF     {  //!< prescaler
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
  union ARR_DEF     {  //!< auto-reload register
    struct {
      __IO uint32_t   ARR : 16; //!<[00] Low Auto-reload value
    } B;
    __IO uint32_t  R;
    explicit ARR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ARR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ARR_DEF r; r.R = R;
      R = f (r);
    }
  };
  // PERIPHERAL TIM6 REGISTERS INSTANCES
  __IO CR1_DEF                 CR1 ;  //!< [0000](04)[0x00000000]
  __IO CR2_DEF                 CR2 ;  //!< [0004](04)[0x00000000]
       uint32_t          UNUSED0 ;  //!< [0008](04)[0xFFFFFFFF]
  __IO DIER_DEF               DIER ;  //!< [000c](04)[0x00000000]
  __IO SR_DEF                   SR ;  //!< [0010](04)[0x00000000]
  __O  EGR_DEF                 EGR ;  //!< [0014](04)[0x00000000]
       uint32_t          UNUSED1 [3];  //!< [0018](0c)[0xFFFFFFFF]
  __IO CNT_DEF                 CNT ;  //!< [0024](04)[0x00000000]
  __IO PSC_DEF                 PSC ;  //!< [0028](04)[0x00000000]
  __IO ARR_DEF                 ARR ;  //!< [002c](04)[0x00000000]
}; /* total size = 0x0400, struct size = 0x0030 */

// ////////////////////+++ LPTIM1 +-+//////////////////// //
struct LPTIM1_Type        { /*!< Low power timer */
  union ISR_DEF   {  //!< Interrupt and Status Register
    struct {
      __I  ONE_BIT  CMPM    :  1; //!<[00] Compare match
      __I  ONE_BIT  ARRM    :  1; //!<[01] Autoreload match
      __I  ONE_BIT  EXTTRIG :  1; //!<[02] External trigger edge event
      __I  ONE_BIT  CMPOK   :  1; //!<[03] Compare register update OK
      __I  ONE_BIT  ARROK   :  1; //!<[04] Autoreload register update OK
      __I  ONE_BIT  UP      :  1; //!<[05] Counter direction change down to up
      __I  ONE_BIT  DOWN    :  1; //!<[06] Counter direction change up to down
      __I  ONE_BIT  UE      :  1; //!<[07] UE
      __I  ONE_BIT  REPOK   :  1; //!<[08] REPOK
    } B;
    __I  uint32_t  R;

    explicit ISR_DEF (volatile ISR_DEF & o) noexcept { R = o.R; };
  };
  union ICR_DEF   {  //!< Interrupt Clear Register
    struct {
      __O  ONE_BIT  CMPMCF    :  1; //!<[00] compare match Clear Flag
      __O  ONE_BIT  ARRMCF    :  1; //!<[01] Autoreload match Clear Flag
      __O  ONE_BIT  EXTTRIGCF :  1; //!<[02] External trigger valid edge Clear Flag
      __O  ONE_BIT  CMPOKCF   :  1; //!<[03] Compare register update OK Clear Flag
      __O  ONE_BIT  ARROKCF   :  1; //!<[04] Autoreload register update OK Clear Flag
      __O  ONE_BIT  UPCF      :  1; //!<[05] Direction change to UP Clear Flag
      __O  ONE_BIT  DOWNCF    :  1; //!<[06] Direction change to down Clear Flag
      __O  ONE_BIT  UECF      :  1; //!<[07] UECF
      __O  ONE_BIT  REPOKCF   :  1; //!<[08] REPOKCF
    } B;
    __O  uint32_t  R;
    explicit ICR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ICR_DEF r;
      R = f (r);
    }
  };
  union IER_DEF   {  //!< Interrupt Enable Register
    struct {
      __IO ONE_BIT  CMPMIE    :  1; //!<[00] Compare match Interrupt Enable
      __IO ONE_BIT  ARRMIE    :  1; //!<[01] Autoreload match Interrupt Enable
      __IO ONE_BIT  EXTTRIGIE :  1; //!<[02] External trigger valid edge Interrupt Enable
      __IO ONE_BIT  CMPOKIE   :  1; //!<[03] Compare register update OK Interrupt Enable
      __IO ONE_BIT  ARROKIE   :  1; //!<[04] Autoreload register update OK Interrupt Enable
      __IO ONE_BIT  UPIE      :  1; //!<[05] Direction change to UP Interrupt Enable
      __IO ONE_BIT  DOWNIE    :  1; //!<[06] Direction change to down Interrupt Enable
      __IO ONE_BIT  UEIE      :  1; //!<[07] UEIE
      __IO ONE_BIT  REPOKIE   :  1; //!<[08] REPOKIE
    } B;
    __IO uint32_t  R;
    explicit IER_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IER_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      IER_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CFGR_DEF  {  //!< Configuration Register
    struct {
      __IO ONE_BIT    CKSEL     :  1; //!<[00] Clock selector
      __IO uint32_t   CKPOL     :  2; //!<[01] Clock Polarity
      __IO uint32_t   CKFLT     :  2; //!<[03] Configurable digital filter for external clock
           ONE_BIT    UNUSED0   :  1; //!<[05] 
      __IO uint32_t   TRGFLT    :  2; //!<[06] Configurable digital filter for trigger
           ONE_BIT    UNUSED1   :  1; //!<[08] 
      __IO uint32_t   PRESC     :  3; //!<[09] Clock prescaler
           ONE_BIT    UNUSED2   :  1; //!<[12] 
      __IO uint32_t   TRIGSEL   :  3; //!<[13] Trigger selector
           ONE_BIT    UNUSED3   :  1; //!<[16] 
      __IO uint32_t   TRIGEN    :  2; //!<[17] Trigger enable and polarity
      __IO ONE_BIT    TIMOUT    :  1; //!<[19] Timeout enable
      __IO ONE_BIT    WAVE      :  1; //!<[20] Waveform shape
      __IO ONE_BIT    WAVPOL    :  1; //!<[21] Waveform shape polarity
      __IO ONE_BIT    PRELOAD   :  1; //!<[22] Registers update mode
      __IO ONE_BIT    COUNTMODE :  1; //!<[23] counter mode enabled
      __IO ONE_BIT    ENC       :  1; //!<[24] Encoder mode enable
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
  union CR_DEF    {  //!< Control Register
    struct {
      __IO ONE_BIT  ENABLE   :  1; //!<[00] LPTIM Enable
      __IO ONE_BIT  SNGSTRT  :  1; //!<[01] LPTIM start in single mode
      __IO ONE_BIT  CNTSTRT  :  1; //!<[02] Timer start in continuous mode
      __IO ONE_BIT  COUNTRST :  1; //!<[03] COUNTRST
      __IO ONE_BIT  RSTARE   :  1; //!<[04] RSTARE
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
  union CMP_DEF   {  //!< Compare Register
    struct {
      __IO uint32_t   CMP : 16; //!<[00] Compare value
    } B;
    __IO uint32_t  R;
    explicit CMP_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CMP_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CMP_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ARR_DEF   {  //!< Autoreload Register
    struct {
      __IO uint32_t   ARR : 16; //!<[00] Auto reload value
    } B;
    __IO uint32_t  R;
    explicit ARR_DEF () noexcept { R = 0x00000001u; }
    template<typename F> void setbit (F f) volatile {
      ARR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ARR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CNT_DEF   {  //!< Counter Register
    struct {
      __I  uint32_t   CNT : 16; //!<[00] Counter value
    } B;
    __I  uint32_t  R;

    explicit CNT_DEF (volatile CNT_DEF & o) noexcept { R = o.R; };
  };
  union OR_DEF    {  //!< option register
    struct {
      __IO ONE_BIT  OR_0 :  1; //!<[00] Option register bit 0
      __IO ONE_BIT  OR_1 :  1; //!<[01] Option register bit 1
    } B;
    __IO uint32_t  R;
    explicit OR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      OR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      OR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CFGR2_DEF {  //!< configuration register 2
    struct {
      __IO uint32_t   IN1SEL  :  2; //!<[00] LPTIM input 1 selection
           uint32_t   UNUSED0 :  2; //!<[02] 
      __IO uint32_t   IN2SEL  :  2; //!<[04] LPTIM input 2 selection
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
  union RCR_DEF   {  //!< repetition register
    struct {
      __IO uint32_t   REP :  8; //!<[00] Repetition register value
    } B;
    __IO uint32_t  R;
    explicit RCR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      RCR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      RCR_DEF r; r.R = R;
      R = f (r);
    }
  };
  // PERIPHERAL LPTIM1 REGISTERS INSTANCES
  __I  ISR_DEF               ISR ;  //!< [0000](04)[0x00000000]
  __O  ICR_DEF               ICR ;  //!< [0004](04)[0x00000000]
  __IO IER_DEF               IER ;  //!< [0008](04)[0x00000000]
  __IO CFGR_DEF             CFGR ;  //!< [000c](04)[0x00000000]
  __IO CR_DEF                 CR ;  //!< [0010](04)[0x00000000]
  __IO CMP_DEF               CMP ;  //!< [0014](04)[0x00000000]
  __IO ARR_DEF               ARR ;  //!< [0018](04)[0x00000001]
  __I  CNT_DEF               CNT ;  //!< [001c](04)[0x00000000]
  __IO OR_DEF                 OR ;  //!< [0020](04)[0x00000000]
  __IO CFGR2_DEF           CFGR2 ;  //!< [0024](04)[0x00000000]
  __IO RCR_DEF               RCR ;  //!< [0028](04)[0x00000000]
}; /* total size = 0x0400, struct size = 0x002C */

// ////////////////////+++ USART1 +-+//////////////////// //
struct USART1_Type        { /*!< Universal synchronous asynchronous receiver transmitter */
  union CR1_DEF  {  //!< Control register 1
    struct {
      __IO ONE_BIT  UE     :  1; //!<[00] USART enable
      __IO ONE_BIT  UESM   :  1; //!<[01] USART enable in Stop mode
      __IO ONE_BIT  RE     :  1; //!<[02] Receiver enable
      __IO ONE_BIT  TE     :  1; //!<[03] Transmitter enable
      __IO ONE_BIT  IDLEIE :  1; //!<[04] IDLE interrupt enable
      __IO ONE_BIT  RXNEIE :  1; //!<[05] RXNE interrupt enable
      __IO ONE_BIT  TCIE   :  1; //!<[06] Transmission complete interrupt enable
      __IO ONE_BIT  TXEIE  :  1; //!<[07] interrupt enable
      __IO ONE_BIT  PEIE   :  1; //!<[08] PE interrupt enable
      __IO ONE_BIT  PS     :  1; //!<[09] Parity selection
      __IO ONE_BIT  PCE    :  1; //!<[10] Parity control enable
      __IO ONE_BIT  WAKE   :  1; //!<[11] Receiver wakeup method
      __IO ONE_BIT  M0     :  1; //!<[12] Word length
      __IO ONE_BIT  MME    :  1; //!<[13] Mute mode enable
      __IO ONE_BIT  CMIE   :  1; //!<[14] Character match interrupt enable
      __IO ONE_BIT  OVER8  :  1; //!<[15] Oversampling mode
      __IO ONE_BIT  DEDT0  :  1; //!<[16] DEDT0
      __IO ONE_BIT  DEDT1  :  1; //!<[17] DEDT1
      __IO ONE_BIT  DEDT2  :  1; //!<[18] DEDT2
      __IO ONE_BIT  DEDT3  :  1; //!<[19] DEDT3
      __IO ONE_BIT  DEDT4  :  1; //!<[20] Driver Enable de-assertion time
      __IO ONE_BIT  DEAT0  :  1; //!<[21] DEAT0
      __IO ONE_BIT  DEAT1  :  1; //!<[22] DEAT1
      __IO ONE_BIT  DEAT2  :  1; //!<[23] DEAT2
      __IO ONE_BIT  DEAT3  :  1; //!<[24] DEAT3
      __IO ONE_BIT  DEAT4  :  1; //!<[25] Driver Enable assertion time
      __IO ONE_BIT  RTOIE  :  1; //!<[26] Receiver timeout interrupt enable
      __IO ONE_BIT  EOBIE  :  1; //!<[27] End of Block interrupt enable
      __IO ONE_BIT  M1     :  1; //!<[28] Word length
    } B;
    __IO uint32_t  R;
    explicit CR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CR2_DEF  {  //!< Control register 2
    struct {
           uint32_t   UNUSED0  :  4; //!<[00] 
      __IO ONE_BIT    ADDM7    :  1; //!<[04] 7-bit Address Detection/4-bit Address Detection
      __IO ONE_BIT    LBDL     :  1; //!<[05] LIN break detection length
      __IO ONE_BIT    LBDIE    :  1; //!<[06] LIN break detection interrupt enable
           ONE_BIT    UNUSED1  :  1; //!<[07] 
      __IO ONE_BIT    LBCL     :  1; //!<[08] Last bit clock pulse
      __IO ONE_BIT    CPHA     :  1; //!<[09] Clock phase
      __IO ONE_BIT    CPOL     :  1; //!<[10] Clock polarity
      __IO ONE_BIT    CLKEN    :  1; //!<[11] Clock enable
      __IO uint32_t   STOP     :  2; //!<[12] STOP bits
      __IO ONE_BIT    LINEN    :  1; //!<[14] LIN mode enable
      __IO ONE_BIT    SWAP     :  1; //!<[15] Swap TX/RX pins
      __IO ONE_BIT    RXINV    :  1; //!<[16] RX pin active level inversion
      __IO ONE_BIT    TXINV    :  1; //!<[17] TX pin active level inversion
      __IO ONE_BIT    TAINV    :  1; //!<[18] Binary data inversion
      __IO ONE_BIT    MSBFIRST :  1; //!<[19] Most significant bit first
      __IO ONE_BIT    ABREN    :  1; //!<[20] Auto baud rate enable
      __IO ONE_BIT    ABRMOD0  :  1; //!<[21] ABRMOD0
      __IO ONE_BIT    ABRMOD1  :  1; //!<[22] Auto baud rate mode
      __IO ONE_BIT    RTOEN    :  1; //!<[23] Receiver timeout enable
      __IO uint32_t   ADD0_3   :  4; //!<[24] Address of the USART node
      __IO uint32_t   ADD4_7   :  4; //!<[28] Address of the USART node
    } B;
    __IO uint32_t  R;
    explicit CR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CR3_DEF  {  //!< Control register 3
    struct {
      __IO ONE_BIT    EIE     :  1; //!<[00] Error interrupt enable
      __IO ONE_BIT    IREN    :  1; //!<[01] Ir mode enable
      __IO ONE_BIT    IRLP    :  1; //!<[02] Ir low-power
      __IO ONE_BIT    HDSEL   :  1; //!<[03] Half-duplex selection
      __IO ONE_BIT    NACK    :  1; //!<[04] Smartcard NACK enable
      __IO ONE_BIT    SCEN    :  1; //!<[05] Smartcard mode enable
      __IO ONE_BIT    DMAR    :  1; //!<[06] DMA enable receiver
      __IO ONE_BIT    DMAT    :  1; //!<[07] DMA enable transmitter
      __IO ONE_BIT    RTSE    :  1; //!<[08] RTS enable
      __IO ONE_BIT    CTSE    :  1; //!<[09] CTS enable
      __IO ONE_BIT    CTSIE   :  1; //!<[10] CTS interrupt enable
      __IO ONE_BIT    ONEBIT  :  1; //!<[11] One sample bit method enable
      __IO ONE_BIT    OVRDIS  :  1; //!<[12] Overrun Disable
      __IO ONE_BIT    DDRE    :  1; //!<[13] DMA Disable on Reception Error
      __IO ONE_BIT    DEM     :  1; //!<[14] Driver enable mode
      __IO ONE_BIT    DEP     :  1; //!<[15] Driver enable polarity selection
           ONE_BIT    UNUSED0 :  1; //!<[16] 
      __IO uint32_t   SCARCNT :  3; //!<[17] Smartcard auto-retry count
      __IO uint32_t   WUS     :  2; //!<[20] Wakeup from Stop mode interrupt flag selection
      __IO ONE_BIT    WUFIE   :  1; //!<[22] Wakeup from Stop mode interrupt enable
    } B;
    __IO uint32_t  R;
    explicit CR3_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CR3_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CR3_DEF r; r.R = R;
      R = f (r);
    }
  };
  union BRR_DEF  {  //!< Baud rate register
    struct {
      __IO uint32_t   DIV_Fraction :  4; //!<[00] DIV_Fraction
      __IO uint32_t   DIV_Mantissa : 12; //!<[04] DIV_Mantissa
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
  union GTPR_DEF {  //!< Guard time and prescaler register
    struct {
      __IO uint32_t   PSC :  8; //!<[00] Prescaler value
      __IO uint32_t   GT  :  8; //!<[08] Guard time value
    } B;
    __IO uint32_t  R;
    explicit GTPR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      GTPR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      GTPR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union RTOR_DEF {  //!< Receiver timeout register
    struct {
      __IO uint32_t   RTO  : 24; //!<[00] Receiver timeout value
      __IO uint32_t   BLEN :  8; //!<[24] Block Length
    } B;
    __IO uint32_t  R;
    explicit RTOR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      RTOR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      RTOR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union RQR_DEF  {  //!< Request register
    struct {
      __O  ONE_BIT  ABRRQ :  1; //!<[00] Auto baud rate request
      __O  ONE_BIT  SBKRQ :  1; //!<[01] Send break request
      __O  ONE_BIT  MMRQ  :  1; //!<[02] Mute mode request
      __O  ONE_BIT  RXFRQ :  1; //!<[03] Receive data flush request
      __O  ONE_BIT  TXFRQ :  1; //!<[04] Transmit data flush request
    } B;
    __O  uint32_t  R;
    explicit RQR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      RQR_DEF r;
      R = f (r);
    }
  };
  union ISR_DEF  {  //!< Interrupt & status register
    struct {
      __I  ONE_BIT  PE      :  1; //!<[00] PE
      __I  ONE_BIT  FE      :  1; //!<[01] FE
      __I  ONE_BIT  NF      :  1; //!<[02] NF
      __I  ONE_BIT  ORE     :  1; //!<[03] ORE
      __I  ONE_BIT  IDLE    :  1; //!<[04] IDLE
      __I  ONE_BIT  RXNE    :  1; //!<[05] RXNE
      __I  ONE_BIT  TC      :  1; //!<[06] TC
      __I  ONE_BIT  TXE     :  1; //!<[07] TXE
      __I  ONE_BIT  LBDF    :  1; //!<[08] LBDF
      __I  ONE_BIT  CTSIF   :  1; //!<[09] CTSIF
      __I  ONE_BIT  CTS     :  1; //!<[10] CTS
      __I  ONE_BIT  RTOF    :  1; //!<[11] RTOF
      __I  ONE_BIT  EOBF    :  1; //!<[12] EOBF
           ONE_BIT  UNUSED0 :  1; //!<[13] 
      __I  ONE_BIT  ABRE    :  1; //!<[14] ABRE
      __I  ONE_BIT  ABRF    :  1; //!<[15] ABRF
      __I  ONE_BIT  BUSY    :  1; //!<[16] BUSY
      __I  ONE_BIT  CMF     :  1; //!<[17] CMF
      __I  ONE_BIT  SBKF    :  1; //!<[18] SBKF
      __I  ONE_BIT  RWU     :  1; //!<[19] RWU
      __I  ONE_BIT  WUF     :  1; //!<[20] WUF
      __I  ONE_BIT  TEACK   :  1; //!<[21] TEACK
      __I  ONE_BIT  REACK   :  1; //!<[22] REACK
    } B;
    __I  uint32_t  R;

    explicit ISR_DEF (volatile ISR_DEF & o) noexcept { R = o.R; };
  };
  union ICR_DEF  {  //!< Interrupt flag clear register
    struct {
      __O  ONE_BIT    PECF    :  1; //!<[00] Parity error clear flag
      __O  ONE_BIT    FECF    :  1; //!<[01] Framing error clear flag
      __O  ONE_BIT    NCF     :  1; //!<[02] Noise detected clear flag
      __O  ONE_BIT    ORECF   :  1; //!<[03] Overrun error clear flag
      __O  ONE_BIT    IDLECF  :  1; //!<[04] Idle line detected clear flag
           ONE_BIT    UNUSED0 :  1; //!<[05] 
      __O  ONE_BIT    TCCF    :  1; //!<[06] Transmission complete clear flag
           ONE_BIT    UNUSED1 :  1; //!<[07] 
      __O  ONE_BIT    LBDCF   :  1; //!<[08] LIN break detection clear flag
      __O  ONE_BIT    CTSCF   :  1; //!<[09] CTS clear flag
           ONE_BIT    UNUSED2 :  1; //!<[10] 
      __O  ONE_BIT    RTOCF   :  1; //!<[11] Receiver timeout clear flag
      __O  ONE_BIT    EOBCF   :  1; //!<[12] End of block clear flag
           uint32_t   UNUSED3 :  4; //!<[13] 
      __O  ONE_BIT    CMCF    :  1; //!<[17] Character match clear flag
           uint32_t   UNUSED4 :  2; //!<[18] 
      __O  ONE_BIT    WUCF    :  1; //!<[20] Wakeup from Stop mode clear flag
    } B;
    __O  uint32_t  R;
    explicit ICR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ICR_DEF r;
      R = f (r);
    }
  };
  union RDR_DEF  {  //!< Receive data register
    struct {
      __I  uint32_t   RDR :  9; //!<[00] Receive data value
    } B;
    __I  uint32_t  R;

    explicit RDR_DEF (volatile RDR_DEF & o) noexcept { R = o.R; };
  };
  union TDR_DEF  {  //!< Transmit data register
    struct {
      __IO uint32_t   TDR :  9; //!<[00] Transmit data value
    } B;
    __IO uint32_t  R;
    explicit TDR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      TDR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      TDR_DEF r; r.R = R;
      R = f (r);
    }
  };
  // PERIPHERAL USART1 REGISTERS INSTANCES
  __IO CR1_DEF              CR1 ;  //!< [0000](04)[0x00000000]
  __IO CR2_DEF              CR2 ;  //!< [0004](04)[0x00000000]
  __IO CR3_DEF              CR3 ;  //!< [0008](04)[0x00000000]
  __IO BRR_DEF              BRR ;  //!< [000c](04)[0x00000000]
  __IO GTPR_DEF            GTPR ;  //!< [0010](04)[0x00000000]
  __IO RTOR_DEF            RTOR ;  //!< [0014](04)[0x00000000]
  __O  RQR_DEF              RQR ;  //!< [0018](04)[0x00000000]
  __I  ISR_DEF              ISR ;  //!< [001c](04)[0x000000C0]
  __O  ICR_DEF              ICR ;  //!< [0020](04)[0x00000000]
  __I  RDR_DEF              RDR ;  //!< [0024](04)[0x00000000]
  __IO TDR_DEF              TDR ;  //!< [0028](04)[0x00000000]
}; /* total size = 0x0400, struct size = 0x002C */

// ////////////////////+++ USART3 +-+//////////////////// //
struct USART3_Type        { /*!< Universal synchronous asynchronous receiver transmitter */
  union CR1_DEF  {  //!< Control register 1
    struct {
      __IO ONE_BIT  UE     :  1; //!<[00] USART enable
      __IO ONE_BIT  UESM   :  1; //!<[01] USART enable in Stop mode
      __IO ONE_BIT  RE     :  1; //!<[02] Receiver enable
      __IO ONE_BIT  TE     :  1; //!<[03] Transmitter enable
      __IO ONE_BIT  IDLEIE :  1; //!<[04] IDLE interrupt enable
      __IO ONE_BIT  RXNEIE :  1; //!<[05] RXNE interrupt enable
      __IO ONE_BIT  TCIE   :  1; //!<[06] Transmission complete interrupt enable
      __IO ONE_BIT  TXEIE  :  1; //!<[07] interrupt enable
      __IO ONE_BIT  PEIE   :  1; //!<[08] PE interrupt enable
      __IO ONE_BIT  PS     :  1; //!<[09] Parity selection
      __IO ONE_BIT  PCE    :  1; //!<[10] Parity control enable
      __IO ONE_BIT  WAKE   :  1; //!<[11] Receiver wakeup method
      __IO ONE_BIT  M0     :  1; //!<[12] Word length
      __IO ONE_BIT  MME    :  1; //!<[13] Mute mode enable
      __IO ONE_BIT  CMIE   :  1; //!<[14] Character match interrupt enable
      __IO ONE_BIT  OVER8  :  1; //!<[15] Oversampling mode
      __IO ONE_BIT  DEDT0  :  1; //!<[16] DEDT0
      __IO ONE_BIT  DEDT1  :  1; //!<[17] DEDT1
      __IO ONE_BIT  DEDT2  :  1; //!<[18] DEDT2
      __IO ONE_BIT  DEDT3  :  1; //!<[19] DEDT3
      __IO ONE_BIT  DEDT4  :  1; //!<[20] Driver Enable de-assertion time
      __IO ONE_BIT  DEAT0  :  1; //!<[21] DEAT0
      __IO ONE_BIT  DEAT1  :  1; //!<[22] DEAT1
      __IO ONE_BIT  DEAT2  :  1; //!<[23] DEAT2
      __IO ONE_BIT  DEAT3  :  1; //!<[24] DEAT3
      __IO ONE_BIT  DEAT4  :  1; //!<[25] Driver Enable assertion time
      __IO ONE_BIT  RTOIE  :  1; //!<[26] Receiver timeout interrupt enable
      __IO ONE_BIT  EOBIE  :  1; //!<[27] End of Block interrupt enable
      __IO ONE_BIT  M1     :  1; //!<[28] Word length
    } B;
    __IO uint32_t  R;
    explicit CR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CR2_DEF  {  //!< Control register 2
    struct {
           uint32_t   UNUSED0  :  4; //!<[00] 
      __IO ONE_BIT    ADDM7    :  1; //!<[04] 7-bit Address Detection/4-bit Address Detection
      __IO ONE_BIT    LBDL     :  1; //!<[05] LIN break detection length
      __IO ONE_BIT    LBDIE    :  1; //!<[06] LIN break detection interrupt enable
           ONE_BIT    UNUSED1  :  1; //!<[07] 
      __IO ONE_BIT    LBCL     :  1; //!<[08] Last bit clock pulse
      __IO ONE_BIT    CPHA     :  1; //!<[09] Clock phase
      __IO ONE_BIT    CPOL     :  1; //!<[10] Clock polarity
      __IO ONE_BIT    CLKEN    :  1; //!<[11] Clock enable
      __IO uint32_t   STOP     :  2; //!<[12] STOP bits
      __IO ONE_BIT    LINEN    :  1; //!<[14] LIN mode enable
      __IO ONE_BIT    SWAP     :  1; //!<[15] Swap TX/RX pins
      __IO ONE_BIT    RXINV    :  1; //!<[16] RX pin active level inversion
      __IO ONE_BIT    TXINV    :  1; //!<[17] TX pin active level inversion
      __IO ONE_BIT    TAINV    :  1; //!<[18] Binary data inversion
      __IO ONE_BIT    MSBFIRST :  1; //!<[19] Most significant bit first
      __IO ONE_BIT    ABREN    :  1; //!<[20] Auto baud rate enable
      __IO ONE_BIT    ABRMOD0  :  1; //!<[21] ABRMOD0
      __IO ONE_BIT    ABRMOD1  :  1; //!<[22] Auto baud rate mode
      __IO ONE_BIT    RTOEN    :  1; //!<[23] Receiver timeout enable
      __IO uint32_t   ADD0_3   :  4; //!<[24] Address of the USART node
      __IO uint32_t   ADD4_7   :  4; //!<[28] Address of the USART node
    } B;
    __IO uint32_t  R;
    explicit CR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CR3_DEF  {  //!< Control register 3
    struct {
      __IO ONE_BIT    EIE     :  1; //!<[00] Error interrupt enable
      __IO ONE_BIT    IREN    :  1; //!<[01] Ir mode enable
      __IO ONE_BIT    IRLP    :  1; //!<[02] Ir low-power
      __IO ONE_BIT    HDSEL   :  1; //!<[03] Half-duplex selection
      __IO ONE_BIT    NACK    :  1; //!<[04] Smartcard NACK enable
      __IO ONE_BIT    SCEN    :  1; //!<[05] Smartcard mode enable
      __IO ONE_BIT    DMAR    :  1; //!<[06] DMA enable receiver
      __IO ONE_BIT    DMAT    :  1; //!<[07] DMA enable transmitter
      __IO ONE_BIT    RTSE    :  1; //!<[08] RTS enable
      __IO ONE_BIT    CTSE    :  1; //!<[09] CTS enable
      __IO ONE_BIT    CTSIE   :  1; //!<[10] CTS interrupt enable
      __IO ONE_BIT    ONEBIT  :  1; //!<[11] One sample bit method enable
      __IO ONE_BIT    OVRDIS  :  1; //!<[12] Overrun Disable
      __IO ONE_BIT    DDRE    :  1; //!<[13] DMA Disable on Reception Error
      __IO ONE_BIT    DEM     :  1; //!<[14] Driver enable mode
      __IO ONE_BIT    DEP     :  1; //!<[15] Driver enable polarity selection
           ONE_BIT    UNUSED0 :  1; //!<[16] 
      __IO uint32_t   SCARCNT :  3; //!<[17] Smartcard auto-retry count
      __IO uint32_t   WUS     :  2; //!<[20] Wakeup from Stop mode interrupt flag selection
      __IO ONE_BIT    WUFIE   :  1; //!<[22] Wakeup from Stop mode interrupt enable
      __IO ONE_BIT    UCESM   :  1; //!<[23] USART Clock Enable in Stop mode
      __IO ONE_BIT    TCBGTIE :  1; //!<[24] Transmission complete before guard time interrupt enable
    } B;
    __IO uint32_t  R;
    explicit CR3_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CR3_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CR3_DEF r; r.R = R;
      R = f (r);
    }
  };
  union BRR_DEF  {  //!< Baud rate register
    struct {
      __IO uint32_t   BRR : 12; //!<[00] USARTDIV
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
  union GTPR_DEF {  //!< Guard time and prescaler register
    struct {
      __IO uint32_t   PSC :  8; //!<[00] Prescaler value
      __IO uint32_t   GT  :  8; //!<[08] Guard time value
    } B;
    __IO uint32_t  R;
    explicit GTPR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      GTPR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      GTPR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union RTOR_DEF {  //!< Receiver timeout register
    struct {
      __IO uint32_t   RTO  : 24; //!<[00] Receiver timeout value
      __IO uint32_t   BLEN :  8; //!<[24] Block Length
    } B;
    __IO uint32_t  R;
    explicit RTOR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      RTOR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      RTOR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union RQR_DEF  {  //!< Request register
    struct {
      __O  ONE_BIT  ABRRQ :  1; //!<[00] Auto baud rate request
      __O  ONE_BIT  SBKRQ :  1; //!<[01] Send break request
      __O  ONE_BIT  MMRQ  :  1; //!<[02] Mute mode request
      __O  ONE_BIT  RXFRQ :  1; //!<[03] Receive data flush request
      __O  ONE_BIT  TXFRQ :  1; //!<[04] Transmit data flush request
    } B;
    __O  uint32_t  R;
    explicit RQR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      RQR_DEF r;
      R = f (r);
    }
  };
  union ISR_DEF  {  //!< Interrupt & status register
    struct {
      __I  ONE_BIT    PE      :  1; //!<[00] PE
      __I  ONE_BIT    FE      :  1; //!<[01] FE
      __I  ONE_BIT    NF      :  1; //!<[02] NF
      __I  ONE_BIT    ORE     :  1; //!<[03] ORE
      __I  ONE_BIT    IDLE    :  1; //!<[04] IDLE
      __I  ONE_BIT    RXNE    :  1; //!<[05] RXNE
      __I  ONE_BIT    TC      :  1; //!<[06] TC
      __I  ONE_BIT    TXE     :  1; //!<[07] TXE
      __I  ONE_BIT    LBDF    :  1; //!<[08] LBDF
      __I  ONE_BIT    CTSIF   :  1; //!<[09] CTSIF
      __I  ONE_BIT    CTS     :  1; //!<[10] CTS
      __I  ONE_BIT    RTOF    :  1; //!<[11] RTOF
      __I  ONE_BIT    EOBF    :  1; //!<[12] EOBF
           ONE_BIT    UNUSED0 :  1; //!<[13] 
      __I  ONE_BIT    ABRE    :  1; //!<[14] ABRE
      __I  ONE_BIT    ABRF    :  1; //!<[15] ABRF
      __I  ONE_BIT    BUSY    :  1; //!<[16] BUSY
      __I  ONE_BIT    CMF     :  1; //!<[17] CMF
      __I  ONE_BIT    SBKF    :  1; //!<[18] SBKF
      __I  ONE_BIT    RWU     :  1; //!<[19] RWU
      __I  ONE_BIT    WUF     :  1; //!<[20] WUF
      __I  ONE_BIT    TEACK   :  1; //!<[21] TEACK
      __I  ONE_BIT    REACK   :  1; //!<[22] REACK
           uint32_t   UNUSED1 :  2; //!<[23] 
      __I  ONE_BIT    TCBGT   :  1; //!<[25] Transmission complete before guard time completion
    } B;
    __I  uint32_t  R;

    explicit ISR_DEF (volatile ISR_DEF & o) noexcept { R = o.R; };
  };
  union ICR_DEF  {  //!< Interrupt flag clear register
    struct {
      __O  ONE_BIT    PECF    :  1; //!<[00] Parity error clear flag
      __O  ONE_BIT    FECF    :  1; //!<[01] Framing error clear flag
      __O  ONE_BIT    NCF     :  1; //!<[02] Noise detected clear flag
      __O  ONE_BIT    ORECF   :  1; //!<[03] Overrun error clear flag
      __O  ONE_BIT    IDLECF  :  1; //!<[04] Idle line detected clear flag
           ONE_BIT    UNUSED0 :  1; //!<[05] 
      __O  ONE_BIT    TCCF    :  1; //!<[06] Transmission complete clear flag
           ONE_BIT    UNUSED1 :  1; //!<[07] 
      __O  ONE_BIT    LBDCF   :  1; //!<[08] LIN break detection clear flag
      __O  ONE_BIT    CTSCF   :  1; //!<[09] CTS clear flag
           ONE_BIT    UNUSED2 :  1; //!<[10] 
      __O  ONE_BIT    RTOCF   :  1; //!<[11] Receiver timeout clear flag
      __O  ONE_BIT    EOBCF   :  1; //!<[12] End of block clear flag
           uint32_t   UNUSED3 :  4; //!<[13] 
      __O  ONE_BIT    CMCF    :  1; //!<[17] Character match clear flag
           uint32_t   UNUSED4 :  2; //!<[18] 
      __O  ONE_BIT    WUCF    :  1; //!<[20] Wakeup from Stop mode clear flag
    } B;
    __O  uint32_t  R;
    explicit ICR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ICR_DEF r;
      R = f (r);
    }
  };
  union RDR_DEF  {  //!< Receive data register
    struct {
      __I  uint32_t   RDR :  9; //!<[00] Receive data value
    } B;
    __I  uint32_t  R;

    explicit RDR_DEF (volatile RDR_DEF & o) noexcept { R = o.R; };
  };
  union TDR_DEF  {  //!< Transmit data register
    struct {
      __IO uint32_t   TDR :  9; //!<[00] Transmit data value
    } B;
    __IO uint32_t  R;
    explicit TDR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      TDR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      TDR_DEF r; r.R = R;
      R = f (r);
    }
  };
  // PERIPHERAL USART3 REGISTERS INSTANCES
  __IO CR1_DEF              CR1 ;  //!< [0000](04)[0x00000000]
  __IO CR2_DEF              CR2 ;  //!< [0004](04)[0x00000000]
  __IO CR3_DEF              CR3 ;  //!< [0008](04)[0x00000000]
  __IO BRR_DEF              BRR ;  //!< [000c](04)[0x00000000]
  __IO GTPR_DEF            GTPR ;  //!< [0010](04)[0x00000000]
  __IO RTOR_DEF            RTOR ;  //!< [0014](04)[0x00000000]
  __O  RQR_DEF              RQR ;  //!< [0018](04)[0x00000000]
  __I  ISR_DEF              ISR ;  //!< [001c](04)[0x000000C0]
  __O  ICR_DEF              ICR ;  //!< [0020](04)[0x00000000]
  __I  RDR_DEF              RDR ;  //!< [0024](04)[0x00000000]
  __IO TDR_DEF              TDR ;  //!< [0028](04)[0x00000000]
}; /* total size = 0x0400, struct size = 0x002C */

// ////////////////////+++ LPUART1 +-+//////////////////// //
struct LPUART1_Type       { /*!< Universal synchronous asynchronous receiver transmitter */
  union CR1_DEF     {  //!< Control register 1
    struct {
      __IO ONE_BIT    UE      :  1; //!<[00] USART enable
      __IO ONE_BIT    UESM    :  1; //!<[01] USART enable in Stop mode
      __IO ONE_BIT    RE      :  1; //!<[02] Receiver enable
      __IO ONE_BIT    TE      :  1; //!<[03] Transmitter enable
      __IO ONE_BIT    IDLEIE  :  1; //!<[04] IDLE interrupt enable
      __IO ONE_BIT    RXNEIE  :  1; //!<[05] RXNE interrupt enable
      __IO ONE_BIT    TCIE    :  1; //!<[06] Transmission complete interrupt enable
      __IO ONE_BIT    TXEIE   :  1; //!<[07] interrupt enable
      __IO ONE_BIT    PEIE    :  1; //!<[08] PE interrupt enable
      __IO ONE_BIT    PS      :  1; //!<[09] Parity selection
      __IO ONE_BIT    PCE     :  1; //!<[10] Parity control enable
      __IO ONE_BIT    WAKE    :  1; //!<[11] Receiver wakeup method
      __IO ONE_BIT    M0      :  1; //!<[12] Word length
      __IO ONE_BIT    MME     :  1; //!<[13] Mute mode enable
      __IO ONE_BIT    CMIE    :  1; //!<[14] Character match interrupt enable
           ONE_BIT    UNUSED0 :  1; //!<[15] 
      __IO ONE_BIT    DEDT0   :  1; //!<[16] DEDT0
      __IO ONE_BIT    DEDT1   :  1; //!<[17] DEDT1
      __IO ONE_BIT    DEDT2   :  1; //!<[18] DEDT2
      __IO ONE_BIT    DEDT3   :  1; //!<[19] DEDT3
      __IO ONE_BIT    DEDT4   :  1; //!<[20] Driver Enable de-assertion time
      __IO ONE_BIT    DEAT0   :  1; //!<[21] DEAT0
      __IO ONE_BIT    DEAT1   :  1; //!<[22] DEAT1
      __IO ONE_BIT    DEAT2   :  1; //!<[23] DEAT2
      __IO ONE_BIT    DEAT3   :  1; //!<[24] DEAT3
      __IO ONE_BIT    DEAT4   :  1; //!<[25] Driver Enable assertion time
           uint32_t   UNUSED1 :  2; //!<[26] 
      __IO ONE_BIT    M1      :  1; //!<[28] Word length
    } B;
    __IO uint32_t  R;
    explicit CR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CR2_DEF     {  //!< Control register 2
    struct {
           uint32_t   UNUSED0  :  4; //!<[00] 
      __IO ONE_BIT    ADDM7    :  1; //!<[04] 7-bit Address Detection/4-bit Address Detection
           uint32_t   UNUSED1  :  6; //!<[05] 
      __IO ONE_BIT    CLKEN    :  1; //!<[11] Clock enable
      __IO uint32_t   STOP     :  2; //!<[12] STOP bits
           ONE_BIT    UNUSED2  :  1; //!<[14] 
      __IO ONE_BIT    SWAP     :  1; //!<[15] Swap TX/RX pins
      __IO ONE_BIT    RXINV    :  1; //!<[16] RX pin active level inversion
      __IO ONE_BIT    TXINV    :  1; //!<[17] TX pin active level inversion
      __IO ONE_BIT    TAINV    :  1; //!<[18] Binary data inversion
      __IO ONE_BIT    MSBFIRST :  1; //!<[19] Most significant bit first
           uint32_t   UNUSED3  :  4; //!<[20] 
      __IO uint32_t   ADD0_3   :  4; //!<[24] Address of the USART node
      __IO uint32_t   ADD4_7   :  4; //!<[28] Address of the USART node
    } B;
    __IO uint32_t  R;
    explicit CR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CR3_DEF     {  //!< Control register 3
    struct {
      __IO ONE_BIT    EIE     :  1; //!<[00] Error interrupt enable
           uint32_t   UNUSED0 :  2; //!<[01] 
      __IO ONE_BIT    HDSEL   :  1; //!<[03] Half-duplex selection
           uint32_t   UNUSED1 :  2; //!<[04] 
      __IO ONE_BIT    DMAR    :  1; //!<[06] DMA enable receiver
      __IO ONE_BIT    DMAT    :  1; //!<[07] DMA enable transmitter
      __IO ONE_BIT    RTSE    :  1; //!<[08] RTS enable
      __IO ONE_BIT    CTSE    :  1; //!<[09] CTS enable
      __IO ONE_BIT    CTSIE   :  1; //!<[10] CTS interrupt enable
           ONE_BIT    UNUSED2 :  1; //!<[11] 
      __IO ONE_BIT    OVRDIS  :  1; //!<[12] Overrun Disable
      __IO ONE_BIT    DDRE    :  1; //!<[13] DMA Disable on Reception Error
      __IO ONE_BIT    DEM     :  1; //!<[14] Driver enable mode
      __IO ONE_BIT    DEP     :  1; //!<[15] Driver enable polarity selection
           uint32_t   UNUSED3 :  4; //!<[16] 
      __IO uint32_t   WUS     :  2; //!<[20] Wakeup from Stop mode interrupt flag selection
      __IO ONE_BIT    WUFIE   :  1; //!<[22] Wakeup from Stop mode interrupt enable
    } B;
    __IO uint32_t  R;
    explicit CR3_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CR3_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CR3_DEF r; r.R = R;
      R = f (r);
    }
  };
  union BRR_DEF     {  //!< Baud rate register
    struct {
      __IO uint32_t   BRR : 20; //!<[00] BRR
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
  union RQR_DEF     {  //!< Request register
    struct {
           ONE_BIT  UNUSED0 :  1; //!<[00] 
      __O  ONE_BIT  SBKRQ   :  1; //!<[01] Send break request
      __O  ONE_BIT  MMRQ    :  1; //!<[02] Mute mode request
      __O  ONE_BIT  RXFRQ   :  1; //!<[03] Receive data flush request
    } B;
    __O  uint32_t  R;
    explicit RQR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      RQR_DEF r;
      R = f (r);
    }
  };
  union ISR_DEF     {  //!< Interrupt & status register
    struct {
      __I  ONE_BIT    PE      :  1; //!<[00] PE
      __I  ONE_BIT    FE      :  1; //!<[01] FE
      __I  ONE_BIT    NF      :  1; //!<[02] NF
      __I  ONE_BIT    ORE     :  1; //!<[03] ORE
      __I  ONE_BIT    IDLE    :  1; //!<[04] IDLE
      __I  ONE_BIT    RXNE    :  1; //!<[05] RXNE
      __I  ONE_BIT    TC      :  1; //!<[06] TC
      __I  ONE_BIT    TXE     :  1; //!<[07] TXE
           ONE_BIT    UNUSED0 :  1; //!<[08] 
      __I  ONE_BIT    CTSIF   :  1; //!<[09] CTSIF
      __I  ONE_BIT    CTS     :  1; //!<[10] CTS
           uint32_t   UNUSED1 :  5; //!<[11] 
      __I  ONE_BIT    BUSY    :  1; //!<[16] BUSY
      __I  ONE_BIT    CMF     :  1; //!<[17] CMF
      __I  ONE_BIT    SBKF    :  1; //!<[18] SBKF
      __I  ONE_BIT    RWU     :  1; //!<[19] RWU
      __I  ONE_BIT    WUF     :  1; //!<[20] WUF
      __I  ONE_BIT    TEACK   :  1; //!<[21] TEACK
      __I  ONE_BIT    REACK   :  1; //!<[22] REACK
    } B;
    __I  uint32_t  R;

    explicit ISR_DEF (volatile ISR_DEF & o) noexcept { R = o.R; };
  };
  union ICR_DEF     {  //!< Interrupt flag clear register
    struct {
      __O  ONE_BIT    PECF    :  1; //!<[00] Parity error clear flag
      __O  ONE_BIT    FECF    :  1; //!<[01] Framing error clear flag
      __O  ONE_BIT    NCF     :  1; //!<[02] Noise detected clear flag
      __O  ONE_BIT    ORECF   :  1; //!<[03] Overrun error clear flag
      __O  ONE_BIT    IDLECF  :  1; //!<[04] Idle line detected clear flag
           ONE_BIT    UNUSED0 :  1; //!<[05] 
      __O  ONE_BIT    TCCF    :  1; //!<[06] Transmission complete clear flag
           uint32_t   UNUSED1 :  2; //!<[07] 
      __O  ONE_BIT    CTSCF   :  1; //!<[09] CTS clear flag
           uint32_t   UNUSED2 :  7; //!<[10] 
      __O  ONE_BIT    CMCF    :  1; //!<[17] Character match clear flag
           uint32_t   UNUSED3 :  2; //!<[18] 
      __O  ONE_BIT    WUCF    :  1; //!<[20] Wakeup from Stop mode clear flag
    } B;
    __O  uint32_t  R;
    explicit ICR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ICR_DEF r;
      R = f (r);
    }
  };
  union RDR_DEF     {  //!< Receive data register
    struct {
      __I  uint32_t   RDR :  9; //!<[00] Receive data value
    } B;
    __I  uint32_t  R;

    explicit RDR_DEF (volatile RDR_DEF & o) noexcept { R = o.R; };
  };
  union TDR_DEF     {  //!< Transmit data register
    struct {
      __IO uint32_t   TDR :  9; //!<[00] Transmit data value
    } B;
    __IO uint32_t  R;
    explicit TDR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      TDR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      TDR_DEF r; r.R = R;
      R = f (r);
    }
  };
  // PERIPHERAL LPUART1 REGISTERS INSTANCES
  __IO CR1_DEF                 CR1 ;  //!< [0000](04)[0x00000000]
  __IO CR2_DEF                 CR2 ;  //!< [0004](04)[0x00000000]
  __IO CR3_DEF                 CR3 ;  //!< [0008](04)[0x00000000]
  __IO BRR_DEF                 BRR ;  //!< [000c](04)[0x00000000]
       uint32_t          UNUSED0 [2];  //!< [0010](08)[0xFFFFFFFF]
  __O  RQR_DEF                 RQR ;  //!< [0018](04)[0x00000000]
  __I  ISR_DEF                 ISR ;  //!< [001c](04)[0x000000C0]
  __O  ICR_DEF                 ICR ;  //!< [0020](04)[0x00000000]
  __I  RDR_DEF                 RDR ;  //!< [0024](04)[0x00000000]
  __IO TDR_DEF                 TDR ;  //!< [0028](04)[0x00000000]
}; /* total size = 0x0400, struct size = 0x002C */

// ////////////////////+++ SPI1 +-+//////////////////// //
struct SPI1_Type          { /*!< Serial peripheral interface/Inter-IC sound */
  union CR1_DEF    {  //!< control register 1
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
    explicit CR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CR2_DEF    {  //!< control register 2
    struct {
      __IO ONE_BIT    RXDMAEN :  1; //!<[00] Rx buffer DMA enable
      __IO ONE_BIT    TXDMAEN :  1; //!<[01] Tx buffer DMA enable
      __IO ONE_BIT    SSOE    :  1; //!<[02] SS output enable
      __IO ONE_BIT    NSSP    :  1; //!<[03] NSS pulse management
      __IO ONE_BIT    FRF     :  1; //!<[04] Frame format
      __IO ONE_BIT    ERRIE   :  1; //!<[05] Error interrupt enable
      __IO ONE_BIT    RXNEIE  :  1; //!<[06] RX buffer not empty interrupt enable
      __IO ONE_BIT    TXEIE   :  1; //!<[07] Tx buffer empty interrupt enable
      __IO uint32_t   DS      :  4; //!<[08] Data size
      __IO ONE_BIT    FRXTH   :  1; //!<[12] FIFO reception threshold
      __IO ONE_BIT    LDMA_RX :  1; //!<[13] Last DMA transfer for reception
      __IO ONE_BIT    LDMA_TX :  1; //!<[14] Last DMA transfer for transmission
    } B;
    __IO uint32_t  R;
    explicit CR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union SR_DEF     {  //!< status register
    struct {
      __I  ONE_BIT    RXNE    :  1; //!<[00] Receive buffer not empty
      __I  ONE_BIT    TXE     :  1; //!<[01] Transmit buffer empty
           uint32_t   UNUSED0 :  2; //!<[02] 
      __IO ONE_BIT    CRCERR  :  1; //!<[04] CRC error flag
      __I  ONE_BIT    MODF    :  1; //!<[05] Mode fault
      __I  ONE_BIT    OVR     :  1; //!<[06] Overrun flag
      __I  ONE_BIT    BSY     :  1; //!<[07] Busy flag
      __I  ONE_BIT    TIFRFE  :  1; //!<[08] TI frame format error
      __I  uint32_t   FRLVL   :  2; //!<[09] FIFO reception level
      __I  uint32_t   FTLVL   :  2; //!<[11] FIFO transmission level
    } B;
    __IO uint32_t  R;
    explicit SR_DEF () noexcept { R = 0x00000002u; }
    template<typename F> void setbit (F f) volatile {
      SR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      SR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DR_DEF     {  //!< data register
    struct {
      __IO uint32_t   DR : 16; //!<[00] Data register
    } B;
    __IO uint32_t  R;
    explicit DR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CRCPR_DEF  {  //!< CRC polynomial register
    struct {
      __IO uint32_t   CRCPOLY : 16; //!<[00] CRC polynomial register
    } B;
    __IO uint32_t  R;
    explicit CRCPR_DEF () noexcept { R = 0x00000007u; }
    template<typename F> void setbit (F f) volatile {
      CRCPR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CRCPR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union RXCRCR_DEF {  //!< RX CRC register
    struct {
      __I  uint32_t   RxCRC : 16; //!<[00] Rx CRC register
    } B;
    __I  uint32_t  R;

    explicit RXCRCR_DEF (volatile RXCRCR_DEF & o) noexcept { R = o.R; };
  };
  union TXCRCR_DEF {  //!< TX CRC register
    struct {
      __I  uint32_t   TxCRC : 16; //!<[00] Tx CRC register
    } B;
    __I  uint32_t  R;

    explicit TXCRCR_DEF (volatile TXCRCR_DEF & o) noexcept { R = o.R; };
  };
  // PERIPHERAL SPI1 REGISTERS INSTANCES
  __IO CR1_DEF                CR1 ;  //!< [0000](04)[0x00000000]
  __IO CR2_DEF                CR2 ;  //!< [0004](04)[0x00000000]
  __IO SR_DEF                  SR ;  //!< [0008](04)[0x00000002]
  __IO DR_DEF                  DR ;  //!< [000c](04)[0x00000000]
  __IO CRCPR_DEF            CRCPR ;  //!< [0010](04)[0x00000007]
  __I  RXCRCR_DEF          RXCRCR ;  //!< [0014](04)[0x00000000]
  __I  TXCRCR_DEF          TXCRCR ;  //!< [0018](04)[0x00000000]
}; /* total size = 0x0400, struct size = 0x001C */

// ////////////////////+++ SDMMC +-+//////////////////// //
struct SDMMC_Type         { /*!< Secure digital input/output interface */
  union POWER_DEF   {  //!< power control register
    struct {
      __IO uint32_t   PWRCTRL :  2; //!<[00] PWRCTRL
    } B;
    __IO uint32_t  R;
    explicit POWER_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      POWER_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      POWER_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CLKCR_DEF   {  //!< SDI clock control register
    struct {
      __IO uint32_t   CLKDIV  :  8; //!<[00] Clock divide factor
      __IO ONE_BIT    CLKEN   :  1; //!<[08] Clock enable bit
      __IO ONE_BIT    PWRSAV  :  1; //!<[09] Power saving configuration bit
      __IO ONE_BIT    BYPASS  :  1; //!<[10] Clock divider bypass enable bit
      __IO uint32_t   WIDBUS  :  2; //!<[11] Wide bus mode enable bit
      __IO ONE_BIT    NEGEDGE :  1; //!<[13] SDIO_CK dephasing selection bit
      __IO ONE_BIT    HWFC_EN :  1; //!<[14] HW Flow Control enable
    } B;
    __IO uint32_t  R;
    explicit CLKCR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CLKCR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CLKCR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ARG_DEF     {  //!< argument register
    struct {
      __IO uint32_t   CMDARG : 32; //!<[00] Command argument
    } B;
    __IO uint32_t  R;
    explicit ARG_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ARG_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ARG_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CMD_DEF     {  //!< command register
    struct {
      __IO uint32_t   CMDINDEX    :  6; //!<[00] Command index
      __IO uint32_t   WAITRESP    :  2; //!<[06] Wait for response bits
      __IO ONE_BIT    WAITINT     :  1; //!<[08] CPSM waits for interrupt request
      __IO ONE_BIT    WAITPEND    :  1; //!<[09] CPSM Waits for ends of data transfer (CmdPend internal signal)
      __IO ONE_BIT    CPSMEN      :  1; //!<[10] Command path state machine (CPSM) Enable bit
      __IO ONE_BIT    SDIOSuspend :  1; //!<[11] SD I/O suspend command
      __IO ONE_BIT    ENCMDcompl  :  1; //!<[12] Enable CMD completion
      __IO ONE_BIT    nIEN        :  1; //!<[13] not Interrupt Enable
      __IO ONE_BIT    CE_ATACMD   :  1; //!<[14] CE-ATA command
    } B;
    __IO uint32_t  R;
    explicit CMD_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CMD_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CMD_DEF r; r.R = R;
      R = f (r);
    }
  };
  union RESPCMD_DEF {  //!< command response register
    struct {
      __I  uint32_t   RESPCMD :  6; //!<[00] Response command index
    } B;
    __I  uint32_t  R;

    explicit RESPCMD_DEF (volatile RESPCMD_DEF & o) noexcept { R = o.R; };
  };
  union RESP1_DEF   {  //!< response 1..4 register
    struct {
      __I  uint32_t   CARDSTATUS1 : 32; //!<[00] see Table 132
    } B;
    __I  uint32_t  R;

    explicit RESP1_DEF (volatile RESP1_DEF & o) noexcept { R = o.R; };
  };
  union RESP2_DEF   {  //!< response 1..4 register
    struct {
      __I  uint32_t   CARDSTATUS2 : 32; //!<[00] see Table 132
    } B;
    __I  uint32_t  R;

    explicit RESP2_DEF (volatile RESP2_DEF & o) noexcept { R = o.R; };
  };
  union RESP3_DEF   {  //!< response 1..4 register
    struct {
      __I  uint32_t   CARDSTATUS3 : 32; //!<[00] see Table 132
    } B;
    __I  uint32_t  R;

    explicit RESP3_DEF (volatile RESP3_DEF & o) noexcept { R = o.R; };
  };
  union RESP4_DEF   {  //!< response 1..4 register
    struct {
      __I  uint32_t   CARDSTATUS4 : 32; //!<[00] see Table 132
    } B;
    __I  uint32_t  R;

    explicit RESP4_DEF (volatile RESP4_DEF & o) noexcept { R = o.R; };
  };
  union DTIMER_DEF  {  //!< data timer register
    struct {
      __IO uint32_t   DATATIME : 32; //!<[00] Data timeout period
    } B;
    __IO uint32_t  R;
    explicit DTIMER_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DTIMER_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DTIMER_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DLEN_DEF    {  //!< data length register
    struct {
      __IO uint32_t   DATALENGTH : 25; //!<[00] Data length value
    } B;
    __IO uint32_t  R;
    explicit DLEN_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DLEN_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DLEN_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DCTRL_DEF   {  //!< data control register
    struct {
      __IO ONE_BIT    DTEN       :  1; //!<[00] DTEN
      __IO ONE_BIT    DTDIR      :  1; //!<[01] Data transfer direction selection
      __IO ONE_BIT    DTMODE     :  1; //!<[02] Data transfer mode selection 1: Stream or SDIO multibyte data transfer
      __IO ONE_BIT    DMAEN      :  1; //!<[03] DMA enable bit
      __IO uint32_t   DBLOCKSIZE :  4; //!<[04] Data block size
      __IO ONE_BIT    RWSTART    :  1; //!<[08] Read wait start
      __IO ONE_BIT    RWSTOP     :  1; //!<[09] Read wait stop
      __IO ONE_BIT    RWMOD      :  1; //!<[10] Read wait mode
      __IO ONE_BIT    SDIOEN     :  1; //!<[11] SD I/O enable functions
    } B;
    __IO uint32_t  R;
    explicit DCTRL_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DCTRL_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DCTRL_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DCOUNT_DEF  {  //!< data counter register
    struct {
      __I  uint32_t   DATACOUNT : 25; //!<[00] Data count value
    } B;
    __I  uint32_t  R;

    explicit DCOUNT_DEF (volatile DCOUNT_DEF & o) noexcept { R = o.R; };
  };
  union STA_DEF     {  //!< status register
    struct {
      __I  ONE_BIT  CCRCFAIL :  1; //!<[00] Command response received (CRC check failed)
      __I  ONE_BIT  DCRCFAIL :  1; //!<[01] Data block sent/received (CRC check failed)
      __I  ONE_BIT  CTIMEOUT :  1; //!<[02] Command response timeout
      __I  ONE_BIT  DTIMEOUT :  1; //!<[03] Data timeout
      __I  ONE_BIT  TXUNDERR :  1; //!<[04] Transmit FIFO underrun error
      __I  ONE_BIT  RXOVERR  :  1; //!<[05] Received FIFO overrun error
      __I  ONE_BIT  CMDREND  :  1; //!<[06] Command response received (CRC check passed)
      __I  ONE_BIT  CMDSENT  :  1; //!<[07] Command sent (no response required)
      __I  ONE_BIT  DATAEND  :  1; //!<[08] Data end (data counter, SDIDCOUNT, is zero)
      __I  ONE_BIT  STBITERR :  1; //!<[09] Start bit not detected on all data signals in wide bus mode
      __I  ONE_BIT  DBCKEND  :  1; //!<[10] Data block sent/received (CRC check passed)
      __I  ONE_BIT  CMDACT   :  1; //!<[11] Command transfer in progress
      __I  ONE_BIT  TXACT    :  1; //!<[12] Data transmit in progress
      __I  ONE_BIT  RXACT    :  1; //!<[13] Data receive in progress
      __I  ONE_BIT  TXFIFOHE :  1; //!<[14] Transmit FIFO half empty: at least 8 words can be written into the FIFO
      __I  ONE_BIT  RXFIFOHF :  1; //!<[15] Receive FIFO half full: there are at least 8 words in the FIFO
      __I  ONE_BIT  TXFIFOF  :  1; //!<[16] Transmit FIFO full
      __I  ONE_BIT  RXFIFOF  :  1; //!<[17] Receive FIFO full
      __I  ONE_BIT  TXFIFOE  :  1; //!<[18] Transmit FIFO empty
      __I  ONE_BIT  RXFIFOE  :  1; //!<[19] Receive FIFO empty
      __I  ONE_BIT  TXDAVL   :  1; //!<[20] Data available in transmit FIFO
      __I  ONE_BIT  RXDAVL   :  1; //!<[21] Data available in receive FIFO
      __I  ONE_BIT  SDIOIT   :  1; //!<[22] SDIO interrupt received
      __I  ONE_BIT  CEATAEND :  1; //!<[23] CE-ATA command completion signal received for CMD61
    } B;
    __I  uint32_t  R;

    explicit STA_DEF (volatile STA_DEF & o) noexcept { R = o.R; };
  };
  union ICR_DEF     {  //!< interrupt clear register
    struct {
      __IO ONE_BIT    CCRCFAILC :  1; //!<[00] CCRCFAIL flag clear bit
      __IO ONE_BIT    DCRCFAILC :  1; //!<[01] DCRCFAIL flag clear bit
      __IO ONE_BIT    CTIMEOUTC :  1; //!<[02] CTIMEOUT flag clear bit
      __IO ONE_BIT    DTIMEOUTC :  1; //!<[03] DTIMEOUT flag clear bit
      __IO ONE_BIT    TXUNDERRC :  1; //!<[04] TXUNDERR flag clear bit
      __IO ONE_BIT    RXOVERRC  :  1; //!<[05] RXOVERR flag clear bit
      __IO ONE_BIT    CMDRENDC  :  1; //!<[06] CMDREND flag clear bit
      __IO ONE_BIT    CMDSENTC  :  1; //!<[07] CMDSENT flag clear bit
      __IO ONE_BIT    DATAENDC  :  1; //!<[08] DATAEND flag clear bit
      __IO ONE_BIT    STBITERRC :  1; //!<[09] STBITERR flag clear bit
      __IO ONE_BIT    DBCKENDC  :  1; //!<[10] DBCKEND flag clear bit
           uint32_t   UNUSED0   : 11; //!<[11] 
      __IO ONE_BIT    SDIOITC   :  1; //!<[22] SDIOIT flag clear bit
      __IO ONE_BIT    CEATAENDC :  1; //!<[23] CEATAEND flag clear bit
    } B;
    __IO uint32_t  R;
    explicit ICR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ICR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ICR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union MASK_DEF    {  //!< mask register
    struct {
      __IO ONE_BIT  CCRCFAILIE :  1; //!<[00] Command CRC fail interrupt enable
      __IO ONE_BIT  DCRCFAILIE :  1; //!<[01] Data CRC fail interrupt enable
      __IO ONE_BIT  CTIMEOUTIE :  1; //!<[02] Command timeout interrupt enable
      __IO ONE_BIT  DTIMEOUTIE :  1; //!<[03] Data timeout interrupt enable
      __IO ONE_BIT  TXUNDERRIE :  1; //!<[04] Tx FIFO underrun error interrupt enable
      __IO ONE_BIT  RXOVERRIE  :  1; //!<[05] Rx FIFO overrun error interrupt enable
      __IO ONE_BIT  CMDRENDIE  :  1; //!<[06] Command response received interrupt enable
      __IO ONE_BIT  CMDSENTIE  :  1; //!<[07] Command sent interrupt enable
      __IO ONE_BIT  DATAENDIE  :  1; //!<[08] Data end interrupt enable
      __IO ONE_BIT  STBITERRIE :  1; //!<[09] Start bit error interrupt enable
      __IO ONE_BIT  DBCKENDIE  :  1; //!<[10] Data block end interrupt enable
      __IO ONE_BIT  CMDACTIE   :  1; //!<[11] Command acting interrupt enable
      __IO ONE_BIT  TXACTIE    :  1; //!<[12] Data transmit acting interrupt enable
      __IO ONE_BIT  RXACTIE    :  1; //!<[13] Data receive acting interrupt enable
      __IO ONE_BIT  TXFIFOHEIE :  1; //!<[14] Tx FIFO half empty interrupt enable
      __IO ONE_BIT  RXFIFOHFIE :  1; //!<[15] Rx FIFO half full interrupt enable
      __IO ONE_BIT  TXFIFOFIE  :  1; //!<[16] Tx FIFO full interrupt enable
      __IO ONE_BIT  RXFIFOFIE  :  1; //!<[17] Rx FIFO full interrupt enable
      __IO ONE_BIT  TXFIFOEIE  :  1; //!<[18] Tx FIFO empty interrupt enable
      __IO ONE_BIT  RXFIFOEIE  :  1; //!<[19] Rx FIFO empty interrupt enable
      __IO ONE_BIT  TXDAVLIE   :  1; //!<[20] Data available in Tx FIFO interrupt enable
      __IO ONE_BIT  RXDAVLIE   :  1; //!<[21] Data available in Rx FIFO interrupt enable
      __IO ONE_BIT  SDIOITIE   :  1; //!<[22] SDIO mode interrupt received interrupt enable
      __IO ONE_BIT  CEATAENDIE :  1; //!<[23] CE-ATA command completion signal received interrupt enable
    } B;
    __IO uint32_t  R;
    explicit MASK_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      MASK_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      MASK_DEF r; r.R = R;
      R = f (r);
    }
  };
  union FIFOCNT_DEF {  //!< FIFO counter register
    struct {
      __I  uint32_t   FIFOCOUNT : 24; //!<[00] Remaining number of words to be written to or read from the FIFO
    } B;
    __I  uint32_t  R;

    explicit FIFOCNT_DEF (volatile FIFOCNT_DEF & o) noexcept { R = o.R; };
  };
  union FIFO_DEF    {  //!< data FIFO register
    struct {
      __IO uint32_t   FIFOData : 32; //!<[00] Receive and transmit FIFO data
    } B;
    __IO uint32_t  R;
    explicit FIFO_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      FIFO_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      FIFO_DEF r; r.R = R;
      R = f (r);
    }
  };
  // PERIPHERAL SDMMC REGISTERS INSTANCES
  __IO POWER_DEF             POWER ;  //!< [0000](04)[0x00000000]
  __IO CLKCR_DEF             CLKCR ;  //!< [0004](04)[0x00000000]
  __IO ARG_DEF                 ARG ;  //!< [0008](04)[0x00000000]
  __IO CMD_DEF                 CMD ;  //!< [000c](04)[0x00000000]
  __I  RESPCMD_DEF         RESPCMD ;  //!< [0010](04)[0x00000000]
  __I  RESP1_DEF             RESP1 ;  //!< [0014](04)[0x00000000]
  __I  RESP2_DEF             RESP2 ;  //!< [0018](04)[0x00000000]
  __I  RESP3_DEF             RESP3 ;  //!< [001c](04)[0x00000000]
  __I  RESP4_DEF             RESP4 ;  //!< [0020](04)[0x00000000]
  __IO DTIMER_DEF           DTIMER ;  //!< [0024](04)[0x00000000]
  __IO DLEN_DEF               DLEN ;  //!< [0028](04)[0x00000000]
  __IO DCTRL_DEF             DCTRL ;  //!< [002c](04)[0x00000000]
  __I  DCOUNT_DEF           DCOUNT ;  //!< [0030](04)[0x00000000]
  __I  STA_DEF                 STA ;  //!< [0034](04)[0x00000000]
  __IO ICR_DEF                 ICR ;  //!< [0038](04)[0x00000000]
  __IO MASK_DEF               MASK ;  //!< [003c](04)[0x00000000]
       uint32_t          UNUSED0 [2];  //!< [0040](08)[0xFFFFFFFF]
  __I  FIFOCNT_DEF         FIFOCNT ;  //!< [0048](04)[0x00000000]
       uint32_t          UNUSED1 [13];  //!< [004c](34)[0xFFFFFFFF]
  __IO FIFO_DEF               FIFO ;  //!< [0080](04)[0x00000000]
}; /* total size = 0x0400, struct size = 0x0084 */

// ////////////////////+++ EXTI +-+//////////////////// //
struct EXTI_Type          { /*!< External interrupt/event controller */
  union IMR1_DEF    {  //!< Interrupt mask register
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
      __IO ONE_BIT  MR20 :  1; //!<[20] Interrupt Mask on line 20
      __IO ONE_BIT  MR21 :  1; //!<[21] Interrupt Mask on line 21
      __IO ONE_BIT  MR22 :  1; //!<[22] Interrupt Mask on line 22
      __IO ONE_BIT  MR23 :  1; //!<[23] Interrupt Mask on line 23
      __IO ONE_BIT  MR24 :  1; //!<[24] Interrupt Mask on line 24
      __IO ONE_BIT  MR25 :  1; //!<[25] Interrupt Mask on line 25
      __IO ONE_BIT  MR26 :  1; //!<[26] Interrupt Mask on line 26
      __IO ONE_BIT  MR27 :  1; //!<[27] Interrupt Mask on line 27
      __IO ONE_BIT  MR28 :  1; //!<[28] Interrupt Mask on line 28
      __IO ONE_BIT  MR29 :  1; //!<[29] Interrupt Mask on line 29
      __IO ONE_BIT  MR30 :  1; //!<[30] Interrupt Mask on line 30
      __IO ONE_BIT  MR31 :  1; //!<[31] Interrupt Mask on line 31
    } B;
    __IO uint32_t  R;
    explicit IMR1_DEF () noexcept { R = 0xff820000u; }
    template<typename F> void setbit (F f) volatile {
      IMR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      IMR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union EMR1_DEF    {  //!< Event mask register
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
      __IO ONE_BIT  MR20 :  1; //!<[20] Event Mask on line 20
      __IO ONE_BIT  MR21 :  1; //!<[21] Event Mask on line 21
      __IO ONE_BIT  MR22 :  1; //!<[22] Event Mask on line 22
      __IO ONE_BIT  MR23 :  1; //!<[23] Event Mask on line 23
      __IO ONE_BIT  MR24 :  1; //!<[24] Event Mask on line 24
      __IO ONE_BIT  MR25 :  1; //!<[25] Event Mask on line 25
      __IO ONE_BIT  MR26 :  1; //!<[26] Event Mask on line 26
      __IO ONE_BIT  MR27 :  1; //!<[27] Event Mask on line 27
      __IO ONE_BIT  MR28 :  1; //!<[28] Event Mask on line 28
      __IO ONE_BIT  MR29 :  1; //!<[29] Event Mask on line 29
      __IO ONE_BIT  MR30 :  1; //!<[30] Event Mask on line 30
      __IO ONE_BIT  MR31 :  1; //!<[31] Event Mask on line 31
    } B;
    __IO uint32_t  R;
    explicit EMR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      EMR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      EMR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union RTSR1_DEF   {  //!< Rising Trigger selection register
    struct {
      __IO ONE_BIT  TR0     :  1; //!<[00] Rising trigger event configuration of line 0
      __IO ONE_BIT  TR1     :  1; //!<[01] Rising trigger event configuration of line 1
      __IO ONE_BIT  TR2     :  1; //!<[02] Rising trigger event configuration of line 2
      __IO ONE_BIT  TR3     :  1; //!<[03] Rising trigger event configuration of line 3
      __IO ONE_BIT  TR4     :  1; //!<[04] Rising trigger event configuration of line 4
      __IO ONE_BIT  TR5     :  1; //!<[05] Rising trigger event configuration of line 5
      __IO ONE_BIT  TR6     :  1; //!<[06] Rising trigger event configuration of line 6
      __IO ONE_BIT  TR7     :  1; //!<[07] Rising trigger event configuration of line 7
      __IO ONE_BIT  TR8     :  1; //!<[08] Rising trigger event configuration of line 8
      __IO ONE_BIT  TR9     :  1; //!<[09] Rising trigger event configuration of line 9
      __IO ONE_BIT  TR10    :  1; //!<[10] Rising trigger event configuration of line 10
      __IO ONE_BIT  TR11    :  1; //!<[11] Rising trigger event configuration of line 11
      __IO ONE_BIT  TR12    :  1; //!<[12] Rising trigger event configuration of line 12
      __IO ONE_BIT  TR13    :  1; //!<[13] Rising trigger event configuration of line 13
      __IO ONE_BIT  TR14    :  1; //!<[14] Rising trigger event configuration of line 14
      __IO ONE_BIT  TR15    :  1; //!<[15] Rising trigger event configuration of line 15
      __IO ONE_BIT  TR16    :  1; //!<[16] Rising trigger event configuration of line 16
           ONE_BIT  UNUSED0 :  1; //!<[17] 
      __IO ONE_BIT  TR18    :  1; //!<[18] Rising trigger event configuration of line 18
      __IO ONE_BIT  TR19    :  1; //!<[19] Rising trigger event configuration of line 19
      __IO ONE_BIT  TR20    :  1; //!<[20] Rising trigger event configuration of line 20
      __IO ONE_BIT  TR21    :  1; //!<[21] Rising trigger event configuration of line 21
      __IO ONE_BIT  TR22    :  1; //!<[22] Rising trigger event configuration of line 22
    } B;
    __IO uint32_t  R;
    explicit RTSR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      RTSR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      RTSR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union FTSR1_DEF   {  //!< Falling Trigger selection register
    struct {
      __IO ONE_BIT  TR0     :  1; //!<[00] Falling trigger event configuration of line 0
      __IO ONE_BIT  TR1     :  1; //!<[01] Falling trigger event configuration of line 1
      __IO ONE_BIT  TR2     :  1; //!<[02] Falling trigger event configuration of line 2
      __IO ONE_BIT  TR3     :  1; //!<[03] Falling trigger event configuration of line 3
      __IO ONE_BIT  TR4     :  1; //!<[04] Falling trigger event configuration of line 4
      __IO ONE_BIT  TR5     :  1; //!<[05] Falling trigger event configuration of line 5
      __IO ONE_BIT  TR6     :  1; //!<[06] Falling trigger event configuration of line 6
      __IO ONE_BIT  TR7     :  1; //!<[07] Falling trigger event configuration of line 7
      __IO ONE_BIT  TR8     :  1; //!<[08] Falling trigger event configuration of line 8
      __IO ONE_BIT  TR9     :  1; //!<[09] Falling trigger event configuration of line 9
      __IO ONE_BIT  TR10    :  1; //!<[10] Falling trigger event configuration of line 10
      __IO ONE_BIT  TR11    :  1; //!<[11] Falling trigger event configuration of line 11
      __IO ONE_BIT  TR12    :  1; //!<[12] Falling trigger event configuration of line 12
      __IO ONE_BIT  TR13    :  1; //!<[13] Falling trigger event configuration of line 13
      __IO ONE_BIT  TR14    :  1; //!<[14] Falling trigger event configuration of line 14
      __IO ONE_BIT  TR15    :  1; //!<[15] Falling trigger event configuration of line 15
      __IO ONE_BIT  TR16    :  1; //!<[16] Falling trigger event configuration of line 16
           ONE_BIT  UNUSED0 :  1; //!<[17] 
      __IO ONE_BIT  TR18    :  1; //!<[18] Falling trigger event configuration of line 18
      __IO ONE_BIT  TR19    :  1; //!<[19] Falling trigger event configuration of line 19
      __IO ONE_BIT  TR20    :  1; //!<[20] Falling trigger event configuration of line 20
      __IO ONE_BIT  TR21    :  1; //!<[21] Falling trigger event configuration of line 21
      __IO ONE_BIT  TR22    :  1; //!<[22] Falling trigger event configuration of line 22
    } B;
    __IO uint32_t  R;
    explicit FTSR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      FTSR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      FTSR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union SWIER1_DEF  {  //!< Software interrupt event register
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
           ONE_BIT  UNUSED0 :  1; //!<[17] 
      __IO ONE_BIT  SWIER18 :  1; //!<[18] Software Interrupt on line 18
      __IO ONE_BIT  SWIER19 :  1; //!<[19] Software Interrupt on line 19
      __IO ONE_BIT  SWIER20 :  1; //!<[20] Software Interrupt on line 20
      __IO ONE_BIT  SWIER21 :  1; //!<[21] Software Interrupt on line 21
      __IO ONE_BIT  SWIER22 :  1; //!<[22] Software Interrupt on line 22
    } B;
    __IO uint32_t  R;
    explicit SWIER1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      SWIER1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      SWIER1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union PR1_DEF     {  //!< Pending register
    struct {
      __IO ONE_BIT  PR0     :  1; //!<[00] Pending bit 0
      __IO ONE_BIT  PR1     :  1; //!<[01] Pending bit 1
      __IO ONE_BIT  PR2     :  1; //!<[02] Pending bit 2
      __IO ONE_BIT  PR3     :  1; //!<[03] Pending bit 3
      __IO ONE_BIT  PR4     :  1; //!<[04] Pending bit 4
      __IO ONE_BIT  PR5     :  1; //!<[05] Pending bit 5
      __IO ONE_BIT  PR6     :  1; //!<[06] Pending bit 6
      __IO ONE_BIT  PR7     :  1; //!<[07] Pending bit 7
      __IO ONE_BIT  PR8     :  1; //!<[08] Pending bit 8
      __IO ONE_BIT  PR9     :  1; //!<[09] Pending bit 9
      __IO ONE_BIT  PR10    :  1; //!<[10] Pending bit 10
      __IO ONE_BIT  PR11    :  1; //!<[11] Pending bit 11
      __IO ONE_BIT  PR12    :  1; //!<[12] Pending bit 12
      __IO ONE_BIT  PR13    :  1; //!<[13] Pending bit 13
      __IO ONE_BIT  PR14    :  1; //!<[14] Pending bit 14
      __IO ONE_BIT  PR15    :  1; //!<[15] Pending bit 15
      __IO ONE_BIT  PR16    :  1; //!<[16] Pending bit 16
           ONE_BIT  UNUSED0 :  1; //!<[17] 
      __IO ONE_BIT  PR18    :  1; //!<[18] Pending bit 18
      __IO ONE_BIT  PR19    :  1; //!<[19] Pending bit 19
      __IO ONE_BIT  PR20    :  1; //!<[20] Pending bit 20
      __IO ONE_BIT  PR21    :  1; //!<[21] Pending bit 21
      __IO ONE_BIT  PR22    :  1; //!<[22] Pending bit 22
    } B;
    __IO uint32_t  R;
    explicit PR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      PR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      PR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union IMR2_DEF    {  //!< Interrupt mask register
    struct {
      __IO ONE_BIT  MR32 :  1; //!<[00] Interrupt Mask on external/internal line 32
      __IO ONE_BIT  MR33 :  1; //!<[01] Interrupt Mask on external/internal line 33
      __IO ONE_BIT  MR34 :  1; //!<[02] Interrupt Mask on external/internal line 34
      __IO ONE_BIT  MR35 :  1; //!<[03] Interrupt Mask on external/internal line 35
      __IO ONE_BIT  MR36 :  1; //!<[04] Interrupt Mask on external/internal line 36
      __IO ONE_BIT  MR37 :  1; //!<[05] Interrupt Mask on external/internal line 37
      __IO ONE_BIT  MR38 :  1; //!<[06] Interrupt Mask on external/internal line 38
      __IO ONE_BIT  MR39 :  1; //!<[07] Interrupt Mask on external/internal line 39
    } B;
    __IO uint32_t  R;
    explicit IMR2_DEF () noexcept { R = 0xffffff87u; }
    template<typename F> void setbit (F f) volatile {
      IMR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      IMR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union EMR2_DEF    {  //!< Event mask register
    struct {
      __IO ONE_BIT  MR32 :  1; //!<[00] Event mask on external/internal line 32
      __IO ONE_BIT  MR33 :  1; //!<[01] Event mask on external/internal line 33
      __IO ONE_BIT  MR34 :  1; //!<[02] Event mask on external/internal line 34
      __IO ONE_BIT  MR35 :  1; //!<[03] Event mask on external/internal line 35
      __IO ONE_BIT  MR36 :  1; //!<[04] Event mask on external/internal line 36
      __IO ONE_BIT  MR37 :  1; //!<[05] Event mask on external/internal line 37
      __IO ONE_BIT  MR38 :  1; //!<[06] Event mask on external/internal line 38
      __IO ONE_BIT  MR39 :  1; //!<[07] Event mask on external/internal line 39
    } B;
    __IO uint32_t  R;
    explicit EMR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      EMR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      EMR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union RTSR2_DEF   {  //!< Rising Trigger selection register
    struct {
           uint32_t   UNUSED0 :  3; //!<[00] 
      __IO ONE_BIT    RT35    :  1; //!<[03] Rising trigger event configuration bit of line 35
      __IO ONE_BIT    RT36    :  1; //!<[04] Rising trigger event configuration bit of line 36
      __IO ONE_BIT    RT37    :  1; //!<[05] Rising trigger event configuration bit of line 37
      __IO ONE_BIT    RT38    :  1; //!<[06] Rising trigger event configuration bit of line 38
    } B;
    __IO uint32_t  R;
    explicit RTSR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      RTSR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      RTSR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union FTSR2_DEF   {  //!< Falling Trigger selection register
    struct {
           uint32_t   UNUSED0 :  3; //!<[00] 
      __IO ONE_BIT    FT35    :  1; //!<[03] Falling trigger event configuration bit of line 35
      __IO ONE_BIT    FT36    :  1; //!<[04] Falling trigger event configuration bit of line 36
      __IO ONE_BIT    FT37    :  1; //!<[05] Falling trigger event configuration bit of line 37
      __IO ONE_BIT    FT38    :  1; //!<[06] Falling trigger event configuration bit of line 38
    } B;
    __IO uint32_t  R;
    explicit FTSR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      FTSR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      FTSR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union SWIER2_DEF  {  //!< Software interrupt event register
    struct {
           uint32_t   UNUSED0 :  3; //!<[00] 
      __IO ONE_BIT    SWI35   :  1; //!<[03] Software interrupt on line 35
      __IO ONE_BIT    SWI36   :  1; //!<[04] Software interrupt on line 36
      __IO ONE_BIT    SWI37   :  1; //!<[05] Software interrupt on line 37
      __IO ONE_BIT    SWI38   :  1; //!<[06] Software interrupt on line 38
    } B;
    __IO uint32_t  R;
    explicit SWIER2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      SWIER2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      SWIER2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union PR2_DEF     {  //!< Pending register
    struct {
           uint32_t   UNUSED0 :  3; //!<[00] 
      __IO ONE_BIT    PIF35   :  1; //!<[03] Pending interrupt flag on line 35
      __IO ONE_BIT    PIF36   :  1; //!<[04] Pending interrupt flag on line 36
      __IO ONE_BIT    PIF37   :  1; //!<[05] Pending interrupt flag on line 37
      __IO ONE_BIT    PIF38   :  1; //!<[06] Pending interrupt flag on line 38
    } B;
    __IO uint32_t  R;
    explicit PR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      PR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      PR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  // PERIPHERAL EXTI REGISTERS INSTANCES
  __IO IMR1_DEF               IMR1 ;  //!< [0000](04)[0xFF820000]
  __IO EMR1_DEF               EMR1 ;  //!< [0004](04)[0x00000000]
  __IO RTSR1_DEF             RTSR1 ;  //!< [0008](04)[0x00000000]
  __IO FTSR1_DEF             FTSR1 ;  //!< [000c](04)[0x00000000]
  __IO SWIER1_DEF           SWIER1 ;  //!< [0010](04)[0x00000000]
  __IO PR1_DEF                 PR1 ;  //!< [0014](04)[0x00000000]
       uint32_t          UNUSED0 [2];  //!< [0018](08)[0xFFFFFFFF]
  __IO IMR2_DEF               IMR2 ;  //!< [0020](04)[0xFFFFFF87]
  __IO EMR2_DEF               EMR2 ;  //!< [0024](04)[0x00000000]
  __IO RTSR2_DEF             RTSR2 ;  //!< [0028](04)[0x00000000]
  __IO FTSR2_DEF             FTSR2 ;  //!< [002c](04)[0x00000000]
  __IO SWIER2_DEF           SWIER2 ;  //!< [0030](04)[0x00000000]
  __IO PR2_DEF                 PR2 ;  //!< [0034](04)[0x00000000]
}; /* total size = 0x0400, struct size = 0x0038 */

// ////////////////////+++ VREFBUF +-+//////////////////// //
struct VREFBUF_Type       { /*!< Voltage reference buffer */
  union CSR_DEF {  //!< VREF control and status register
    struct {
      __IO ONE_BIT  ENVR :  1; //!<[00] Voltage reference buffer enable
      __IO ONE_BIT  HIZ  :  1; //!<[01] High impedance mode
      __IO ONE_BIT  VRS  :  1; //!<[02] Voltage reference scale
      __I  ONE_BIT  VRR  :  1; //!<[03] Voltage reference buffer ready
    } B;
    __IO uint32_t  R;
    explicit CSR_DEF () noexcept { R = 0x00000002u; }
    template<typename F> void setbit (F f) volatile {
      CSR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CSR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CCR_DEF {  //!< calibration control register
    struct {
      __IO uint32_t   TRIM :  6; //!<[00] Trimming code
    } B;
    __IO uint32_t  R;
    explicit CCR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CCR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CCR_DEF r; r.R = R;
      R = f (r);
    }
  };
  // PERIPHERAL VREFBUF REGISTERS INSTANCES
  __IO CSR_DEF             CSR ;  //!< [0000](04)[0x00000002]
  __IO CCR_DEF             CCR ;  //!< [0004](04)[0x00000000]
}; /* total size = 0x01d0, struct size = 0x0008 */

// ////////////////////+++ CAN1 +-+//////////////////// //
struct CAN1_Type          { /*!< Controller area network */
  union MCR_DEF     {  //!< master control register
    struct {
      __IO ONE_BIT    INRQ    :  1; //!<[00] INRQ
      __IO ONE_BIT    SLEEP   :  1; //!<[01] SLEEP
      __IO ONE_BIT    TXFP    :  1; //!<[02] TXFP
      __IO ONE_BIT    RFLM    :  1; //!<[03] RFLM
      __IO ONE_BIT    NART    :  1; //!<[04] NART
      __IO ONE_BIT    AWUM    :  1; //!<[05] AWUM
      __IO ONE_BIT    ABOM    :  1; //!<[06] ABOM
      __IO ONE_BIT    TTCM    :  1; //!<[07] TTCM
           uint32_t   UNUSED0 :  7; //!<[08] 
      __IO ONE_BIT    RESET   :  1; //!<[15] RESET
      __IO ONE_BIT    DBF     :  1; //!<[16] DBF
    } B;
    __IO uint32_t  R;
    explicit MCR_DEF () noexcept { R = 0x00010002u; }
    template<typename F> void setbit (F f) volatile {
      MCR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      MCR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union MSR_DEF     {  //!< master status register
    struct {
      __I  ONE_BIT    INAK    :  1; //!<[00] INAK
      __I  ONE_BIT    SLAK    :  1; //!<[01] SLAK
      __IO ONE_BIT    ERRI    :  1; //!<[02] ERRI
      __IO ONE_BIT    WKUI    :  1; //!<[03] WKUI
      __IO ONE_BIT    SLAKI   :  1; //!<[04] SLAKI
           uint32_t   UNUSED0 :  3; //!<[05] 
      __I  ONE_BIT    TXM     :  1; //!<[08] TXM
      __I  ONE_BIT    RXM     :  1; //!<[09] RXM
      __I  ONE_BIT    SAMP    :  1; //!<[10] SAMP
      __I  ONE_BIT    RX      :  1; //!<[11] RX
    } B;
    __IO uint32_t  R;
    explicit MSR_DEF () noexcept { R = 0x00000c02u; }
    template<typename F> void setbit (F f) volatile {
      MSR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      MSR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union TSR_DEF     {  //!< transmit status register
    struct {
      __IO ONE_BIT    RQCP0   :  1; //!<[00] RQCP0
      __IO ONE_BIT    TXOK0   :  1; //!<[01] TXOK0
      __IO ONE_BIT    ALST0   :  1; //!<[02] ALST0
      __IO ONE_BIT    TERR0   :  1; //!<[03] TERR0
           uint32_t   UNUSED0 :  3; //!<[04] 
      __IO ONE_BIT    ABRQ0   :  1; //!<[07] ABRQ0
      __IO ONE_BIT    RQCP1   :  1; //!<[08] RQCP1
      __IO ONE_BIT    TXOK1   :  1; //!<[09] TXOK1
      __IO ONE_BIT    ALST1   :  1; //!<[10] ALST1
      __IO ONE_BIT    TERR1   :  1; //!<[11] TERR1
           uint32_t   UNUSED1 :  3; //!<[12] 
      __IO ONE_BIT    ABRQ1   :  1; //!<[15] ABRQ1
      __IO ONE_BIT    RQCP2   :  1; //!<[16] RQCP2
      __IO ONE_BIT    TXOK2   :  1; //!<[17] TXOK2
      __IO ONE_BIT    ALST2   :  1; //!<[18] ALST2
      __IO ONE_BIT    TERR2   :  1; //!<[19] TERR2
           uint32_t   UNUSED2 :  3; //!<[20] 
      __IO ONE_BIT    ABRQ2   :  1; //!<[23] ABRQ2
      __I  uint32_t   CODE    :  2; //!<[24] CODE
      __I  ONE_BIT    TME0    :  1; //!<[26] Lowest priority flag for mailbox 0
      __I  ONE_BIT    TME1    :  1; //!<[27] Lowest priority flag for mailbox 1
      __I  ONE_BIT    TME2    :  1; //!<[28] Lowest priority flag for mailbox 2
      __I  ONE_BIT    LOW0    :  1; //!<[29] Lowest priority flag for mailbox 0
      __I  ONE_BIT    LOW1    :  1; //!<[30] Lowest priority flag for mailbox 1
      __I  ONE_BIT    LOW2    :  1; //!<[31] Lowest priority flag for mailbox 2
    } B;
    __IO uint32_t  R;
    explicit TSR_DEF () noexcept { R = 0x1c000000u; }
    template<typename F> void setbit (F f) volatile {
      TSR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      TSR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union RF0R_DEF    {  //!< receive FIFO 0 register
    struct {
      __I  uint32_t   FMP0    :  2; //!<[00] FMP0
           ONE_BIT    UNUSED0 :  1; //!<[02] 
      __IO ONE_BIT    FULL0   :  1; //!<[03] FULL0
      __IO ONE_BIT    FOVR0   :  1; //!<[04] FOVR0
      __IO ONE_BIT    RFOM0   :  1; //!<[05] RFOM0
    } B;
    __IO uint32_t  R;
    explicit RF0R_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      RF0R_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      RF0R_DEF r; r.R = R;
      R = f (r);
    }
  };
  union RF1R_DEF    {  //!< receive FIFO 1 register
    struct {
      __I  uint32_t   FMP1    :  2; //!<[00] FMP1
           ONE_BIT    UNUSED0 :  1; //!<[02] 
      __IO ONE_BIT    FULL1   :  1; //!<[03] FULL1
      __IO ONE_BIT    FOVR1   :  1; //!<[04] FOVR1
      __IO ONE_BIT    RFOM1   :  1; //!<[05] RFOM1
    } B;
    __IO uint32_t  R;
    explicit RF1R_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      RF1R_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      RF1R_DEF r; r.R = R;
      R = f (r);
    }
  };
  union IER_DEF     {  //!< interrupt enable register
    struct {
      __IO ONE_BIT    TMEIE   :  1; //!<[00] TMEIE
      __IO ONE_BIT    FMPIE0  :  1; //!<[01] FMPIE0
      __IO ONE_BIT    FFIE0   :  1; //!<[02] FFIE0
      __IO ONE_BIT    FOVIE0  :  1; //!<[03] FOVIE0
      __IO ONE_BIT    FMPIE1  :  1; //!<[04] FMPIE1
      __IO ONE_BIT    FFIE1   :  1; //!<[05] FFIE1
      __IO ONE_BIT    FOVIE1  :  1; //!<[06] FOVIE1
           ONE_BIT    UNUSED0 :  1; //!<[07] 
      __IO ONE_BIT    EWGIE   :  1; //!<[08] EWGIE
      __IO ONE_BIT    EPVIE   :  1; //!<[09] EPVIE
      __IO ONE_BIT    BOFIE   :  1; //!<[10] BOFIE
      __IO ONE_BIT    LECIE   :  1; //!<[11] LECIE
           uint32_t   UNUSED1 :  3; //!<[12] 
      __IO ONE_BIT    ERRIE   :  1; //!<[15] ERRIE
      __IO ONE_BIT    WKUIE   :  1; //!<[16] WKUIE
      __IO ONE_BIT    SLKIE   :  1; //!<[17] SLKIE
    } B;
    __IO uint32_t  R;
    explicit IER_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IER_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      IER_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ESR_DEF     {  //!< interrupt enable register
    struct {
      __I  ONE_BIT    EWGF    :  1; //!<[00] EWGF
      __I  ONE_BIT    EPVF    :  1; //!<[01] EPVF
      __I  ONE_BIT    BOFF    :  1; //!<[02] BOFF
           ONE_BIT    UNUSED0 :  1; //!<[03] 
      __IO uint32_t   LEC     :  3; //!<[04] LEC
           uint32_t   UNUSED1 :  9; //!<[07] 
      __I  uint32_t   TEC     :  8; //!<[16] TEC
      __I  uint32_t   REC     :  8; //!<[24] REC
    } B;
    __IO uint32_t  R;
    explicit ESR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ESR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ESR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union BTR_DEF     {  //!< bit timing register
    struct {
      __IO uint32_t   BRP     : 10; //!<[00] BRP
           uint32_t   UNUSED0 :  6; //!<[10] 
      __IO uint32_t   TS1     :  4; //!<[16] TS1
      __IO uint32_t   TS2     :  3; //!<[20] TS2
           ONE_BIT    UNUSED1 :  1; //!<[23] 
      __IO uint32_t   SJW     :  2; //!<[24] SJW
           uint32_t   UNUSED2 :  4; //!<[26] 
      __IO ONE_BIT    LBKM    :  1; //!<[30] LBKM
      __IO ONE_BIT    SILM    :  1; //!<[31] SILM
    } B;
    __IO uint32_t  R;
    explicit BTR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      BTR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      BTR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union TI0R_DEF    {  //!< TX mailbox identifier register
    struct {
      __IO ONE_BIT    TXRQ :  1; //!<[00] TXRQ
      __IO ONE_BIT    RTR  :  1; //!<[01] RTR
      __IO ONE_BIT    IDE  :  1; //!<[02] IDE
      __IO uint32_t   EXID : 18; //!<[03] EXID
      __IO uint32_t   STID : 11; //!<[21] STID
    } B;
    __IO uint32_t  R;
    explicit TI0R_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      TI0R_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      TI0R_DEF r; r.R = R;
      R = f (r);
    }
  };
  union TDT0R_DEF   {  //!< mailbox data length control and time stamp register
    struct {
      __IO uint32_t   DLC     :  4; //!<[00] DLC
           uint32_t   UNUSED0 :  4; //!<[04] 
      __IO ONE_BIT    TGT     :  1; //!<[08] TGT
           uint32_t   UNUSED1 :  7; //!<[09] 
      __IO uint32_t   TIME    : 16; //!<[16] TIME
    } B;
    __IO uint32_t  R;
    explicit TDT0R_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      TDT0R_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      TDT0R_DEF r; r.R = R;
      R = f (r);
    }
  };
  union TDL0R_DEF   {  //!< mailbox data low register
    struct {
      __IO uint32_t   DATA0 :  8; //!<[00] DATA0
      __IO uint32_t   DATA1 :  8; //!<[08] DATA1
      __IO uint32_t   DATA2 :  8; //!<[16] DATA2
      __IO uint32_t   DATA3 :  8; //!<[24] DATA3
    } B;
    __IO uint32_t  R;
    explicit TDL0R_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      TDL0R_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      TDL0R_DEF r; r.R = R;
      R = f (r);
    }
  };
  union TDH0R_DEF   {  //!< mailbox data high register
    struct {
      __IO uint32_t   DATA4 :  8; //!<[00] DATA4
      __IO uint32_t   DATA5 :  8; //!<[08] DATA5
      __IO uint32_t   DATA6 :  8; //!<[16] DATA6
      __IO uint32_t   DATA7 :  8; //!<[24] DATA7
    } B;
    __IO uint32_t  R;
    explicit TDH0R_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      TDH0R_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      TDH0R_DEF r; r.R = R;
      R = f (r);
    }
  };
  union TI1R_DEF    {  //!< mailbox identifier register
    struct {
      __IO ONE_BIT    TXRQ :  1; //!<[00] TXRQ
      __IO ONE_BIT    RTR  :  1; //!<[01] RTR
      __IO ONE_BIT    IDE  :  1; //!<[02] IDE
      __IO uint32_t   EXID : 18; //!<[03] EXID
      __IO uint32_t   STID : 11; //!<[21] STID
    } B;
    __IO uint32_t  R;
    explicit TI1R_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      TI1R_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      TI1R_DEF r; r.R = R;
      R = f (r);
    }
  };
  union TDT1R_DEF   {  //!< mailbox data length control and time stamp register
    struct {
      __IO uint32_t   DLC     :  4; //!<[00] DLC
           uint32_t   UNUSED0 :  4; //!<[04] 
      __IO ONE_BIT    TGT     :  1; //!<[08] TGT
           uint32_t   UNUSED1 :  7; //!<[09] 
      __IO uint32_t   TIME    : 16; //!<[16] TIME
    } B;
    __IO uint32_t  R;
    explicit TDT1R_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      TDT1R_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      TDT1R_DEF r; r.R = R;
      R = f (r);
    }
  };
  union TDL1R_DEF   {  //!< mailbox data low register
    struct {
      __IO uint32_t   DATA0 :  8; //!<[00] DATA0
      __IO uint32_t   DATA1 :  8; //!<[08] DATA1
      __IO uint32_t   DATA2 :  8; //!<[16] DATA2
      __IO uint32_t   DATA3 :  8; //!<[24] DATA3
    } B;
    __IO uint32_t  R;
    explicit TDL1R_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      TDL1R_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      TDL1R_DEF r; r.R = R;
      R = f (r);
    }
  };
  union TDH1R_DEF   {  //!< mailbox data high register
    struct {
      __IO uint32_t   DATA4 :  8; //!<[00] DATA4
      __IO uint32_t   DATA5 :  8; //!<[08] DATA5
      __IO uint32_t   DATA6 :  8; //!<[16] DATA6
      __IO uint32_t   DATA7 :  8; //!<[24] DATA7
    } B;
    __IO uint32_t  R;
    explicit TDH1R_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      TDH1R_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      TDH1R_DEF r; r.R = R;
      R = f (r);
    }
  };
  union TI2R_DEF    {  //!< mailbox identifier register
    struct {
      __IO ONE_BIT    TXRQ :  1; //!<[00] TXRQ
      __IO ONE_BIT    RTR  :  1; //!<[01] RTR
      __IO ONE_BIT    IDE  :  1; //!<[02] IDE
      __IO uint32_t   EXID : 18; //!<[03] EXID
      __IO uint32_t   STID : 11; //!<[21] STID
    } B;
    __IO uint32_t  R;
    explicit TI2R_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      TI2R_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      TI2R_DEF r; r.R = R;
      R = f (r);
    }
  };
  union TDT2R_DEF   {  //!< mailbox data length control and time stamp register
    struct {
      __IO uint32_t   DLC     :  4; //!<[00] DLC
           uint32_t   UNUSED0 :  4; //!<[04] 
      __IO ONE_BIT    TGT     :  1; //!<[08] TGT
           uint32_t   UNUSED1 :  7; //!<[09] 
      __IO uint32_t   TIME    : 16; //!<[16] TIME
    } B;
    __IO uint32_t  R;
    explicit TDT2R_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      TDT2R_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      TDT2R_DEF r; r.R = R;
      R = f (r);
    }
  };
  union TDL2R_DEF   {  //!< mailbox data low register
    struct {
      __IO uint32_t   DATA0 :  8; //!<[00] DATA0
      __IO uint32_t   DATA1 :  8; //!<[08] DATA1
      __IO uint32_t   DATA2 :  8; //!<[16] DATA2
      __IO uint32_t   DATA3 :  8; //!<[24] DATA3
    } B;
    __IO uint32_t  R;
    explicit TDL2R_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      TDL2R_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      TDL2R_DEF r; r.R = R;
      R = f (r);
    }
  };
  union TDH2R_DEF   {  //!< mailbox data high register
    struct {
      __IO uint32_t   DATA4 :  8; //!<[00] DATA4
      __IO uint32_t   DATA5 :  8; //!<[08] DATA5
      __IO uint32_t   DATA6 :  8; //!<[16] DATA6
      __IO uint32_t   DATA7 :  8; //!<[24] DATA7
    } B;
    __IO uint32_t  R;
    explicit TDH2R_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      TDH2R_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      TDH2R_DEF r; r.R = R;
      R = f (r);
    }
  };
  union RI0R_DEF    {  //!< receive FIFO mailbox identifier register
    struct {
           ONE_BIT    UNUSED0 :  1; //!<[00] 
      __I  ONE_BIT    RTR     :  1; //!<[01] RTR
      __I  ONE_BIT    IDE     :  1; //!<[02] IDE
      __I  uint32_t   EXID    : 18; //!<[03] EXID
      __I  uint32_t   STID    : 11; //!<[21] STID
    } B;
    __I  uint32_t  R;

    explicit RI0R_DEF (volatile RI0R_DEF & o) noexcept { R = o.R; };
  };
  union RDT0R_DEF   {  //!< mailbox data high register
    struct {
      __I  uint32_t   DLC     :  4; //!<[00] DLC
           uint32_t   UNUSED0 :  4; //!<[04] 
      __I  uint32_t   FMI     :  8; //!<[08] FMI
      __I  uint32_t   TIME    : 16; //!<[16] TIME
    } B;
    __I  uint32_t  R;

    explicit RDT0R_DEF (volatile RDT0R_DEF & o) noexcept { R = o.R; };
  };
  union RDL0R_DEF   {  //!< mailbox data high register
    struct {
      __I  uint32_t   DATA0 :  8; //!<[00] DATA0
      __I  uint32_t   DATA1 :  8; //!<[08] DATA1
      __I  uint32_t   DATA2 :  8; //!<[16] DATA2
      __I  uint32_t   DATA3 :  8; //!<[24] DATA3
    } B;
    __I  uint32_t  R;

    explicit RDL0R_DEF (volatile RDL0R_DEF & o) noexcept { R = o.R; };
  };
  union RDH0R_DEF   {  //!< receive FIFO mailbox data high register
    struct {
      __I  uint32_t   DATA4 :  8; //!<[00] DATA4
      __I  uint32_t   DATA5 :  8; //!<[08] DATA5
      __I  uint32_t   DATA6 :  8; //!<[16] DATA6
      __I  uint32_t   DATA7 :  8; //!<[24] DATA7
    } B;
    __I  uint32_t  R;

    explicit RDH0R_DEF (volatile RDH0R_DEF & o) noexcept { R = o.R; };
  };
  union RI1R_DEF    {  //!< mailbox data high register
    struct {
           ONE_BIT    UNUSED0 :  1; //!<[00] 
      __I  ONE_BIT    RTR     :  1; //!<[01] RTR
      __I  ONE_BIT    IDE     :  1; //!<[02] IDE
      __I  uint32_t   EXID    : 18; //!<[03] EXID
      __I  uint32_t   STID    : 11; //!<[21] STID
    } B;
    __I  uint32_t  R;

    explicit RI1R_DEF (volatile RI1R_DEF & o) noexcept { R = o.R; };
  };
  union RDT1R_DEF   {  //!< mailbox data high register
    struct {
      __I  uint32_t   DLC     :  4; //!<[00] DLC
           uint32_t   UNUSED0 :  4; //!<[04] 
      __I  uint32_t   FMI     :  8; //!<[08] FMI
      __I  uint32_t   TIME    : 16; //!<[16] TIME
    } B;
    __I  uint32_t  R;

    explicit RDT1R_DEF (volatile RDT1R_DEF & o) noexcept { R = o.R; };
  };
  union RDL1R_DEF   {  //!< mailbox data high register
    struct {
      __I  uint32_t   DATA0 :  8; //!<[00] DATA0
      __I  uint32_t   DATA1 :  8; //!<[08] DATA1
      __I  uint32_t   DATA2 :  8; //!<[16] DATA2
      __I  uint32_t   DATA3 :  8; //!<[24] DATA3
    } B;
    __I  uint32_t  R;

    explicit RDL1R_DEF (volatile RDL1R_DEF & o) noexcept { R = o.R; };
  };
  union RDH1R_DEF   {  //!< mailbox data high register
    struct {
      __I  uint32_t   DATA4 :  8; //!<[00] DATA4
      __I  uint32_t   DATA5 :  8; //!<[08] DATA5
      __I  uint32_t   DATA6 :  8; //!<[16] DATA6
      __I  uint32_t   DATA7 :  8; //!<[24] DATA7
    } B;
    __I  uint32_t  R;

    explicit RDH1R_DEF (volatile RDH1R_DEF & o) noexcept { R = o.R; };
  };
  union FMR_DEF     {  //!< filter master register
    struct {
      __IO ONE_BIT  FINIT :  1; //!<[00] Filter initialization mode
    } B;
    __IO uint32_t  R;
    explicit FMR_DEF () noexcept { R = 0x2a1c0e01u; }
    template<typename F> void setbit (F f) volatile {
      FMR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      FMR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union FM1R_DEF    {  //!< filter mode register
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
    explicit FM1R_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      FM1R_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      FM1R_DEF r; r.R = R;
      R = f (r);
    }
  };
  union FS1R_DEF    {  //!< filter scale register
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
    explicit FS1R_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      FS1R_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      FS1R_DEF r; r.R = R;
      R = f (r);
    }
  };
  union FFA1R_DEF   {  //!< filter FIFO assignment register
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
    explicit FFA1R_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      FFA1R_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      FFA1R_DEF r; r.R = R;
      R = f (r);
    }
  };
  union FA1R_DEF    {  //!< filter activation register
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
    explicit FA1R_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      FA1R_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      FA1R_DEF r; r.R = R;
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
  __IO MCR_DEF                 MCR ;  //!< [0000](04)[0x00010002]
  __IO MSR_DEF                 MSR ;  //!< [0004](04)[0x00000C02]
  __IO TSR_DEF                 TSR ;  //!< [0008](04)[0x1C000000]
  __IO RF0R_DEF               RF0R ;  //!< [000c](04)[0x00000000]
  __IO RF1R_DEF               RF1R ;  //!< [0010](04)[0x00000000]
  __IO IER_DEF                 IER ;  //!< [0014](04)[0x00000000]
  __IO ESR_DEF                 ESR ;  //!< [0018](04)[0x00000000]
  __IO BTR_DEF                 BTR ;  //!< [001c](04)[0x00000000]
       uint32_t          UNUSED0 [88];  //!< [0020](160)[0xFFFFFFFF]
  __IO TI0R_DEF               TI0R ;  //!< [0180](04)[0x00000000]
  __IO TDT0R_DEF             TDT0R ;  //!< [0184](04)[0x00000000]
  __IO TDL0R_DEF             TDL0R ;  //!< [0188](04)[0x00000000]
  __IO TDH0R_DEF             TDH0R ;  //!< [018c](04)[0x00000000]
  __IO TI1R_DEF               TI1R ;  //!< [0190](04)[0x00000000]
  __IO TDT1R_DEF             TDT1R ;  //!< [0194](04)[0x00000000]
  __IO TDL1R_DEF             TDL1R ;  //!< [0198](04)[0x00000000]
  __IO TDH1R_DEF             TDH1R ;  //!< [019c](04)[0x00000000]
  __IO TI2R_DEF               TI2R ;  //!< [01a0](04)[0x00000000]
  __IO TDT2R_DEF             TDT2R ;  //!< [01a4](04)[0x00000000]
  __IO TDL2R_DEF             TDL2R ;  //!< [01a8](04)[0x00000000]
  __IO TDH2R_DEF             TDH2R ;  //!< [01ac](04)[0x00000000]
  __I  RI0R_DEF               RI0R ;  //!< [01b0](04)[0x00000000]
  __I  RDT0R_DEF             RDT0R ;  //!< [01b4](04)[0x00000000]
  __I  RDL0R_DEF             RDL0R ;  //!< [01b8](04)[0x00000000]
  __I  RDH0R_DEF             RDH0R ;  //!< [01bc](04)[0x00000000]
  __I  RI1R_DEF               RI1R ;  //!< [01c0](04)[0x00000000]
  __I  RDT1R_DEF             RDT1R ;  //!< [01c4](04)[0x00000000]
  __I  RDL1R_DEF             RDL1R ;  //!< [01c8](04)[0x00000000]
  __I  RDH1R_DEF             RDH1R ;  //!< [01cc](04)[0x00000000]
       uint32_t          UNUSED1 [12];  //!< [01d0](30)[0xFFFFFFFF]
  __IO FMR_DEF                 FMR ;  //!< [0200](04)[0x2A1C0E01]
  __IO FM1R_DEF               FM1R ;  //!< [0204](04)[0x00000000]
       uint32_t          UNUSED2 ;  //!< [0208](04)[0xFFFFFFFF]
  __IO FS1R_DEF               FS1R ;  //!< [020c](04)[0x00000000]
       uint32_t          UNUSED3 ;  //!< [0210](04)[0xFFFFFFFF]
  __IO FFA1R_DEF             FFA1R ;  //!< [0214](04)[0x00000000]
       uint32_t          UNUSED4 ;  //!< [0218](04)[0xFFFFFFFF]
  __IO FA1R_DEF               FA1R ;  //!< [021c](04)[0x00000000]
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

// ////////////////////+++ RTC +-+//////////////////// //
struct RTC_Type           { /*!< Real-time clock */
  union TR_DEF       {  //!< time register
    struct {
      __IO uint32_t   SU      :  4; //!<[00] Second units in BCD format
      __IO uint32_t   ST      :  3; //!<[04] Second tens in BCD format
           ONE_BIT    UNUSED0 :  1; //!<[07] 
      __IO uint32_t   MNU     :  4; //!<[08] Minute units in BCD format
      __IO uint32_t   MNT     :  3; //!<[12] Minute tens in BCD format
           ONE_BIT    UNUSED1 :  1; //!<[15] 
      __IO uint32_t   HU      :  4; //!<[16] Hour units in BCD format
      __IO uint32_t   HT      :  2; //!<[20] Hour tens in BCD format
      __IO ONE_BIT    PM      :  1; //!<[22] AM/PM notation
    } B;
    __IO uint32_t  R;
    explicit TR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      TR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      TR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DR_DEF       {  //!< date register
    struct {
      __IO uint32_t   DU      :  4; //!<[00] Date units in BCD format
      __IO uint32_t   DT      :  2; //!<[04] Date tens in BCD format
           uint32_t   UNUSED0 :  2; //!<[06] 
      __IO uint32_t   MU      :  4; //!<[08] Month units in BCD format
      __IO ONE_BIT    MT      :  1; //!<[12] Month tens in BCD format
      __IO uint32_t   WDU     :  3; //!<[13] Week day units
      __IO uint32_t   YU      :  4; //!<[16] Year units in BCD format
      __IO uint32_t   YT      :  4; //!<[20] Year tens in BCD format
    } B;
    __IO uint32_t  R;
    explicit DR_DEF () noexcept { R = 0x00002101u; }
    template<typename F> void setbit (F f) volatile {
      DR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CR_DEF       {  //!< control register
    struct {
      __IO uint32_t   WCKSEL  :  3; //!<[00] Wakeup clock selection
      __IO ONE_BIT    TSEDGE  :  1; //!<[03] Time-stamp event active edge
      __IO ONE_BIT    REFCKON :  1; //!<[04] Reference clock detection enable (50 or 60 Hz)
      __IO ONE_BIT    BYPSHAD :  1; //!<[05] Bypass the shadow registers
      __IO ONE_BIT    FMT     :  1; //!<[06] Hour format
           ONE_BIT    UNUSED0 :  1; //!<[07] 
      __IO ONE_BIT    ALRAE   :  1; //!<[08] Alarm A enable
      __IO ONE_BIT    ALRBE   :  1; //!<[09] Alarm B enable
      __IO ONE_BIT    WUTE    :  1; //!<[10] Wakeup timer enable
      __IO ONE_BIT    TSE     :  1; //!<[11] Time stamp enable
      __IO ONE_BIT    ALRAIE  :  1; //!<[12] Alarm A interrupt enable
      __IO ONE_BIT    ALRBIE  :  1; //!<[13] Alarm B interrupt enable
      __IO ONE_BIT    WUTIE   :  1; //!<[14] Wakeup timer interrupt enable
      __IO ONE_BIT    TSIE    :  1; //!<[15] Time-stamp interrupt enable
      __IO ONE_BIT    ADD1H   :  1; //!<[16] Add 1 hour (summer time change)
      __IO ONE_BIT    SUB1H   :  1; //!<[17] Subtract 1 hour (winter time change)
      __IO ONE_BIT    BKP     :  1; //!<[18] Backup
      __IO ONE_BIT    COSEL   :  1; //!<[19] Calibration output selection
      __IO ONE_BIT    POL     :  1; //!<[20] Output polarity
      __IO uint32_t   OSEL    :  2; //!<[21] Output selection
      __IO ONE_BIT    COE     :  1; //!<[23] Calibration output enable
      __IO ONE_BIT    ITSE    :  1; //!<[24] timestamp on internal event enable
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
  union ISR_DEF      {  //!< initialization and status register
    struct {
      __I  ONE_BIT  ALRAWF  :  1; //!<[00] Alarm A write flag
      __I  ONE_BIT  ALRBWF  :  1; //!<[01] Alarm B write flag
      __I  ONE_BIT  WUTWF   :  1; //!<[02] Wakeup timer write flag
      __IO ONE_BIT  SHPF    :  1; //!<[03] Shift operation pending
      __I  ONE_BIT  INITS   :  1; //!<[04] Initialization status flag
      __IO ONE_BIT  RSF     :  1; //!<[05] Registers synchronization flag
      __I  ONE_BIT  INITF   :  1; //!<[06] Initialization flag
      __IO ONE_BIT  INIT    :  1; //!<[07] Initialization mode
      __IO ONE_BIT  ALRAF   :  1; //!<[08] Alarm A flag
      __IO ONE_BIT  ALRBF   :  1; //!<[09] Alarm B flag
      __IO ONE_BIT  WUTF    :  1; //!<[10] Wakeup timer flag
      __IO ONE_BIT  TSF     :  1; //!<[11] Time-stamp flag
      __IO ONE_BIT  TSOVF   :  1; //!<[12] Time-stamp overflow flag
      __IO ONE_BIT  TAMP1F  :  1; //!<[13] Tamper detection flag
      __IO ONE_BIT  TAMP2F  :  1; //!<[14] RTC_TAMP2 detection flag
      __IO ONE_BIT  TAMP3F  :  1; //!<[15] RTC_TAMP3 detection flag
      __I  ONE_BIT  RECALPF :  1; //!<[16] Recalibration pending Flag
    } B;
    __IO uint32_t  R;
    explicit ISR_DEF () noexcept { R = 0x00000007u; }
    template<typename F> void setbit (F f) volatile {
      ISR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ISR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union PRER_DEF     {  //!< prescaler register
    struct {
      __IO uint32_t   PREDIV_S : 15; //!<[00] Synchronous prescaler factor
           ONE_BIT    UNUSED0  :  1; //!<[15] 
      __IO uint32_t   PREDIV_A :  7; //!<[16] Asynchronous prescaler factor
    } B;
    __IO uint32_t  R;
    explicit PRER_DEF () noexcept { R = 0x007f00ffu; }
    template<typename F> void setbit (F f) volatile {
      PRER_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      PRER_DEF r; r.R = R;
      R = f (r);
    }
  };
  union WUTR_DEF     {  //!< wakeup timer register
    struct {
      __IO uint32_t   WUT : 16; //!<[00] Wakeup auto-reload value bits
    } B;
    __IO uint32_t  R;
    explicit WUTR_DEF () noexcept { R = 0x0000ffffu; }
    template<typename F> void setbit (F f) volatile {
      WUTR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      WUTR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ALRMAR_DEF   {  //!< alarm A register
    struct {
      __IO uint32_t   SU    :  4; //!<[00] Second units in BCD format
      __IO uint32_t   ST    :  3; //!<[04] Second tens in BCD format
      __IO ONE_BIT    MSK1  :  1; //!<[07] Alarm A seconds mask
      __IO uint32_t   MNU   :  4; //!<[08] Minute units in BCD format
      __IO uint32_t   MNT   :  3; //!<[12] Minute tens in BCD format
      __IO ONE_BIT    MSK2  :  1; //!<[15] Alarm A minutes mask
      __IO uint32_t   HU    :  4; //!<[16] Hour units in BCD format
      __IO uint32_t   HT    :  2; //!<[20] Hour tens in BCD format
      __IO ONE_BIT    PM    :  1; //!<[22] AM/PM notation
      __IO ONE_BIT    MSK3  :  1; //!<[23] Alarm A hours mask
      __IO uint32_t   DU    :  4; //!<[24] Date units or day in BCD format
      __IO uint32_t   DT    :  2; //!<[28] Date tens in BCD format
      __IO ONE_BIT    WDSEL :  1; //!<[30] Week day selection
      __IO ONE_BIT    MSK4  :  1; //!<[31] Alarm A date mask
    } B;
    __IO uint32_t  R;
    explicit ALRMAR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ALRMAR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ALRMAR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ALRMBR_DEF   {  //!< alarm B register
    struct {
      __IO uint32_t   SU    :  4; //!<[00] Second units in BCD format
      __IO uint32_t   ST    :  3; //!<[04] Second tens in BCD format
      __IO ONE_BIT    MSK1  :  1; //!<[07] Alarm B seconds mask
      __IO uint32_t   MNU   :  4; //!<[08] Minute units in BCD format
      __IO uint32_t   MNT   :  3; //!<[12] Minute tens in BCD format
      __IO ONE_BIT    MSK2  :  1; //!<[15] Alarm B minutes mask
      __IO uint32_t   HU    :  4; //!<[16] Hour units in BCD format
      __IO uint32_t   HT    :  2; //!<[20] Hour tens in BCD format
      __IO ONE_BIT    PM    :  1; //!<[22] AM/PM notation
      __IO ONE_BIT    MSK3  :  1; //!<[23] Alarm B hours mask
      __IO uint32_t   DU    :  4; //!<[24] Date units or day in BCD format
      __IO uint32_t   DT    :  2; //!<[28] Date tens in BCD format
      __IO ONE_BIT    WDSEL :  1; //!<[30] Week day selection
      __IO ONE_BIT    MSK4  :  1; //!<[31] Alarm B date mask
    } B;
    __IO uint32_t  R;
    explicit ALRMBR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ALRMBR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ALRMBR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union WPR_DEF      {  //!< write protection register
    struct {
      __O  uint32_t   KEY :  8; //!<[00] Write protection key
    } B;
    __O  uint32_t  R;
    explicit WPR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      WPR_DEF r;
      R = f (r);
    }
  };
  union SSR_DEF      {  //!< sub second register
    struct {
      __I  uint32_t   SS : 16; //!<[00] Sub second value
    } B;
    __I  uint32_t  R;

    explicit SSR_DEF (volatile SSR_DEF & o) noexcept { R = o.R; };
  };
  union SHIFTR_DEF   {  //!< shift control register
    struct {
      __O  uint32_t   SUBFS   : 15; //!<[00] Subtract a fraction of a second
           uint32_t   UNUSED0 : 16; //!<[15] 
      __O  ONE_BIT    ADD1S   :  1; //!<[31] Add one second
    } B;
    __O  uint32_t  R;
    explicit SHIFTR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      SHIFTR_DEF r;
      R = f (r);
    }
  };
  union TSTR_DEF     {  //!< time stamp time register
    struct {
      __I  uint32_t   SU      :  4; //!<[00] Second units in BCD format
      __I  uint32_t   ST      :  3; //!<[04] Second tens in BCD format
           ONE_BIT    UNUSED0 :  1; //!<[07] 
      __I  uint32_t   MNU     :  4; //!<[08] Minute units in BCD format
      __I  uint32_t   MNT     :  3; //!<[12] Minute tens in BCD format
           ONE_BIT    UNUSED1 :  1; //!<[15] 
      __I  uint32_t   HU      :  4; //!<[16] Hour units in BCD format
      __I  uint32_t   HT      :  2; //!<[20] Hour tens in BCD format
      __I  ONE_BIT    PM      :  1; //!<[22] AM/PM notation
    } B;
    __I  uint32_t  R;

    explicit TSTR_DEF (volatile TSTR_DEF & o) noexcept { R = o.R; };
  };
  union TSDR_DEF     {  //!< time stamp date register
    struct {
      __I  uint32_t   DU      :  4; //!<[00] Date units in BCD format
      __I  uint32_t   DT      :  2; //!<[04] Date tens in BCD format
           uint32_t   UNUSED0 :  2; //!<[06] 
      __I  uint32_t   MU      :  4; //!<[08] Month units in BCD format
      __I  ONE_BIT    MT      :  1; //!<[12] Month tens in BCD format
      __I  uint32_t   WDU     :  3; //!<[13] Week day units
    } B;
    __I  uint32_t  R;

    explicit TSDR_DEF (volatile TSDR_DEF & o) noexcept { R = o.R; };
  };
  union TSSSR_DEF    {  //!< timestamp sub second register
    struct {
      __I  uint32_t   SS : 16; //!<[00] Sub second value
    } B;
    __I  uint32_t  R;

    explicit TSSSR_DEF (volatile TSSSR_DEF & o) noexcept { R = o.R; };
  };
  union CALR_DEF     {  //!< calibration register
    struct {
      __IO uint32_t   CALM    :  9; //!<[00] Calibration minus
           uint32_t   UNUSED0 :  4; //!<[09] 
      __IO ONE_BIT    CALW16  :  1; //!<[13] Use a 16-second calibration cycle period
      __IO ONE_BIT    CALW8   :  1; //!<[14] Use an 8-second calibration cycle period
      __IO ONE_BIT    CALP    :  1; //!<[15] Increase frequency of RTC by 488.5 ppm
    } B;
    __IO uint32_t  R;
    explicit CALR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CALR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CALR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union TAMPCR_DEF   {  //!< tamper configuration register
    struct {
      __IO ONE_BIT    TAMP1E       :  1; //!<[00] Tamper 1 detection enable
      __IO ONE_BIT    TAMP1TRG     :  1; //!<[01] Active level for tamper 1
      __IO ONE_BIT    TAMPIE       :  1; //!<[02] Tamper interrupt enable
      __IO ONE_BIT    TAMP2E       :  1; //!<[03] Tamper 2 detection enable
      __IO ONE_BIT    TAMP2TRG     :  1; //!<[04] Active level for tamper 2
      __IO ONE_BIT    TAMP3E       :  1; //!<[05] Tamper 3 detection enable
      __IO ONE_BIT    TAMP3TRG     :  1; //!<[06] Active level for tamper 3
      __IO ONE_BIT    TAMPTS       :  1; //!<[07] Activate timestamp on tamper detection event
      __IO uint32_t   TAMPFREQ     :  3; //!<[08] Tamper sampling frequency
      __IO uint32_t   TAMPFLT      :  2; //!<[11] Tamper filter count
      __IO uint32_t   TAMPPRCH     :  2; //!<[13] Tamper precharge duration
      __IO ONE_BIT    TAMPPUDIS    :  1; //!<[15] TAMPER pull-up disable
      __IO ONE_BIT    TAMP1IE      :  1; //!<[16] Tamper 1 interrupt enable
      __IO ONE_BIT    TAMP1NOERASE :  1; //!<[17] Tamper 1 no erase
      __IO ONE_BIT    TAMP1MF      :  1; //!<[18] Tamper 1 mask flag
      __IO ONE_BIT    TAMP2IE      :  1; //!<[19] Tamper 2 interrupt enable
      __IO ONE_BIT    TAMP2NOERASE :  1; //!<[20] Tamper 2 no erase
      __IO ONE_BIT    TAMP2MF      :  1; //!<[21] Tamper 2 mask flag
      __IO ONE_BIT    TAMP3IE      :  1; //!<[22] Tamper 3 interrupt enable
      __IO ONE_BIT    TAMP3NOERASE :  1; //!<[23] Tamper 3 no erase
      __IO ONE_BIT    TAMP3MF      :  1; //!<[24] Tamper 3 mask flag
    } B;
    __IO uint32_t  R;
    explicit TAMPCR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      TAMPCR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      TAMPCR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ALRMASSR_DEF {  //!< alarm A sub second register
    struct {
      __IO uint32_t   SS      : 15; //!<[00] Sub seconds value
           uint32_t   UNUSED0 :  9; //!<[15] 
      __IO uint32_t   MASKSS  :  4; //!<[24] Mask the most-significant bits starting at this bit
    } B;
    __IO uint32_t  R;
    explicit ALRMASSR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ALRMASSR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ALRMASSR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ALRMBSSR_DEF {  //!< alarm B sub second register
    struct {
      __IO uint32_t   SS      : 15; //!<[00] Sub seconds value
           uint32_t   UNUSED0 :  9; //!<[15] 
      __IO uint32_t   MASKSS  :  4; //!<[24] Mask the most-significant bits starting at this bit
    } B;
    __IO uint32_t  R;
    explicit ALRMBSSR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ALRMBSSR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ALRMBSSR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union OR_DEF       {  //!< option register
    struct {
      __IO ONE_BIT  RTC_ALARM_TYPE :  1; //!<[00] RTC_ALARM on PC13 output type
      __IO ONE_BIT  RTC_OUT_RMP    :  1; //!<[01] RTC_OUT remap
    } B;
    __IO uint32_t  R;
    explicit OR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      OR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      OR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union BKP0R_DEF    {  //!< backup register
    struct {
      __IO uint32_t   BKP : 32; //!<[00] BKP
    } B;
    __IO uint32_t  R;
    explicit BKP0R_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      BKP0R_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      BKP0R_DEF r; r.R = R;
      R = f (r);
    }
  };
  union BKP1R_DEF    {  //!< backup register
    struct {
      __IO uint32_t   BKP : 32; //!<[00] BKP
    } B;
    __IO uint32_t  R;
    explicit BKP1R_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      BKP1R_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      BKP1R_DEF r; r.R = R;
      R = f (r);
    }
  };
  union BKP2R_DEF    {  //!< backup register
    struct {
      __IO uint32_t   BKP : 32; //!<[00] BKP
    } B;
    __IO uint32_t  R;
    explicit BKP2R_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      BKP2R_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      BKP2R_DEF r; r.R = R;
      R = f (r);
    }
  };
  union BKP3R_DEF    {  //!< backup register
    struct {
      __IO uint32_t   BKP : 32; //!<[00] BKP
    } B;
    __IO uint32_t  R;
    explicit BKP3R_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      BKP3R_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      BKP3R_DEF r; r.R = R;
      R = f (r);
    }
  };
  union BKP4R_DEF    {  //!< backup register
    struct {
      __IO uint32_t   BKP : 32; //!<[00] BKP
    } B;
    __IO uint32_t  R;
    explicit BKP4R_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      BKP4R_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      BKP4R_DEF r; r.R = R;
      R = f (r);
    }
  };
  union BKP5R_DEF    {  //!< backup register
    struct {
      __IO uint32_t   BKP : 32; //!<[00] BKP
    } B;
    __IO uint32_t  R;
    explicit BKP5R_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      BKP5R_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      BKP5R_DEF r; r.R = R;
      R = f (r);
    }
  };
  union BKP6R_DEF    {  //!< backup register
    struct {
      __IO uint32_t   BKP : 32; //!<[00] BKP
    } B;
    __IO uint32_t  R;
    explicit BKP6R_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      BKP6R_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      BKP6R_DEF r; r.R = R;
      R = f (r);
    }
  };
  union BKP7R_DEF    {  //!< backup register
    struct {
      __IO uint32_t   BKP : 32; //!<[00] BKP
    } B;
    __IO uint32_t  R;
    explicit BKP7R_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      BKP7R_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      BKP7R_DEF r; r.R = R;
      R = f (r);
    }
  };
  union BKP8R_DEF    {  //!< backup register
    struct {
      __IO uint32_t   BKP : 32; //!<[00] BKP
    } B;
    __IO uint32_t  R;
    explicit BKP8R_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      BKP8R_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      BKP8R_DEF r; r.R = R;
      R = f (r);
    }
  };
  union BKP9R_DEF    {  //!< backup register
    struct {
      __IO uint32_t   BKP : 32; //!<[00] BKP
    } B;
    __IO uint32_t  R;
    explicit BKP9R_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      BKP9R_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      BKP9R_DEF r; r.R = R;
      R = f (r);
    }
  };
  union BKP10R_DEF   {  //!< backup register
    struct {
      __IO uint32_t   BKP : 32; //!<[00] BKP
    } B;
    __IO uint32_t  R;
    explicit BKP10R_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      BKP10R_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      BKP10R_DEF r; r.R = R;
      R = f (r);
    }
  };
  union BKP11R_DEF   {  //!< backup register
    struct {
      __IO uint32_t   BKP : 32; //!<[00] BKP
    } B;
    __IO uint32_t  R;
    explicit BKP11R_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      BKP11R_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      BKP11R_DEF r; r.R = R;
      R = f (r);
    }
  };
  union BKP12R_DEF   {  //!< backup register
    struct {
      __IO uint32_t   BKP : 32; //!<[00] BKP
    } B;
    __IO uint32_t  R;
    explicit BKP12R_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      BKP12R_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      BKP12R_DEF r; r.R = R;
      R = f (r);
    }
  };
  union BKP13R_DEF   {  //!< backup register
    struct {
      __IO uint32_t   BKP : 32; //!<[00] BKP
    } B;
    __IO uint32_t  R;
    explicit BKP13R_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      BKP13R_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      BKP13R_DEF r; r.R = R;
      R = f (r);
    }
  };
  union BKP14R_DEF   {  //!< backup register
    struct {
      __IO uint32_t   BKP : 32; //!<[00] BKP
    } B;
    __IO uint32_t  R;
    explicit BKP14R_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      BKP14R_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      BKP14R_DEF r; r.R = R;
      R = f (r);
    }
  };
  union BKP15R_DEF   {  //!< backup register
    struct {
      __IO uint32_t   BKP : 32; //!<[00] BKP
    } B;
    __IO uint32_t  R;
    explicit BKP15R_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      BKP15R_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      BKP15R_DEF r; r.R = R;
      R = f (r);
    }
  };
  union BKP16R_DEF   {  //!< backup register
    struct {
      __IO uint32_t   BKP : 32; //!<[00] BKP
    } B;
    __IO uint32_t  R;
    explicit BKP16R_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      BKP16R_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      BKP16R_DEF r; r.R = R;
      R = f (r);
    }
  };
  union BKP17R_DEF   {  //!< backup register
    struct {
      __IO uint32_t   BKP : 32; //!<[00] BKP
    } B;
    __IO uint32_t  R;
    explicit BKP17R_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      BKP17R_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      BKP17R_DEF r; r.R = R;
      R = f (r);
    }
  };
  union BKP18R_DEF   {  //!< backup register
    struct {
      __IO uint32_t   BKP : 32; //!<[00] BKP
    } B;
    __IO uint32_t  R;
    explicit BKP18R_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      BKP18R_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      BKP18R_DEF r; r.R = R;
      R = f (r);
    }
  };
  union BKP19R_DEF   {  //!< backup register
    struct {
      __IO uint32_t   BKP : 32; //!<[00] BKP
    } B;
    __IO uint32_t  R;
    explicit BKP19R_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      BKP19R_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      BKP19R_DEF r; r.R = R;
      R = f (r);
    }
  };
  union BKP20R_DEF   {  //!< backup register
    struct {
      __IO uint32_t   BKP : 32; //!<[00] BKP
    } B;
    __IO uint32_t  R;
    explicit BKP20R_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      BKP20R_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      BKP20R_DEF r; r.R = R;
      R = f (r);
    }
  };
  union BKP21R_DEF   {  //!< backup register
    struct {
      __IO uint32_t   BKP : 32; //!<[00] BKP
    } B;
    __IO uint32_t  R;
    explicit BKP21R_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      BKP21R_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      BKP21R_DEF r; r.R = R;
      R = f (r);
    }
  };
  union BKP22R_DEF   {  //!< backup register
    struct {
      __IO uint32_t   BKP : 32; //!<[00] BKP
    } B;
    __IO uint32_t  R;
    explicit BKP22R_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      BKP22R_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      BKP22R_DEF r; r.R = R;
      R = f (r);
    }
  };
  union BKP23R_DEF   {  //!< backup register
    struct {
      __IO uint32_t   BKP : 32; //!<[00] BKP
    } B;
    __IO uint32_t  R;
    explicit BKP23R_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      BKP23R_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      BKP23R_DEF r; r.R = R;
      R = f (r);
    }
  };
  union BKP24R_DEF   {  //!< backup register
    struct {
      __IO uint32_t   BKP : 32; //!<[00] BKP
    } B;
    __IO uint32_t  R;
    explicit BKP24R_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      BKP24R_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      BKP24R_DEF r; r.R = R;
      R = f (r);
    }
  };
  union BKP25R_DEF   {  //!< backup register
    struct {
      __IO uint32_t   BKP : 32; //!<[00] BKP
    } B;
    __IO uint32_t  R;
    explicit BKP25R_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      BKP25R_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      BKP25R_DEF r; r.R = R;
      R = f (r);
    }
  };
  union BKP26R_DEF   {  //!< backup register
    struct {
      __IO uint32_t   BKP : 32; //!<[00] BKP
    } B;
    __IO uint32_t  R;
    explicit BKP26R_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      BKP26R_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      BKP26R_DEF r; r.R = R;
      R = f (r);
    }
  };
  union BKP27R_DEF   {  //!< backup register
    struct {
      __IO uint32_t   BKP : 32; //!<[00] BKP
    } B;
    __IO uint32_t  R;
    explicit BKP27R_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      BKP27R_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      BKP27R_DEF r; r.R = R;
      R = f (r);
    }
  };
  union BKP28R_DEF   {  //!< backup register
    struct {
      __IO uint32_t   BKP : 32; //!<[00] BKP
    } B;
    __IO uint32_t  R;
    explicit BKP28R_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      BKP28R_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      BKP28R_DEF r; r.R = R;
      R = f (r);
    }
  };
  union BKP29R_DEF   {  //!< backup register
    struct {
      __IO uint32_t   BKP : 32; //!<[00] BKP
    } B;
    __IO uint32_t  R;
    explicit BKP29R_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      BKP29R_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      BKP29R_DEF r; r.R = R;
      R = f (r);
    }
  };
  union BKP30R_DEF   {  //!< backup register
    struct {
      __IO uint32_t   BKP : 32; //!<[00] BKP
    } B;
    __IO uint32_t  R;
    explicit BKP30R_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      BKP30R_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      BKP30R_DEF r; r.R = R;
      R = f (r);
    }
  };
  union BKP31R_DEF   {  //!< backup register
    struct {
      __IO uint32_t   BKP : 32; //!<[00] BKP
    } B;
    __IO uint32_t  R;
    explicit BKP31R_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      BKP31R_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      BKP31R_DEF r; r.R = R;
      R = f (r);
    }
  };
  // PERIPHERAL RTC REGISTERS INSTANCES
  __IO TR_DEF                    TR ;  //!< [0000](04)[0x00000000]
  __IO DR_DEF                    DR ;  //!< [0004](04)[0x00002101]
  __IO CR_DEF                    CR ;  //!< [0008](04)[0x00000000]
  __IO ISR_DEF                  ISR ;  //!< [000c](04)[0x00000007]
  __IO PRER_DEF                PRER ;  //!< [0010](04)[0x007F00FF]
  __IO WUTR_DEF                WUTR ;  //!< [0014](04)[0x0000FFFF]
       uint32_t           UNUSED0 ;  //!< [0018](04)[0xFFFFFFFF]
  __IO ALRMAR_DEF            ALRMAR ;  //!< [001c](04)[0x00000000]
  __IO ALRMBR_DEF            ALRMBR ;  //!< [0020](04)[0x00000000]
  __O  WPR_DEF                  WPR ;  //!< [0024](04)[0x00000000]
  __I  SSR_DEF                  SSR ;  //!< [0028](04)[0x00000000]
  __O  SHIFTR_DEF            SHIFTR ;  //!< [002c](04)[0x00000000]
  __I  TSTR_DEF                TSTR ;  //!< [0030](04)[0x00000000]
  __I  TSDR_DEF                TSDR ;  //!< [0034](04)[0x00000000]
  __I  TSSSR_DEF              TSSSR ;  //!< [0038](04)[0x00000000]
  __IO CALR_DEF                CALR ;  //!< [003c](04)[0x00000000]
  __IO TAMPCR_DEF            TAMPCR ;  //!< [0040](04)[0x00000000]
  __IO ALRMASSR_DEF        ALRMASSR ;  //!< [0044](04)[0x00000000]
  __IO ALRMBSSR_DEF        ALRMBSSR ;  //!< [0048](04)[0x00000000]
  __IO OR_DEF                    OR ;  //!< [004c](04)[0x00000000]
  __IO BKP0R_DEF              BKP0R ;  //!< [0050](04)[0x00000000]
  __IO BKP1R_DEF              BKP1R ;  //!< [0054](04)[0x00000000]
  __IO BKP2R_DEF              BKP2R ;  //!< [0058](04)[0x00000000]
  __IO BKP3R_DEF              BKP3R ;  //!< [005c](04)[0x00000000]
  __IO BKP4R_DEF              BKP4R ;  //!< [0060](04)[0x00000000]
  __IO BKP5R_DEF              BKP5R ;  //!< [0064](04)[0x00000000]
  __IO BKP6R_DEF              BKP6R ;  //!< [0068](04)[0x00000000]
  __IO BKP7R_DEF              BKP7R ;  //!< [006c](04)[0x00000000]
  __IO BKP8R_DEF              BKP8R ;  //!< [0070](04)[0x00000000]
  __IO BKP9R_DEF              BKP9R ;  //!< [0074](04)[0x00000000]
  __IO BKP10R_DEF            BKP10R ;  //!< [0078](04)[0x00000000]
  __IO BKP11R_DEF            BKP11R ;  //!< [007c](04)[0x00000000]
  __IO BKP12R_DEF            BKP12R ;  //!< [0080](04)[0x00000000]
  __IO BKP13R_DEF            BKP13R ;  //!< [0084](04)[0x00000000]
  __IO BKP14R_DEF            BKP14R ;  //!< [0088](04)[0x00000000]
  __IO BKP15R_DEF            BKP15R ;  //!< [008c](04)[0x00000000]
  __IO BKP16R_DEF            BKP16R ;  //!< [0090](04)[0x00000000]
  __IO BKP17R_DEF            BKP17R ;  //!< [0094](04)[0x00000000]
  __IO BKP18R_DEF            BKP18R ;  //!< [0098](04)[0x00000000]
  __IO BKP19R_DEF            BKP19R ;  //!< [009c](04)[0x00000000]
  __IO BKP20R_DEF            BKP20R ;  //!< [00a0](04)[0x00000000]
  __IO BKP21R_DEF            BKP21R ;  //!< [00a4](04)[0x00000000]
  __IO BKP22R_DEF            BKP22R ;  //!< [00a8](04)[0x00000000]
  __IO BKP23R_DEF            BKP23R ;  //!< [00ac](04)[0x00000000]
  __IO BKP24R_DEF            BKP24R ;  //!< [00b0](04)[0x00000000]
  __IO BKP25R_DEF            BKP25R ;  //!< [00b4](04)[0x00000000]
  __IO BKP26R_DEF            BKP26R ;  //!< [00b8](04)[0x00000000]
  __IO BKP27R_DEF            BKP27R ;  //!< [00bc](04)[0x00000000]
  __IO BKP28R_DEF            BKP28R ;  //!< [00c0](04)[0x00000000]
  __IO BKP29R_DEF            BKP29R ;  //!< [00c4](04)[0x00000000]
  __IO BKP30R_DEF            BKP30R ;  //!< [00c8](04)[0x00000000]
  __IO BKP31R_DEF            BKP31R ;  //!< [00cc](04)[0x00000000]
}; /* total size = 0x0400, struct size = 0x00D0 */

// ////////////////////+++ SWPMI1 +-+//////////////////// //
struct SWPMI1_Type        { /*!< Single Wire Protocol Master Interface */
  union CR_DEF      {  //!< SWPMI Configuration/Control register
    struct {
      __IO ONE_BIT    RXDMA   :  1; //!<[00] Reception DMA enable
      __IO ONE_BIT    TXDMA   :  1; //!<[01] Transmission DMA enable
      __IO ONE_BIT    RXMODE  :  1; //!<[02] Reception buffering mode
      __IO ONE_BIT    TXMODE  :  1; //!<[03] Transmission buffering mode
      __IO ONE_BIT    LPBK    :  1; //!<[04] Loopback mode enable
      __IO ONE_BIT    SWPME   :  1; //!<[05] Single wire protocol master interface enable
           uint32_t   UNUSED0 :  4; //!<[06] 
      __IO ONE_BIT    DEACT   :  1; //!<[10] Single wire protocol master interface deactivate
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
  union BRR_DEF     {  //!< SWPMI Bitrate register
    struct {
      __IO uint32_t   BR :  6; //!<[00] Bitrate prescaler
    } B;
    __IO uint32_t  R;
    explicit BRR_DEF () noexcept { R = 0x00000001u; }
    template<typename F> void setbit (F f) volatile {
      BRR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      BRR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ISR_DEF     {  //!< SWPMI Interrupt and Status register
    struct {
      __I  ONE_BIT  RXBFF  :  1; //!<[00] Receive buffer full flag
      __I  ONE_BIT  TXBEF  :  1; //!<[01] Transmit buffer empty flag
      __I  ONE_BIT  RXBERF :  1; //!<[02] Receive CRC error flag
      __I  ONE_BIT  RXOVRF :  1; //!<[03] Receive overrun error flag
      __I  ONE_BIT  TXUNRF :  1; //!<[04] Transmit underrun error flag
      __I  ONE_BIT  RXNE   :  1; //!<[05] Receive data register not empty
      __I  ONE_BIT  TXE    :  1; //!<[06] Transmit data register empty
      __I  ONE_BIT  TCF    :  1; //!<[07] Transfer complete flag
      __I  ONE_BIT  SRF    :  1; //!<[08] Slave resume flag
      __I  ONE_BIT  SUSP   :  1; //!<[09] SUSPEND flag
      __I  ONE_BIT  DEACTF :  1; //!<[10] DEACTIVATED flag
    } B;
    __I  uint32_t  R;

    explicit ISR_DEF (volatile ISR_DEF & o) noexcept { R = o.R; };
  };
  union ICR_DEF     {  //!< SWPMI Interrupt Flag Clear register
    struct {
      __O  ONE_BIT    CRXBFF  :  1; //!<[00] Clear receive buffer full flag
      __O  ONE_BIT    CTXBEF  :  1; //!<[01] Clear transmit buffer empty flag
      __O  ONE_BIT    CRXBERF :  1; //!<[02] Clear receive CRC error flag
      __O  ONE_BIT    CRXOVRF :  1; //!<[03] Clear receive overrun error flag
      __O  ONE_BIT    CTXUNRF :  1; //!<[04] Clear transmit underrun error flag
           uint32_t   UNUSED0 :  2; //!<[05] 
      __O  ONE_BIT    CTCF    :  1; //!<[07] Clear transfer complete flag
      __O  ONE_BIT    CSRF    :  1; //!<[08] Clear slave resume flag
    } B;
    __O  uint32_t  R;
    explicit ICR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ICR_DEF r;
      R = f (r);
    }
  };
  union IER_DEF     {  //!< SWPMI Interrupt Enable register
    struct {
      __IO ONE_BIT  RXBFIE  :  1; //!<[00] Receive buffer full interrupt enable
      __IO ONE_BIT  TXBEIE  :  1; //!<[01] Transmit buffer empty interrupt enable
      __IO ONE_BIT  RXBERIE :  1; //!<[02] Receive CRC error interrupt enable
      __IO ONE_BIT  RXOVRIE :  1; //!<[03] Receive overrun error interrupt enable
      __IO ONE_BIT  TXUNRIE :  1; //!<[04] Transmit underrun error interrupt enable
      __IO ONE_BIT  RIE     :  1; //!<[05] Receive interrupt enable
      __IO ONE_BIT  TIE     :  1; //!<[06] Transmit interrupt enable
      __IO ONE_BIT  TCIE    :  1; //!<[07] Transmit complete interrupt enable
      __IO ONE_BIT  SRIE    :  1; //!<[08] Slave resume interrupt enable
    } B;
    __IO uint32_t  R;
    explicit IER_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IER_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      IER_DEF r; r.R = R;
      R = f (r);
    }
  };
  union RFL_DEF     {  //!< SWPMI Receive Frame Length register
    struct {
      __I  uint32_t   RFL :  5; //!<[00] Receive frame length
    } B;
    __I  uint32_t  R;

    explicit RFL_DEF (volatile RFL_DEF & o) noexcept { R = o.R; };
  };
  union TDR_DEF     {  //!< SWPMI Transmit data register
    struct {
      __O  uint32_t   TD : 32; //!<[00] Transmit data
    } B;
    __O  uint32_t  R;
    explicit TDR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      TDR_DEF r;
      R = f (r);
    }
  };
  union RDR_DEF     {  //!< SWPMI Receive data register
    struct {
      __I  uint32_t   RD : 32; //!<[00] received data
    } B;
    __I  uint32_t  R;

    explicit RDR_DEF (volatile RDR_DEF & o) noexcept { R = o.R; };
  };
  // PERIPHERAL SWPMI1 REGISTERS INSTANCES
  __IO CR_DEF                   CR ;  //!< [0000](04)[0x00000000]
  __IO BRR_DEF                 BRR ;  //!< [0004](04)[0x00000001]
       uint32_t          UNUSED0 ;  //!< [0008](04)[0xFFFFFFFF]
  __I  ISR_DEF                 ISR ;  //!< [000c](04)[0x000002C2]
  __O  ICR_DEF                 ICR ;  //!< [0010](04)[0x00000000]
  __IO IER_DEF                 IER ;  //!< [0014](04)[0x00000000]
  __I  RFL_DEF                 RFL ;  //!< [0018](04)[0x00000000]
  __O  TDR_DEF                 TDR ;  //!< [001c](04)[0x00000000]
  __I  RDR_DEF                 RDR ;  //!< [0020](04)[0x00000000]
}; /* total size = 0x0400, struct size = 0x0024 */

// ////////////////////+++ OPAMP +-+//////////////////// //
struct OPAMP_Type         { /*!< Operational amplifiers */
  union OPAMP1_CSR_DEF   {  //!< OPAMP1 control/status register
    struct {
      __IO ONE_BIT    OPAEN     :  1; //!<[00] Operational amplifier Enable
      __IO ONE_BIT    OPALPM    :  1; //!<[01] Operational amplifier Low Power Mode
      __IO uint32_t   OPAMODE   :  2; //!<[02] Operational amplifier PGA mode
      __IO uint32_t   PGA_GAIN  :  2; //!<[04] Operational amplifier Programmable amplifier gain value
           uint32_t   UNUSED0   :  2; //!<[06] 
      __IO uint32_t   VM_SEL    :  2; //!<[08] Inverting input selection
      __IO ONE_BIT    VP_SEL    :  1; //!<[10] Non inverted input selection
           ONE_BIT    UNUSED1   :  1; //!<[11] 
      __IO ONE_BIT    CALON     :  1; //!<[12] Calibration mode enabled
      __IO ONE_BIT    CALSEL    :  1; //!<[13] Calibration selection
      __IO ONE_BIT    USERTRIM  :  1; //!<[14] allows to switch from AOP offset trimmed values to AOP offset
      __IO ONE_BIT    CALOUT    :  1; //!<[15] Operational amplifier calibration output
           uint32_t   UNUSED2   : 15; //!<[16] 
      __IO ONE_BIT    OPA_RANGE :  1; //!<[31] Operational amplifier power supply range for stability
    } B;
    __IO uint32_t  R;
    explicit OPAMP1_CSR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      OPAMP1_CSR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      OPAMP1_CSR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union OPAMP1_OTR_DEF   {  //!< OPAMP1 offset trimming register in normal mode
    struct {
      __IO uint32_t   TRIMOFFSETN :  5; //!<[00] Trim for NMOS differential pairs
           uint32_t   UNUSED0     :  3; //!<[05] 
      __IO uint32_t   TRIMOFFSETP :  5; //!<[08] Trim for PMOS differential pairs
    } B;
    __IO uint32_t  R;
    explicit OPAMP1_OTR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      OPAMP1_OTR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      OPAMP1_OTR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union OPAMP1_LPOTR_DEF {  //!< OPAMP1 offset trimming register in low-power mode
    struct {
      __IO uint32_t   TRIMLPOFFSETN :  5; //!<[00] Trim for NMOS differential pairs
           uint32_t   UNUSED0       :  3; //!<[05] 
      __IO uint32_t   TRIMLPOFFSETP :  5; //!<[08] Trim for PMOS differential pairs
    } B;
    __IO uint32_t  R;
    explicit OPAMP1_LPOTR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      OPAMP1_LPOTR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      OPAMP1_LPOTR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union OPAMP2_CSR_DEF   {  //!< OPAMP2 control/status register
    struct {
      __IO ONE_BIT    OPAEN    :  1; //!<[00] Operational amplifier Enable
      __IO ONE_BIT    OPALPM   :  1; //!<[01] Operational amplifier Low Power Mode
      __IO uint32_t   OPAMODE  :  2; //!<[02] Operational amplifier PGA mode
      __IO uint32_t   PGA_GAIN :  2; //!<[04] Operational amplifier Programmable amplifier gain value
           uint32_t   UNUSED0  :  2; //!<[06] 
      __IO uint32_t   VM_SEL   :  2; //!<[08] Inverting input selection
      __IO ONE_BIT    VP_SEL   :  1; //!<[10] Non inverted input selection
           ONE_BIT    UNUSED1  :  1; //!<[11] 
      __IO ONE_BIT    CALON    :  1; //!<[12] Calibration mode enabled
      __IO ONE_BIT    CALSEL   :  1; //!<[13] Calibration selection
      __IO ONE_BIT    USERTRIM :  1; //!<[14] allows to switch from AOP offset trimmed values to AOP offset
      __IO ONE_BIT    CALOUT   :  1; //!<[15] Operational amplifier calibration output
    } B;
    __IO uint32_t  R;
    explicit OPAMP2_CSR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      OPAMP2_CSR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      OPAMP2_CSR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union OPAMP2_OTR_DEF   {  //!< OPAMP2 offset trimming register in normal mode
    struct {
      __IO uint32_t   TRIMOFFSETN :  5; //!<[00] Trim for NMOS differential pairs
           uint32_t   UNUSED0     :  3; //!<[05] 
      __IO uint32_t   TRIMOFFSETP :  5; //!<[08] Trim for PMOS differential pairs
    } B;
    __IO uint32_t  R;
    explicit OPAMP2_OTR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      OPAMP2_OTR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      OPAMP2_OTR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union OPAMP2_LPOTR_DEF {  //!< OPAMP2 offset trimming register in low-power mode
    struct {
      __IO uint32_t   TRIMLPOFFSETN :  5; //!<[00] Trim for NMOS differential pairs
           uint32_t   UNUSED0       :  3; //!<[05] 
      __IO uint32_t   TRIMLPOFFSETP :  5; //!<[08] Trim for PMOS differential pairs
    } B;
    __IO uint32_t  R;
    explicit OPAMP2_LPOTR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      OPAMP2_LPOTR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      OPAMP2_LPOTR_DEF r; r.R = R;
      R = f (r);
    }
  };
  // PERIPHERAL OPAMP REGISTERS INSTANCES
  __IO OPAMP1_CSR_DEF        OPAMP1_CSR ;  //!< [0000](04)[0x00000000]
  __IO OPAMP1_OTR_DEF        OPAMP1_OTR ;  //!< [0004](04)[0x00000000]
  __IO OPAMP1_LPOTR_DEF    OPAMP1_LPOTR ;  //!< [0008](04)[0x00000000]
       uint32_t               UNUSED0 ;  //!< [000c](04)[0xFFFFFFFF]
  __IO OPAMP2_CSR_DEF        OPAMP2_CSR ;  //!< [0010](04)[0x00000000]
  __IO OPAMP2_OTR_DEF        OPAMP2_OTR ;  //!< [0014](04)[0x00000000]
  __IO OPAMP2_LPOTR_DEF    OPAMP2_LPOTR ;  //!< [0018](04)[0x00000000]
}; /* total size = 0x0400, struct size = 0x001C */

// ////////////////////+++ CRS +-+//////////////////// //
struct CRS_Type           { /*!< Clock recovery system */
  union CR_DEF   {  //!< control register
    struct {
      __IO ONE_BIT    SYNCOKIE   :  1; //!<[00] SYNC event OK interrupt enable
      __IO ONE_BIT    SYNCWARNIE :  1; //!<[01] SYNC warning interrupt enable
      __IO ONE_BIT    ERRIE      :  1; //!<[02] Synchronization or trimming error interrupt enable
      __IO ONE_BIT    ESYNCIE    :  1; //!<[03] Expected SYNC interrupt enable
           ONE_BIT    UNUSED0    :  1; //!<[04] 
      __IO ONE_BIT    CEN        :  1; //!<[05] Frequency error counter enable
      __IO ONE_BIT    AUTOTRIMEN :  1; //!<[06] Automatic trimming enable
      __IO ONE_BIT    SWSYNC     :  1; //!<[07] Generate software SYNC event
      __IO uint32_t   TRIM       :  6; //!<[08] HSI48 oscillator smooth trimming
    } B;
    __IO uint32_t  R;
    explicit CR_DEF () noexcept { R = 0x00002000u; }
    template<typename F> void setbit (F f) volatile {
      CR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CFGR_DEF {  //!< configuration register
    struct {
      __IO uint32_t   RELOAD  : 16; //!<[00] Counter reload value
      __IO uint32_t   FELIM   :  8; //!<[16] Frequency error limit
      __IO uint32_t   SYNCDIV :  3; //!<[24] SYNC divider
           ONE_BIT    UNUSED0 :  1; //!<[27] 
      __IO uint32_t   SYNCSRC :  2; //!<[28] SYNC signal source selection
           ONE_BIT    UNUSED1 :  1; //!<[30] 
      __IO ONE_BIT    SYNCPOL :  1; //!<[31] SYNC polarity selection
    } B;
    __IO uint32_t  R;
    explicit CFGR_DEF () noexcept { R = 0x2022bb7fu; }
    template<typename F> void setbit (F f) volatile {
      CFGR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CFGR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ISR_DEF  {  //!< interrupt and status register
    struct {
      __I  ONE_BIT    SYNCOKF   :  1; //!<[00] SYNC event OK flag
      __I  ONE_BIT    SYNCWARNF :  1; //!<[01] SYNC warning flag
      __I  ONE_BIT    ERRF      :  1; //!<[02] Error flag
      __I  ONE_BIT    ESYNCF    :  1; //!<[03] Expected SYNC flag
           uint32_t   UNUSED0   :  4; //!<[04] 
      __I  ONE_BIT    SYNCERR   :  1; //!<[08] SYNC error
      __I  ONE_BIT    SYNCMISS  :  1; //!<[09] SYNC missed
      __I  ONE_BIT    TRIMOVF   :  1; //!<[10] Trimming overflow or underflow
           uint32_t   UNUSED1   :  4; //!<[11] 
      __I  ONE_BIT    FEDIR     :  1; //!<[15] Frequency error direction
      __I  uint32_t   FECAP     : 16; //!<[16] Frequency error capture
    } B;
    __I  uint32_t  R;

    explicit ISR_DEF (volatile ISR_DEF & o) noexcept { R = o.R; };
  };
  union ICR_DEF  {  //!< interrupt flag clear register
    struct {
      __IO ONE_BIT  SYNCOKC   :  1; //!<[00] SYNC event OK clear flag
      __IO ONE_BIT  SYNCWARNC :  1; //!<[01] SYNC warning clear flag
      __IO ONE_BIT  ERRC      :  1; //!<[02] Error clear flag
      __IO ONE_BIT  ESYNCC    :  1; //!<[03] Expected SYNC clear flag
    } B;
    __IO uint32_t  R;
    explicit ICR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ICR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ICR_DEF r; r.R = R;
      R = f (r);
    }
  };
  // PERIPHERAL CRS REGISTERS INSTANCES
  __IO CR_DEF                CR ;  //!< [0000](04)[0x00002000]
  __IO CFGR_DEF            CFGR ;  //!< [0004](04)[0x2022BB7F]
  __I  ISR_DEF              ISR ;  //!< [0008](04)[0x00000000]
  __IO ICR_DEF              ICR ;  //!< [000c](04)[0x00000000]
}; /* total size = 0x0400, struct size = 0x0010 */

// ////////////////////+++ USB_SRAM +-+//////////////////// //
struct USB_SRAM_Type      { /*!< Universal serial bus full-speed device interface */
  union EP0R_DEF    {  //!< endpoint 0 register
    struct {
      __IO uint32_t   EA      :  4; //!<[00] Endpoint address
      __IO uint32_t   STAT_TX :  2; //!<[04] Status bits, for transmission transfers
      __IO ONE_BIT    DTOG_TX :  1; //!<[06] Data Toggle, for transmission transfers
      __IO ONE_BIT    CTR_TX  :  1; //!<[07] Correct Transfer for transmission
      __IO ONE_BIT    EP_KIND :  1; //!<[08] Endpoint kind
      __IO uint32_t   EP_TYPE :  2; //!<[09] Endpoint type
      __IO ONE_BIT    SETUP   :  1; //!<[11] Setup transaction completed
      __IO uint32_t   STAT_RX :  2; //!<[12] Status bits, for reception transfers
      __IO ONE_BIT    DTOG_RX :  1; //!<[14] Data Toggle, for reception transfers
      __IO ONE_BIT    CTR_RX  :  1; //!<[15] Correct transfer for reception
    } B;
    __IO uint32_t  R;
    explicit EP0R_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      EP0R_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      EP0R_DEF r; r.R = R;
      R = f (r);
    }
  };
  union EP1R_DEF    {  //!< endpoint 1 register
    struct {
      __IO uint32_t   EA      :  4; //!<[00] Endpoint address
      __IO uint32_t   STAT_TX :  2; //!<[04] Status bits, for transmission transfers
      __IO ONE_BIT    DTOG_TX :  1; //!<[06] Data Toggle, for transmission transfers
      __IO ONE_BIT    CTR_TX  :  1; //!<[07] Correct Transfer for transmission
      __IO ONE_BIT    EP_KIND :  1; //!<[08] Endpoint kind
      __IO uint32_t   EP_TYPE :  2; //!<[09] Endpoint type
      __IO ONE_BIT    SETUP   :  1; //!<[11] Setup transaction completed
      __IO uint32_t   STAT_RX :  2; //!<[12] Status bits, for reception transfers
      __IO ONE_BIT    DTOG_RX :  1; //!<[14] Data Toggle, for reception transfers
      __IO ONE_BIT    CTR_RX  :  1; //!<[15] Correct transfer for reception
    } B;
    __IO uint32_t  R;
    explicit EP1R_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      EP1R_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      EP1R_DEF r; r.R = R;
      R = f (r);
    }
  };
  union EP2R_DEF    {  //!< endpoint 2 register
    struct {
      __IO uint32_t   EA      :  4; //!<[00] Endpoint address
      __IO uint32_t   STAT_TX :  2; //!<[04] Status bits, for transmission transfers
      __IO ONE_BIT    DTOG_TX :  1; //!<[06] Data Toggle, for transmission transfers
      __IO ONE_BIT    CTR_TX  :  1; //!<[07] Correct Transfer for transmission
      __IO ONE_BIT    EP_KIND :  1; //!<[08] Endpoint kind
      __IO uint32_t   EP_TYPE :  2; //!<[09] Endpoint type
      __IO ONE_BIT    SETUP   :  1; //!<[11] Setup transaction completed
      __IO uint32_t   STAT_RX :  2; //!<[12] Status bits, for reception transfers
      __IO ONE_BIT    DTOG_RX :  1; //!<[14] Data Toggle, for reception transfers
      __IO ONE_BIT    CTR_RX  :  1; //!<[15] Correct transfer for reception
    } B;
    __IO uint32_t  R;
    explicit EP2R_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      EP2R_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      EP2R_DEF r; r.R = R;
      R = f (r);
    }
  };
  union EP3R_DEF    {  //!< endpoint 3 register
    struct {
      __IO uint32_t   EA      :  4; //!<[00] Endpoint address
      __IO uint32_t   STAT_TX :  2; //!<[04] Status bits, for transmission transfers
      __IO ONE_BIT    DTOG_TX :  1; //!<[06] Data Toggle, for transmission transfers
      __IO ONE_BIT    CTR_TX  :  1; //!<[07] Correct Transfer for transmission
      __IO ONE_BIT    EP_KIND :  1; //!<[08] Endpoint kind
      __IO uint32_t   EP_TYPE :  2; //!<[09] Endpoint type
      __IO ONE_BIT    SETUP   :  1; //!<[11] Setup transaction completed
      __IO uint32_t   STAT_RX :  2; //!<[12] Status bits, for reception transfers
      __IO ONE_BIT    DTOG_RX :  1; //!<[14] Data Toggle, for reception transfers
      __IO ONE_BIT    CTR_RX  :  1; //!<[15] Correct transfer for reception
    } B;
    __IO uint32_t  R;
    explicit EP3R_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      EP3R_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      EP3R_DEF r; r.R = R;
      R = f (r);
    }
  };
  union EP4R_DEF    {  //!< endpoint 4 register
    struct {
      __IO uint32_t   EA      :  4; //!<[00] Endpoint address
      __IO uint32_t   STAT_TX :  2; //!<[04] Status bits, for transmission transfers
      __IO ONE_BIT    DTOG_TX :  1; //!<[06] Data Toggle, for transmission transfers
      __IO ONE_BIT    CTR_TX  :  1; //!<[07] Correct Transfer for transmission
      __IO ONE_BIT    EP_KIND :  1; //!<[08] Endpoint kind
      __IO uint32_t   EP_TYPE :  2; //!<[09] Endpoint type
      __IO ONE_BIT    SETUP   :  1; //!<[11] Setup transaction completed
      __IO uint32_t   STAT_RX :  2; //!<[12] Status bits, for reception transfers
      __IO ONE_BIT    DTOG_RX :  1; //!<[14] Data Toggle, for reception transfers
      __IO ONE_BIT    CTR_RX  :  1; //!<[15] Correct transfer for reception
    } B;
    __IO uint32_t  R;
    explicit EP4R_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      EP4R_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      EP4R_DEF r; r.R = R;
      R = f (r);
    }
  };
  union EP5R_DEF    {  //!< endpoint 5 register
    struct {
      __IO uint32_t   EA      :  4; //!<[00] Endpoint address
      __IO uint32_t   STAT_TX :  2; //!<[04] Status bits, for transmission transfers
      __IO ONE_BIT    DTOG_TX :  1; //!<[06] Data Toggle, for transmission transfers
      __IO ONE_BIT    CTR_TX  :  1; //!<[07] Correct Transfer for transmission
      __IO ONE_BIT    EP_KIND :  1; //!<[08] Endpoint kind
      __IO uint32_t   EP_TYPE :  2; //!<[09] Endpoint type
      __IO ONE_BIT    SETUP   :  1; //!<[11] Setup transaction completed
      __IO uint32_t   STAT_RX :  2; //!<[12] Status bits, for reception transfers
      __IO ONE_BIT    DTOG_RX :  1; //!<[14] Data Toggle, for reception transfers
      __IO ONE_BIT    CTR_RX  :  1; //!<[15] Correct transfer for reception
    } B;
    __IO uint32_t  R;
    explicit EP5R_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      EP5R_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      EP5R_DEF r; r.R = R;
      R = f (r);
    }
  };
  union EP6R_DEF    {  //!< endpoint 6 register
    struct {
      __IO uint32_t   EA      :  4; //!<[00] Endpoint address
      __IO uint32_t   STAT_TX :  2; //!<[04] Status bits, for transmission transfers
      __IO ONE_BIT    DTOG_TX :  1; //!<[06] Data Toggle, for transmission transfers
      __IO ONE_BIT    CTR_TX  :  1; //!<[07] Correct Transfer for transmission
      __IO ONE_BIT    EP_KIND :  1; //!<[08] Endpoint kind
      __IO uint32_t   EP_TYPE :  2; //!<[09] Endpoint type
      __IO ONE_BIT    SETUP   :  1; //!<[11] Setup transaction completed
      __IO uint32_t   STAT_RX :  2; //!<[12] Status bits, for reception transfers
      __IO ONE_BIT    DTOG_RX :  1; //!<[14] Data Toggle, for reception transfers
      __IO ONE_BIT    CTR_RX  :  1; //!<[15] Correct transfer for reception
    } B;
    __IO uint32_t  R;
    explicit EP6R_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      EP6R_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      EP6R_DEF r; r.R = R;
      R = f (r);
    }
  };
  union EP7R_DEF    {  //!< endpoint 7 register
    struct {
      __IO uint32_t   EA      :  4; //!<[00] Endpoint address
      __IO uint32_t   STAT_TX :  2; //!<[04] Status bits, for transmission transfers
      __IO ONE_BIT    DTOG_TX :  1; //!<[06] Data Toggle, for transmission transfers
      __IO ONE_BIT    CTR_TX  :  1; //!<[07] Correct Transfer for transmission
      __IO ONE_BIT    EP_KIND :  1; //!<[08] Endpoint kind
      __IO uint32_t   EP_TYPE :  2; //!<[09] Endpoint type
      __IO ONE_BIT    SETUP   :  1; //!<[11] Setup transaction completed
      __IO uint32_t   STAT_RX :  2; //!<[12] Status bits, for reception transfers
      __IO ONE_BIT    DTOG_RX :  1; //!<[14] Data Toggle, for reception transfers
      __IO ONE_BIT    CTR_RX  :  1; //!<[15] Correct transfer for reception
    } B;
    __IO uint32_t  R;
    explicit EP7R_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      EP7R_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      EP7R_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CNTR_DEF    {  //!< control register
    struct {
      __IO ONE_BIT  FRES     :  1; //!<[00] Force USB Reset
      __IO ONE_BIT  PDWN     :  1; //!<[01] Power down
      __IO ONE_BIT  LPMODE   :  1; //!<[02] Low-power mode
      __IO ONE_BIT  FSUSP    :  1; //!<[03] Force suspend
      __IO ONE_BIT  RESUME   :  1; //!<[04] Resume request
      __IO ONE_BIT  L1RESUME :  1; //!<[05] LPM L1 Resume request
           ONE_BIT  UNUSED0  :  1; //!<[06] 
      __IO ONE_BIT  L1REQM   :  1; //!<[07] LPM L1 state request interrupt mask
      __IO ONE_BIT  ESOFM    :  1; //!<[08] Expected start of frame interrupt mask
      __IO ONE_BIT  SOFM     :  1; //!<[09] Start of frame interrupt mask
      __IO ONE_BIT  RESETM   :  1; //!<[10] USB reset interrupt mask
      __IO ONE_BIT  SUSPM    :  1; //!<[11] Suspend mode interrupt mask
      __IO ONE_BIT  WKUPM    :  1; //!<[12] Wakeup interrupt mask
      __IO ONE_BIT  ERRM     :  1; //!<[13] Error interrupt mask
      __IO ONE_BIT  PMAOVRM  :  1; //!<[14] Packet memory area over / underrun interrupt mask
      __IO ONE_BIT  CTRM     :  1; //!<[15] Correct transfer interrupt mask
    } B;
    __IO uint32_t  R;
    explicit CNTR_DEF () noexcept { R = 0x00000003u; }
    template<typename F> void setbit (F f) volatile {
      CNTR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CNTR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ISTR_DEF    {  //!< interrupt status register
    struct {
      __I  uint32_t   EP_ID   :  4; //!<[00] Endpoint Identifier
      __I  ONE_BIT    DIR     :  1; //!<[04] Direction of transaction
           uint32_t   UNUSED0 :  2; //!<[05] 
      __IO ONE_BIT    L1REQ   :  1; //!<[07] LPM L1 state request
      __IO ONE_BIT    ESOF    :  1; //!<[08] Expected start frame
      __IO ONE_BIT    SOF     :  1; //!<[09] start of frame
      __IO ONE_BIT    RESET   :  1; //!<[10] reset request
      __IO ONE_BIT    SUSP    :  1; //!<[11] Suspend mode request
      __IO ONE_BIT    WKUP    :  1; //!<[12] Wakeup
      __IO ONE_BIT    ERR     :  1; //!<[13] Error
      __IO ONE_BIT    PMAOVR  :  1; //!<[14] Packet memory area over / underrun
      __I  ONE_BIT    CTR     :  1; //!<[15] Correct transfer
    } B;
    __IO uint32_t  R;
    explicit ISTR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ISTR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ISTR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union FNR_DEF     {  //!< frame number register
    struct {
      __I  uint32_t   FN   : 11; //!<[00] Frame number
      __I  uint32_t   LSOF :  2; //!<[11] Lost SOF
      __I  ONE_BIT    LCK  :  1; //!<[13] Locked
      __I  ONE_BIT    RXDM :  1; //!<[14] Receive data - line status
      __I  ONE_BIT    RXDP :  1; //!<[15] Receive data + line status
    } B;
    __I  uint32_t  R;

    explicit FNR_DEF (volatile FNR_DEF & o) noexcept { R = o.R; };
  };
  union DADDR_DEF   {  //!< device address
    struct {
      __IO uint32_t   ADD :  7; //!<[00] Device address
      __IO ONE_BIT    EF  :  1; //!<[07] Enable function
    } B;
    __IO uint32_t  R;
    explicit DADDR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DADDR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DADDR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union BTABLE_DEF  {  //!< Buffer table address
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
  union LPMCSR_DEF  {  //!< LPM control and status register
    struct {
      __IO ONE_BIT    LPMEN   :  1; //!<[00] LPM support enable
      __IO ONE_BIT    LPMACK  :  1; //!<[01] LPM Token acknowledge enable
           ONE_BIT    UNUSED0 :  1; //!<[02] 
      __I  ONE_BIT    REMWAKE :  1; //!<[03] bRemoteWake value
      __I  uint32_t   BESL    :  4; //!<[04] BESL value
    } B;
    __IO uint32_t  R;
    explicit LPMCSR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      LPMCSR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      LPMCSR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union BCDR_DEF    {  //!< Battery charging detector
    struct {
      __IO ONE_BIT    BCDEN   :  1; //!<[00] Battery charging detector
      __IO ONE_BIT    DCDEN   :  1; //!<[01] Data contact detection
      __IO ONE_BIT    PDEN    :  1; //!<[02] Primary detection
      __IO ONE_BIT    SDEN    :  1; //!<[03] Secondary detection
      __I  ONE_BIT    DCDET   :  1; //!<[04] Data contact detection
      __I  ONE_BIT    PDET    :  1; //!<[05] Primary detection
      __I  ONE_BIT    SDET    :  1; //!<[06] Secondary detection
      __I  ONE_BIT    PS2DET  :  1; //!<[07] DM pull-up detection status
           uint32_t   UNUSED0 :  7; //!<[08] 
      __IO ONE_BIT    DPPU    :  1; //!<[15] DP pull-up control
    } B;
    __IO uint32_t  R;
    explicit BCDR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      BCDR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      BCDR_DEF r; r.R = R;
      R = f (r);
    }
  };
  // PERIPHERAL USB_SRAM REGISTERS INSTANCES
  __IO EP0R_DEF               EP0R ;  //!< [0000](04)[0x00000000]
  __IO EP1R_DEF               EP1R ;  //!< [0004](04)[0x00000000]
  __IO EP2R_DEF               EP2R ;  //!< [0008](04)[0x00000000]
  __IO EP3R_DEF               EP3R ;  //!< [000c](04)[0x00000000]
  __IO EP4R_DEF               EP4R ;  //!< [0010](04)[0x00000000]
  __IO EP5R_DEF               EP5R ;  //!< [0014](04)[0x00000000]
  __IO EP6R_DEF               EP6R ;  //!< [0018](04)[0x00000000]
  __IO EP7R_DEF               EP7R ;  //!< [001c](04)[0x00000000]
       uint32_t          UNUSED0 [8];  //!< [0020](20)[0xFFFFFFFF]
  __IO CNTR_DEF               CNTR ;  //!< [0040](04)[0x00000003]
  __IO ISTR_DEF               ISTR ;  //!< [0044](04)[0x00000000]
  __I  FNR_DEF                 FNR ;  //!< [0048](04)[0x00000000]
  __IO DADDR_DEF             DADDR ;  //!< [004c](04)[0x00000000]
  __IO BTABLE_DEF           BTABLE ;  //!< [0050](04)[0x00000000]
  __IO LPMCSR_DEF           LPMCSR ;  //!< [0054](04)[0x00000000]
  __IO BCDR_DEF               BCDR ;  //!< [0058](04)[0x00000000]
}; /* total size = 0x0400, struct size = 0x005C */

// ////////////////////+++ DFSDM +-+//////////////////// //
struct DFSDM_Type         { /*!< Digital filter for sigma delta modulators */
  union CH0CFGR1_DEF          {  //!< channel configuration y register
    struct {
      __IO uint32_t   SITP     :  2; //!<[00] SITP
      __IO uint32_t   SPICKSEL :  2; //!<[02] SPICKSEL
           ONE_BIT    UNUSED0  :  1; //!<[04] 
      __IO ONE_BIT    SCDEN    :  1; //!<[05] SCDEN
      __IO ONE_BIT    CKABEN   :  1; //!<[06] CKABEN
      __IO ONE_BIT    CHEN     :  1; //!<[07] CHEN
      __IO ONE_BIT    CHINSEL  :  1; //!<[08] CHINSEL
           uint32_t   UNUSED1  :  3; //!<[09] 
      __IO uint32_t   DATMPX   :  2; //!<[12] DATMPX
      __IO uint32_t   DATPACK  :  2; //!<[14] DATPACK
      __IO uint32_t   CKOUTDIV :  8; //!<[16] CKOUTDIV
           uint32_t   UNUSED2  :  6; //!<[24] 
      __IO ONE_BIT    CKOUTSRC :  1; //!<[30] CKOUTSRC
      __IO ONE_BIT    DFSDMEN  :  1; //!<[31] DFSDMEN
    } B;
    __IO uint32_t  R;
    explicit CH0CFGR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CH0CFGR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CH0CFGR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CH0CFGR2_DEF          {  //!< channel configuration y register
    struct {
           uint32_t   UNUSED0 :  3; //!<[00] 
      __IO uint32_t   DTRBS   :  5; //!<[03] DTRBS
      __IO uint32_t   OFFSET  : 24; //!<[08] OFFSET
    } B;
    __IO uint32_t  R;
    explicit CH0CFGR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CH0CFGR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CH0CFGR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CH0AWSCDR_DEF         {  //!< analog watchdog and short-circuit detector register
    struct {
      __IO uint32_t   SCDT    :  8; //!<[00] SCDT
           uint32_t   UNUSED0 :  4; //!<[08] 
      __IO uint32_t   BKSCD   :  4; //!<[12] BKSCD
      __IO uint32_t   AWFOSR  :  5; //!<[16] AWFOSR
           ONE_BIT    UNUSED1 :  1; //!<[21] 
      __IO uint32_t   AWFORD  :  2; //!<[22] AWFORD
    } B;
    __IO uint32_t  R;
    explicit CH0AWSCDR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CH0AWSCDR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CH0AWSCDR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CH0WDATR_DEF          {  //!< channel watchdog filter data register
    struct {
      __IO uint32_t   WDATA : 16; //!<[00] WDATA
    } B;
    __IO uint32_t  R;
    explicit CH0WDATR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CH0WDATR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CH0WDATR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CH0DATINR_DEF         {  //!< channel data input register
    struct {
      __IO uint32_t   INDAT0 : 16; //!<[00] INDAT0
      __IO uint32_t   INDAT1 : 16; //!<[16] INDAT1
    } B;
    __IO uint32_t  R;
    explicit CH0DATINR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CH0DATINR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CH0DATINR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CH0DLYR_DEF           {  //!< channel y delay register
    struct {
      __IO uint32_t   PLSSKP :  6; //!<[00] PLSSKP
    } B;
    __IO uint32_t  R;
    explicit CH0DLYR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CH0DLYR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CH0DLYR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CH1CFGR1_DEF          {  //!< CH1CFGR1
    struct {
      __IO uint32_t   SITP     :  2; //!<[00] SITP
      __IO uint32_t   SPICKSEL :  2; //!<[02] SPICKSEL
           ONE_BIT    UNUSED0  :  1; //!<[04] 
      __IO ONE_BIT    SCDEN    :  1; //!<[05] SCDEN
      __IO ONE_BIT    CKABEN   :  1; //!<[06] CKABEN
      __IO ONE_BIT    CHEN     :  1; //!<[07] CHEN
      __IO ONE_BIT    CHINSEL  :  1; //!<[08] CHINSEL
           uint32_t   UNUSED1  :  3; //!<[09] 
      __IO uint32_t   DATMPX   :  2; //!<[12] DATMPX
      __IO uint32_t   DATPACK  :  2; //!<[14] DATPACK
    } B;
    __IO uint32_t  R;
    explicit CH1CFGR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CH1CFGR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CH1CFGR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CH1CFGR2_DEF          {  //!< CH1CFGR2
    struct {
           uint32_t   UNUSED0 :  3; //!<[00] 
      __IO uint32_t   DTRBS   :  5; //!<[03] DTRBS
      __IO uint32_t   OFFSET  : 24; //!<[08] OFFSET
    } B;
    __IO uint32_t  R;
    explicit CH1CFGR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CH1CFGR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CH1CFGR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CH1AWSCDR_DEF         {  //!< CH1AWSCDR
    struct {
      __IO uint32_t   SCDT    :  8; //!<[00] SCDT
           uint32_t   UNUSED0 :  4; //!<[08] 
      __IO uint32_t   BKSCD   :  4; //!<[12] BKSCD
      __IO uint32_t   AWFOSR  :  5; //!<[16] AWFOSR
           ONE_BIT    UNUSED1 :  1; //!<[21] 
      __IO uint32_t   AWFORD  :  2; //!<[22] AWFORD
    } B;
    __IO uint32_t  R;
    explicit CH1AWSCDR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CH1AWSCDR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CH1AWSCDR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CH1WDATR_DEF          {  //!< CH1WDATR
    struct {
      __IO uint32_t   WDATA : 16; //!<[00] WDATA
    } B;
    __IO uint32_t  R;
    explicit CH1WDATR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CH1WDATR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CH1WDATR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CH1DATINR_DEF         {  //!< CH1DATINR
    struct {
      __IO uint32_t   INDAT0 : 16; //!<[00] INDAT0
      __IO uint32_t   INDAT1 : 16; //!<[16] INDAT1
    } B;
    __IO uint32_t  R;
    explicit CH1DATINR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CH1DATINR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CH1DATINR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CH1DLYR_DEF           {  //!< channel y delay register
    struct {
      __IO uint32_t   PLSSKP :  6; //!<[00] PLSSKP
    } B;
    __IO uint32_t  R;
    explicit CH1DLYR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CH1DLYR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CH1DLYR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CH2CFGR1_DEF          {  //!< CH2CFGR1
    struct {
      __IO uint32_t   SITP     :  2; //!<[00] SITP
      __IO uint32_t   SPICKSEL :  2; //!<[02] SPICKSEL
           ONE_BIT    UNUSED0  :  1; //!<[04] 
      __IO ONE_BIT    SCDEN    :  1; //!<[05] SCDEN
      __IO ONE_BIT    CKABEN   :  1; //!<[06] CKABEN
      __IO ONE_BIT    CHEN     :  1; //!<[07] CHEN
      __IO ONE_BIT    CHINSEL  :  1; //!<[08] CHINSEL
           uint32_t   UNUSED1  :  3; //!<[09] 
      __IO uint32_t   DATMPX   :  2; //!<[12] DATMPX
      __IO uint32_t   DATPACK  :  2; //!<[14] DATPACK
    } B;
    __IO uint32_t  R;
    explicit CH2CFGR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CH2CFGR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CH2CFGR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CH2CFGR2_DEF          {  //!< CH2CFGR2
    struct {
           uint32_t   UNUSED0 :  3; //!<[00] 
      __IO uint32_t   DTRBS   :  5; //!<[03] DTRBS
      __IO uint32_t   OFFSET  : 24; //!<[08] OFFSET
    } B;
    __IO uint32_t  R;
    explicit CH2CFGR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CH2CFGR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CH2CFGR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CH2AWSCDR_DEF         {  //!< CH2AWSCDR
    struct {
      __IO uint32_t   SCDT    :  8; //!<[00] SCDT
           uint32_t   UNUSED0 :  4; //!<[08] 
      __IO uint32_t   BKSCD   :  4; //!<[12] BKSCD
      __IO uint32_t   AWFOSR  :  5; //!<[16] AWFOSR
           ONE_BIT    UNUSED1 :  1; //!<[21] 
      __IO uint32_t   AWFORD  :  2; //!<[22] AWFORD
    } B;
    __IO uint32_t  R;
    explicit CH2AWSCDR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CH2AWSCDR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CH2AWSCDR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CH2WDATR_DEF          {  //!< CH2WDATR
    struct {
      __IO uint32_t   WDATA : 16; //!<[00] WDATA
    } B;
    __IO uint32_t  R;
    explicit CH2WDATR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CH2WDATR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CH2WDATR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CH2DATINR_DEF         {  //!< CH2DATINR
    struct {
      __IO uint32_t   INDAT0 : 16; //!<[00] INDAT0
      __IO uint32_t   INDAT1 : 16; //!<[16] INDAT1
    } B;
    __IO uint32_t  R;
    explicit CH2DATINR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CH2DATINR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CH2DATINR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CH2DLYR_DEF           {  //!< channel y delay register
    struct {
      __IO uint32_t   PLSSKP :  6; //!<[00] PLSSKP
    } B;
    __IO uint32_t  R;
    explicit CH2DLYR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CH2DLYR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CH2DLYR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CH3CFGR1_DEF          {  //!< CH3CFGR1
    struct {
      __IO uint32_t   SITP     :  2; //!<[00] SITP
      __IO uint32_t   SPICKSEL :  2; //!<[02] SPICKSEL
           ONE_BIT    UNUSED0  :  1; //!<[04] 
      __IO ONE_BIT    SCDEN    :  1; //!<[05] SCDEN
      __IO ONE_BIT    CKABEN   :  1; //!<[06] CKABEN
      __IO ONE_BIT    CHEN     :  1; //!<[07] CHEN
      __IO ONE_BIT    CHINSEL  :  1; //!<[08] CHINSEL
           uint32_t   UNUSED1  :  3; //!<[09] 
      __IO uint32_t   DATMPX   :  2; //!<[12] DATMPX
      __IO uint32_t   DATPACK  :  2; //!<[14] DATPACK
    } B;
    __IO uint32_t  R;
    explicit CH3CFGR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CH3CFGR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CH3CFGR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CH3CFGR2_DEF          {  //!< CH3CFGR2
    struct {
           uint32_t   UNUSED0 :  3; //!<[00] 
      __IO uint32_t   DTRBS   :  5; //!<[03] DTRBS
      __IO uint32_t   OFFSET  : 24; //!<[08] OFFSET
    } B;
    __IO uint32_t  R;
    explicit CH3CFGR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CH3CFGR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CH3CFGR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CH3AWSCDR_DEF         {  //!< CH3AWSCDR
    struct {
      __IO uint32_t   SCDT    :  8; //!<[00] SCDT
           uint32_t   UNUSED0 :  4; //!<[08] 
      __IO uint32_t   BKSCD   :  4; //!<[12] BKSCD
      __IO uint32_t   AWFOSR  :  5; //!<[16] AWFOSR
           ONE_BIT    UNUSED1 :  1; //!<[21] 
      __IO uint32_t   AWFORD  :  2; //!<[22] AWFORD
    } B;
    __IO uint32_t  R;
    explicit CH3AWSCDR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CH3AWSCDR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CH3AWSCDR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CH3WDATR_DEF          {  //!< CH3WDATR
    struct {
      __IO uint32_t   WDATA : 16; //!<[00] WDATA
    } B;
    __IO uint32_t  R;
    explicit CH3WDATR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CH3WDATR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CH3WDATR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CH3DATINR_DEF         {  //!< CH3DATINR
    struct {
      __IO uint32_t   INDAT0 : 16; //!<[00] INDAT0
      __IO uint32_t   INDAT1 : 16; //!<[16] INDAT1
    } B;
    __IO uint32_t  R;
    explicit CH3DATINR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CH3DATINR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CH3DATINR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CH3DLYR_DEF           {  //!< channel y delay register
    struct {
      __IO uint32_t   PLSSKP :  6; //!<[00] PLSSKP
    } B;
    __IO uint32_t  R;
    explicit CH3DLYR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CH3DLYR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CH3DLYR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CH4CFGR1_DEF          {  //!< CH4CFGR1
    struct {
      __IO uint32_t   SITP     :  2; //!<[00] SITP
      __IO uint32_t   SPICKSEL :  2; //!<[02] SPICKSEL
           ONE_BIT    UNUSED0  :  1; //!<[04] 
      __IO ONE_BIT    SCDEN    :  1; //!<[05] SCDEN
      __IO ONE_BIT    CKABEN   :  1; //!<[06] CKABEN
      __IO ONE_BIT    CHEN     :  1; //!<[07] CHEN
      __IO ONE_BIT    CHINSEL  :  1; //!<[08] CHINSEL
           uint32_t   UNUSED1  :  3; //!<[09] 
      __IO uint32_t   DATMPX   :  2; //!<[12] DATMPX
      __IO uint32_t   DATPACK  :  2; //!<[14] DATPACK
    } B;
    __IO uint32_t  R;
    explicit CH4CFGR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CH4CFGR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CH4CFGR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CH4CFGR2_DEF          {  //!< CH4CFGR2
    struct {
           uint32_t   UNUSED0 :  3; //!<[00] 
      __IO uint32_t   DTRBS   :  5; //!<[03] DTRBS
      __IO uint32_t   OFFSET  : 24; //!<[08] OFFSET
    } B;
    __IO uint32_t  R;
    explicit CH4CFGR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CH4CFGR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CH4CFGR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CH4AWSCDR_DEF         {  //!< CH4AWSCDR
    struct {
      __IO uint32_t   SCDT    :  8; //!<[00] SCDT
           uint32_t   UNUSED0 :  4; //!<[08] 
      __IO uint32_t   BKSCD   :  4; //!<[12] BKSCD
      __IO uint32_t   AWFOSR  :  5; //!<[16] AWFOSR
           ONE_BIT    UNUSED1 :  1; //!<[21] 
      __IO uint32_t   AWFORD  :  2; //!<[22] AWFORD
    } B;
    __IO uint32_t  R;
    explicit CH4AWSCDR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CH4AWSCDR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CH4AWSCDR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CH4WDATR_DEF          {  //!< CH4WDATR
    struct {
      __IO uint32_t   WDATA : 16; //!<[00] WDATA
    } B;
    __IO uint32_t  R;
    explicit CH4WDATR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CH4WDATR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CH4WDATR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CH4DATINR_DEF         {  //!< CH4DATINR
    struct {
      __IO uint32_t   INDAT0 : 16; //!<[00] INDAT0
      __IO uint32_t   INDAT1 : 16; //!<[16] INDAT1
    } B;
    __IO uint32_t  R;
    explicit CH4DATINR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CH4DATINR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CH4DATINR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CH4DLYR_DEF           {  //!< channel y delay register
    struct {
      __IO uint32_t   PLSSKP :  6; //!<[00] PLSSKP
    } B;
    __IO uint32_t  R;
    explicit CH4DLYR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CH4DLYR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CH4DLYR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CH5CFGR1_DEF          {  //!< CH5CFGR1
    struct {
      __IO uint32_t   SITP     :  2; //!<[00] SITP
      __IO uint32_t   SPICKSEL :  2; //!<[02] SPICKSEL
           ONE_BIT    UNUSED0  :  1; //!<[04] 
      __IO ONE_BIT    SCDEN    :  1; //!<[05] SCDEN
      __IO ONE_BIT    CKABEN   :  1; //!<[06] CKABEN
      __IO ONE_BIT    CHEN     :  1; //!<[07] CHEN
      __IO ONE_BIT    CHINSEL  :  1; //!<[08] CHINSEL
           uint32_t   UNUSED1  :  3; //!<[09] 
      __IO uint32_t   DATMPX   :  2; //!<[12] DATMPX
      __IO uint32_t   DATPACK  :  2; //!<[14] DATPACK
    } B;
    __IO uint32_t  R;
    explicit CH5CFGR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CH5CFGR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CH5CFGR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CH5CFGR2_DEF          {  //!< CH5CFGR2
    struct {
           uint32_t   UNUSED0 :  3; //!<[00] 
      __IO uint32_t   DTRBS   :  5; //!<[03] DTRBS
      __IO uint32_t   OFFSET  : 24; //!<[08] OFFSET
    } B;
    __IO uint32_t  R;
    explicit CH5CFGR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CH5CFGR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CH5CFGR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CH5AWSCDR_DEF         {  //!< CH5AWSCDR
    struct {
      __IO uint32_t   SCDT    :  8; //!<[00] SCDT
           uint32_t   UNUSED0 :  4; //!<[08] 
      __IO uint32_t   BKSCD   :  4; //!<[12] BKSCD
      __IO uint32_t   AWFOSR  :  5; //!<[16] AWFOSR
           ONE_BIT    UNUSED1 :  1; //!<[21] 
      __IO uint32_t   AWFORD  :  2; //!<[22] AWFORD
    } B;
    __IO uint32_t  R;
    explicit CH5AWSCDR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CH5AWSCDR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CH5AWSCDR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CH5WDATR_DEF          {  //!< CH5WDATR
    struct {
      __IO uint32_t   WDATA : 16; //!<[00] WDATA
    } B;
    __IO uint32_t  R;
    explicit CH5WDATR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CH5WDATR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CH5WDATR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CH5DATINR_DEF         {  //!< CH5DATINR
    struct {
      __IO uint32_t   INDAT0 : 16; //!<[00] INDAT0
      __IO uint32_t   INDAT1 : 16; //!<[16] INDAT1
    } B;
    __IO uint32_t  R;
    explicit CH5DATINR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CH5DATINR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CH5DATINR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CH5DLYR_DEF           {  //!< channel y delay register
    struct {
      __IO uint32_t   PLSSKP :  6; //!<[00] PLSSKP
    } B;
    __IO uint32_t  R;
    explicit CH5DLYR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CH5DLYR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CH5DLYR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CH6CFGR1_DEF          {  //!< CH6CFGR1
    struct {
      __IO uint32_t   SITP     :  2; //!<[00] SITP
      __IO uint32_t   SPICKSEL :  2; //!<[02] SPICKSEL
           ONE_BIT    UNUSED0  :  1; //!<[04] 
      __IO ONE_BIT    SCDEN    :  1; //!<[05] SCDEN
      __IO ONE_BIT    CKABEN   :  1; //!<[06] CKABEN
      __IO ONE_BIT    CHEN     :  1; //!<[07] CHEN
      __IO ONE_BIT    CHINSEL  :  1; //!<[08] CHINSEL
           uint32_t   UNUSED1  :  3; //!<[09] 
      __IO uint32_t   DATMPX   :  2; //!<[12] DATMPX
      __IO uint32_t   DATPACK  :  2; //!<[14] DATPACK
    } B;
    __IO uint32_t  R;
    explicit CH6CFGR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CH6CFGR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CH6CFGR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CH6CFGR2_DEF          {  //!< CH6CFGR2
    struct {
           uint32_t   UNUSED0 :  3; //!<[00] 
      __IO uint32_t   DTRBS   :  5; //!<[03] DTRBS
      __IO uint32_t   OFFSET  : 24; //!<[08] OFFSET
    } B;
    __IO uint32_t  R;
    explicit CH6CFGR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CH6CFGR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CH6CFGR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CH6AWSCDR_DEF         {  //!< CH6AWSCDR
    struct {
      __IO uint32_t   SCDT    :  8; //!<[00] SCDT
           uint32_t   UNUSED0 :  4; //!<[08] 
      __IO uint32_t   BKSCD   :  4; //!<[12] BKSCD
      __IO uint32_t   AWFOSR  :  5; //!<[16] AWFOSR
           ONE_BIT    UNUSED1 :  1; //!<[21] 
      __IO uint32_t   AWFORD  :  2; //!<[22] AWFORD
    } B;
    __IO uint32_t  R;
    explicit CH6AWSCDR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CH6AWSCDR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CH6AWSCDR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CH6WDATR_DEF          {  //!< CH6WDATR
    struct {
      __IO uint32_t   WDATA : 16; //!<[00] WDATA
    } B;
    __IO uint32_t  R;
    explicit CH6WDATR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CH6WDATR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CH6WDATR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CH6DATINR_DEF         {  //!< CH6DATINR
    struct {
      __IO uint32_t   INDAT0 : 16; //!<[00] INDAT0
      __IO uint32_t   INDAT1 : 16; //!<[16] INDAT1
    } B;
    __IO uint32_t  R;
    explicit CH6DATINR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CH6DATINR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CH6DATINR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CH6DLYR_DEF           {  //!< channel y delay register
    struct {
      __IO uint32_t   PLSSKP :  6; //!<[00] PLSSKP
    } B;
    __IO uint32_t  R;
    explicit CH6DLYR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CH6DLYR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CH6DLYR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CH7CFGR1_DEF          {  //!< CH7CFGR1
    struct {
      __IO uint32_t   SITP     :  2; //!<[00] SITP
      __IO uint32_t   SPICKSEL :  2; //!<[02] SPICKSEL
           ONE_BIT    UNUSED0  :  1; //!<[04] 
      __IO ONE_BIT    SCDEN    :  1; //!<[05] SCDEN
      __IO ONE_BIT    CKABEN   :  1; //!<[06] CKABEN
      __IO ONE_BIT    CHEN     :  1; //!<[07] CHEN
      __IO ONE_BIT    CHINSEL  :  1; //!<[08] CHINSEL
           uint32_t   UNUSED1  :  3; //!<[09] 
      __IO uint32_t   DATMPX   :  2; //!<[12] DATMPX
      __IO uint32_t   DATPACK  :  2; //!<[14] DATPACK
    } B;
    __IO uint32_t  R;
    explicit CH7CFGR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CH7CFGR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CH7CFGR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CH7CFGR2_DEF          {  //!< CH7CFGR2
    struct {
           uint32_t   UNUSED0 :  3; //!<[00] 
      __IO uint32_t   DTRBS   :  5; //!<[03] DTRBS
      __IO uint32_t   OFFSET  : 24; //!<[08] OFFSET
    } B;
    __IO uint32_t  R;
    explicit CH7CFGR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CH7CFGR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CH7CFGR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CH7AWSCDR_DEF         {  //!< CH7AWSCDR
    struct {
      __IO uint32_t   SCDT    :  8; //!<[00] SCDT
           uint32_t   UNUSED0 :  4; //!<[08] 
      __IO uint32_t   BKSCD   :  4; //!<[12] BKSCD
      __IO uint32_t   AWFOSR  :  5; //!<[16] AWFOSR
           ONE_BIT    UNUSED1 :  1; //!<[21] 
      __IO uint32_t   AWFORD  :  2; //!<[22] AWFORD
    } B;
    __IO uint32_t  R;
    explicit CH7AWSCDR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CH7AWSCDR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CH7AWSCDR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CH7WDATR_DEF          {  //!< CH7WDATR
    struct {
      __IO uint32_t   WDATA : 16; //!<[00] WDATA
    } B;
    __IO uint32_t  R;
    explicit CH7WDATR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CH7WDATR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CH7WDATR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CH7DATINR_DEF         {  //!< CH7DATINR
    struct {
      __IO uint32_t   INDAT0 : 16; //!<[00] INDAT0
      __IO uint32_t   INDAT1 : 16; //!<[16] INDAT1
    } B;
    __IO uint32_t  R;
    explicit CH7DATINR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CH7DATINR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CH7DATINR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CH7DLYR_DEF           {  //!< channel y delay register
    struct {
      __IO uint32_t   PLSSKP :  6; //!<[00] PLSSKP
    } B;
    __IO uint32_t  R;
    explicit CH7DLYR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CH7DLYR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CH7DLYR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DFSDM_FLT0CR1_DEF     {  //!< control register 1
    struct {
      __IO ONE_BIT    DFEN     :  1; //!<[00] DFSDM enable
      __IO ONE_BIT    JSWSTART :  1; //!<[01] Start a conversion of the injected group of channels
           ONE_BIT    UNUSED0  :  1; //!<[02] 
      __IO ONE_BIT    JSYNC    :  1; //!<[03] Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger
      __IO ONE_BIT    JSCAN    :  1; //!<[04] Scanning conversion mode for injected conversions
      __IO ONE_BIT    JDMAEN   :  1; //!<[05] DMA channel enabled to read data for the injected channel group
           uint32_t   UNUSED1  :  2; //!<[06] 
      __IO uint32_t   JEXTSEL  :  3; //!<[08] Trigger signal selection for launching injected conversions
           uint32_t   UNUSED2  :  2; //!<[11] 
      __IO uint32_t   JEXTEN   :  2; //!<[13] Trigger enable and trigger edge selection for injected conversions
           uint32_t   UNUSED3  :  2; //!<[15] 
      __IO ONE_BIT    RSWSTART :  1; //!<[17] Software start of a conversion on the regular channel
      __IO ONE_BIT    RCONT    :  1; //!<[18] Continuous mode selection for regular conversions
      __IO ONE_BIT    RSYNC    :  1; //!<[19] Launch regular conversion synchronously with DFSDM0
           ONE_BIT    UNUSED4  :  1; //!<[20] 
      __IO ONE_BIT    RDMAEN   :  1; //!<[21] DMA channel enabled to read data for the regular conversion
           uint32_t   UNUSED5  :  2; //!<[22] 
      __IO uint32_t   RCH      :  3; //!<[24] Regular channel selection
           uint32_t   UNUSED6  :  2; //!<[27] 
      __IO ONE_BIT    FAST     :  1; //!<[29] Fast conversion mode selection for regular conversions
      __IO ONE_BIT    AWFSEL   :  1; //!<[30] Analog watchdog fast mode select
    } B;
    __IO uint32_t  R;
    explicit DFSDM_FLT0CR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DFSDM_FLT0CR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DFSDM_FLT0CR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DFSDM_FLT0CR2_DEF     {  //!< control register 2
    struct {
      __IO ONE_BIT    JEOCIE  :  1; //!<[00] Injected end of conversion interrupt enable
      __IO ONE_BIT    REOCIE  :  1; //!<[01] Regular end of conversion interrupt enable
      __IO ONE_BIT    JOVRIE  :  1; //!<[02] Injected data overrun interrupt enable
      __IO ONE_BIT    ROVRIE  :  1; //!<[03] Regular data overrun interrupt enable
      __IO ONE_BIT    AWDIE   :  1; //!<[04] Analog watchdog interrupt enable
      __IO ONE_BIT    SCDIE   :  1; //!<[05] Short-circuit detector interrupt enable
      __IO ONE_BIT    CKABIE  :  1; //!<[06] Clock absence interrupt enable
           ONE_BIT    UNUSED0 :  1; //!<[07] 
      __IO uint32_t   EXCH    :  8; //!<[08] Extremes detector channel selection
      __IO uint32_t   AWDCH   :  8; //!<[16] Analog watchdog channel selection
    } B;
    __IO uint32_t  R;
    explicit DFSDM_FLT0CR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DFSDM_FLT0CR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DFSDM_FLT0CR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DFSDM_FLT0ISR_DEF     {  //!< interrupt and status register
    struct {
      __I  ONE_BIT    JEOCF   :  1; //!<[00] End of injected conversion flag
      __I  ONE_BIT    REOCF   :  1; //!<[01] End of regular conversion flag
      __I  ONE_BIT    JOVRF   :  1; //!<[02] Injected conversion overrun flag
      __I  ONE_BIT    ROVRF   :  1; //!<[03] Regular conversion overrun flag
      __I  ONE_BIT    AWDF    :  1; //!<[04] Analog watchdog
           uint32_t   UNUSED0 :  8; //!<[05] 
      __I  ONE_BIT    JCIP    :  1; //!<[13] Injected conversion in progress status
      __I  ONE_BIT    RCIP    :  1; //!<[14] Regular conversion in progress status
           ONE_BIT    UNUSED1 :  1; //!<[15] 
      __I  uint32_t   CKABF   :  8; //!<[16] Clock absence flag
      __I  uint32_t   SCDF    :  8; //!<[24] short-circuit detector flag
    } B;
    __I  uint32_t  R;

    explicit DFSDM_FLT0ISR_DEF (volatile DFSDM_FLT0ISR_DEF & o) noexcept { R = o.R; };
  };
  union DFSDM_FLT0ICR_DEF     {  //!< interrupt flag clear register
    struct {
           uint32_t   UNUSED0  :  2; //!<[00] 
      __IO ONE_BIT    CLRJOVRF :  1; //!<[02] Clear the injected conversion overrun flag
      __IO ONE_BIT    CLRROVRF :  1; //!<[03] Clear the regular conversion overrun flag
           uint32_t   UNUSED1  : 12; //!<[04] 
      __IO uint32_t   CLRCKABF :  8; //!<[16] Clear the clock absence flag
      __IO uint32_t   CLRSCDF  :  8; //!<[24] Clear the short-circuit detector flag
    } B;
    __IO uint32_t  R;
    explicit DFSDM_FLT0ICR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DFSDM_FLT0ICR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DFSDM_FLT0ICR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DFSDM_FLT0JCHGR_DEF   {  //!< injected channel group selection register
    struct {
      __IO uint32_t   JCHG :  8; //!<[00] Injected channel group selection
    } B;
    __IO uint32_t  R;
    explicit DFSDM_FLT0JCHGR_DEF () noexcept { R = 0x00000001u; }
    template<typename F> void setbit (F f) volatile {
      DFSDM_FLT0JCHGR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DFSDM_FLT0JCHGR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DFSDM_FLT0FCR_DEF     {  //!< filter control register
    struct {
      __IO uint32_t   IOSR    :  8; //!<[00] Integrator oversampling ratio (averaging length)
           uint32_t   UNUSED0 :  8; //!<[08] 
      __IO uint32_t   FOSR    : 10; //!<[16] Sinc filter oversampling ratio (decimation rate)
           uint32_t   UNUSED1 :  3; //!<[26] 
      __IO uint32_t   FORD    :  3; //!<[29] Sinc filter order
    } B;
    __IO uint32_t  R;
    explicit DFSDM_FLT0FCR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DFSDM_FLT0FCR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DFSDM_FLT0FCR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DFSDM_FLT0JDATAR_DEF  {  //!< data register for injected group
    struct {
      __I  uint32_t   JDATACH :  3; //!<[00] Injected channel most recently converted
           uint32_t   UNUSED0 :  5; //!<[03] 
      __I  uint32_t   JDATA   : 24; //!<[08] Injected group conversion data
    } B;
    __I  uint32_t  R;

    explicit DFSDM_FLT0JDATAR_DEF (volatile DFSDM_FLT0JDATAR_DEF & o) noexcept { R = o.R; };
  };
  union DFSDM_FLT0RDATAR_DEF  {  //!< data register for the regular channel
    struct {
      __I  uint32_t   RDATACH :  3; //!<[00] Regular channel most recently converted
           ONE_BIT    UNUSED0 :  1; //!<[03] 
      __I  ONE_BIT    RPEND   :  1; //!<[04] Regular channel pending data
           uint32_t   UNUSED1 :  3; //!<[05] 
      __I  uint32_t   RDATA   : 24; //!<[08] Regular channel conversion data
    } B;
    __I  uint32_t  R;

    explicit DFSDM_FLT0RDATAR_DEF (volatile DFSDM_FLT0RDATAR_DEF & o) noexcept { R = o.R; };
  };
  union DFSDM_FLT0AWHTR_DEF   {  //!< analog watchdog high threshold register
    struct {
      __IO uint32_t   BKAWH   :  4; //!<[00] Break signal assignment to analog watchdog high threshold event
           uint32_t   UNUSED0 :  4; //!<[04] 
      __IO uint32_t   AWHT    : 24; //!<[08] Analog watchdog high threshold
    } B;
    __IO uint32_t  R;
    explicit DFSDM_FLT0AWHTR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DFSDM_FLT0AWHTR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DFSDM_FLT0AWHTR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DFSDM_FLT0AWLTR_DEF   {  //!< analog watchdog low threshold register
    struct {
      __IO uint32_t   BKAWL   :  4; //!<[00] Break signal assignment to analog watchdog low threshold event
           uint32_t   UNUSED0 :  4; //!<[04] 
      __IO uint32_t   AWLT    : 24; //!<[08] Analog watchdog low threshold
    } B;
    __IO uint32_t  R;
    explicit DFSDM_FLT0AWLTR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DFSDM_FLT0AWLTR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DFSDM_FLT0AWLTR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DFSDM_FLT0AWSR_DEF    {  //!< analog watchdog status register
    struct {
      __I  uint32_t   AWLTF :  8; //!<[00] Analog watchdog low threshold flag
      __I  uint32_t   AWHTF :  8; //!<[08] Analog watchdog high threshold flag
    } B;
    __I  uint32_t  R;

    explicit DFSDM_FLT0AWSR_DEF (volatile DFSDM_FLT0AWSR_DEF & o) noexcept { R = o.R; };
  };
  union DFSDM_FLT0AWCFR_DEF   {  //!< analog watchdog clear flag register
    struct {
      __IO uint32_t   CLRAWLTF :  8; //!<[00] Clear the analog watchdog low threshold flag
      __IO uint32_t   CLRAWHTF :  8; //!<[08] Clear the analog watchdog high threshold flag
    } B;
    __IO uint32_t  R;
    explicit DFSDM_FLT0AWCFR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DFSDM_FLT0AWCFR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DFSDM_FLT0AWCFR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DFSDM_FLT0EXMAX_DEF   {  //!< Extremes detector maximum register
    struct {
      __I  uint32_t   EXMAXCH :  3; //!<[00] Extremes detector maximum data channel
           uint32_t   UNUSED0 :  5; //!<[03] 
      __I  uint32_t   EXMAX   : 24; //!<[08] Extremes detector maximum value
    } B;
    __I  uint32_t  R;

    explicit DFSDM_FLT0EXMAX_DEF (volatile DFSDM_FLT0EXMAX_DEF & o) noexcept { R = o.R; };
  };
  union DFSDM_FLT0EXMIN_DEF   {  //!< Extremes detector minimum register
    struct {
      __I  uint32_t   EXMINCH :  3; //!<[00] Extremes detector minimum data channel
           uint32_t   UNUSED0 :  5; //!<[03] 
      __I  uint32_t   EXMIN   : 24; //!<[08] EXMIN
    } B;
    __I  uint32_t  R;

    explicit DFSDM_FLT0EXMIN_DEF (volatile DFSDM_FLT0EXMIN_DEF & o) noexcept { R = o.R; };
  };
  union DFSDM_FLT0CNVTIMR_DEF {  //!< conversion timer register
    struct {
           uint32_t   UNUSED0 :  4; //!<[00] 
      __I  uint32_t   CNVCNT  : 28; //!<[04] 28-bit timer counting conversion time t = CNVCNT[27:0] / fDFSDM_CKIN
    } B;
    __I  uint32_t  R;

    explicit DFSDM_FLT0CNVTIMR_DEF (volatile DFSDM_FLT0CNVTIMR_DEF & o) noexcept { R = o.R; };
  };
  union DFSDM_FLT1CR1_DEF     {  //!< control register 1
    struct {
      __IO ONE_BIT    DFEN     :  1; //!<[00] DFSDM enable
      __IO ONE_BIT    JSWSTART :  1; //!<[01] Start a conversion of the injected group of channels
           ONE_BIT    UNUSED0  :  1; //!<[02] 
      __IO ONE_BIT    JSYNC    :  1; //!<[03] Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger
      __IO ONE_BIT    JSCAN    :  1; //!<[04] Scanning conversion mode for injected conversions
      __IO ONE_BIT    JDMAEN   :  1; //!<[05] DMA channel enabled to read data for the injected channel group
           uint32_t   UNUSED1  :  2; //!<[06] 
      __IO uint32_t   JEXTSEL  :  3; //!<[08] Trigger signal selection for launching injected conversions
           uint32_t   UNUSED2  :  2; //!<[11] 
      __IO uint32_t   JEXTEN   :  2; //!<[13] Trigger enable and trigger edge selection for injected conversions
           uint32_t   UNUSED3  :  2; //!<[15] 
      __IO ONE_BIT    RSWSTART :  1; //!<[17] Software start of a conversion on the regular channel
      __IO ONE_BIT    RCONT    :  1; //!<[18] Continuous mode selection for regular conversions
      __IO ONE_BIT    RSYNC    :  1; //!<[19] Launch regular conversion synchronously with DFSDM0
           ONE_BIT    UNUSED4  :  1; //!<[20] 
      __IO ONE_BIT    RDMAEN   :  1; //!<[21] DMA channel enabled to read data for the regular conversion
           uint32_t   UNUSED5  :  2; //!<[22] 
      __IO uint32_t   RCH      :  3; //!<[24] Regular channel selection
           uint32_t   UNUSED6  :  2; //!<[27] 
      __IO ONE_BIT    FAST     :  1; //!<[29] Fast conversion mode selection for regular conversions
      __IO ONE_BIT    AWFSEL   :  1; //!<[30] Analog watchdog fast mode select
    } B;
    __IO uint32_t  R;
    explicit DFSDM_FLT1CR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DFSDM_FLT1CR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DFSDM_FLT1CR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DFSDM_FLT1CR2_DEF     {  //!< control register 2
    struct {
      __IO ONE_BIT    JEOCIE  :  1; //!<[00] Injected end of conversion interrupt enable
      __IO ONE_BIT    REOCIE  :  1; //!<[01] Regular end of conversion interrupt enable
      __IO ONE_BIT    JOVRIE  :  1; //!<[02] Injected data overrun interrupt enable
      __IO ONE_BIT    ROVRIE  :  1; //!<[03] Regular data overrun interrupt enable
      __IO ONE_BIT    AWDIE   :  1; //!<[04] Analog watchdog interrupt enable
      __IO ONE_BIT    SCDIE   :  1; //!<[05] Short-circuit detector interrupt enable
      __IO ONE_BIT    CKABIE  :  1; //!<[06] Clock absence interrupt enable
           ONE_BIT    UNUSED0 :  1; //!<[07] 
      __IO uint32_t   EXCH    :  8; //!<[08] Extremes detector channel selection
      __IO uint32_t   AWDCH   :  8; //!<[16] Analog watchdog channel selection
    } B;
    __IO uint32_t  R;
    explicit DFSDM_FLT1CR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DFSDM_FLT1CR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DFSDM_FLT1CR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DFSDM_FLT1ISR_DEF     {  //!< interrupt and status register
    struct {
      __I  ONE_BIT    JEOCF   :  1; //!<[00] End of injected conversion flag
      __I  ONE_BIT    REOCF   :  1; //!<[01] End of regular conversion flag
      __I  ONE_BIT    JOVRF   :  1; //!<[02] Injected conversion overrun flag
      __I  ONE_BIT    ROVRF   :  1; //!<[03] Regular conversion overrun flag
      __I  ONE_BIT    AWDF    :  1; //!<[04] Analog watchdog
           uint32_t   UNUSED0 :  8; //!<[05] 
      __I  ONE_BIT    JCIP    :  1; //!<[13] Injected conversion in progress status
      __I  ONE_BIT    RCIP    :  1; //!<[14] Regular conversion in progress status
           ONE_BIT    UNUSED1 :  1; //!<[15] 
      __I  uint32_t   CKABF   :  8; //!<[16] Clock absence flag
      __I  uint32_t   SCDF    :  8; //!<[24] short-circuit detector flag
    } B;
    __I  uint32_t  R;

    explicit DFSDM_FLT1ISR_DEF (volatile DFSDM_FLT1ISR_DEF & o) noexcept { R = o.R; };
  };
  union DFSDM_FLT1ICR_DEF     {  //!< interrupt flag clear register
    struct {
           uint32_t   UNUSED0  :  2; //!<[00] 
      __IO ONE_BIT    CLRJOVRF :  1; //!<[02] Clear the injected conversion overrun flag
      __IO ONE_BIT    CLRROVRF :  1; //!<[03] Clear the regular conversion overrun flag
           uint32_t   UNUSED1  : 12; //!<[04] 
      __IO uint32_t   CLRCKABF :  8; //!<[16] Clear the clock absence flag
      __IO uint32_t   CLRSCDF  :  8; //!<[24] Clear the short-circuit detector flag
    } B;
    __IO uint32_t  R;
    explicit DFSDM_FLT1ICR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DFSDM_FLT1ICR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DFSDM_FLT1ICR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DFSDM_FLT1CHGR_DEF    {  //!< injected channel group selection register
    struct {
      __IO uint32_t   JCHG :  8; //!<[00] Injected channel group selection
    } B;
    __IO uint32_t  R;
    explicit DFSDM_FLT1CHGR_DEF () noexcept { R = 0x00000001u; }
    template<typename F> void setbit (F f) volatile {
      DFSDM_FLT1CHGR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DFSDM_FLT1CHGR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DFSDM_FLT1FCR_DEF     {  //!< filter control register
    struct {
      __IO uint32_t   IOSR    :  8; //!<[00] Integrator oversampling ratio (averaging length)
           uint32_t   UNUSED0 :  8; //!<[08] 
      __IO uint32_t   FOSR    : 10; //!<[16] Sinc filter oversampling ratio (decimation rate)
           uint32_t   UNUSED1 :  3; //!<[26] 
      __IO uint32_t   FORD    :  3; //!<[29] Sinc filter order
    } B;
    __IO uint32_t  R;
    explicit DFSDM_FLT1FCR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DFSDM_FLT1FCR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DFSDM_FLT1FCR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DFSDM_FLT1JDATAR_DEF  {  //!< data register for injected group
    struct {
      __I  uint32_t   JDATACH :  3; //!<[00] Injected channel most recently converted
           uint32_t   UNUSED0 :  5; //!<[03] 
      __I  uint32_t   JDATA   : 24; //!<[08] Injected group conversion data
    } B;
    __I  uint32_t  R;

    explicit DFSDM_FLT1JDATAR_DEF (volatile DFSDM_FLT1JDATAR_DEF & o) noexcept { R = o.R; };
  };
  union DFSDM_FLT1RDATAR_DEF  {  //!< data register for the regular channel
    struct {
      __I  uint32_t   RDATACH :  3; //!<[00] Regular channel most recently converted
           ONE_BIT    UNUSED0 :  1; //!<[03] 
      __I  ONE_BIT    RPEND   :  1; //!<[04] Regular channel pending data
           uint32_t   UNUSED1 :  3; //!<[05] 
      __I  uint32_t   RDATA   : 24; //!<[08] Regular channel conversion data
    } B;
    __I  uint32_t  R;

    explicit DFSDM_FLT1RDATAR_DEF (volatile DFSDM_FLT1RDATAR_DEF & o) noexcept { R = o.R; };
  };
  union DFSDM_FLT1AWHTR_DEF   {  //!< analog watchdog high threshold register
    struct {
      __IO uint32_t   BKAWH   :  4; //!<[00] Break signal assignment to analog watchdog high threshold event
           uint32_t   UNUSED0 :  4; //!<[04] 
      __IO uint32_t   AWHT    : 24; //!<[08] Analog watchdog high threshold
    } B;
    __IO uint32_t  R;
    explicit DFSDM_FLT1AWHTR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DFSDM_FLT1AWHTR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DFSDM_FLT1AWHTR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DFSDM_FLT1AWLTR_DEF   {  //!< analog watchdog low threshold register
    struct {
      __IO uint32_t   BKAWL   :  4; //!<[00] Break signal assignment to analog watchdog low threshold event
           uint32_t   UNUSED0 :  4; //!<[04] 
      __IO uint32_t   AWLT    : 24; //!<[08] Analog watchdog low threshold
    } B;
    __IO uint32_t  R;
    explicit DFSDM_FLT1AWLTR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DFSDM_FLT1AWLTR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DFSDM_FLT1AWLTR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DFSDM_FLT1AWSR_DEF    {  //!< analog watchdog status register
    struct {
      __I  uint32_t   AWLTF :  8; //!<[00] Analog watchdog low threshold flag
      __I  uint32_t   AWHTF :  8; //!<[08] Analog watchdog high threshold flag
    } B;
    __I  uint32_t  R;

    explicit DFSDM_FLT1AWSR_DEF (volatile DFSDM_FLT1AWSR_DEF & o) noexcept { R = o.R; };
  };
  union DFSDM_FLT1AWCFR_DEF   {  //!< analog watchdog clear flag register
    struct {
      __IO uint32_t   CLRAWLTF :  8; //!<[00] Clear the analog watchdog low threshold flag
      __IO uint32_t   CLRAWHTF :  8; //!<[08] Clear the analog watchdog high threshold flag
    } B;
    __IO uint32_t  R;
    explicit DFSDM_FLT1AWCFR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DFSDM_FLT1AWCFR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DFSDM_FLT1AWCFR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DFSDM_FLT1EXMAX_DEF   {  //!< Extremes detector maximum register
    struct {
      __I  uint32_t   EXMAXCH :  3; //!<[00] Extremes detector maximum data channel
           uint32_t   UNUSED0 :  5; //!<[03] 
      __I  uint32_t   EXMAX   : 24; //!<[08] Extremes detector maximum value
    } B;
    __I  uint32_t  R;

    explicit DFSDM_FLT1EXMAX_DEF (volatile DFSDM_FLT1EXMAX_DEF & o) noexcept { R = o.R; };
  };
  union DFSDM_FLT1EXMIN_DEF   {  //!< Extremes detector minimum register
    struct {
      __I  uint32_t   EXMINCH :  3; //!<[00] Extremes detector minimum data channel
           uint32_t   UNUSED0 :  5; //!<[03] 
      __I  uint32_t   EXMIN   : 24; //!<[08] EXMIN
    } B;
    __I  uint32_t  R;

    explicit DFSDM_FLT1EXMIN_DEF (volatile DFSDM_FLT1EXMIN_DEF & o) noexcept { R = o.R; };
  };
  union DFSDM_FLT1CNVTIMR_DEF {  //!< conversion timer register
    struct {
           uint32_t   UNUSED0 :  4; //!<[00] 
      __I  uint32_t   CNVCNT  : 28; //!<[04] 28-bit timer counting conversion time t = CNVCNT[27:0] / fDFSDM_CKIN
    } B;
    __I  uint32_t  R;

    explicit DFSDM_FLT1CNVTIMR_DEF (volatile DFSDM_FLT1CNVTIMR_DEF & o) noexcept { R = o.R; };
  };
  union DFSDM_FLT2CR1_DEF     {  //!< control register 1
    struct {
      __IO ONE_BIT    DFEN     :  1; //!<[00] DFSDM enable
      __IO ONE_BIT    JSWSTART :  1; //!<[01] Start a conversion of the injected group of channels
           ONE_BIT    UNUSED0  :  1; //!<[02] 
      __IO ONE_BIT    JSYNC    :  1; //!<[03] Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger
      __IO ONE_BIT    JSCAN    :  1; //!<[04] Scanning conversion mode for injected conversions
      __IO ONE_BIT    JDMAEN   :  1; //!<[05] DMA channel enabled to read data for the injected channel group
           uint32_t   UNUSED1  :  2; //!<[06] 
      __IO uint32_t   JEXTSEL  :  3; //!<[08] Trigger signal selection for launching injected conversions
           uint32_t   UNUSED2  :  2; //!<[11] 
      __IO uint32_t   JEXTEN   :  2; //!<[13] Trigger enable and trigger edge selection for injected conversions
           uint32_t   UNUSED3  :  2; //!<[15] 
      __IO ONE_BIT    RSWSTART :  1; //!<[17] Software start of a conversion on the regular channel
      __IO ONE_BIT    RCONT    :  1; //!<[18] Continuous mode selection for regular conversions
      __IO ONE_BIT    RSYNC    :  1; //!<[19] Launch regular conversion synchronously with DFSDM0
           ONE_BIT    UNUSED4  :  1; //!<[20] 
      __IO ONE_BIT    RDMAEN   :  1; //!<[21] DMA channel enabled to read data for the regular conversion
           uint32_t   UNUSED5  :  2; //!<[22] 
      __IO uint32_t   RCH      :  3; //!<[24] Regular channel selection
           uint32_t   UNUSED6  :  2; //!<[27] 
      __IO ONE_BIT    FAST     :  1; //!<[29] Fast conversion mode selection for regular conversions
      __IO ONE_BIT    AWFSEL   :  1; //!<[30] Analog watchdog fast mode select
    } B;
    __IO uint32_t  R;
    explicit DFSDM_FLT2CR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DFSDM_FLT2CR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DFSDM_FLT2CR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DFSDM_FLT2CR2_DEF     {  //!< control register 2
    struct {
      __IO ONE_BIT    JEOCIE  :  1; //!<[00] Injected end of conversion interrupt enable
      __IO ONE_BIT    REOCIE  :  1; //!<[01] Regular end of conversion interrupt enable
      __IO ONE_BIT    JOVRIE  :  1; //!<[02] Injected data overrun interrupt enable
      __IO ONE_BIT    ROVRIE  :  1; //!<[03] Regular data overrun interrupt enable
      __IO ONE_BIT    AWDIE   :  1; //!<[04] Analog watchdog interrupt enable
      __IO ONE_BIT    SCDIE   :  1; //!<[05] Short-circuit detector interrupt enable
      __IO ONE_BIT    CKABIE  :  1; //!<[06] Clock absence interrupt enable
           ONE_BIT    UNUSED0 :  1; //!<[07] 
      __IO uint32_t   EXCH    :  8; //!<[08] Extremes detector channel selection
      __IO uint32_t   AWDCH   :  8; //!<[16] Analog watchdog channel selection
    } B;
    __IO uint32_t  R;
    explicit DFSDM_FLT2CR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DFSDM_FLT2CR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DFSDM_FLT2CR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DFSDM_FLT2ISR_DEF     {  //!< interrupt and status register
    struct {
      __I  ONE_BIT    JEOCF   :  1; //!<[00] End of injected conversion flag
      __I  ONE_BIT    REOCF   :  1; //!<[01] End of regular conversion flag
      __I  ONE_BIT    JOVRF   :  1; //!<[02] Injected conversion overrun flag
      __I  ONE_BIT    ROVRF   :  1; //!<[03] Regular conversion overrun flag
      __I  ONE_BIT    AWDF    :  1; //!<[04] Analog watchdog
           uint32_t   UNUSED0 :  8; //!<[05] 
      __I  ONE_BIT    JCIP    :  1; //!<[13] Injected conversion in progress status
      __I  ONE_BIT    RCIP    :  1; //!<[14] Regular conversion in progress status
           ONE_BIT    UNUSED1 :  1; //!<[15] 
      __I  uint32_t   CKABF   :  8; //!<[16] Clock absence flag
      __I  uint32_t   SCDF    :  8; //!<[24] short-circuit detector flag
    } B;
    __I  uint32_t  R;

    explicit DFSDM_FLT2ISR_DEF (volatile DFSDM_FLT2ISR_DEF & o) noexcept { R = o.R; };
  };
  union DFSDM_FLT2ICR_DEF     {  //!< interrupt flag clear register
    struct {
           uint32_t   UNUSED0  :  2; //!<[00] 
      __IO ONE_BIT    CLRJOVRF :  1; //!<[02] Clear the injected conversion overrun flag
      __IO ONE_BIT    CLRROVRF :  1; //!<[03] Clear the regular conversion overrun flag
           uint32_t   UNUSED1  : 12; //!<[04] 
      __IO uint32_t   CLRCKABF :  8; //!<[16] Clear the clock absence flag
      __IO uint32_t   CLRSCDF  :  8; //!<[24] Clear the short-circuit detector flag
    } B;
    __IO uint32_t  R;
    explicit DFSDM_FLT2ICR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DFSDM_FLT2ICR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DFSDM_FLT2ICR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DFSDM_FLT2JCHGR_DEF   {  //!< injected channel group selection register
    struct {
      __IO uint32_t   JCHG :  8; //!<[00] Injected channel group selection
    } B;
    __IO uint32_t  R;
    explicit DFSDM_FLT2JCHGR_DEF () noexcept { R = 0x00000001u; }
    template<typename F> void setbit (F f) volatile {
      DFSDM_FLT2JCHGR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DFSDM_FLT2JCHGR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DFSDM_FLT2FCR_DEF     {  //!< filter control register
    struct {
      __IO uint32_t   IOSR    :  8; //!<[00] Integrator oversampling ratio (averaging length)
           uint32_t   UNUSED0 :  8; //!<[08] 
      __IO uint32_t   FOSR    : 10; //!<[16] Sinc filter oversampling ratio (decimation rate)
           uint32_t   UNUSED1 :  3; //!<[26] 
      __IO uint32_t   FORD    :  3; //!<[29] Sinc filter order
    } B;
    __IO uint32_t  R;
    explicit DFSDM_FLT2FCR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DFSDM_FLT2FCR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DFSDM_FLT2FCR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DFSDM_FLT2JDATAR_DEF  {  //!< data register for injected group
    struct {
      __I  uint32_t   JDATACH :  3; //!<[00] Injected channel most recently converted
           uint32_t   UNUSED0 :  5; //!<[03] 
      __I  uint32_t   JDATA   : 24; //!<[08] Injected group conversion data
    } B;
    __I  uint32_t  R;

    explicit DFSDM_FLT2JDATAR_DEF (volatile DFSDM_FLT2JDATAR_DEF & o) noexcept { R = o.R; };
  };
  union DFSDM_FLT2RDATAR_DEF  {  //!< data register for the regular channel
    struct {
      __I  uint32_t   RDATACH :  3; //!<[00] Regular channel most recently converted
           ONE_BIT    UNUSED0 :  1; //!<[03] 
      __I  ONE_BIT    RPEND   :  1; //!<[04] Regular channel pending data
           uint32_t   UNUSED1 :  3; //!<[05] 
      __I  uint32_t   RDATA   : 24; //!<[08] Regular channel conversion data
    } B;
    __I  uint32_t  R;

    explicit DFSDM_FLT2RDATAR_DEF (volatile DFSDM_FLT2RDATAR_DEF & o) noexcept { R = o.R; };
  };
  union DFSDM_FLT2AWHTR_DEF   {  //!< analog watchdog high threshold register
    struct {
      __IO uint32_t   BKAWH   :  4; //!<[00] Break signal assignment to analog watchdog high threshold event
           uint32_t   UNUSED0 :  4; //!<[04] 
      __IO uint32_t   AWHT    : 24; //!<[08] Analog watchdog high threshold
    } B;
    __IO uint32_t  R;
    explicit DFSDM_FLT2AWHTR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DFSDM_FLT2AWHTR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DFSDM_FLT2AWHTR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DFSDM_FLT2AWLTR_DEF   {  //!< analog watchdog low threshold register
    struct {
      __IO uint32_t   BKAWL   :  4; //!<[00] Break signal assignment to analog watchdog low threshold event
           uint32_t   UNUSED0 :  4; //!<[04] 
      __IO uint32_t   AWLT    : 24; //!<[08] Analog watchdog low threshold
    } B;
    __IO uint32_t  R;
    explicit DFSDM_FLT2AWLTR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DFSDM_FLT2AWLTR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DFSDM_FLT2AWLTR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DFSDM_FLT2AWSR_DEF    {  //!< analog watchdog status register
    struct {
      __I  uint32_t   AWLTF :  8; //!<[00] Analog watchdog low threshold flag
      __I  uint32_t   AWHTF :  8; //!<[08] Analog watchdog high threshold flag
    } B;
    __I  uint32_t  R;

    explicit DFSDM_FLT2AWSR_DEF (volatile DFSDM_FLT2AWSR_DEF & o) noexcept { R = o.R; };
  };
  union DFSDM_FLT2AWCFR_DEF   {  //!< analog watchdog clear flag register
    struct {
      __IO uint32_t   CLRAWLTF :  8; //!<[00] Clear the analog watchdog low threshold flag
      __IO uint32_t   CLRAWHTF :  8; //!<[08] Clear the analog watchdog high threshold flag
    } B;
    __IO uint32_t  R;
    explicit DFSDM_FLT2AWCFR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DFSDM_FLT2AWCFR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DFSDM_FLT2AWCFR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DFSDM_FLT2EXMAX_DEF   {  //!< Extremes detector maximum register
    struct {
      __I  uint32_t   EXMAXCH :  3; //!<[00] Extremes detector maximum data channel
           uint32_t   UNUSED0 :  5; //!<[03] 
      __I  uint32_t   EXMAX   : 24; //!<[08] Extremes detector maximum value
    } B;
    __I  uint32_t  R;

    explicit DFSDM_FLT2EXMAX_DEF (volatile DFSDM_FLT2EXMAX_DEF & o) noexcept { R = o.R; };
  };
  union DFSDM_FLT2EXMIN_DEF   {  //!< Extremes detector minimum register
    struct {
      __I  uint32_t   EXMINCH :  3; //!<[00] Extremes detector minimum data channel
           uint32_t   UNUSED0 :  5; //!<[03] 
      __I  uint32_t   EXMIN   : 24; //!<[08] EXMIN
    } B;
    __I  uint32_t  R;

    explicit DFSDM_FLT2EXMIN_DEF (volatile DFSDM_FLT2EXMIN_DEF & o) noexcept { R = o.R; };
  };
  union DFSDM_FLT2CNVTIMR_DEF {  //!< conversion timer register
    struct {
           uint32_t   UNUSED0 :  4; //!<[00] 
      __I  uint32_t   CNVCNT  : 28; //!<[04] 28-bit timer counting conversion time t = CNVCNT[27:0] / fDFSDM_CKIN
    } B;
    __I  uint32_t  R;

    explicit DFSDM_FLT2CNVTIMR_DEF (volatile DFSDM_FLT2CNVTIMR_DEF & o) noexcept { R = o.R; };
  };
  union DFSDM_FLT3CR1_DEF     {  //!< control register 1
    struct {
      __IO ONE_BIT    DFEN     :  1; //!<[00] DFSDM enable
      __IO ONE_BIT    JSWSTART :  1; //!<[01] Start a conversion of the injected group of channels
           ONE_BIT    UNUSED0  :  1; //!<[02] 
      __IO ONE_BIT    JSYNC    :  1; //!<[03] Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger
      __IO ONE_BIT    JSCAN    :  1; //!<[04] Scanning conversion mode for injected conversions
      __IO ONE_BIT    JDMAEN   :  1; //!<[05] DMA channel enabled to read data for the injected channel group
           uint32_t   UNUSED1  :  2; //!<[06] 
      __IO uint32_t   JEXTSEL  :  3; //!<[08] Trigger signal selection for launching injected conversions
           uint32_t   UNUSED2  :  2; //!<[11] 
      __IO uint32_t   JEXTEN   :  2; //!<[13] Trigger enable and trigger edge selection for injected conversions
           uint32_t   UNUSED3  :  2; //!<[15] 
      __IO ONE_BIT    RSWSTART :  1; //!<[17] Software start of a conversion on the regular channel
      __IO ONE_BIT    RCONT    :  1; //!<[18] Continuous mode selection for regular conversions
      __IO ONE_BIT    RSYNC    :  1; //!<[19] Launch regular conversion synchronously with DFSDM0
           ONE_BIT    UNUSED4  :  1; //!<[20] 
      __IO ONE_BIT    RDMAEN   :  1; //!<[21] DMA channel enabled to read data for the regular conversion
           uint32_t   UNUSED5  :  2; //!<[22] 
      __IO uint32_t   RCH      :  3; //!<[24] Regular channel selection
           uint32_t   UNUSED6  :  2; //!<[27] 
      __IO ONE_BIT    FAST     :  1; //!<[29] Fast conversion mode selection for regular conversions
      __IO ONE_BIT    AWFSEL   :  1; //!<[30] Analog watchdog fast mode select
    } B;
    __IO uint32_t  R;
    explicit DFSDM_FLT3CR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DFSDM_FLT3CR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DFSDM_FLT3CR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DFSDM_FLT3CR2_DEF     {  //!< control register 2
    struct {
      __IO ONE_BIT    JEOCIE  :  1; //!<[00] Injected end of conversion interrupt enable
      __IO ONE_BIT    REOCIE  :  1; //!<[01] Regular end of conversion interrupt enable
      __IO ONE_BIT    JOVRIE  :  1; //!<[02] Injected data overrun interrupt enable
      __IO ONE_BIT    ROVRIE  :  1; //!<[03] Regular data overrun interrupt enable
      __IO ONE_BIT    AWDIE   :  1; //!<[04] Analog watchdog interrupt enable
      __IO ONE_BIT    SCDIE   :  1; //!<[05] Short-circuit detector interrupt enable
      __IO ONE_BIT    CKABIE  :  1; //!<[06] Clock absence interrupt enable
           ONE_BIT    UNUSED0 :  1; //!<[07] 
      __IO uint32_t   EXCH    :  8; //!<[08] Extremes detector channel selection
      __IO uint32_t   AWDCH   :  8; //!<[16] Analog watchdog channel selection
    } B;
    __IO uint32_t  R;
    explicit DFSDM_FLT3CR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DFSDM_FLT3CR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DFSDM_FLT3CR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DFSDM_FLT3ISR_DEF     {  //!< interrupt and status register
    struct {
      __I  ONE_BIT    JEOCF   :  1; //!<[00] End of injected conversion flag
      __I  ONE_BIT    REOCF   :  1; //!<[01] End of regular conversion flag
      __I  ONE_BIT    JOVRF   :  1; //!<[02] Injected conversion overrun flag
      __I  ONE_BIT    ROVRF   :  1; //!<[03] Regular conversion overrun flag
      __I  ONE_BIT    AWDF    :  1; //!<[04] Analog watchdog
           uint32_t   UNUSED0 :  8; //!<[05] 
      __I  ONE_BIT    JCIP    :  1; //!<[13] Injected conversion in progress status
      __I  ONE_BIT    RCIP    :  1; //!<[14] Regular conversion in progress status
           ONE_BIT    UNUSED1 :  1; //!<[15] 
      __I  uint32_t   CKABF   :  8; //!<[16] Clock absence flag
      __I  uint32_t   SCDF    :  8; //!<[24] short-circuit detector flag
    } B;
    __I  uint32_t  R;

    explicit DFSDM_FLT3ISR_DEF (volatile DFSDM_FLT3ISR_DEF & o) noexcept { R = o.R; };
  };
  union DFSDM_FLT3ICR_DEF     {  //!< interrupt flag clear register
    struct {
           uint32_t   UNUSED0  :  2; //!<[00] 
      __IO ONE_BIT    CLRJOVRF :  1; //!<[02] Clear the injected conversion overrun flag
      __IO ONE_BIT    CLRROVRF :  1; //!<[03] Clear the regular conversion overrun flag
           uint32_t   UNUSED1  : 12; //!<[04] 
      __IO uint32_t   CLRCKABF :  8; //!<[16] Clear the clock absence flag
      __IO uint32_t   CLRSCDF  :  8; //!<[24] Clear the short-circuit detector flag
    } B;
    __IO uint32_t  R;
    explicit DFSDM_FLT3ICR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DFSDM_FLT3ICR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DFSDM_FLT3ICR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DFSDM_FLT3JCHGR_DEF   {  //!< injected channel group selection register
    struct {
      __IO uint32_t   JCHG :  8; //!<[00] Injected channel group selection
    } B;
    __IO uint32_t  R;
    explicit DFSDM_FLT3JCHGR_DEF () noexcept { R = 0x00000001u; }
    template<typename F> void setbit (F f) volatile {
      DFSDM_FLT3JCHGR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DFSDM_FLT3JCHGR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DFSDM_FLT3FCR_DEF     {  //!< filter control register
    struct {
      __IO uint32_t   IOSR    :  8; //!<[00] Integrator oversampling ratio (averaging length)
           uint32_t   UNUSED0 :  8; //!<[08] 
      __IO uint32_t   FOSR    : 10; //!<[16] Sinc filter oversampling ratio (decimation rate)
           uint32_t   UNUSED1 :  3; //!<[26] 
      __IO uint32_t   FORD    :  3; //!<[29] Sinc filter order
    } B;
    __IO uint32_t  R;
    explicit DFSDM_FLT3FCR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DFSDM_FLT3FCR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DFSDM_FLT3FCR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DFSDM_FLT3JDATAR_DEF  {  //!< data register for injected group
    struct {
      __I  uint32_t   JDATACH :  3; //!<[00] Injected channel most recently converted
           uint32_t   UNUSED0 :  5; //!<[03] 
      __I  uint32_t   JDATA   : 24; //!<[08] Injected group conversion data
    } B;
    __I  uint32_t  R;

    explicit DFSDM_FLT3JDATAR_DEF (volatile DFSDM_FLT3JDATAR_DEF & o) noexcept { R = o.R; };
  };
  union DFSDM_FLT3RDATAR_DEF  {  //!< data register for the regular channel
    struct {
      __I  uint32_t   RDATACH :  3; //!<[00] Regular channel most recently converted
           ONE_BIT    UNUSED0 :  1; //!<[03] 
      __I  ONE_BIT    RPEND   :  1; //!<[04] Regular channel pending data
           uint32_t   UNUSED1 :  3; //!<[05] 
      __I  uint32_t   RDATA   : 24; //!<[08] Regular channel conversion data
    } B;
    __I  uint32_t  R;

    explicit DFSDM_FLT3RDATAR_DEF (volatile DFSDM_FLT3RDATAR_DEF & o) noexcept { R = o.R; };
  };
  union DFSDM_FLT3AWHTR_DEF   {  //!< analog watchdog high threshold register
    struct {
      __IO uint32_t   BKAWH   :  4; //!<[00] Break signal assignment to analog watchdog high threshold event
           uint32_t   UNUSED0 :  4; //!<[04] 
      __IO uint32_t   AWHT    : 24; //!<[08] Analog watchdog high threshold
    } B;
    __IO uint32_t  R;
    explicit DFSDM_FLT3AWHTR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DFSDM_FLT3AWHTR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DFSDM_FLT3AWHTR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DFSDM_FLT3AWLTR_DEF   {  //!< analog watchdog low threshold register
    struct {
      __IO uint32_t   BKAWL   :  4; //!<[00] Break signal assignment to analog watchdog low threshold event
           uint32_t   UNUSED0 :  4; //!<[04] 
      __IO uint32_t   AWLT    : 24; //!<[08] Analog watchdog low threshold
    } B;
    __IO uint32_t  R;
    explicit DFSDM_FLT3AWLTR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DFSDM_FLT3AWLTR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DFSDM_FLT3AWLTR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DFSDM_FLT3AWSR_DEF    {  //!< analog watchdog status register
    struct {
      __I  uint32_t   AWLTF :  8; //!<[00] Analog watchdog low threshold flag
      __I  uint32_t   AWHTF :  8; //!<[08] Analog watchdog high threshold flag
    } B;
    __I  uint32_t  R;

    explicit DFSDM_FLT3AWSR_DEF (volatile DFSDM_FLT3AWSR_DEF & o) noexcept { R = o.R; };
  };
  union DFSDM_FLT3AWCFR_DEF   {  //!< analog watchdog clear flag register
    struct {
      __IO uint32_t   CLRAWLTF :  8; //!<[00] Clear the analog watchdog low threshold flag
      __IO uint32_t   CLRAWHTF :  8; //!<[08] Clear the analog watchdog high threshold flag
    } B;
    __IO uint32_t  R;
    explicit DFSDM_FLT3AWCFR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DFSDM_FLT3AWCFR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DFSDM_FLT3AWCFR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DFSDM_FLT3EXMAX_DEF   {  //!< Extremes detector maximum register
    struct {
      __I  uint32_t   EXMAXCH :  3; //!<[00] Extremes detector maximum data channel
           uint32_t   UNUSED0 :  5; //!<[03] 
      __I  uint32_t   EXMAX   : 24; //!<[08] Extremes detector maximum value
    } B;
    __I  uint32_t  R;

    explicit DFSDM_FLT3EXMAX_DEF (volatile DFSDM_FLT3EXMAX_DEF & o) noexcept { R = o.R; };
  };
  union DFSDM_FLT3EXMIN_DEF   {  //!< Extremes detector minimum register
    struct {
      __I  uint32_t   EXMINCH :  3; //!<[00] Extremes detector minimum data channel
           uint32_t   UNUSED0 :  5; //!<[03] 
      __I  uint32_t   EXMIN   : 24; //!<[08] EXMIN
    } B;
    __I  uint32_t  R;

    explicit DFSDM_FLT3EXMIN_DEF (volatile DFSDM_FLT3EXMIN_DEF & o) noexcept { R = o.R; };
  };
  union DFSDM_FLT3CNVTIMR_DEF {  //!< conversion timer register
    struct {
           uint32_t   UNUSED0 :  4; //!<[00] 
      __I  uint32_t   CNVCNT  : 28; //!<[04] 28-bit timer counting conversion time t = CNVCNT[27:0] / fDFSDM_CKIN
    } B;
    __I  uint32_t  R;

    explicit DFSDM_FLT3CNVTIMR_DEF (volatile DFSDM_FLT3CNVTIMR_DEF & o) noexcept { R = o.R; };
  };
  // PERIPHERAL DFSDM REGISTERS INSTANCES
  __IO CH0CFGR1_DEF                 CH0CFGR1 ;  //!< [0000](04)[0x00000000]
  __IO CH0CFGR2_DEF                 CH0CFGR2 ;  //!< [0004](04)[0x00000000]
  __IO CH0AWSCDR_DEF               CH0AWSCDR ;  //!< [0008](04)[0x00000000]
  __IO CH0WDATR_DEF                 CH0WDATR ;  //!< [000c](04)[0x00000000]
  __IO CH0DATINR_DEF               CH0DATINR ;  //!< [0010](04)[0x00000000]
  __IO CH0DLYR_DEF                   CH0DLYR ;  //!< [0014](04)[0x00000000]
       uint32_t                    UNUSED0 [2];  //!< [0018](08)[0xFFFFFFFF]
  __IO CH1CFGR1_DEF                 CH1CFGR1 ;  //!< [0020](04)[0x00000000]
  __IO CH1CFGR2_DEF                 CH1CFGR2 ;  //!< [0024](04)[0x00000000]
  __IO CH1AWSCDR_DEF               CH1AWSCDR ;  //!< [0028](04)[0x00000000]
  __IO CH1WDATR_DEF                 CH1WDATR ;  //!< [002c](04)[0x00000000]
  __IO CH1DATINR_DEF               CH1DATINR ;  //!< [0030](04)[0x00000000]
  __IO CH1DLYR_DEF                   CH1DLYR ;  //!< [0034](04)[0x00000000]
       uint32_t                    UNUSED1 [2];  //!< [0038](08)[0xFFFFFFFF]
  __IO CH2CFGR1_DEF                 CH2CFGR1 ;  //!< [0040](04)[0x00000000]
  __IO CH2CFGR2_DEF                 CH2CFGR2 ;  //!< [0044](04)[0x00000000]
  __IO CH2AWSCDR_DEF               CH2AWSCDR ;  //!< [0048](04)[0x00000000]
  __IO CH2WDATR_DEF                 CH2WDATR ;  //!< [004c](04)[0x00000000]
  __IO CH2DATINR_DEF               CH2DATINR ;  //!< [0050](04)[0x00000000]
  __IO CH2DLYR_DEF                   CH2DLYR ;  //!< [0054](04)[0x00000000]
       uint32_t                    UNUSED2 [2];  //!< [0058](08)[0xFFFFFFFF]
  __IO CH3CFGR1_DEF                 CH3CFGR1 ;  //!< [0060](04)[0x00000000]
  __IO CH3CFGR2_DEF                 CH3CFGR2 ;  //!< [0064](04)[0x00000000]
  __IO CH3AWSCDR_DEF               CH3AWSCDR ;  //!< [0068](04)[0x00000000]
  __IO CH3WDATR_DEF                 CH3WDATR ;  //!< [006c](04)[0x00000000]
  __IO CH3DATINR_DEF               CH3DATINR ;  //!< [0070](04)[0x00000000]
  __IO CH3DLYR_DEF                   CH3DLYR ;  //!< [0074](04)[0x00000000]
       uint32_t                    UNUSED3 [2];  //!< [0078](08)[0xFFFFFFFF]
  __IO CH4CFGR1_DEF                 CH4CFGR1 ;  //!< [0080](04)[0x00000000]
  __IO CH4CFGR2_DEF                 CH4CFGR2 ;  //!< [0084](04)[0x00000000]
  __IO CH4AWSCDR_DEF               CH4AWSCDR ;  //!< [0088](04)[0x00000000]
  __IO CH4WDATR_DEF                 CH4WDATR ;  //!< [008c](04)[0x00000000]
  __IO CH4DATINR_DEF               CH4DATINR ;  //!< [0090](04)[0x00000000]
  __IO CH4DLYR_DEF                   CH4DLYR ;  //!< [0094](04)[0x00000000]
       uint32_t                    UNUSED4 [2];  //!< [0098](08)[0xFFFFFFFF]
  __IO CH5CFGR1_DEF                 CH5CFGR1 ;  //!< [00a0](04)[0x00000000]
  __IO CH5CFGR2_DEF                 CH5CFGR2 ;  //!< [00a4](04)[0x00000000]
  __IO CH5AWSCDR_DEF               CH5AWSCDR ;  //!< [00a8](04)[0x00000000]
  __IO CH5WDATR_DEF                 CH5WDATR ;  //!< [00ac](04)[0x00000000]
  __IO CH5DATINR_DEF               CH5DATINR ;  //!< [00b0](04)[0x00000000]
  __IO CH5DLYR_DEF                   CH5DLYR ;  //!< [00b4](04)[0x00000000]
       uint32_t                    UNUSED5 [2];  //!< [00b8](08)[0xFFFFFFFF]
  __IO CH6CFGR1_DEF                 CH6CFGR1 ;  //!< [00c0](04)[0x00000000]
  __IO CH6CFGR2_DEF                 CH6CFGR2 ;  //!< [00c4](04)[0x00000000]
  __IO CH6AWSCDR_DEF               CH6AWSCDR ;  //!< [00c8](04)[0x00000000]
  __IO CH6WDATR_DEF                 CH6WDATR ;  //!< [00cc](04)[0x00000000]
  __IO CH6DATINR_DEF               CH6DATINR ;  //!< [00d0](04)[0x00000000]
  __IO CH6DLYR_DEF                   CH6DLYR ;  //!< [00d4](04)[0x00000000]
       uint32_t                    UNUSED6 [2];  //!< [00d8](08)[0xFFFFFFFF]
  __IO CH7CFGR1_DEF                 CH7CFGR1 ;  //!< [00e0](04)[0x00000000]
  __IO CH7CFGR2_DEF                 CH7CFGR2 ;  //!< [00e4](04)[0x00000000]
  __IO CH7AWSCDR_DEF               CH7AWSCDR ;  //!< [00e8](04)[0x00000000]
  __IO CH7WDATR_DEF                 CH7WDATR ;  //!< [00ec](04)[0x00000000]
  __IO CH7DATINR_DEF               CH7DATINR ;  //!< [00f0](04)[0x00000000]
  __IO CH7DLYR_DEF                   CH7DLYR ;  //!< [00f4](04)[0x00000000]
       uint32_t                    UNUSED7 [2];  //!< [00f8](08)[0xFFFFFFFF]
  __IO DFSDM_FLT0CR1_DEF       DFSDM_FLT0CR1 ;  //!< [0100](04)[0x00000000]
  __IO DFSDM_FLT0CR2_DEF       DFSDM_FLT0CR2 ;  //!< [0104](04)[0x00000000]
  __I  DFSDM_FLT0ISR_DEF       DFSDM_FLT0ISR ;  //!< [0108](04)[0x00FF0000]
  __IO DFSDM_FLT0ICR_DEF       DFSDM_FLT0ICR ;  //!< [010c](04)[0x00000000]
  __IO DFSDM_FLT0JCHGR_DEF   DFSDM_FLT0JCHGR ;  //!< [0110](04)[0x00000001]
  __IO DFSDM_FLT0FCR_DEF       DFSDM_FLT0FCR ;  //!< [0114](04)[0x00000000]
  __I  DFSDM_FLT0JDATAR_DEF  DFSDM_FLT0JDATAR ;  //!< [0118](04)[0x00000000]
  __I  DFSDM_FLT0RDATAR_DEF  DFSDM_FLT0RDATAR ;  //!< [011c](04)[0x00000000]
  __IO DFSDM_FLT0AWHTR_DEF   DFSDM_FLT0AWHTR ;  //!< [0120](04)[0x00000000]
  __IO DFSDM_FLT0AWLTR_DEF   DFSDM_FLT0AWLTR ;  //!< [0124](04)[0x00000000]
  __I  DFSDM_FLT0AWSR_DEF     DFSDM_FLT0AWSR ;  //!< [0128](04)[0x00000000]
  __IO DFSDM_FLT0AWCFR_DEF   DFSDM_FLT0AWCFR ;  //!< [012c](04)[0x00000000]
  __I  DFSDM_FLT0EXMAX_DEF   DFSDM_FLT0EXMAX ;  //!< [0130](04)[0x80000000]
  __I  DFSDM_FLT0EXMIN_DEF   DFSDM_FLT0EXMIN ;  //!< [0134](04)[0x7FFFFF00]
  __I  DFSDM_FLT0CNVTIMR_DEF DFSDM_FLT0CNVTIMR ;  //!< [0138](04)[0x00000000]
       uint32_t                    UNUSED8 [17];  //!< [013c](44)[0xFFFFFFFF]
  __IO DFSDM_FLT1CR1_DEF       DFSDM_FLT1CR1 ;  //!< [0180](04)[0x00000000]
  __IO DFSDM_FLT1CR2_DEF       DFSDM_FLT1CR2 ;  //!< [0184](04)[0x00000000]
  __I  DFSDM_FLT1ISR_DEF       DFSDM_FLT1ISR ;  //!< [0188](04)[0x00FF0000]
  __IO DFSDM_FLT1ICR_DEF       DFSDM_FLT1ICR ;  //!< [018c](04)[0x00000000]
  __IO DFSDM_FLT1CHGR_DEF     DFSDM_FLT1CHGR ;  //!< [0190](04)[0x00000001]
  __IO DFSDM_FLT1FCR_DEF       DFSDM_FLT1FCR ;  //!< [0194](04)[0x00000000]
  __I  DFSDM_FLT1JDATAR_DEF  DFSDM_FLT1JDATAR ;  //!< [0198](04)[0x00000000]
  __I  DFSDM_FLT1RDATAR_DEF  DFSDM_FLT1RDATAR ;  //!< [019c](04)[0x00000000]
  __IO DFSDM_FLT1AWHTR_DEF   DFSDM_FLT1AWHTR ;  //!< [01a0](04)[0x00000000]
  __IO DFSDM_FLT1AWLTR_DEF   DFSDM_FLT1AWLTR ;  //!< [01a4](04)[0x00000000]
  __I  DFSDM_FLT1AWSR_DEF     DFSDM_FLT1AWSR ;  //!< [01a8](04)[0x00000000]
  __IO DFSDM_FLT1AWCFR_DEF   DFSDM_FLT1AWCFR ;  //!< [01ac](04)[0x00000000]
  __I  DFSDM_FLT1EXMAX_DEF   DFSDM_FLT1EXMAX ;  //!< [01b0](04)[0x80000000]
  __I  DFSDM_FLT1EXMIN_DEF   DFSDM_FLT1EXMIN ;  //!< [01b4](04)[0x7FFFFF00]
  __I  DFSDM_FLT1CNVTIMR_DEF DFSDM_FLT1CNVTIMR ;  //!< [01b8](04)[0x00000000]
       uint32_t                    UNUSED9 [17];  //!< [01bc](44)[0xFFFFFFFF]
  __IO DFSDM_FLT2CR1_DEF       DFSDM_FLT2CR1 ;  //!< [0200](04)[0x00000000]
  __IO DFSDM_FLT2CR2_DEF       DFSDM_FLT2CR2 ;  //!< [0204](04)[0x00000000]
  __I  DFSDM_FLT2ISR_DEF       DFSDM_FLT2ISR ;  //!< [0208](04)[0x00FF0000]
  __IO DFSDM_FLT2ICR_DEF       DFSDM_FLT2ICR ;  //!< [020c](04)[0x00000000]
  __IO DFSDM_FLT2JCHGR_DEF   DFSDM_FLT2JCHGR ;  //!< [0210](04)[0x00000001]
  __IO DFSDM_FLT2FCR_DEF       DFSDM_FLT2FCR ;  //!< [0214](04)[0x00000000]
  __I  DFSDM_FLT2JDATAR_DEF  DFSDM_FLT2JDATAR ;  //!< [0218](04)[0x00000000]
  __I  DFSDM_FLT2RDATAR_DEF  DFSDM_FLT2RDATAR ;  //!< [021c](04)[0x00000000]
  __IO DFSDM_FLT2AWHTR_DEF   DFSDM_FLT2AWHTR ;  //!< [0220](04)[0x00000000]
  __IO DFSDM_FLT2AWLTR_DEF   DFSDM_FLT2AWLTR ;  //!< [0224](04)[0x00000000]
  __I  DFSDM_FLT2AWSR_DEF     DFSDM_FLT2AWSR ;  //!< [0228](04)[0x00000000]
  __IO DFSDM_FLT2AWCFR_DEF   DFSDM_FLT2AWCFR ;  //!< [022c](04)[0x00000000]
  __I  DFSDM_FLT2EXMAX_DEF   DFSDM_FLT2EXMAX ;  //!< [0230](04)[0x80000000]
  __I  DFSDM_FLT2EXMIN_DEF   DFSDM_FLT2EXMIN ;  //!< [0234](04)[0x7FFFFF00]
  __I  DFSDM_FLT2CNVTIMR_DEF DFSDM_FLT2CNVTIMR ;  //!< [0238](04)[0x00000000]
       uint32_t                  UNUSED10 [17];  //!< [023c](44)[0xFFFFFFFF]
  __IO DFSDM_FLT3CR1_DEF       DFSDM_FLT3CR1 ;  //!< [0280](04)[0x00000000]
  __IO DFSDM_FLT3CR2_DEF       DFSDM_FLT3CR2 ;  //!< [0284](04)[0x00000000]
  __I  DFSDM_FLT3ISR_DEF       DFSDM_FLT3ISR ;  //!< [0288](04)[0x00FF0000]
  __IO DFSDM_FLT3ICR_DEF       DFSDM_FLT3ICR ;  //!< [028c](04)[0x00000000]
  __IO DFSDM_FLT3JCHGR_DEF   DFSDM_FLT3JCHGR ;  //!< [0290](04)[0x00000001]
  __IO DFSDM_FLT3FCR_DEF       DFSDM_FLT3FCR ;  //!< [0294](04)[0x00000000]
  __I  DFSDM_FLT3JDATAR_DEF  DFSDM_FLT3JDATAR ;  //!< [0298](04)[0x00000000]
  __I  DFSDM_FLT3RDATAR_DEF  DFSDM_FLT3RDATAR ;  //!< [029c](04)[0x00000000]
  __IO DFSDM_FLT3AWHTR_DEF   DFSDM_FLT3AWHTR ;  //!< [02a0](04)[0x00000000]
  __IO DFSDM_FLT3AWLTR_DEF   DFSDM_FLT3AWLTR ;  //!< [02a4](04)[0x00000000]
  __I  DFSDM_FLT3AWSR_DEF     DFSDM_FLT3AWSR ;  //!< [02a8](04)[0x00000000]
  __IO DFSDM_FLT3AWCFR_DEF   DFSDM_FLT3AWCFR ;  //!< [02ac](04)[0x00000000]
  __I  DFSDM_FLT3EXMAX_DEF   DFSDM_FLT3EXMAX ;  //!< [02b0](04)[0x80000000]
  __I  DFSDM_FLT3EXMIN_DEF   DFSDM_FLT3EXMIN ;  //!< [02b4](04)[0x7FFFFF00]
  __I  DFSDM_FLT3CNVTIMR_DEF DFSDM_FLT3CNVTIMR ;  //!< [02b8](04)[0x00000000]
}; /* total size = 0x0500, struct size = 0x02BC */

// ////////////////////+++ QUADSPI +-+//////////////////// //
struct QUADSPI_Type       { /*!< QuadSPI interface */
  union CR_DEF    {  //!< control register
    struct {
      __IO ONE_BIT    EN        :  1; //!<[00] Enable
      __IO ONE_BIT    ABORT     :  1; //!<[01] Abort request
      __IO ONE_BIT    DMAEN     :  1; //!<[02] DMA enable
      __IO ONE_BIT    TCEN      :  1; //!<[03] Timeout counter enable
      __IO ONE_BIT    SSHIFT    :  1; //!<[04] Sample shift
           ONE_BIT    UNUSED0   :  1; //!<[05] 
      __IO ONE_BIT    DFM       :  1; //!<[06] Dual-flash mode
      __IO ONE_BIT    FSEL      :  1; //!<[07] FLASH memory selection
      __IO uint32_t   FTHRES    :  5; //!<[08] IFO threshold level
           uint32_t   UNUSED1   :  3; //!<[13] 
      __IO ONE_BIT    TEIE      :  1; //!<[16] Transfer error interrupt enable
      __IO ONE_BIT    TCIE      :  1; //!<[17] Transfer complete interrupt enable
      __IO ONE_BIT    FTIE      :  1; //!<[18] FIFO threshold interrupt enable
      __IO ONE_BIT    SMIE      :  1; //!<[19] Status match interrupt enable
      __IO ONE_BIT    TOIE      :  1; //!<[20] TimeOut interrupt enable
           ONE_BIT    UNUSED2   :  1; //!<[21] 
      __IO ONE_BIT    APMS      :  1; //!<[22] Automatic poll mode stop
      __IO ONE_BIT    PMM       :  1; //!<[23] Polling match mode
      __IO uint32_t   PRESCALER :  8; //!<[24] Clock prescaler
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
  union DCR_DEF   {  //!< device configuration register
    struct {
      __IO ONE_BIT    CKMODE  :  1; //!<[00] Mode 0 / mode 3
           uint32_t   UNUSED0 :  7; //!<[01] 
      __IO uint32_t   CSHT    :  3; //!<[08] Chip select high time
           uint32_t   UNUSED1 :  5; //!<[11] 
      __IO uint32_t   FSIZE   :  5; //!<[16] FLASH memory size
    } B;
    __IO uint32_t  R;
    explicit DCR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DCR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DCR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union SR_DEF    {  //!< status register
    struct {
      __I  ONE_BIT    TEF     :  1; //!<[00] Transfer error flag
      __I  ONE_BIT    TCF     :  1; //!<[01] Transfer complete flag
      __I  ONE_BIT    FTF     :  1; //!<[02] FIFO threshold flag
      __I  ONE_BIT    SMF     :  1; //!<[03] Status match flag
      __I  ONE_BIT    TOF     :  1; //!<[04] Timeout flag
      __I  ONE_BIT    BUSY    :  1; //!<[05] Busy
           uint32_t   UNUSED0 :  2; //!<[06] 
      __I  uint32_t   FLEVEL  :  7; //!<[08] FIFO level
    } B;
    __I  uint32_t  R;

    explicit SR_DEF (volatile SR_DEF & o) noexcept { R = o.R; };
  };
  union FCR_DEF   {  //!< flag clear register
    struct {
      __IO ONE_BIT  CTEF    :  1; //!<[00] Clear transfer error flag
      __IO ONE_BIT  CTCF    :  1; //!<[01] Clear transfer complete flag
           ONE_BIT  UNUSED0 :  1; //!<[02] 
      __IO ONE_BIT  CSMF    :  1; //!<[03] Clear status match flag
      __IO ONE_BIT  CTOF    :  1; //!<[04] Clear timeout flag
    } B;
    __IO uint32_t  R;
    explicit FCR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      FCR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      FCR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DLR_DEF   {  //!< data length register
    struct {
      __IO uint32_t   DL : 32; //!<[00] Data length
    } B;
    __IO uint32_t  R;
    explicit DLR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DLR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DLR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CCR_DEF   {  //!< communication configuration register
    struct {
      __IO uint32_t   INSTRUCTION :  8; //!<[00] Instruction
      __IO uint32_t   IMODE       :  2; //!<[08] Instruction mode
      __IO uint32_t   ADMODE      :  2; //!<[10] Address mode
      __IO uint32_t   ADSIZE      :  2; //!<[12] Address size
      __IO uint32_t   ABMODE      :  2; //!<[14] Alternate bytes mode
      __IO uint32_t   ABSIZE      :  2; //!<[16] Alternate bytes size
      __IO uint32_t   DCYC        :  5; //!<[18] Number of dummy cycles
           ONE_BIT    UNUSED0     :  1; //!<[23] 
      __IO uint32_t   DMODE       :  2; //!<[24] Data mode
      __IO uint32_t   FMODE       :  2; //!<[26] Functional mode
      __IO ONE_BIT    SIOO        :  1; //!<[28] Send instruction only once mode
           ONE_BIT    UNUSED1     :  1; //!<[29] 
      __IO ONE_BIT    DHHC        :  1; //!<[30] DDR hold half cycle
      __IO ONE_BIT    DDRM        :  1; //!<[31] Double data rate mode
    } B;
    __IO uint32_t  R;
    explicit CCR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CCR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CCR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union AR_DEF    {  //!< address register
    struct {
      __IO uint32_t   ADDRESS : 32; //!<[00] Address
    } B;
    __IO uint32_t  R;
    explicit AR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      AR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      AR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ABR_DEF   {  //!< ABR
    struct {
      __IO uint32_t   ALTERNATE : 32; //!<[00] ALTERNATE
    } B;
    __IO uint32_t  R;
    explicit ABR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ABR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ABR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union DR_DEF    {  //!< data register
    struct {
      __IO uint32_t   DATA : 32; //!<[00] Data
    } B;
    __IO uint32_t  R;
    explicit DR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      DR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      DR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union PSMKR_DEF {  //!< polling status mask register
    struct {
      __IO uint32_t   MASK : 32; //!<[00] Status mask
    } B;
    __IO uint32_t  R;
    explicit PSMKR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      PSMKR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      PSMKR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union PSMAR_DEF {  //!< polling status match register
    struct {
      __IO uint32_t   MATCH : 32; //!<[00] Status match
    } B;
    __IO uint32_t  R;
    explicit PSMAR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      PSMAR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      PSMAR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union PIR_DEF   {  //!< polling interval register
    struct {
      __IO uint32_t   INTERVAL : 16; //!<[00] Polling interval
    } B;
    __IO uint32_t  R;
    explicit PIR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      PIR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      PIR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union LPTR_DEF  {  //!< low-power timeout register
    struct {
      __IO uint32_t   TIMEOUT : 16; //!<[00] Timeout period
    } B;
    __IO uint32_t  R;
    explicit LPTR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      LPTR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      LPTR_DEF r; r.R = R;
      R = f (r);
    }
  };
  // PERIPHERAL QUADSPI REGISTERS INSTANCES
  __IO CR_DEF                 CR ;  //!< [0000](04)[0x00000000]
  __IO DCR_DEF               DCR ;  //!< [0004](04)[0x00000000]
  __I  SR_DEF                 SR ;  //!< [0008](04)[0x00000000]
  __IO FCR_DEF               FCR ;  //!< [000c](04)[0x00000000]
  __IO DLR_DEF               DLR ;  //!< [0010](04)[0x00000000]
  __IO CCR_DEF               CCR ;  //!< [0014](04)[0x00000000]
  __IO AR_DEF                 AR ;  //!< [0018](04)[0x00000000]
  __IO ABR_DEF               ABR ;  //!< [001c](04)[0x00000000]
  __IO DR_DEF                 DR ;  //!< [0020](04)[0x00000000]
  __IO PSMKR_DEF           PSMKR ;  //!< [0024](04)[0x00000000]
  __IO PSMAR_DEF           PSMAR ;  //!< [0028](04)[0x00000000]
  __IO PIR_DEF               PIR ;  //!< [002c](04)[0x00000000]
  __IO LPTR_DEF             LPTR ;  //!< [0030](04)[0x00000000]
}; /* total size = 0x0400, struct size = 0x0034 */

// ////////////////////+++ DBGMCU +-+//////////////////// //
struct DBGMCU_Type        { /*!< MCU debug component */
  union IDCODE_DEF   {  //!< DBGMCU_IDCODE
    struct {
      __I  uint32_t   DEV_ID  : 12; //!<[00] Device identifier
           uint32_t   UNUSED0 :  4; //!<[12] 
      __I  uint32_t   REV_ID  : 16; //!<[16] Revision identifie
    } B;
    __I  uint32_t  R;

    explicit IDCODE_DEF (volatile IDCODE_DEF & o) noexcept { R = o.R; };
  };
  union CR_DEF       {  //!< Debug MCU configuration register
    struct {
      __IO ONE_BIT    DBG_SLEEP   :  1; //!<[00] Debug Sleep mode
      __IO ONE_BIT    DBG_STOP    :  1; //!<[01] Debug Stop mode
      __IO ONE_BIT    DBG_STANDBY :  1; //!<[02] Debug Standby mode
           uint32_t   UNUSED0     :  2; //!<[03] 
      __IO ONE_BIT    TRACE_IOEN  :  1; //!<[05] Trace pin assignment control
      __IO uint32_t   TRACE_MODE  :  2; //!<[06] Trace pin assignment control
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
  union APB1FZR1_DEF {  //!< Debug MCU APB1 freeze register1
    struct {
      __IO ONE_BIT    DBG_TIM2_STOP   :  1; //!<[00] TIM2 counter stopped when core is halted
           uint32_t   UNUSED0         :  3; //!<[01] 
      __IO ONE_BIT    DBG_TIM6_STOP   :  1; //!<[04] TIM6 counter stopped when core is halted
      __IO ONE_BIT    DBG_TIM7_STOP   :  1; //!<[05] TIM7 counter stopped when core is halted
           uint32_t   UNUSED1         :  4; //!<[06] 
      __IO ONE_BIT    DBG_RTC_STOP    :  1; //!<[10] RTC counter stopped when core is halted
      __IO ONE_BIT    DBG_WWDG_STOP   :  1; //!<[11] Window watchdog counter stopped when core is halted
      __IO ONE_BIT    DBG_IWDG_STOP   :  1; //!<[12] Independent watchdog counter stopped when core is halted
           uint32_t   UNUSED2         :  8; //!<[13] 
      __IO ONE_BIT    DBG_I2C1_STOP   :  1; //!<[21] I2C1 SMBUS timeout counter stopped when core is halted
      __IO ONE_BIT    DBG_I2C2_STOP   :  1; //!<[22] I2C2 SMBUS timeout counter stopped when core is halted
      __IO ONE_BIT    DBG_I2C3_STOP   :  1; //!<[23] I2C3 SMBUS timeout counter stopped when core is halted
           ONE_BIT    UNUSED3         :  1; //!<[24] 
      __IO ONE_BIT    DBG_CAN_STOP    :  1; //!<[25] bxCAN stopped when core is halted
           uint32_t   UNUSED4         :  5; //!<[26] 
      __IO ONE_BIT    DBG_LPTIM1_STOP :  1; //!<[31] LPTIM1 counter stopped when core is halted
    } B;
    __IO uint32_t  R;
    explicit APB1FZR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      APB1FZR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      APB1FZR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union APB1FZR2_DEF {  //!< Debug MCU APB1 freeze register 2
    struct {
           uint32_t   UNUSED0         :  5; //!<[00] 
      __IO ONE_BIT    DBG_LPTIM2_STOP :  1; //!<[05] LPTIM2 counter stopped when core is halted
    } B;
    __IO uint32_t  R;
    explicit APB1FZR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      APB1FZR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      APB1FZR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union APB2FZR_DEF  {  //!< Debug MCU APB2 freeze register
    struct {
           uint32_t   UNUSED0        : 11; //!<[00] 
      __IO ONE_BIT    DBG_TIM1_STOP  :  1; //!<[11] TIM1 counter stopped when core is halted
           uint32_t   UNUSED1        :  4; //!<[12] 
      __IO ONE_BIT    DBG_TIM15_STOP :  1; //!<[16] TIM15 counter stopped when core is halted
      __IO ONE_BIT    DBG_TIM16_STOP :  1; //!<[17] TIM16 counter stopped when core is halted
    } B;
    __IO uint32_t  R;
    explicit APB2FZR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      APB2FZR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      APB2FZR_DEF r; r.R = R;
      R = f (r);
    }
  };
  // PERIPHERAL DBGMCU REGISTERS INSTANCES
  __I  IDCODE_DEF            IDCODE ;  //!< [0000](04)[0x00000000]
  __IO CR_DEF                    CR ;  //!< [0004](04)[0x00000000]
  __IO APB1FZR1_DEF        APB1FZR1 ;  //!< [0008](04)[0x00000000]
  __IO APB1FZR2_DEF        APB1FZR2 ;  //!< [000c](04)[0x00000000]
  __IO APB2FZR_DEF          APB2FZR ;  //!< [0010](04)[0x00000000]
}; /* total size = 0x0015, struct size = 0x0014 */
static TIM2_Type          & TIM2          = * reinterpret_cast<TIM2_Type          * const> (0x40000000);
static TIM2_Type          & TIM3          = * reinterpret_cast<TIM2_Type          * const> (0x40000400);
static TIM6_Type          & TIM6          = * reinterpret_cast<TIM6_Type          * const> (0x40001000);
static TIM6_Type          & TIM7          = * reinterpret_cast<TIM6_Type          * const> (0x40001400);
static LCD_Type           & LCD           = * reinterpret_cast<LCD_Type           * const> (0x40002400);
static RTC_Type           & RTC           = * reinterpret_cast<RTC_Type           * const> (0x40002800);
static WWDG_Type          & WWDG          = * reinterpret_cast<WWDG_Type          * const> (0x40002c00);
static IWDG_Type          & IWDG          = * reinterpret_cast<IWDG_Type          * const> (0x40003000);
static SPI1_Type          & SPI2          = * reinterpret_cast<SPI1_Type          * const> (0x40003800);
static SPI1_Type          & SPI3          = * reinterpret_cast<SPI1_Type          * const> (0x40003c00);
static USART1_Type        & USART2        = * reinterpret_cast<USART1_Type        * const> (0x40004400);
static USART3_Type        & USART3        = * reinterpret_cast<USART3_Type        * const> (0x40004800);
static USART1_Type        & UART4         = * reinterpret_cast<USART1_Type        * const> (0x40004c00);
static I2C1_Type          & I2C1          = * reinterpret_cast<I2C1_Type          * const> (0x40005400);
static I2C1_Type          & I2C2          = * reinterpret_cast<I2C1_Type          * const> (0x40005800);
static I2C1_Type          & I2C3          = * reinterpret_cast<I2C1_Type          * const> (0x40005c00);
static CRS_Type           & CRS           = * reinterpret_cast<CRS_Type           * const> (0x40006000);
static CAN1_Type          & CAN1          = * reinterpret_cast<CAN1_Type          * const> (0x40006400);
static USB_SRAM_Type      & USB_FS        = * reinterpret_cast<USB_SRAM_Type      * const> (0x40006800);
static USB_SRAM_Type      & USB_SRAM      = * reinterpret_cast<USB_SRAM_Type      * const> (0x40006c00);
static PWR_Type           & PWR           = * reinterpret_cast<PWR_Type           * const> (0x40007000);
static DAC1_Type          & DAC1          = * reinterpret_cast<DAC1_Type          * const> (0x40007400);
static OPAMP_Type         & OPAMP         = * reinterpret_cast<OPAMP_Type         * const> (0x40007800);
static LPTIM1_Type        & LPTIM1        = * reinterpret_cast<LPTIM1_Type        * const> (0x40007c00);
static LPUART1_Type       & LPUART1       = * reinterpret_cast<LPUART1_Type       * const> (0x40008000);
static I2C1_Type          & I2C4          = * reinterpret_cast<I2C1_Type          * const> (0x40008400);
static SWPMI1_Type        & SWPMI1        = * reinterpret_cast<SWPMI1_Type        * const> (0x40008800);
static LPTIM1_Type        & LPTIM2        = * reinterpret_cast<LPTIM1_Type        * const> (0x40009400);
static SYSCFG_Type        & SYSCFG        = * reinterpret_cast<SYSCFG_Type        * const> (0x40010000);
static VREFBUF_Type       & VREFBUF       = * reinterpret_cast<VREFBUF_Type       * const> (0x40010030);
static COMP_Type          & COMP          = * reinterpret_cast<COMP_Type          * const> (0x40010200);
static EXTI_Type          & EXTI          = * reinterpret_cast<EXTI_Type          * const> (0x40010400);
static FIREWALL_Type      & FIREWALL      = * reinterpret_cast<FIREWALL_Type      * const> (0x40011c00);
static SDMMC_Type         & SDMMC         = * reinterpret_cast<SDMMC_Type         * const> (0x40012800);
static TIM1_Type          & TIM1          = * reinterpret_cast<TIM1_Type          * const> (0x40012c00);
static SPI1_Type          & SPI1          = * reinterpret_cast<SPI1_Type          * const> (0x40013000);
static USART1_Type        & USART1        = * reinterpret_cast<USART1_Type        * const> (0x40013800);
static TIM15_Type         & TIM15         = * reinterpret_cast<TIM15_Type         * const> (0x40014000);
static TIM16_Type         & TIM16         = * reinterpret_cast<TIM16_Type         * const> (0x40014400);
static SAI1_Type          & SAI1          = * reinterpret_cast<SAI1_Type          * const> (0x40015400);
static DFSDM_Type         & DFSDM         = * reinterpret_cast<DFSDM_Type         * const> (0x40016000);
static DMA1_Type          & DMA1          = * reinterpret_cast<DMA1_Type          * const> (0x40020000);
static DMA1_Type          & DMA2          = * reinterpret_cast<DMA1_Type          * const> (0x40020400);
static RCC_Type           & RCC           = * reinterpret_cast<RCC_Type           * const> (0x40021000);
static FLASH_Type         & FLASH         = * reinterpret_cast<FLASH_Type         * const> (0x40022000);
static CRC_Type           & CRC           = * reinterpret_cast<CRC_Type           * const> (0x40023000);
static TSC_Type           & TSC           = * reinterpret_cast<TSC_Type           * const> (0x40024000);
static GPIOA_Type         & GPIOA         = * reinterpret_cast<GPIOA_Type         * const> (0x48000000);
static GPIOA_Type         & GPIOB         = * reinterpret_cast<GPIOA_Type         * const> (0x48000400);
static GPIOA_Type         & GPIOC         = * reinterpret_cast<GPIOA_Type         * const> (0x48000800);
static GPIOA_Type         & GPIOD         = * reinterpret_cast<GPIOA_Type         * const> (0x48000c00);
static GPIOA_Type         & GPIOE         = * reinterpret_cast<GPIOA_Type         * const> (0x48001000);
static GPIOA_Type         & GPIOH         = * reinterpret_cast<GPIOA_Type         * const> (0x48001c00);
static ADC1_Type          & ADC1          = * reinterpret_cast<ADC1_Type          * const> (0x50040000);
static ADC1_Type          & ADC2          = * reinterpret_cast<ADC1_Type          * const> (0x50040100);
static ADC1_Type          & ADC3          = * reinterpret_cast<ADC1_Type          * const> (0x50040200);
static ADC123_Common_Type & ADC123_Common = * reinterpret_cast<ADC123_Common_Type * const> (0x50040300);
static AES_Type           & AES           = * reinterpret_cast<AES_Type           * const> (0x50060000);
static RNG_Type           & RNG           = * reinterpret_cast<RNG_Type           * const> (0x50060800);
static QUADSPI_Type       & QUADSPI       = * reinterpret_cast<QUADSPI_Type       * const> (0xa0001000);
static DBGMCU_Type        & DBGMCU        = * reinterpret_cast<DBGMCU_Type        * const> (0xe0042000);

static_assert (sizeof(struct TIM2_Type) == 84, "size error TIM2");
static_assert (sizeof(struct TIM6_Type) == 48, "size error TIM6");
static_assert (sizeof(struct LCD_Type) == 80, "size error LCD");
static_assert (sizeof(struct RTC_Type) == 208, "size error RTC");
static_assert (sizeof(struct WWDG_Type) == 12, "size error WWDG");
static_assert (sizeof(struct IWDG_Type) == 20, "size error IWDG");
static_assert (sizeof(struct USART3_Type) == 44, "size error USART3");
static_assert (sizeof(struct I2C1_Type) == 44, "size error I2C1");
static_assert (sizeof(struct CRS_Type) == 16, "size error CRS");
static_assert (sizeof(struct CAN1_Type) == 800, "size error CAN1");
static_assert (sizeof(struct USB_SRAM_Type) == 92, "size error USB_SRAM");
static_assert (sizeof(struct PWR_Type) == 96, "size error PWR");
static_assert (sizeof(struct DAC1_Type) == 80, "size error DAC1");
static_assert (sizeof(struct OPAMP_Type) == 28, "size error OPAMP");
static_assert (sizeof(struct LPTIM1_Type) == 44, "size error LPTIM1");
static_assert (sizeof(struct LPUART1_Type) == 44, "size error LPUART1");
static_assert (sizeof(struct SWPMI1_Type) == 36, "size error SWPMI1");
static_assert (sizeof(struct SYSCFG_Type) == 40, "size error SYSCFG");
static_assert (sizeof(struct VREFBUF_Type) == 8, "size error VREFBUF");
static_assert (sizeof(struct COMP_Type) == 8, "size error COMP");
static_assert (sizeof(struct EXTI_Type) == 56, "size error EXTI");
static_assert (sizeof(struct FIREWALL_Type) == 36, "size error FIREWALL");
static_assert (sizeof(struct SDMMC_Type) == 132, "size error SDMMC");
static_assert (sizeof(struct TIM1_Type) == 104, "size error TIM1");
static_assert (sizeof(struct SPI1_Type) == 28, "size error SPI1");
static_assert (sizeof(struct USART1_Type) == 44, "size error USART1");
static_assert (sizeof(struct TIM15_Type) == 100, "size error TIM15");
static_assert (sizeof(struct TIM16_Type) == 100, "size error TIM16");
static_assert (sizeof(struct SAI1_Type) == 68, "size error SAI1");
static_assert (sizeof(struct DFSDM_Type) == 700, "size error DFSDM");
static_assert (sizeof(struct DMA1_Type) == 172, "size error DMA1");
static_assert (sizeof(struct RCC_Type) == 156, "size error RCC");
static_assert (sizeof(struct FLASH_Type) == 52, "size error FLASH");
static_assert (sizeof(struct CRC_Type) == 24, "size error CRC");
static_assert (sizeof(struct TSC_Type) == 84, "size error TSC");
static_assert (sizeof(struct GPIOA_Type) == 40, "size error GPIOA");
static_assert (sizeof(struct ADC1_Type) == 184, "size error ADC1");
static_assert (sizeof(struct ADC123_Common_Type) == 16, "size error ADC123_Common");
static_assert (sizeof(struct AES_Type) == 48, "size error AES");
static_assert (sizeof(struct RNG_Type) == 12, "size error RNG");
static_assert (sizeof(struct QUADSPI_Type) == 52, "size error QUADSPI");
static_assert (sizeof(struct DBGMCU_Type) == 20, "size error DBGMCU");

/* Interrupts : conflicts cmsis part - use copy / paste */
enum IRQn {
  NonMaskableInt_IRQn   = -14, //!< 2 Non Maskable Interrupt
  HardFault_IRQn        = -13, //!< 3 HardFault
  MemoryManagement_IRQn = -12, //!< 4 Cortex-M4 Memory Management Interrupt
  BusFault_IRQn         = -11, //!< 5 Cortex-M4 Bus Fault Interrupt
  UsageFault_IRQn       = -10, //!< 6 Cortex-M4 Usage Fault Interrupt
  SVCall_IRQn           =  -5, //!< 11 Cortex-Mx SV Call Interrupt
  DebugMonitor_IRQn     =  -4, //!< 12 Cortex-M4 Debug Monitor Interrupt
  PendSV_IRQn           =  -2, //!< 14 Cortex-Mx Pend SV Interrupt
  SysTick_IRQn          =  -1, //!< 15 Cortex-Mx System Tick Interrupt

  WWDG_IRQn             =   0, //!< Window Watchdog interrupt
  PVD_PVM_IRQn          =   1, //!< PVD through EXTI line detection
  RTC_TAMP_STAMP_IRQn   =   2, //!< Tamper and TimeStamp interrupts
  RTC_WKUP_IRQn         =   3, //!< RTC Tamper or TimeStamp /CSS on LSE through EXTI line 19 interrupts
  FLASH_IRQn            =   4, //!< Flash global interrupt
  RCC_IRQn              =   5, //!< RCC global interrupt
  EXTI0_IRQn            =   6, //!< EXTI Line 0 interrupt
  EXTI1_IRQn            =   7, //!< EXTI Line 1 interrupt
  EXTI2_IRQn            =   8, //!< EXTI Line 2 interrupt
  EXTI3_IRQn            =   9, //!< EXTI Line 3 interrupt
  EXTI4_IRQn            =  10, //!< EXTI Line4 interrupt
  DMA1_CH1_IRQn         =  11, //!< DMA1 Channel1 global interrupt
  DMA1_CH2_IRQn         =  12, //!< DMA1 Channel2 global interrupt
  DMA1_CH3_IRQn         =  13, //!< DMA1 Channel3 interrupt
  DMA1_CH4_IRQn         =  14, //!< DMA1 Channel4 interrupt
  DMA1_CH5_IRQn         =  15, //!< DMA1 Channel5 interrupt
  DMA1_CH6_IRQn         =  16, //!< DMA1 Channel6 interrupt
  DMA1_CH7_IRQn         =  17, //!< DMA1 Channel 7 interrupt
  ADC1_IRQn             =  18, //!< ADC1 and ADC2 global interrupt
  CAN1_TX_IRQn          =  19, //!< CAN1 TX interrupts
  CAN1_RX0_IRQn         =  20, //!< CAN1 RX0 interrupts
  CAN1_RX1_IRQn         =  21, //!< CAN1 RX1 interrupts
  CAN1_SCE_IRQn         =  22, //!< CAN1 SCE interrupt
  EXTI9_5_IRQn          =  23, //!< EXTI Line5 to Line9 interrupts
  TIM1_BRK_TIM15_IRQn   =  24, //!< Timer 15 global interrupt
  TIM1_UP_TIM16_IRQn    =  25, //!< Timer 16 global interrupt
  TIM1_TRG_COM_IRQn     =  26, //!< TIM1 trigger and commutation interrupt
  TIM1_CC_IRQn          =  27, //!< TIM1 Capture Compare interrupt
  TIM2_IRQn             =  28, //!< TIM2 global interrupt
  TIM3_IRQn             =  29, //!< TIM3 global interrupt
  I2C1_EV_IRQn          =  31, //!< I2C1 event interrupt
  I2C1_ER_IRQn          =  32, //!< I2C1 error interrupt
  I2C2_EV_IRQn          =  33, //!< I2C2 event interrupt
  I2C2_ER_IRQn          =  34, //!< I2C2 error interrupt
  SPI1_IRQn             =  35, //!< SPI1 global interrupt
  SPI2_IRQn             =  36, //!< SPI2 global interrupt
  USART1_IRQn           =  37, //!< USART1 global interrupt
  USART2_IRQn           =  38, //!< USART2 global interrupt
  USART3_IRQn           =  39, //!< USART3 global interrupt
  EXTI15_10_IRQn        =  40, //!< EXTI Lines 10 to 15 interrupts
  RTC_ALARM_IRQn        =  41, //!< RTC alarms through EXTI line 18 interrupts
  DFSDM1_FLT3_IRQn      =  42, //!< DFSDM1_FLT3 global interrupt
  ADC3_IRQn             =  47, //!< ADC3 global Interrupt
  SDMMC1_IRQn           =  49, //!< SDMMC global Interrupt
  SPI3_IRQn             =  51, //!< SPI3 global Interrupt
  UART4_IRQn            =  52, //!< UART4 global Interrupt
  TIM6_DACUNDER_IRQn    =  54, //!< TIM6 global and DAC1 and 2 underrun error interrupts
  TIM7_IRQn             =  55, //!< TIM7 global interrupt
  DMA2_CH1_IRQn         =  56, //!< DMA2 Channel 1 global Interrupt
  DMA2_CH2_IRQn         =  57, //!< DMA2 Channel 2 global Interrupt
  DMA2_CH3_IRQn         =  58, //!< DMA2 Channel 3 global Interrupt
  DMA2_CH4_IRQn         =  59, //!< DMA2 Channel 4 global Interrupt
  DMA2_CH5_IRQn         =  60, //!< DMA2 Channel 5 global Interrupt
  DFSDM1_FLT0_IRQn      =  61, //!< DFSDM1_FLT0 global interrupt
  DFSDM1_FLT1_IRQn      =  62, //!< DFSDM1_FLT1 global interrupt
  DFSDM1_FLT2_IRQn      =  63, //!< DFSDM1_FLT2 global interrupt
  COMP_IRQn             =  64, //!< COMP1 and COMP2 interrupts
  LPTIM1_IRQn           =  65, //!< LP TIM1 interrupt
  LPTIM2_IRQn           =  66, //!< LP TIM2 interrupt
  USB_FS_IRQn           =  67, //!< USB event interrupt through EXTI
  DMA2_CH6_IRQn         =  68, //!< DMA2 Channel 6 global Interrupt
  DMA2_CH7_IRQn         =  69, //!< DMA2 Channel 7 global Interrupt
  LPUART1_IRQn          =  70, //!< LPUART1 global interrupt
  QUADSPI_IRQn          =  71, //!< Quad SPI global interrupt
  I2C3_EV_IRQn          =  72, //!< I2C3 event interrupt
  I2C3_ER_IRQn          =  73, //!< I2C3 error interrupt
  SAI1_IRQn             =  74, //!< SAI1 global interrupt
  SWPMI1_IRQn           =  76, //!< SWPMI1 global interrupt
  TSC_IRQn              =  77, //!< TSC global interrupt
  LCD_IRQn              =  78, //!< LCD global interrupt
  AES_IRQn              =  79, //!< AES global interrupt
  RNG_IRQn              =  80, //!< RNG global interrupt
  CRS_IRQn              =  82, //!< CRS interrupt
  I2C4_EV_IRQn          =  83, //!< I2C4 event interrupt, wakeup through EXTI
  I2C4_ER_IRQn          =  84, //!< I2C4 error interrupt
};
#endif
