CC=arm-none-eabi-
INC=-I .
CFLAGS= -mcpu=cortex-m3 -gdwarf-2 -mthumb
LIBS=
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)
AS=$(wildcard *.s)
ASOBJ=$(AS:.s=.o)
projectName=Cortex-M3

all:$(projectName).bin
	@echo "==================EVERYTHING DONE==========================="

#%.o: %.s
#	$(CC)as.exe $(CFLAGS) $< -o $@

%.o: %.c
	$(CC)gcc.exe -c $(INC) $(CFLAGS) $< -o $@

$(projectName).elf: $(OBJ) $(ASOBJ)
	$(CC)ld.exe -T linker.ld $(LIBS) $(OBJ) $(ASOBJ) -o $@ -Map=$(projectName).map

$(projectName).bin: $(projectName).elf
	$(CC)objcopy.exe -O binary $< $@

clear:
	rm *.elf *.bin

clear_all:
	rm *.o *.elf *.bin *.map