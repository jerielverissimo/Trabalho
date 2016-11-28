CC = gcc
WW = x86_64-w64-mingw32-gcc
CFLAGS = -I$(IDIR)

IDIR = ./include/
SRCDIR = ./src/

SOUCERS = $(SRCDIR)*.c

all: votacao

votacao:
	$(CC) $(SOUCERS) $(CFLAGS) -o $@
	x86_64-w64-mingw32-gcc src/*.c include/votacao.h -o votacao.exe

run:
	./votacao

clean:
	rm -f votacao votacao.exe
