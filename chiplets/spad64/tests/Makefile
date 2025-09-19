CC ?= gcc
CFLAGS ?= -O2 -Wall

all: spad64_test

spad64_test: spad64_test.c
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f spad64_test
