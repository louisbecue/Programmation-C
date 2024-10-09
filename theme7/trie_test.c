#include <stdlib.h>
#include <stdio.h>

#include "gfifo.h"
#include "ififo.h"
#include "trie.h"

void print_int(int i) {
    printf("-> %d ", i);
    return;
}

void print(void *data) {
    ififo_s fifo = *(ififo_s*)data;

    while (fifo) {
        printf(" %d ->", fifo->data);
        fifo = fifo->prev;
    }

    ififo_del(fifo);
    return;
}

int main(void) {
    gfifo_s *fifo;
    ififo_s *f1, *f2, *merged;
    int number;

    f1 = ififo_new();
    f2 = ififo_new();

    ififo_enqueue(f1, 1);
    ififo_enqueue(f1, 3);
    ififo_enqueue(f1, 5);

    ififo_enqueue(f2, 2);
    ififo_enqueue(f2, 4);
    ififo_enqueue(f2, 6);

    ififo_apply(f1, print_int);
    putchar('\n');
    ififo_apply(f2, print_int);
    putchar('\n');

    merged = (ififo_s*) ififo_merge(f1, f2);

    ififo_apply(merged, print_int); 
    putchar('\n');

    ififo_del(f1);
    ififo_del(f2);
    ififo_del(merged);

    fifo = gfifo_new();
    printf("Entrez les nombres :\n");
    while (scanf("%d", &number) == 1) {
        ififo_s *new_if = ififo_new();
        ififo_enqueue(new_if, number);
        gfifo_enqueue(fifo, new_if);
    }


    gfifo_apply(fifo, print); 
    putchar('\n');

    algo_trie(fifo);

    gfifo_apply(fifo, print); 
    putchar('\n');

    gfifo_del(fifo);
    return 1==1;
}
