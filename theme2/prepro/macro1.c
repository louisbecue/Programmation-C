#include <stdio.h>

extern int putchar(int c);

#define T (65+1)

int ln = __LINE__;
int main() {
    int u=68;
    putchar(u);                 /* premier char */
    putchar(T);                 /* deuxième char */
    printf("%dln",ln);
    putchar(6);
    printf("%dln",ln);
}
