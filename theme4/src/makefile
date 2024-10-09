CC = gcc
CFLAGS = -ansi -Wall -Werror -pedantic

swap : swap.c swap_main.c
	$(CC) $(CFLAGS) -c swap.c -o swap.o
	$(CC) $(CFLAGS) -c swap_main.c -o swap_main.o
	$(CC) $(CFLAGS) -o swap swap.o swap_main.o

run-swap : swap
	./swap

divide : divide.c divide_main.c
	$(CC) $(CFLAGS) -c divide.c -o divide.o
	$(CC) $(CFLAGS) -c divide_main.c -o divide_main.o
	$(CC) $(CFLAGS) -o divide divide.o divide_main.o

run-divide : divide
	./divide

space : space.c space_main.c
	$(CC) $(CFLAGS) -c space.c -o space.o
	$(CC) $(CFLAGS) -c space_main.c -o space_main.o
	$(CC) $(CFLAGS) -o strip_spaces_tst space.o space_main.o

run-space : strip_spaces_tst
	./strip_spaces_tst

arg : arg.c arg_main.c
	$(CC) $(CFLAGS) -c arg.c -o arg.o
	$(CC) $(CFLAGS) -c arg_main.c -o arg_main.o
	$(CC) $(CFLAGS) -o arg arg.o arg_main.o

swap_ptr : swap_ptr.c swap_ptr_main.c
	$(CC) $(CFLAGS) -c swap_ptr.c -o swap_ptr.o
	$(CC) $(CFLAGS) -c swap_ptr_main.c -o swap_ptr_main.o
	$(CC) $(CFLAGS) -o swap_ptr swap_ptr.o swap_ptr_main.o

run-swap_prt : swap_ptr
	./swap_ptr

run-arg : arg
	./arg

clean : 
	rm -f *.o
	rm -f divide
	rm -f arg
	rm -f strip_spaces_tst
	rm -f swap
	rm -f space
	rm -f swa_ptr