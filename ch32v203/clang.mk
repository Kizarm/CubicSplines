# Use clang / llvm toolchain
#
CC = clang
CXX = clang++
LD   = ld.lld
SIZE = llvm-size
DUMP = riscv64-unknown-elf-objdump
COPY = riscv64-unknown-elf-objcopy

OBJS  += startup.o system.o hack.o
OBJS  += cdc_class.o usb_desc.o
CCPU   = -march=rv32imac -mabi=ilp32
MCPU   = $(CCPU)
TRIP   = riscv32-unknown-none-elf
CFLAGS+= -Oz
CFLAGS+= -flto
CFLAGS+= -fmessage-length=0 -fsigned-char -I/usr/include/newlib
CFLAGS+= -I$(TARGET)
#CFLAGS+= -fconstexpr-steps=2097152
CFLAGS+= --target=$(TRIP) $(MCPU)
LFLAGS+= --Map=$(@:%.elf=%.map) --gc-sections
# 16-bit instrukce se do toho asi dostanou až na úrovni LLVM linkeru.
# Bohužel to není nikde pořádně popsáno.
LFLAGS+= -mllvm -mattr=+c
LFLAGS+= -nostdlib
LDLIBS+= -L./$(TARGET) -T script.ld
VPATH += ./$(TARGET)

flash: $(PRJ).bin
	minichlink -w $(PRJ).bin flash -b
$(PRJ).bin: $(PRJ).elf
	$(COPY) --strip-unneeded -O binary $(PRJ).elf $(PRJ).bin
