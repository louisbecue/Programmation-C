#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>

#include "exchange.h"

#define SIZE 10

int main() {
    char tc_orig[SIZE], tc_dest[SIZE];
    long int ti_orig[SIZE], ti_dest[SIZE];
    int i;

    for (i = 0; i < SIZE; i++) {
        tc_orig[i] = rand() % 256;
        tc_dest[i] = rand() % 256;
        ti_orig[i] = rand();
        ti_dest[i] = rand();
    }

    newswap(tc_dest, tc_orig, SIZE);
    newswap(ti_dest, ti_orig, SIZE * sizeof(long int));

    assert(memcmp(tc_orig, tc_dest, SIZE) == 0);
    assert(memcmp(ti_orig, ti_dest, SIZE * sizeof(long int)) == 0);
    return 1==1;
}
