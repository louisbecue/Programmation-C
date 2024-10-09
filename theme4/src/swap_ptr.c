#include <stdio.h>

void swap_ptr(int** a, int** b){
    int* tmp;
    tmp = *b;
    *b = *a;
    *a = tmp;
    return;
}
