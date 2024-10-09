CC = gcc
CFLAGS = -ansi -Wall -Werror -pedantic

pgcd : liste.c pgcd.c liste.h
	gcc -ansi -Wall -Werror -pedantic -c liste.c -o liste.o
	gcc -ansi -Wall -Werror -pedantic -c pgcd.c -o pgcd.o
	gcc -ansi -Wall -Werror -pedantic -o pgcd pgcd.o liste.o

clean :
	rm -f *o pgcd
