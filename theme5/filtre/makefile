CC = gcc
CFLAGS = -ansi -Wall -Werror -pedantic

filter : filter.c filter_main.c filter.h
	$(CC) $(CFLAGS) -c filter.c -o filter.o
	$(CC) $(CFLAGS) -c filter_main.c -o filter_main.o
	$(CC) $(CFLAGS) -o filter filter.o filter_main.o


clean :
	rm -f *o filter
