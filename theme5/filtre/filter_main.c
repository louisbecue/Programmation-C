#include <stdio.h>

#include "filter.h"

int main(void) {
    int r;
    int tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int dest[10];
    r = filter_int(tab, dest, &isPaire, 10);
    printf("Nombre d'élement changé : %d\n", r);
    return 0;
}