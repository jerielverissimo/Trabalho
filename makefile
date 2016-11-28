CC = gcc

CFLAGS = -I$(IDIR)

IDIR = ./include/
SRCDIR = ./src/

SOUCERS = $(SRCDIR)*.c

all: votacao

votacao:
	$(CC) $(SOUCERS) $(CFLAGS) -o $@
	$(CC) $(SOUCERS) $(CFLAGS) -o votacao.exe

run:
	./votacao

clean:
	rm -f votacao
