CC = gcc
CFLAGS = -ansi -Wall -Werror -pedantic

gfifo : gfifo.c gfifo_test.c gfifo.h trie.c trie_test.c ififo.c ififo_test.c ififo.h
	$(CC) $(CFLAGS) -c ififo.c -o ififo.o
	$(CC) $(CFLAGS) -c ififo_test.c -o ififo_test.o
	$(CC) $(CFLAGS) -o ififo ififo.o ififo_test.o
	$(CC) $(CFLAGS) -c gfifo.c -o gfifo.o
	$(CC) $(CFLAGS) -c gfifo_test.c -o gfifo_test.o
	$(CC) $(CFLAGS) -o gfifo gfifo.o gfifo_test.o
	$(CC) $(CFLAGS) -c trie_test.c -o trie_test.o
	$(CC) $(CFLAGS) -c trie.c -o trie.o
	$(CC) $(CFLAGS) -o trie ififo.o gfifo.o trie.o trie_test.o

clean :
	rm -f *o gfifo trie ififo