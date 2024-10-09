#include <stdio.h>
#include <stdlib.h>


extern void swap_ptr(int**, int**);

int
main() {
    
    int a, b;
    int *p = &a;
    int *q = &b;
    
    swap_ptr(&p, &q);
    
    if ((p == &b) && (q == &a)) {
        printf("OK ;)\n");
        exit(EXIT_SUCCESS);
    } else {
        printf("KO ;(\n");
        exit(EXIT_FAILURE);
    }
}
