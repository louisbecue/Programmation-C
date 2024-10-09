#include <stdlib.h>

#include "gfifo.h"

gfifo_s *gfifo_new() {
    gfifo_s *head;

    head = malloc(sizeof(gfifo_s));
    if (head == NULL)
        return NULL;
    *head = NULL;
    return head;
}

int gfifo_is_empty(gfifo_s f) {
    return (f == NULL);
}

int gfifo_enqueue(gfifo_s *f, void* i) {
    struct gfifo_node_s *new_node;

    new_node = malloc(sizeof(struct gfifo_node_s));

    if (new_node == NULL)
        return 1;
    new_node->data = i;
    new_node->prev = *f;
    *f = new_node;
    return 0;
}

int gfifo_dequeue(gfifo_s *f, void **i) {
    struct gfifo_node_s *tmp;
    struct gfifo_node_s *prev;

    if (*f == NULL)
        return 1;

    tmp = *f;
    if (tmp->prev == NULL) {
        *i = tmp->data;
        *f = tmp->prev;
        free(tmp);
        return 0;
    }

    prev = NULL;
    while (tmp->prev != NULL) {
        prev = tmp;
        tmp = tmp->prev;
    }

    *i = tmp->data;
    if (prev != NULL)
        prev->prev = NULL;
    else
        *f = NULL;

    free(tmp);
    return 0;
}

int gfifo_size(gfifo_s f) {
    struct gfifo_node_s* current_node;
    int count = 0;

    current_node = f;
    while (current_node != NULL) {
        count++;
        current_node = current_node->prev;
    }
    return count;
}

void gfifo_apply(gfifo_s *f, gfunc_t *fn) {
    if (gfifo_is_empty(*f))
        return;

    fn((*f)->data);
    gfifo_apply(&(((*f)->prev)), fn);
    return;
}

void gfifo_del(gfifo_s *f) {
    struct gfifo_node_s* current_node;
    struct gfifo_node_s* prev;

    if (f == NULL || *f == NULL) {
        return;
    }

    current_node = *f;

    while (current_node != NULL) {
        prev = current_node->prev;
        free(current_node);
        current_node = prev;
    }

    *f = NULL;
    return;
}

