# stm32f051 | unix
#TARGET?= stm32l4x2
TARGET?= ch32v203
# clang | gcc
TOOL  ?= clang

PRJ    = example

VPATH  = . ./common
EABILB =
BLD    = ./build/
DFLAGS = -d
LFLAGS =
#LFLAGS = -Wl,-Map=$(@:%.elf=%.map),-gc-sections
LDLIBS =
BFLAGS = --strip-unneeded

CFLAGS = -MMD -Wall -g -fno-exceptions -ffunction-sections -fdata-sections -fshort-enums
CFLAGS+= -I. -I./common
DEL    = rm -f

# zdrojaky
OBJS   = main.o ledblinkingtest.o print.o hardwareoutput.o
#OBJS  +=

all: $(BLD) $(PRJ).elf
include $(TARGET)/$(TOOL).mk
BOBJS = $(addprefix $(BLD),$(OBJS))
# ... atd.
-include $(BLD)*.d
# linker
$(EABILB):
	cd libaeabi-cortexm0 && $(MAKE) all && $(DEL) *.o
$(PRJ).elf: $(BOBJS) $(EABILB)
	-@echo [LD $(TOOL),$(TARGET)] $@
	@$(LD) $(LFLAGS) -o $(PRJ).elf $(BOBJS) $(LDLIBS)
	-@echo "size:"
	@$(SIZE) $(PRJ).elf
	-@echo "listing:"
	$(DUMP) $(DFLAGS) $(PRJ).elf > $(PRJ).lst
	-@echo "OK."
#$(COPY) $(BFLAGS) -O binary $(PRJ).elf $(PRJ).bin
# preloz co je potreba
$(BLD)%.o: %.c
	-@echo [CC $(TOOL),$(TARGET)] $@
	@$(CC) -c $(CFLAGS) $< -o $@
$(BLD)%.o: %.cpp
	-@echo [CX $(TOOL),$(TARGET)] $@
	@$(CXX) -std=c++17 -fno-rtti -c $(CFLAGS) $< -o $@
$(BLD):
	mkdir $(BLD)
# vycisti
clean:
	$(DEL) $(BLD)* *.lst *.bin *.elf *.map *~
.PHONY: all clean lib flash
