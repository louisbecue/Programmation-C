CC = gcc 
CFLAGS = -Wall -Werror -ansi -pedantic

all : numbers_test

numbers_test.o : numbers-test.c putnumber.h
	$(cc) $(CFLAGS) -c numbers-test.c
 
put_numbers.o: put_numbers.c
	$(CC) $(CFLAGS) -c put_numbers.c -o put_numbers.o

numbers-test: numbers-test.o put_numbers.o
	$(CC) $(CFLAGS) numbers-test.o put_numbers.o -o numbers-test
	
clean:
	rm -f numbers-test.o putnumber.o
