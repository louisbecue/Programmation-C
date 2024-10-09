#include <stdio.h>

#include "search.h"

int main(void) {
    float *n, *res;
    float tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    n = &tab[10];
    res = search_interval(6, tab, n);
    if (res == NULL)
        printf("Element not found\n");
    else
        printf("Element found at index %f\n", *res);
    return 0;
}