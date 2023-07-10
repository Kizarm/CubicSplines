#include "gpio.h"
#include "CortexM0.h"
#include "system.h"
#include "ledblinkingtest.h"

static volatile unsigned GlobalCounter = 0u;
static GpioClass led (GpioPortA, 0);
static GpioClass but (GpioPortA, 2, GPIO_Mode_IN);
void LedBlinkInit () {
  but.setPuPd(GPIO_PuPd_UP);
  SysTick.Config(SystemCoreClock / 1000);
  led << true;
  while (but.get()) asm volatile ("wfi");
  led << false;
}

extern "C" void SysTick_Handler () {
  if (GlobalCounter) GlobalCounter -= 1u;
}
//! [UserDefinedLiteralExamle]
// Funkce s defaultním parametrem - to v čistém C nejde.
static void delay_ms (const unsigned ms = 500) {
  GlobalCounter = ms;
  while (GlobalCounter) {   // dekrementováno v přerušení od SysTick
    asm volatile ("wfi");   // a proto můžeme při čekání uspat jádro
  }
}
// User-defined literal
static constexpr unsigned operator""_s (const unsigned long long arg) {
  return 1000 * arg;        // pracujeme v ms, arg v s tedy zvětšíme 1000x
}
void LedBlinkTest () {
  for (;;) {
    led << true;            // rozsviť (přetížený operátor << pro GpioClass)
    delay_ms ();            // použij defaultní argument (500 ms)
    led << false;           // zhasni
    delay_ms (2_s);         // použij user-defined literal
  }
}
//! [UserDefinedLiteralExamle]
