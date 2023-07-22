#ifndef ARMCM4_HDEF
#define ARMCM4_HDEF
#include "STM32L4x2.h"
#define     __IM     volatile const      /*! Defines 'read only' structure member permissions */
#define     __OM     volatile            /*! Defines 'write only' structure member permissions */
#define     __IOM    volatile            /*! Defines 'read / write' structure member permissions */
// ////////////////////+++ NVIC +-+//////////////////// //
struct NVIC_Type      { /*!< Nested Vectored Interrupt Controller */
  union ISER0_DEF   {  //!< Interrupt Set-Enable Register
    struct {
      __IO uint32_t   SETENA : 32; //!<[00] SETENA
    } B;
    __IO uint32_t  R;
    explicit ISER0_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ISER0_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ISER0_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ISER1_DEF   {  //!< Interrupt Set-Enable Register
    struct {
      __IO uint32_t   SETENA : 32; //!<[00] SETENA
    } B;
    __IO uint32_t  R;
    explicit ISER1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ISER1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ISER1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ISER2_DEF   {  //!< Interrupt Set-Enable Register
    struct {
      __IO uint32_t   SETENA : 32; //!<[00] SETENA
    } B;
    __IO uint32_t  R;
    explicit ISER2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ISER2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ISER2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ICER0_DEF   {  //!< Interrupt Clear-Enable Register
    struct {
      __IO uint32_t   CLRENA : 32; //!<[00] CLRENA
    } B;
    __IO uint32_t  R;
    explicit ICER0_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ICER0_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ICER0_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ICER1_DEF   {  //!< Interrupt Clear-Enable Register
    struct {
      __IO uint32_t   CLRENA : 32; //!<[00] CLRENA
    } B;
    __IO uint32_t  R;
    explicit ICER1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ICER1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ICER1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ICER2_DEF   {  //!< Interrupt Clear-Enable Register
    struct {
      __IO uint32_t   CLRENA : 32; //!<[00] CLRENA
    } B;
    __IO uint32_t  R;
    explicit ICER2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ICER2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ICER2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ISPR0_DEF   {  //!< Interrupt Set-Pending Register
    struct {
      __IO uint32_t   SETPEND : 32; //!<[00] SETPEND
    } B;
    __IO uint32_t  R;
    explicit ISPR0_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ISPR0_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ISPR0_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ISPR1_DEF   {  //!< Interrupt Set-Pending Register
    struct {
      __IO uint32_t   SETPEND : 32; //!<[00] SETPEND
    } B;
    __IO uint32_t  R;
    explicit ISPR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ISPR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ISPR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ISPR2_DEF   {  //!< Interrupt Set-Pending Register
    struct {
      __IO uint32_t   SETPEND : 32; //!<[00] SETPEND
    } B;
    __IO uint32_t  R;
    explicit ISPR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ISPR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ISPR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ICPR0_DEF   {  //!< Interrupt Clear-Pending Register
    struct {
      __IO uint32_t   CLRPEND : 32; //!<[00] CLRPEND
    } B;
    __IO uint32_t  R;
    explicit ICPR0_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ICPR0_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ICPR0_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ICPR1_DEF   {  //!< Interrupt Clear-Pending Register
    struct {
      __IO uint32_t   CLRPEND : 32; //!<[00] CLRPEND
    } B;
    __IO uint32_t  R;
    explicit ICPR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ICPR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ICPR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union ICPR2_DEF   {  //!< Interrupt Clear-Pending Register
    struct {
      __IO uint32_t   CLRPEND : 32; //!<[00] CLRPEND
    } B;
    __IO uint32_t  R;
    explicit ICPR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ICPR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ICPR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union IABR0_DEF   {  //!< Interrupt Active Bit Register
    struct {
      __I  uint32_t   ACTIVE : 32; //!<[00] ACTIVE
    } B;
    __I  uint32_t  R;

    explicit IABR0_DEF (volatile IABR0_DEF & o) noexcept { R = o.R; };
  };
  union IABR1_DEF   {  //!< Interrupt Active Bit Register
    struct {
      __I  uint32_t   ACTIVE : 32; //!<[00] ACTIVE
    } B;
    __I  uint32_t  R;

    explicit IABR1_DEF (volatile IABR1_DEF & o) noexcept { R = o.R; };
  };
  union IABR2_DEF   {  //!< Interrupt Active Bit Register
    struct {
      __I  uint32_t   ACTIVE : 32; //!<[00] ACTIVE
    } B;
    __I  uint32_t  R;

    explicit IABR2_DEF (volatile IABR2_DEF & o) noexcept { R = o.R; };
  };
  union IPR0_DEF    {  //!< Interrupt Priority Register
    struct {
      __IO uint32_t   IPR_N0 :  8; //!<[00] IPR_N0
      __IO uint32_t   IPR_N1 :  8; //!<[08] IPR_N1
      __IO uint32_t   IPR_N2 :  8; //!<[16] IPR_N2
      __IO uint32_t   IPR_N3 :  8; //!<[24] IPR_N3
    } B;
    __IO uint32_t  R;
    explicit IPR0_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IPR0_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      IPR0_DEF r; r.R = R;
      R = f (r);
    }
  };
  union IPR1_DEF    {  //!< Interrupt Priority Register
    struct {
      __IO uint32_t   IPR_N0 :  8; //!<[00] IPR_N0
      __IO uint32_t   IPR_N1 :  8; //!<[08] IPR_N1
      __IO uint32_t   IPR_N2 :  8; //!<[16] IPR_N2
      __IO uint32_t   IPR_N3 :  8; //!<[24] IPR_N3
    } B;
    __IO uint32_t  R;
    explicit IPR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IPR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      IPR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union IPR2_DEF    {  //!< Interrupt Priority Register
    struct {
      __IO uint32_t   IPR_N0 :  8; //!<[00] IPR_N0
      __IO uint32_t   IPR_N1 :  8; //!<[08] IPR_N1
      __IO uint32_t   IPR_N2 :  8; //!<[16] IPR_N2
      __IO uint32_t   IPR_N3 :  8; //!<[24] IPR_N3
    } B;
    __IO uint32_t  R;
    explicit IPR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IPR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      IPR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union IPR3_DEF    {  //!< Interrupt Priority Register
    struct {
      __IO uint32_t   IPR_N0 :  8; //!<[00] IPR_N0
      __IO uint32_t   IPR_N1 :  8; //!<[08] IPR_N1
      __IO uint32_t   IPR_N2 :  8; //!<[16] IPR_N2
      __IO uint32_t   IPR_N3 :  8; //!<[24] IPR_N3
    } B;
    __IO uint32_t  R;
    explicit IPR3_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IPR3_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      IPR3_DEF r; r.R = R;
      R = f (r);
    }
  };
  union IPR4_DEF    {  //!< Interrupt Priority Register
    struct {
      __IO uint32_t   IPR_N0 :  8; //!<[00] IPR_N0
      __IO uint32_t   IPR_N1 :  8; //!<[08] IPR_N1
      __IO uint32_t   IPR_N2 :  8; //!<[16] IPR_N2
      __IO uint32_t   IPR_N3 :  8; //!<[24] IPR_N3
    } B;
    __IO uint32_t  R;
    explicit IPR4_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IPR4_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      IPR4_DEF r; r.R = R;
      R = f (r);
    }
  };
  union IPR5_DEF    {  //!< Interrupt Priority Register
    struct {
      __IO uint32_t   IPR_N0 :  8; //!<[00] IPR_N0
      __IO uint32_t   IPR_N1 :  8; //!<[08] IPR_N1
      __IO uint32_t   IPR_N2 :  8; //!<[16] IPR_N2
      __IO uint32_t   IPR_N3 :  8; //!<[24] IPR_N3
    } B;
    __IO uint32_t  R;
    explicit IPR5_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IPR5_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      IPR5_DEF r; r.R = R;
      R = f (r);
    }
  };
  union IPR6_DEF    {  //!< Interrupt Priority Register
    struct {
      __IO uint32_t   IPR_N0 :  8; //!<[00] IPR_N0
      __IO uint32_t   IPR_N1 :  8; //!<[08] IPR_N1
      __IO uint32_t   IPR_N2 :  8; //!<[16] IPR_N2
      __IO uint32_t   IPR_N3 :  8; //!<[24] IPR_N3
    } B;
    __IO uint32_t  R;
    explicit IPR6_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IPR6_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      IPR6_DEF r; r.R = R;
      R = f (r);
    }
  };
  union IPR7_DEF    {  //!< Interrupt Priority Register
    struct {
      __IO uint32_t   IPR_N0 :  8; //!<[00] IPR_N0
      __IO uint32_t   IPR_N1 :  8; //!<[08] IPR_N1
      __IO uint32_t   IPR_N2 :  8; //!<[16] IPR_N2
      __IO uint32_t   IPR_N3 :  8; //!<[24] IPR_N3
    } B;
    __IO uint32_t  R;
    explicit IPR7_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IPR7_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      IPR7_DEF r; r.R = R;
      R = f (r);
    }
  };
  union IPR8_DEF    {  //!< Interrupt Priority Register
    struct {
      __IO uint32_t   IPR_N0 :  8; //!<[00] IPR_N0
      __IO uint32_t   IPR_N1 :  8; //!<[08] IPR_N1
      __IO uint32_t   IPR_N2 :  8; //!<[16] IPR_N2
      __IO uint32_t   IPR_N3 :  8; //!<[24] IPR_N3
    } B;
    __IO uint32_t  R;
    explicit IPR8_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IPR8_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      IPR8_DEF r; r.R = R;
      R = f (r);
    }
  };
  union IPR9_DEF    {  //!< Interrupt Priority Register
    struct {
      __IO uint32_t   IPR_N0 :  8; //!<[00] IPR_N0
      __IO uint32_t   IPR_N1 :  8; //!<[08] IPR_N1
      __IO uint32_t   IPR_N2 :  8; //!<[16] IPR_N2
      __IO uint32_t   IPR_N3 :  8; //!<[24] IPR_N3
    } B;
    __IO uint32_t  R;
    explicit IPR9_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IPR9_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      IPR9_DEF r; r.R = R;
      R = f (r);
    }
  };
  union IPR10_DEF   {  //!< Interrupt Priority Register
    struct {
      __IO uint32_t   IPR_N0 :  8; //!<[00] IPR_N0
      __IO uint32_t   IPR_N1 :  8; //!<[08] IPR_N1
      __IO uint32_t   IPR_N2 :  8; //!<[16] IPR_N2
      __IO uint32_t   IPR_N3 :  8; //!<[24] IPR_N3
    } B;
    __IO uint32_t  R;
    explicit IPR10_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IPR10_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      IPR10_DEF r; r.R = R;
      R = f (r);
    }
  };
  union IPR11_DEF   {  //!< Interrupt Priority Register
    struct {
      __IO uint32_t   IPR_N0 :  8; //!<[00] IPR_N0
      __IO uint32_t   IPR_N1 :  8; //!<[08] IPR_N1
      __IO uint32_t   IPR_N2 :  8; //!<[16] IPR_N2
      __IO uint32_t   IPR_N3 :  8; //!<[24] IPR_N3
    } B;
    __IO uint32_t  R;
    explicit IPR11_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IPR11_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      IPR11_DEF r; r.R = R;
      R = f (r);
    }
  };
  union IPR12_DEF   {  //!< Interrupt Priority Register
    struct {
      __IO uint32_t   IPR_N0 :  8; //!<[00] IPR_N0
      __IO uint32_t   IPR_N1 :  8; //!<[08] IPR_N1
      __IO uint32_t   IPR_N2 :  8; //!<[16] IPR_N2
      __IO uint32_t   IPR_N3 :  8; //!<[24] IPR_N3
    } B;
    __IO uint32_t  R;
    explicit IPR12_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IPR12_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      IPR12_DEF r; r.R = R;
      R = f (r);
    }
  };
  union IPR13_DEF   {  //!< Interrupt Priority Register
    struct {
      __IO uint32_t   IPR_N0 :  8; //!<[00] IPR_N0
      __IO uint32_t   IPR_N1 :  8; //!<[08] IPR_N1
      __IO uint32_t   IPR_N2 :  8; //!<[16] IPR_N2
      __IO uint32_t   IPR_N3 :  8; //!<[24] IPR_N3
    } B;
    __IO uint32_t  R;
    explicit IPR13_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IPR13_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      IPR13_DEF r; r.R = R;
      R = f (r);
    }
  };
  union IPR14_DEF   {  //!< Interrupt Priority Register
    struct {
      __IO uint32_t   IPR_N0 :  8; //!<[00] IPR_N0
      __IO uint32_t   IPR_N1 :  8; //!<[08] IPR_N1
      __IO uint32_t   IPR_N2 :  8; //!<[16] IPR_N2
      __IO uint32_t   IPR_N3 :  8; //!<[24] IPR_N3
    } B;
    __IO uint32_t  R;
    explicit IPR14_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IPR14_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      IPR14_DEF r; r.R = R;
      R = f (r);
    }
  };
  union IPR15_DEF   {  //!< Interrupt Priority Register
    struct {
      __IO uint32_t   IPR_N0 :  8; //!<[00] IPR_N0
      __IO uint32_t   IPR_N1 :  8; //!<[08] IPR_N1
      __IO uint32_t   IPR_N2 :  8; //!<[16] IPR_N2
      __IO uint32_t   IPR_N3 :  8; //!<[24] IPR_N3
    } B;
    __IO uint32_t  R;
    explicit IPR15_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IPR15_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      IPR15_DEF r; r.R = R;
      R = f (r);
    }
  };
  union IPR16_DEF   {  //!< Interrupt Priority Register
    struct {
      __IO uint32_t   IPR_N0 :  8; //!<[00] IPR_N0
      __IO uint32_t   IPR_N1 :  8; //!<[08] IPR_N1
      __IO uint32_t   IPR_N2 :  8; //!<[16] IPR_N2
      __IO uint32_t   IPR_N3 :  8; //!<[24] IPR_N3
    } B;
    __IO uint32_t  R;
    explicit IPR16_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IPR16_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      IPR16_DEF r; r.R = R;
      R = f (r);
    }
  };
  union IPR17_DEF   {  //!< Interrupt Priority Register
    struct {
      __IO uint32_t   IPR_N0 :  8; //!<[00] IPR_N0
      __IO uint32_t   IPR_N1 :  8; //!<[08] IPR_N1
      __IO uint32_t   IPR_N2 :  8; //!<[16] IPR_N2
      __IO uint32_t   IPR_N3 :  8; //!<[24] IPR_N3
    } B;
    __IO uint32_t  R;
    explicit IPR17_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IPR17_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      IPR17_DEF r; r.R = R;
      R = f (r);
    }
  };
  union IPR18_DEF   {  //!< Interrupt Priority Register
    struct {
      __IO uint32_t   IPR_N0 :  8; //!<[00] IPR_N0
      __IO uint32_t   IPR_N1 :  8; //!<[08] IPR_N1
      __IO uint32_t   IPR_N2 :  8; //!<[16] IPR_N2
      __IO uint32_t   IPR_N3 :  8; //!<[24] IPR_N3
    } B;
    __IO uint32_t  R;
    explicit IPR18_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IPR18_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      IPR18_DEF r; r.R = R;
      R = f (r);
    }
  };
  union IPR19_DEF   {  //!< Interrupt Priority Register
    struct {
      __IO uint32_t   IPR_N0 :  8; //!<[00] IPR_N0
      __IO uint32_t   IPR_N1 :  8; //!<[08] IPR_N1
      __IO uint32_t   IPR_N2 :  8; //!<[16] IPR_N2
      __IO uint32_t   IPR_N3 :  8; //!<[24] IPR_N3
    } B;
    __IO uint32_t  R;
    explicit IPR19_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IPR19_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      IPR19_DEF r; r.R = R;
      R = f (r);
    }
  };
  union IPR20_DEF   {  //!< Interrupt Priority Register
    struct {
      __IO uint32_t   IPR_N0 :  8; //!<[00] IPR_N0
      __IO uint32_t   IPR_N1 :  8; //!<[08] IPR_N1
      __IO uint32_t   IPR_N2 :  8; //!<[16] IPR_N2
      __IO uint32_t   IPR_N3 :  8; //!<[24] IPR_N3
    } B;
    __IO uint32_t  R;
    explicit IPR20_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      IPR20_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      IPR20_DEF r; r.R = R;
      R = f (r);
    }
  };
  // PERIPHERAL NVIC REGISTERS INSTANCES
  __IO ISER0_DEF             ISER0 ;  //!< [0000](04)[0x00000000]
  __IO ISER1_DEF             ISER1 ;  //!< [0004](04)[0x00000000]
  __IO ISER2_DEF             ISER2 ;  //!< [0008](04)[0x00000000]
       uint32_t          UNUSED0 [29];  //!< [000c](74)[0xFFFFFFFF]
  __IO ICER0_DEF             ICER0 ;  //!< [0080](04)[0x00000000]
  __IO ICER1_DEF             ICER1 ;  //!< [0084](04)[0x00000000]
  __IO ICER2_DEF             ICER2 ;  //!< [0088](04)[0x00000000]
       uint32_t          UNUSED1 [29];  //!< [008c](74)[0xFFFFFFFF]
  __IO ISPR0_DEF             ISPR0 ;  //!< [0100](04)[0x00000000]
  __IO ISPR1_DEF             ISPR1 ;  //!< [0104](04)[0x00000000]
  __IO ISPR2_DEF             ISPR2 ;  //!< [0108](04)[0x00000000]
       uint32_t          UNUSED2 [29];  //!< [010c](74)[0xFFFFFFFF]
  __IO ICPR0_DEF             ICPR0 ;  //!< [0180](04)[0x00000000]
  __IO ICPR1_DEF             ICPR1 ;  //!< [0184](04)[0x00000000]
  __IO ICPR2_DEF             ICPR2 ;  //!< [0188](04)[0x00000000]
       uint32_t          UNUSED3 [29];  //!< [018c](74)[0xFFFFFFFF]
  __I  IABR0_DEF             IABR0 ;  //!< [0200](04)[0x00000000]
  __I  IABR1_DEF             IABR1 ;  //!< [0204](04)[0x00000000]
  __I  IABR2_DEF             IABR2 ;  //!< [0208](04)[0x00000000]
       uint32_t          UNUSED4 [61];  //!< [020c](f4)[0xFFFFFFFF]
  __IO IPR0_DEF               IPR0 ;  //!< [0300](04)[0x00000000]
  __IO IPR1_DEF               IPR1 ;  //!< [0304](04)[0x00000000]
  __IO IPR2_DEF               IPR2 ;  //!< [0308](04)[0x00000000]
  __IO IPR3_DEF               IPR3 ;  //!< [030c](04)[0x00000000]
  __IO IPR4_DEF               IPR4 ;  //!< [0310](04)[0x00000000]
  __IO IPR5_DEF               IPR5 ;  //!< [0314](04)[0x00000000]
  __IO IPR6_DEF               IPR6 ;  //!< [0318](04)[0x00000000]
  __IO IPR7_DEF               IPR7 ;  //!< [031c](04)[0x00000000]
  __IO IPR8_DEF               IPR8 ;  //!< [0320](04)[0x00000000]
  __IO IPR9_DEF               IPR9 ;  //!< [0324](04)[0x00000000]
  __IO IPR10_DEF             IPR10 ;  //!< [0328](04)[0x00000000]
  __IO IPR11_DEF             IPR11 ;  //!< [032c](04)[0x00000000]
  __IO IPR12_DEF             IPR12 ;  //!< [0330](04)[0x00000000]
  __IO IPR13_DEF             IPR13 ;  //!< [0334](04)[0x00000000]
  __IO IPR14_DEF             IPR14 ;  //!< [0338](04)[0x00000000]
  __IO IPR15_DEF             IPR15 ;  //!< [033c](04)[0x00000000]
  __IO IPR16_DEF             IPR16 ;  //!< [0340](04)[0x00000000]
  __IO IPR17_DEF             IPR17 ;  //!< [0344](04)[0x00000000]
  __IO IPR18_DEF             IPR18 ;  //!< [0348](04)[0x00000000]
  __IO IPR19_DEF             IPR19 ;  //!< [034c](04)[0x00000000]
  __IO IPR20_DEF             IPR20 ;  //!< [0350](04)[0x00000000]
}; /* total size = 0x0355, struct size = 0x0354 */

