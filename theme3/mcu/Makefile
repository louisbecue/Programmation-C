CC = gcc
CFLAGS = -ansi -Wall -Werror -pedantic

mcu_test: src/mcu_test.c src/mcu_putint.c src/mcu_fatal.c src/mcu_readl.c
	$(CC) $(CFLAGS) -c src/mcu_putint.c -o build/mcu_putint.o
	$(CC) $(CFLAGS) -c src/mcu_fatal.c -o build/mcu_fatal.o
	$(CC) $(CFLAGS) -c src/mcu_readl.c -o build/mcu_readl.o
	$(CC) $(CFLAGS) -c src/mcu_test.c -o build/mcu_test.o
	$(CC) $(CFLAGS) -o build/mcu_test build/mcu_putint.o build/mcu_fatal.o build/mcu_readl.o build/mcu_test.o
 
mcu_fatal: src/mcu_fatal.c
	$(CC) $(CFLAGS) -c src/mcu_fatal.c -o build/mcu_fatal.o

mcu_readl: src/mcu_readl.c
	$(CC) $(CFLAGS) -c src/mcu_readl.c -o build/mcu_readl.o

run: build/mcu_test
	chmod +x ./build/mcu_test
	./build/mcu_test
	
clean:
	rm -f build/*.o
	rm -f build/*
	rm -f *.o
	rm -f src/*.o
