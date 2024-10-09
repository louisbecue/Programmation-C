CC = gcc
CFLAGS = -Wall -O0 -g -fsanitize=address

duplicate: duplicate.c duplicate_main.c duplicate.h
	$(CC) $(CFLAGS) -c duplicate.c -o duplicate.o
	$(CC) $(CFLAGS) -c duplicate_main.c -o duplicate_main.o
	$(CC) $(CFLAGS) -o duplicate duplicate.o duplicate_main.o

clean:
	rm -f *.o duplicate