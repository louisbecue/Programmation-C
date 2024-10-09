#include <stdlib.h>
#include <stdio.h>

#include "gfifo.h"

void print_int(void *data) {
    printf("-> %d ", *(int *)data);
    return;
}

int main(void) {
    gfifo_s *fifo;
    int x = 56, y = 53, z = 74;
    void *data;

    fifo = gfifo_new();

    gfifo_enqueue(fifo, &x);
    gfifo_enqueue(fifo, &y);
    gfifo_apply(fifo, print_int); putchar('\n');

    gfifo_enqueue(fifo, &z);
    gfifo_dequeue(fifo, &data);

    printf("%d \n", *(int *)data);
    gfifo_apply(fifo, print_int); putchar('\n');

    gfifo_dequeue(fifo, &data);
    gfifo_dequeue(fifo, &data);
    gfifo_apply(fifo, print_int); putchar('\n');

    gfifo_del(fifo);
    return 0;
}
