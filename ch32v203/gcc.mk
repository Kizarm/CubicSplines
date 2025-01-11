# Use gcc / binutils toolchain
PREFIX = riscv64-unknown-elf-
CC  = $(PREFIX)gcc
CXX = $(PREFIX)g++
LD   = $(PREFIX)gcc
SIZE = $(PREFIX)size
DUMP = $(PREFIX)objdump
COPY = $(PREFIX)objcopy
OBJS  += startup.o system.o hack.o
OBJS  += cdc_class.o usb_desc.o
CFLAGS+= -Os
CFLAGS+= -flto
CCPU   = -march=rv32imac -mabi=ilp32
MCPU   = $(CCPU)

CFLAGS+= $(MCPU) -msmall-data-limit=8 -mno-save-restore -fmessage-length=0 -fsigned-char -I/usr/include/newlib
CFLAGS+= -I$(TARGET)
LFLAGS+= -Wl,--Map=$(@:%.elf=%.map),--gc-sections
#LFLAGS+= -Wl,--print-sysroot -- chyba ld ?
LFLAGS+= -flto
LFLAGS+= -Os $(MCPU) -nostartfiles -nostdlib
LDLIBS+= -lgcc -L./$(TARGET) -T script.ld
VPATH += ./$(TARGET)

flash: $(PRJ).bin
	minichlink -w $(PRJ).bin flash -b
$(PRJ).bin: $(PRJ).elf
	$(COPY) --strip-unneeded -O binary $(PRJ).elf $(PRJ).bin
