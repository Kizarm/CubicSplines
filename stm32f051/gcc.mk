# Use gcc / binutils toolchain
PREFIX = arm-none-eabi-
CC  = $(PREFIX)gcc
CXX = $(PREFIX)g++
# linker je ld
LD   = $(PREFIX)g++
SIZE = $(PREFIX)size
DUMP = $(PREFIX)objdump
COPY = $(PREFIX)objcopy
CFLAGS+= -Os -I./stm32f051

CCPU   = -mcpu=cortex-m0
MCPU   = -mthumb $(CCPU)
EABILB = ./libaeabi-cortexm0/libaeabi-cortexm0.a
CFLAGS+= $(MCPU)
LFLAGS+= $(MCPU)
LFLAGS+= -nostartfiles
LDLIBS+= -L./stm32f051 -T script.ld
VPATH += ./stm32f051
OBJS  += startup.o system.o gpio.o usart.o


