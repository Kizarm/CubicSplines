# Use clang / llvm toolchain
CC = clang
CXX = clang++
# linker je vlastně ld.lld
LD   = clang++
# Zde kvůli jednoduchosti použijeme arm-none-eabi-g++ jako linker.
# Clang nemá některé ABI funkce, toolchain je v zásadě kompatibilní,
# takže než to hledat někde po webu, raději použijeme rovnou libc.
# Bez složité matematiky jde použít ld.lld nebo přidat libaeabi-cortexm0.a
# LD = arm-none-eabi-g++
SIZE = llvm-size
DUMP = llvm-objdump
COPY = llvm-objcopy

CCPU   = -mcpu=cortex-m0
MCPU   = -mthumb $(CCPU)
TRIP   = thumbv6-none-eabi
EABILB = ./libaeabi-cortexm0/libaeabi-cortexm0.a
CFLAGS+= -Oz -flto -I./stm32f051
#CFLAGS+= -Wno-deprecated-volatile
CFLAGS+= --target=$(TRIP) $(MCPU)
LFLAGS+= --target=$(TRIP)
#LFLAGS+= $(MCPU)
#LFLAGS+= -nostartfiles
LFLAGS+= -nostdlib -lto-O3
LDLIBS+= -L./stm32f051 -T script.ld
LDLIBS+= -L./libaeabi-cortexm0 -laeabi-cortexm0
DFLAGS+= --triple=$(TRIP) $(CCPU)
VPATH += ./stm32f051
OBJS  += startup.o system.o gpio.o usart.o

