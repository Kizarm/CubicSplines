#include "CortexM4.h"
#include "gpio.h"
#include "ledblinkingtest.h"
// podobně jako STM32F051, nečeká na tlačítko,
// CDC zahazuje výstupní data, dokud se nenahodí DTR
static volatile unsigned GlobalCounter = 0u;
static GpioClass led (GpioPortA, 10);

extern "C" void SysTick_Handler () {
  if (GlobalCounter) GlobalCounter -= 1u;
}
static void delay_ms (const unsigned ms = 500) {
  GlobalCounter = ms;
  while (GlobalCounter) {   // dekrementováno v přerušení od SysTick
    asm volatile ("wfi");   // a proto můžeme při čekání uspat jádro
  }
}

void LedBlinkInit () {
  EnableDebugOnSleep();
  SysTick.Config(SystemCoreClock / 1000);
  led << true;
}
void LedBlinkTest () {
  for (;;) {
    led << true;            // rozsviť (přetížený operátor << pro GpioClass)
    delay_ms ();            // použij defaultní argument (500 ms)
    led << false;           // zhasni
    delay_ms (1000);        // použij user-defined literal
  }
}
