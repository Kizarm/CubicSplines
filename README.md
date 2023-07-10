# Cubic Spline interpolation in C++ for bare-metal.

Pomocí doxygen si vygenerujte dokumentaci.
Hlavní stránka pak obsahuje celé povídání.

Pro překlad je potřeba udělat

$ make lib
$ make
případně
$ make TARGET=unix
pro nativní kód.

Toolchain je clang 10.0, je potřeba i arm-none-eabi toolchain, arm-none-eabi-gcc zhruba 9.2
pro překlad lib.
