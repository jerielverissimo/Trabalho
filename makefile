CC = gcc
CFLAGS = -I$(IDIR)

IDIR = ./include/
SRCDIR = ./src/

SOUCERS = $(SRCDIR)*.c

all: votacao run

votacao:
	$(CC) $(SOUCERS) $(CFLAGS) -o $@

run:
	./votacao

clean:
	rm -f votacao
