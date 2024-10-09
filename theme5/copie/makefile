CC = gcc
CFLAGS = -ansi -Wall -Werror -pedantic

copy : copy.c copy_main.c copy.h
	$(CC) $(CFLAGS) -c copy.c -o copy.o
	$(CC) $(CFLAGS) -c copy_main.c -o copy_main.o
	$(CC) $(CFLAGS) -o copy copy.o copy_main.o


clean :
	rm -f *o copy