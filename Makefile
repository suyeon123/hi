TARGET    := app_test

TOPDIR    := $(shell if ["$$PWD" != ""]; then echo $$PWD; else pwd; fi)

INC       =
INC       += -I.

C_SRCS    =
C_SRCS    += main.c
C_SRCS    += test_main.c

CC        := arm-generic-linux-gnueabi-gcc-4.3.2
GCC       := gcc

C_OPTION = 
C+OPTION += $(INC)

%o:%c
    @echo ">>C compiling $<..."
    #$(CC)     -c $(C_OPTION) $<
    $(GCC)     -c $(C_OPTION) $<

C_OBJS    = $(C_SRCS:%.c=%.o)

SRCS      = $(C_SRCS)
OBJS      = $(C_OBJS)

all: $(OBJS)
    @echo ">>LINK... ."
    #$(CC) -o $(TARGET) $(OBJS)
    $(GCC) -o $(TARGET) $(OBJS)
    cp $(TARGER) /nfs/

clean:
    rm -rf $(TARGET)
    rm -rf *.o
    rm -rf .tmp_versions

distclean: clean
    rm -rf /nfs/$(TARGET)
