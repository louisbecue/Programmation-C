CC = gcc
CFLAGS = -ansi -Wall -Werror -pedantic

exchange : exchange.c exchange_main.c exchange.h
	$(CC) $(CFLAGS) -c exchange.c -o exchange.o
	$(CC) $(CFLAGS) -c exchange_main.c -o exchange_main.o
	$(CC) $(CFLAGS) -o exchange exchange.o exchange_main.o

clean :
	rm -f *o exchange
