//#include "CH32V20xxx.h"
#include "system.h"
extern "C" void SystemInit ();
enum CLKSRC : uint32_t {
  CLK_HSI = 0u,
  CLK_HSE,
  CLK_PLL,
};

static constexpr unsigned HSI_VALUE             = 8000000u;       /* Value of the Internal oscillator in Hz */
static constexpr unsigned HSE_VALUE             = 8000000u;       /* Value of the External oscillator in Hz */
/* In the following line adjust the External High Speed oscillator (HSE) Startup Timeout value */
static constexpr unsigned HSE_STARTUP_TIMEOUT   = 0x1000u;        /* Time out for HSE start up */
// HSE i HSI mají frekvenci 8 MHz
static constexpr uint8_t AHBPrescTable[16] = {0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 4, 6, 7, 8, 9};

uint32_t SystemCoreClock = SYSTEM_CORE_CLOCK;                     /* System Clock Frequency (Core Clock) */

static void SetSysClock_HSE(void) {
  __IO uint32_t StartUpCounter = 0, HSEStatus = 0;

  RCC.CTLR.B.HSEON = SET;

  /* Wait till HSE is ready and if Time out is reached exit */
  do {
    HSEStatus = RCC.CTLR.B.HSERDY;
    StartUpCounter++;
  } while((HSEStatus == 0) && (StartUpCounter != HSE_STARTUP_TIMEOUT));

  if ((RCC.CTLR.B.HSERDY) != RESET)  {
    HSEStatus = (uint32_t)0x01;
  }  else  {
    HSEStatus = (uint32_t)0x00;
  }

  if (HSEStatus == (uint32_t)0x01)  {
    RCC.CFGR0.modify([](RCC_Type::CFGR0_DEF & r) -> auto {
      r.B.HPRE  = 0u; /* HCLK = SYSCLK */
      r.B.PPRE2 = 0u; /* PCLK2 = HCLK  */
      r.B.PPRE1 = 4u; /* PCLK1 = HCLK  */
      /* CH32V20x_D6-PLL  configuration: PLLCLK = HSE * 12   = 96 MHz (HSE=8MHZ)
      *  CH32V20x_D8-PLL  configuration: PLLCLK = HSE/4 * 12 = 96 MHz (HSE=32MHZ)
      *  CH32V20x_D8W-PLL configuration: PLLCLK = HSE/4 * 12 = 96 MHz (HSE=32MHZ)
      */
      r.B.PLLSRC   = SET;
      r.B.PLLXTPRE = RESET;
      r.B.PLLMUL   = 15u;     // or 10u for 96 MHz
      return r.R;
    });
    /* Enable PLL */
    RCC.CTLR.B.PLLON = SET;
    /* Wait till PLL is ready */
    while((RCC.CTLR.B.PLLRDY) == RESET) {}
    /* Select PLL as system clock source */
    RCC.CFGR0.B.SW = CLK_PLL;
    /* Wait till PLL is used as system clock source */
    while (RCC.CFGR0.B.SWS != CLK_PLL) {}
  }  else  {
     /*
      * If HSE fails to start-up, the application will have wrong clock
      * configuration. User can add here some code to deal with this error
      */
  }
}

void SystemInit(void) {
  RCC.CTLR.R  |= 0x00000001u;
  RCC.CFGR0.R &= 0xF0FF0000u;
  RCC.CTLR.R  &= 0xFEF6FFFFu;
  RCC.CTLR.R  &= 0xFFFBFFFFu;
  RCC.CFGR0.R &= 0xFF00FFFFu;
  RCC.INTR.R   = 0x009F0000u;    
  SetSysClock_HSE();
}
/*********************************************************************
 * @fn      SystemCoreClockUpdate
 *
 * @brief   Update SystemCoreClock variable according to Clock Register Values.
 *
 * @return  none
 */
void SystemCoreClockUpdate (void) {
  uint32_t tmp = 0, pllmull = 0, pllsource = 0;

  tmp = RCC.CFGR0.B.SWS;

  switch (tmp) {
    case 0x00:
      SystemCoreClock = HSI_VALUE;
      break;
    case 0x01:
      SystemCoreClock = HSE_VALUE;
      break;
    case 0x02:
      pllmull   = RCC.CFGR0.B.PLLMUL;
      pllsource = RCC.CFGR0.B.PLLSRC;
      pllmull  += 2u;

      if(pllmull == 17) pllmull = 18;

      if (pllsource == 0u) {
          if(EXTEND.EXTEND_CTR.B.PLL_HSI_PRE){
              SystemCoreClock = HSI_VALUE * pllmull;
          } else {
              SystemCoreClock = (HSI_VALUE >> 1) * pllmull;
          }
      } else {
        if (RCC.CFGR0.B.PLLXTPRE) {
          SystemCoreClock = (HSE_VALUE >> 1) * pllmull;
        } else {
          SystemCoreClock = HSE_VALUE * pllmull;
        }
      }
      break;
    default:
      SystemCoreClock = HSI_VALUE;
      break;
  }

  tmp = AHBPrescTable[RCC.CFGR0.B.HPRE];
  SystemCoreClock >>= tmp;
}

static uint32_t p_us = 0u;
static bool     timeout;
void delay_init () {
    // default clock is HCLK / 8
    p_us = SystemCoreClock / 8000000;
}
void delay_us (const unsigned dly) {
    const uint32_t i = (uint32_t) dly * p_us;
    SysTick.SR &= ~(1 << 0);
    SysTick.CMPLR = i;
    SysTick.CTLR.modify([](SysTick_Type::CTLR_DEF & r) -> uint32_t {
      r.B.MODE = SET;
      r.B.INIT = SET;
      return r.R;
    });
    SysTick.CTLR.B.STE = SET;
    
    while((SysTick.SR & (1u << 0)) != (1u << 0));
    SysTick.CTLR.B.STE = RESET;
}
void set_timeout_us (const uint32_t time) {
    SysTick.CTLR.B.STE = RESET;
    timeout = false;
    const uint32_t i = (uint32_t) time * p_us;
    SysTick.SR &= ~(1 << 0);
    SysTick.CMPLR = i;
    SysTick.CTLR.modify([](SysTick_Type::CTLR_DEF & r) -> uint32_t {
      r.B.MODE = SET;
      r.B.INIT = SET;
      return r.R;
    });
    SysTick.CTLR.B.STE = SET;
}
bool is_timeout () {
    if (SysTick.SR & (1u << 0)) {
      SysTick.CTLR.B.STE = RESET;
      timeout = true;
    } else {
    }
    return timeout;
}
