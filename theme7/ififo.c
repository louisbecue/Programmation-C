#include <stdlib.h>

#include "ififo.h"

ififo_s *ififo_new() {
    ififo_s *head;

    head = malloc(sizeof(ififo_s));
    if (head == NULL)
        return NULL;
    *head = NULL;
    return head;
}

int ififo_is_empty(ififo_s f) {
    return (f == NULL);
}

int ififo_enqueue(ififo_s *f, int i) {
    ififo_s new_node;

    new_node = malloc(sizeof(struct ififo_node_s));
    if (new_node == NULL)
        return 1;

    new_node->data = i;
    new_node->prev = *f; 
    *f = new_node;
    return 0;
}

int ififo_dequeue(ififo_s *f, int *i) {
    ififo_s tmp = *f;
    ififo_s prev = NULL;

    if (*f == NULL)
        return 1;

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

int ififo_head(const ififo_s f) {
    ififo_s tmp = f;

    if (f == NULL)
        return 1;

    while (tmp->prev != NULL) {
        tmp = tmp->prev;
    }
    
    return tmp->data;
}

void ififo_apply(ififo_s *f, func_t *fn) {
    if (ififo_is_empty(*f))
        return;

    fn((*f)->data);
    ififo_apply(&(((*f)->prev)), fn);
    return;
}

void ififo_del(ififo_s *f) {
    if (ififo_is_empty(*f))
        return;
        
    ififo_del(&(((*f)->prev)));
    free(*f);
    *f = NULL;
    return;
}
