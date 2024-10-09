#ifndef LISTE_H
#define LISTE_H
#include <stdio.h>

struct node_s {
    int value;
    struct node_s *next;
};

typedef struct node_s *liste;

void init (liste *);

int isEmpty (liste);

int insert (int , liste *);

void destroy (liste *);

void affiche (liste *);

int max (liste);

#endif
