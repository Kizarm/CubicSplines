# Use gcc / binutils toolchain
PREFIX = arm-none-eabi-
CC  = $(PREFIX)gcc
CXX = $(PREFIX)g++
# linker je ld
LD   = $(PREFIX)g++
SIZE = $(PREFIX)size
DUMP = $(PREFIX)objdump
COPY = $(PREFIX)objcopy
CFLAGS+= -Os -I./stm32l4x2 -I./stm32l4x2/usb -DUSE_USB=1

CCPU   = -mcpu=cortex-m4 -mfpu=fpv4-sp-d16 -mfloat-abi=hard -fno-short-enums
MCPU   = -mthumb $(CCPU)
CFLAGS+= $(MCPU)
LFLAGS+= -Wl,-Map=$(@:%.elf=%.map),-gc-sections
LFLAGS+= $(MCPU)
LFLAGS+= -nostartfiles
LDLIBS+= -L./stm32l4x2 -T script.ld
VPATH += ./stm32l4x2 ./stm32l4x2/usb
OBJS  += STM32L4x2_startup.o system.o gpio.o
OBJS  += cdc_class.o usbd_core.o usbd_fs.o
