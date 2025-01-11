# Use gcc / binutils toolchain
PREFIX =
CC  = $(PREFIX)gcc
CXX = $(PREFIX)g++
# linker je ld
LD   = $(PREFIX)g++
SIZE = $(PREFIX)size
DUMP = $(PREFIX)objdump
COPY = $(PREFIX)objcopy
CFLAGS+= -Os -I./unix

LFLAGS+= -Wl,-Map=$(@:%.elf=%.map),-gc-sections
LDLIBS+= -lpthread
VPATH += ./unix
