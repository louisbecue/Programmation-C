#ifndef IFIFO_H
#define IFIFO_H

struct ififo_node_s {
    int data;
    struct ififo_node_s *prev;    
};

typedef struct ififo_node_s *ififo_s;

typedef void (func_t)(int);

ififo_s *ififo_new();

int ififo_is_empty(ififo_s);

int ififo_enqueue(ififo_s *, int);

int ififo_dequeue(ififo_s *, int *);

int ififo_head(const ififo_s);

void ififo_apply(ififo_s *, func_t *);

void ififo_del(ififo_s *);

#endif
