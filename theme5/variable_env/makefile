CC = gcc
CFLAGS = -ansi -Wall -Werror -pedantic

env : env.c env_main.c env.h
	$(CC) $(CFLAGS) -c env.c -o env.o
	$(CC) $(CFLAGS) -c env_main.c -o env_main.o
	$(CC) $(CFLAGS) -o var_env env.o env_main.o


clean :
	rm -f *o env
