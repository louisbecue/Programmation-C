#include <stdio.h>
#include <stdlib.h>

#include "liste.h"

void init (liste *l) {
    *l = NULL;
    return;
}

int isEmpty (liste l) {
    return l == NULL;
}

int insert (int i, liste *l) {
    if (isEmpty(*l)) {
        *l = malloc(sizeof(struct node_s));
        if (*l == NULL)
            return 1 == 0;
        (*l)->value = i;
        (*l)->next = NULL;
        return 1 == 1;
    }
    return insert(i, &((*l)->next));
}

void destroy (liste *l) {
    if (isEmpty(*l))
        return;
    destroy(&((*l)->next));
    free(*l);
    *l = NULL;
    return;
}

void affiche (liste *l) {
    if (!isEmpty(*l)) {
        printf("%d ", (*l)->value);
        affiche(&((*l)->next));
        return;
    }
    printf("\n");
    return;
}

int max (liste l) {
    int max = -1;

    while (!(isEmpty(l))) {
        if ((l->value) > max)
            max = (l->value);
        l = l->next;
    }
    return max;
}