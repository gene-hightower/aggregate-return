CFLAGS = -Wall -Waggregate-return -O3 -std=c17

%.s: %.c
	$(CC) -S $(CFLAGS) -o $@ $<

all: aggret ptrret

aggret: aggret.h aggret.c aggmain.c

ptrret: ptrret.h ptrret.c ptrmain.c

.PHONY: all
