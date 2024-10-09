CC = gcc
CFLAGS = -ansi -Wall -Werror -pedantic

search : search.c search_main.c search.h
	$(CC) $(CFLAGS) -c search.c -o search.o
	$(CC) $(CFLAGS) -c search_main.c -o search_main.o
	$(CC) $(CFLAGS) -o search search.o search_main.o


clean :
	rm -f *o search