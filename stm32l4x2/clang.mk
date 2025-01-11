# Use clang / llvm toolchain
CC = clang
CXX = clang++
# linker je vlastně ld.lld
LD   = clang++
# LD = arm-none-eabi-g++
SIZE = llvm-size
DUMP = llvm-objdump
COPY = llvm-objcopy

CCPU   = -mcpu=cortex-m4
MCPU   = -mthumb $(CCPU) -mfpu=fpv4-sp-d16 -mfloat-abi=hard -fno-short-enums
TRIP   = thumbv7em-none-eabi
CFLAGS+= -Oz -flto -I./stm32l4x2 -I./stm32l4x2/usb -DUSE_USB=1
#CFLAGS+= -Wno-deprecated-volatile
CFLAGS+= --target=$(TRIP) $(MCPU)
LFLAGS+= -Wl,-Map=$(@:%.elf=%.map),-gc-sections
LFLAGS+= --target=$(TRIP)
#LFLAGS+= $(MCPU)
#LFLAGS+= -nostartfiles
LFLAGS+= -nostdlib -lto-O3
LDLIBS+= -L./stm32l4x2 -T script.ld
DFLAGS+= --triple=$(TRIP) $(CCPU)
VPATH += ./stm32l4x2 ./stm32l4x2/usb
OBJS  += STM32L4x2_startup.o system.o gpio.o
OBJS  += cdc_class.o usbd_core.o usbd_fs.o