// ////////////////////+++ SCB +-+//////////////////// //
struct SCB_Type       { /*!< System control block */
  union CPUID_DEF                {  //!< CPUID base register
    struct {
      __I  uint32_t   Revision    :  4; //!<[00] Revision number
      __I  uint32_t   PartNo      : 12; //!<[04] Part number of the processor
      __I  uint32_t   Constant    :  4; //!<[16] Reads as 0xF
      __I  uint32_t   Variant     :  4; //!<[20] Variant number
      __I  uint32_t   Implementer :  8; //!<[24] Implementer code
    } B;
    __I  uint32_t  R;

    explicit CPUID_DEF (volatile CPUID_DEF & o) noexcept { R = o.R; };
  };
  union ICSR_DEF                 {  //!< Interrupt control and state register
    struct {
      __IO uint32_t   VECTACTIVE  :  9; //!<[00] Active vector
           uint32_t   UNUSED0     :  2; //!<[09] 
      __IO uint32_t   RETTOBASE   :  1; //!<[11] Return to base level
      __IO uint32_t   VECTPENDING :  7; //!<[12] Pending vector
           uint32_t   UNUSED1     :  3; //!<[19] 
      __IO uint32_t   ISRPENDING  :  1; //!<[22] Interrupt pending flag
           uint32_t   UNUSED2     :  2; //!<[23] 
      __IO uint32_t   PENDSTCLR   :  1; //!<[25] SysTick exception clear-pending bit
      __IO uint32_t   PENDSTSET   :  1; //!<[26] SysTick exception set-pending bit
      __IO uint32_t   PENDSVCLR   :  1; //!<[27] PendSV clear-pending bit
      __IO uint32_t   PENDSVSET   :  1; //!<[28] PendSV set-pending bit
           uint32_t   UNUSED3     :  2; //!<[29] 
      __IO uint32_t   NMIPENDSET  :  1; //!<[31] NMI set-pending bit.
    } B;
    __IO uint32_t  R;
    explicit ICSR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      ICSR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      ICSR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union VTOR_DEF                 {  //!< Vector table offset register
    struct {
           uint32_t   UNUSED0 :  9; //!<[00] 
      __IO uint32_t   TBLOFF  : 21; //!<[09] Vector table base offset field
    } B;
    __IO uint32_t  R;
    explicit VTOR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      VTOR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      VTOR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union AIRCR_DEF                {  //!< Application interrupt and reset control register
    struct {
      __IO uint32_t   VECTRESET     :  1; //!<[00] VECTRESET
      __IO uint32_t   VECTCLRACTIVE :  1; //!<[01] VECTCLRACTIVE
      __IO uint32_t   SYSRESETREQ   :  1; //!<[02] SYSRESETREQ
           uint32_t   UNUSED0       :  5; //!<[03] 
      __IO uint32_t   PRIGROUP      :  3; //!<[08] PRIGROUP
           uint32_t   UNUSED1       :  4; //!<[11] 
      __IO uint32_t   ENDIANESS     :  1; //!<[15] ENDIANESS
      __IO uint32_t   VECTKEYSTAT   : 16; //!<[16] Register key
    } B;
    __IO uint32_t  R;
    explicit AIRCR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      AIRCR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      AIRCR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union SCR_DEF                  {  //!< System control register
    struct {
           uint32_t   UNUSED0     :  1; //!<[00] 
      __IO uint32_t   SLEEPONEXIT :  1; //!<[01] SLEEPONEXIT
      __IO uint32_t   SLEEPDEEP   :  1; //!<[02] SLEEPDEEP
           uint32_t   UNUSED1     :  1; //!<[03] 
      __IO uint32_t   SEVEONPEND  :  1; //!<[04] Send Event on Pending bit
    } B;
    __IO uint32_t  R;
    explicit SCR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      SCR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      SCR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CCR_DEF                  {  //!< Configuration and control register
    struct {
      __IO uint32_t   NONBASETHRDENA :  1; //!<[00] Configures how the processor enters Thread mode
      __IO uint32_t   USERSETMPEND   :  1; //!<[01] USERSETMPEND
           uint32_t   UNUSED0        :  1; //!<[02] 
      __IO uint32_t   UNALIGN__TRP   :  1; //!<[03] UNALIGN_ TRP
      __IO uint32_t   DIV_0_TRP      :  1; //!<[04] DIV_0_TRP
           uint32_t   UNUSED1        :  3; //!<[05] 
      __IO uint32_t   BFHFNMIGN      :  1; //!<[08] BFHFNMIGN
      __IO uint32_t   STKALIGN       :  1; //!<[09] STKALIGN
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
  union SHPR1_DEF                {  //!< System handler priority registers
    struct {
      __IO uint32_t   PRI_4 :  8; //!<[00] Priority of system handler 4
      __IO uint32_t   PRI_5 :  8; //!<[08] Priority of system handler 5
      __IO uint32_t   PRI_6 :  8; //!<[16] Priority of system handler 6
    } B;
    __IO uint32_t  R;
    explicit SHPR1_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      SHPR1_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      SHPR1_DEF r; r.R = R;
      R = f (r);
    }
  };
  union SHPR2_DEF                {  //!< System handler priority registers
    struct {
           uint32_t   UNUSED0 : 24; //!<[00] 
      __IO uint32_t   PRI_11  :  8; //!<[24] Priority of system handler 11
    } B;
    __IO uint32_t  R;
    explicit SHPR2_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      SHPR2_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      SHPR2_DEF r; r.R = R;
      R = f (r);
    }
  };
  union SHPR3_DEF                {  //!< System handler priority registers
    struct {
           uint32_t   UNUSED0 : 16; //!<[00] 
      __IO uint32_t   PRI_14  :  8; //!<[16] Priority of system handler 14
      __IO uint32_t   PRI_15  :  8; //!<[24] Priority of system handler 15
    } B;
    __IO uint32_t  R;
    explicit SHPR3_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      SHPR3_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      SHPR3_DEF r; r.R = R;
      R = f (r);
    }
  };
  union SHCRS_DEF                {  //!< System handler control and state register
    struct {
      __IO uint32_t   MEMFAULTACT    :  1; //!<[00] Memory management fault exception active bit
      __IO uint32_t   BUSFAULTACT    :  1; //!<[01] Bus fault exception active bit
           uint32_t   UNUSED0        :  1; //!<[02] 
      __IO uint32_t   USGFAULTACT    :  1; //!<[03] Usage fault exception active bit
           uint32_t   UNUSED1        :  3; //!<[04] 
      __IO uint32_t   SVCALLACT      :  1; //!<[07] SVC call active bit
      __IO uint32_t   MONITORACT     :  1; //!<[08] Debug monitor active bit
           uint32_t   UNUSED2        :  1; //!<[09] 
      __IO uint32_t   PENDSVACT      :  1; //!<[10] PendSV exception active bit
      __IO uint32_t   SYSTICKACT     :  1; //!<[11] SysTick exception active bit
      __IO uint32_t   USGFAULTPENDED :  1; //!<[12] Usage fault exception pending bit
      __IO uint32_t   MEMFAULTPENDED :  1; //!<[13] Memory management fault exception pending bit
      __IO uint32_t   BUSFAULTPENDED :  1; //!<[14] Bus fault exception pending bit
      __IO uint32_t   SVCALLPENDED   :  1; //!<[15] SVC call pending bit
      __IO uint32_t   MEMFAULTENA    :  1; //!<[16] Memory management fault enable bit
      __IO uint32_t   BUSFAULTENA    :  1; //!<[17] Bus fault enable bit
      __IO uint32_t   USGFAULTENA    :  1; //!<[18] Usage fault enable bit
    } B;
    __IO uint32_t  R;
    explicit SHCRS_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      SHCRS_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      SHCRS_DEF r; r.R = R;
      R = f (r);
    }
  };
  union CFSR_UFSR_BFSR_MMFSR_DEF {  //!< Configurable fault status register
    struct {
           uint32_t   UNUSED0     :  1; //!<[00] 
      __IO uint32_t   IACCVIOL    :  1; //!<[01] Instruction access violation flag
           uint32_t   UNUSED1     :  1; //!<[02] 
      __IO uint32_t   MUNSTKERR   :  1; //!<[03] Memory manager fault on unstacking for a return from exception
      __IO uint32_t   MSTKERR     :  1; //!<[04] Memory manager fault on stacking for exception entry.
      __IO uint32_t   MLSPERR     :  1; //!<[05] MLSPERR
           uint32_t   UNUSED2     :  1; //!<[06] 
      __IO uint32_t   MMARVALID   :  1; //!<[07] Memory Management Fault Address Register (MMAR) valid flag
      __IO uint32_t   IBUSERR     :  1; //!<[08] Instruction bus error
      __IO uint32_t   PRECISERR   :  1; //!<[09] Precise data bus error
      __IO uint32_t   IMPRECISERR :  1; //!<[10] Imprecise data bus error
      __IO uint32_t   UNSTKERR    :  1; //!<[11] Bus fault on unstacking for a return from exception
      __IO uint32_t   STKERR      :  1; //!<[12] Bus fault on stacking for exception entry
      __IO uint32_t   LSPERR      :  1; //!<[13] Bus fault on floating-point lazy state preservation
           uint32_t   UNUSED3     :  1; //!<[14] 
      __IO uint32_t   BFARVALID   :  1; //!<[15] Bus Fault Address Register (BFAR) valid flag
      __IO uint32_t   UNDEFINSTR  :  1; //!<[16] Undefined instruction usage fault
      __IO uint32_t   INVSTATE    :  1; //!<[17] Invalid state usage fault
      __IO uint32_t   INVPC       :  1; //!<[18] Invalid PC load usage fault
      __IO uint32_t   NOCP        :  1; //!<[19] No coprocessor usage fault.
           uint32_t   UNUSED4     :  4; //!<[20] 
      __IO uint32_t   UNALIGNED   :  1; //!<[24] Unaligned access usage fault
      __IO uint32_t   DIVBYZERO   :  1; //!<[25] Divide by zero usage fault
    } B;
    __IO uint32_t  R;
    explicit CFSR_UFSR_BFSR_MMFSR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CFSR_UFSR_BFSR_MMFSR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      CFSR_UFSR_BFSR_MMFSR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union HFSR_DEF                 {  //!< Hard fault status register
    struct {
           uint32_t   UNUSED0  :  1; //!<[00] 
      __IO uint32_t   VECTTBL  :  1; //!<[01] Vector table hard fault
           uint32_t   UNUSED1  : 28; //!<[02] 
      __IO uint32_t   FORCED   :  1; //!<[30] Forced hard fault
      __IO uint32_t   DEBUG_VT :  1; //!<[31] Reserved for Debug use
    } B;
    __IO uint32_t  R;
    explicit HFSR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      HFSR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      HFSR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union MMFAR_DEF                {  //!< Memory management fault address register
    struct {
      __IO uint32_t   MMFAR : 32; //!<[00] Memory management fault address
    } B;
    __IO uint32_t  R;
    explicit MMFAR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      MMFAR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      MMFAR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union BFAR_DEF                 {  //!< Bus fault address register
    struct {
      __IO uint32_t   BFAR : 32; //!<[00] Bus fault address
    } B;
    __IO uint32_t  R;
    explicit BFAR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      BFAR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      BFAR_DEF r; r.R = R;
      R = f (r);
    }
  };
  union AFSR_DEF                 {  //!< Auxiliary fault status register
    struct {
      __IO uint32_t   IMPDEF : 32; //!<[00] Implementation defined
    } B;
    __IO uint32_t  R;
    explicit AFSR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      AFSR_DEF r;
      R = f (r);
    }
    template<typename F> void modify (F f) volatile {
      AFSR_DEF r; r.R = R;
      R = f (r);
    }
  };
  // PERIPHERAL SCB REGISTERS INSTANCES
  __I  CPUID_DEF                          CPUID ;  //!< [0000](04)[0x410FC241]
  __IO ICSR_DEF                            ICSR ;  //!< [0004](04)[0x00000000]
  __IO VTOR_DEF                            VTOR ;  //!< [0008](04)[0x00000000]
  __IO AIRCR_DEF                          AIRCR ;  //!< [000c](04)[0x00000000]
  __IO SCR_DEF                              SCR ;  //!< [0010](04)[0x00000000]
  __IO CCR_DEF                              CCR ;  //!< [0014](04)[0x00000000]
  __IO SHPR1_DEF                          SHPR1 ;  //!< [0018](04)[0x00000000]
  __IO SHPR2_DEF                          SHPR2 ;  //!< [001c](04)[0x00000000]
  __IO SHPR3_DEF                          SHPR3 ;  //!< [0020](04)[0x00000000]
  __IO SHCRS_DEF                          SHCRS ;  //!< [0024](04)[0x00000000]
  __IO CFSR_UFSR_BFSR_MMFSR_DEF CFSR_UFSR_BFSR_MMFSR ;  //!< [0028](04)[0x00000000]
  __IO HFSR_DEF                            HFSR ;  //!< [002c](04)[0x00000000]
       uint32_t                       UNUSED0 ;  //!< [0030](04)[0xFFFFFFFF]
  __IO MMFAR_DEF                          MMFAR ;  //!< [0034](04)[0x00000000]
  __IO BFAR_DEF                            BFAR ;  //!< [0038](04)[0x00000000]
  __IO AFSR_DEF                            AFSR ;  //!< [003c](04)[0x00000000]
  // kompletní až v cmsis pro Cortex M4, ale není moc konzistentní, což celkem nevadí
  __IM  uint32_t PFR[2U];                /*!< Offset: 0x040 (R/ )  Processor Feature Register */
  __IM  uint32_t DFR;                    /*!< Offset: 0x048 (R/ )  Debug Feature Register */
  __IM  uint32_t ADR;                    /*!< Offset: 0x04C (R/ )  Auxiliary Feature Register */
  __IM  uint32_t MMFR[4U];               /*!< Offset: 0x050 (R/ )  Memory Model Feature Register */
  __IM  uint32_t ISAR[5U];               /*!< Offset: 0x060 (R/ )  Instruction Set Attributes Register */
        uint32_t RESERVED0[5U];
  __IOM uint32_t CPACR;                  /*!< Offset: 0x088 (R/W)  Coprocessor Access Control Register */
}; /* total size = 0x0041, struct size = 0x0040 */

static NVIC_Type      & NVIC      = * reinterpret_cast<NVIC_Type      * const> (0xe000e100);
// tohle je jediné, co je potřeba z core_cm4.h  TODO
static constexpr void NVIC_EnableIRQ (const IRQn irq) {
  const uint32_t ordr = ((uint32_t)(int32_t)irq) >> 5UL;
  const uint32_t mask =  (uint32_t)(1UL << (((uint32_t)(int32_t)irq) & 0x1FUL));
  switch (ordr) {
    case 0:  NVIC.ISER0.R = mask; break;
    case 1:  NVIC.ISER1.R = mask; break;
    case 2:  NVIC.ISER2.R = mask; break;
    default: break;
  }
}

/** @brief SYSTICK for Cortex-M0
 * Není to moc domyšlené, před tt. hlavičkou je nutné mít definován NVIC a IRQn,
 * což je v STM generované hlavičce většinou uděláno. NVIC_EnableIRQ je zjednodušen
 * jen pro CM0, jinak se tam čaruje s PRIO_BITS, tady to není potřeba.
 */

static constexpr uint32_t SysTick_LOAD_RELOAD_Msk = (0xFFFFFFUL);        /*!< SysTick LOAD: RELOAD Mask */
// ////////////////////+++ SysTick +-+//////////////////// //
struct SysTick_DEF { /*!< 24Bit System Tick Timer for use in RTOS */
  union CSR_DEF   {  //!< [0000](04)[0x00000004] SysTick Control and Status Register
    enum ENABLE_ENUM /*: uint32_t */ {
      ENABLE_0 = 0,  //!< disabled
      ENABLE_1 = 1,  //!< enabled
    };
    enum TICKINT_ENUM /*: uint32_t */ {
      TICKINT_0 = 0,  //!< Enable SysTick Exception
      TICKINT_1 = 1,  //!< Disable SysTick Exception
    };
    enum CLKSOURCE_ENUM /*: uint32_t */ {
      CLKSOURCE_0 = 0,  //!< External Clock
      CLKSOURCE_1 = 1,  //!< CPU Clock
    };
    struct {
      __IO ENABLE_ENUM     ENABLE    :  1; //!<[00] Enable SysTick Timer
      __IO TICKINT_ENUM    TICKINT   :  1; //!<[01] Generate Tick Interrupt
      __IO CLKSOURCE_ENUM  CLKSOURCE :  1; //!<[02] Source to count from
           uint32_t        UNUSED0   : 13; //!<[03] 
      __IO ONE_BIT         COUNTFLAG :  1; //!<[16] SysTick counted to zero
    } B;
    __IO uint32_t  R;

    explicit CSR_DEF () noexcept { R = 0x00000004u; }
    template<typename F> void setbit (F f) volatile {
      CSR_DEF r;
      R = f (r);
    }

    template<typename F> void modify (F f) volatile {
      CSR_DEF r; r.R = R;
      R = f (r);
    }
  };
  __IO CSR_DEF CSR ;  //!< register definition

  union RVR_DEF   {  //!< [0004](04)[0x00000000] SysTick Reload Value Register
    struct {
      __IO uint32_t   RELOAD : 24; //!<[00] Value to auto reload SysTick after reaching zero
    } B;
    __IO uint32_t  R;

    explicit RVR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      RVR_DEF r;
      R = f (r);
    }

    template<typename F> void modify (F f) volatile {
      RVR_DEF r; r.R = R;
      R = f (r);
    }
  };
  __IO RVR_DEF RVR ;  //!< register definition

  union CVR_DEF   {  //!< [0008](04)[0x00000000] SysTick Current Value Register
    struct {
      __IO uint32_t   CURRENT : 24; //!<[00] Current value
    } B;
    __IO uint32_t  R;

    explicit CVR_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CVR_DEF r;
      R = f (r);
    }

    template<typename F> void modify (F f) volatile {
      CVR_DEF r; r.R = R;
      R = f (r);
    }
  };
  __IO CVR_DEF CVR ;  //!< register definition

