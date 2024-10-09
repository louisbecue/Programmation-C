CC = gcc
CFLAGS = -Wall -O0 -g -fsanitize=address

compteur: compteur.c compteur_main.c compteur.h
	$(CC) $(CFLAGS) -c compteur.c -o compteur.o
	$(CC) $(CFLAGS) -c compteur_main.c -o compteur_main.o
	$(CC) $(CFLAGS) -o compteur compteur.o compteur_main.o

clean:
	rm -f *.o compteur