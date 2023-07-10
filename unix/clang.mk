# Use clang / llvm toolchain
CC = clang
CXX = clang++
# linker je vlastně ld.lld
LD   = clang++
SIZE = llvm-size
DUMP = llvm-objdump
COPY = llvm-objcopy

CFLAGS+= -Oz
LDLIBS+= -lpthread
VPATH += ./unix
#OBJS +=

