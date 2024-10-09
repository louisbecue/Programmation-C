#ifndef MAXLINE
#define MAXLINE 100
#endif

#include <stdio.h>
#include <string.h>

extern void fatal(int, const char *, int);

int readl(char line[])
{
    int i, c;
    i = 0;
    c = getchar();
    while (i++ < MAXLINE && c != EOF){
        line[i] = (char) c;
        c = getchar();
        putchar(i);
    }
    if (MAXLINE < i){
        fatal(-1, "error", 0);
    }
    if (c == EOF){
        return EOF;
    }
    return strlen(line);
}