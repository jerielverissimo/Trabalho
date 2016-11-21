CC = gcc
CFLAGS = -I$(IDIR)

IDIR = ./include/
SRCDIR = ./src/

SOUCERS = $(SRCDIR)*.c

all: votacao run clean

votacao:
	$(CC) $(SOUCERS) $(CFLAGS) -o $@

run:
	./votacao

clean:
	rm -f votacao
