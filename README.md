# Cubic Spline interpolation in C++ for bare-metal.

Pomocí doxygen si vygenerujte dokumentaci.
Hlavní stránka pak obsahuje celé povídání.

Pro překlad je potřeba udělat
```
$ make lib
$ make
případně
$ make TARGET=unix
pro nativní kód. Nemáte-li clang pak
$ make TARGET=unix TOOL=gcc
```
Toolchain je clang 10.0, je potřeba i arm-none-eabi toolchain, arm-none-eabi-gcc zhruba 9.2
pro překlad lib.

22.07.2023 Přidán TARGET=stm32l4x2 pro procesor STM32L452. Výpisy jdou na USB CDC, v Linuxu
standardní ttyACMn. Výpis se spustí až nastavením DTR, což dělá třeba picocom. Celé je to
jen jako test, že clang umí i float32, pokud je zapnut float koprocesor. Softwarová emulace
jako na Cortex-M0 potřebuje externí knihovnu. Tady není problém. Rozdíl velikosti kódu proti
gcc zde už není tak výrazný.