  union CALIB_DEF {  //!< [000c](04)[0x00000000] SysTick Calibration Value Register
    enum SKEW_ENUM /*: uint32_t */ {
      SKEW_0 = 0,  //!< 10ms calibration value is exact
      SKEW_1 = 1,  //!< 10ms calibration value is inexact, because of the clock frequency
    };
    enum NOREF_ENUM /*: uint32_t */ {
      NOREF_0 = 0,  //!< Ref Clk available
      NOREF_1 = 1,  //!< Ref Clk not available
    };
    struct {
      __I  uint32_t    TENMS   : 24; //!<[00] Reload value to use for 10ms timing
           uint32_t    UNUSED0 :  6; //!<[24] 
      __I  SKEW_ENUM   SKEW    :  1; //!<[30] Clock Skew
      __I  NOREF_ENUM  NOREF   :  1; //!<[31] No Ref
    } B;
    __IO uint32_t  R;

    explicit CALIB_DEF () noexcept { R = 0x00000000u; }
    template<typename F> void setbit (F f) volatile {
      CALIB_DEF r;
      R = f (r);
    }

    template<typename F> void modify (F f) volatile {
      CALIB_DEF r; r.R = R;
      R = f (r);
    }
  };
  __IO CALIB_DEF CALIB ;  //!< register definition
  // methods :
  bool Config (const uint32_t ticks) {
    if (ticks > SysTick_LOAD_RELOAD_Msk)  return false;         // Reload value impossible
    RVR.B.RELOAD    = ticks  - 1u;                              // set reload register
    NVIC_EnableIRQ    (SysTick_IRQn);                           // Enable Interrupt
    CVR.B.CURRENT   = 0;                                        // Load the SysTick Counter Value
    CSR.modify([](CSR_DEF & r) -> auto {                        // Enable SysTick IRQ and SysTick Timer
      r.B.CLKSOURCE = CSR_DEF::CLKSOURCE_ENUM::CLKSOURCE_1;
      r.B.TICKINT   = CSR_DEF::TICKINT_ENUM  ::TICKINT_1;
      r.B.ENABLE    = CSR_DEF::ENABLE_ENUM   ::ENABLE_1;
      return r.R;
    });
    return true;                                                 // Function successful
  }

}; /* total size = 0x0010, struct size = 0x0010 */

static SysTick_DEF    & SysTick   = * reinterpret_cast<SysTick_DEF    * const> (0xe000e010);
static SCB_Type       & SCB       = * reinterpret_cast<SCB_Type       * const> (0xe000ed00);

static_assert (sizeof(struct SysTick_DEF) == 16, "size error SysTick");
static_assert (sizeof(struct NVIC_Type) == 852, "size error NVIC");
static_assert (sizeof(struct SCB_Type) == 64 + 19*4, "size error SCB");

#endif
