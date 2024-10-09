#ifndef GFIFO_H
#define GFIFO_H

struct gfifo_node_s {
    void* data;
    struct gfifo_node_s *prev;    
};

typedef struct gfifo_node_s *gfifo_s;


gfifo_s *gfifo_new();

void gfifo_del(gfifo_s *);


int gfifo_size(gfifo_s);

int gfifo_is_empty(gfifo_s);

int gfifo_enqueue(gfifo_s *, void *);
int gfifo_dequeue(gfifo_s *, void **);

typedef void (gfunc_t)(void *);

void gfifo_apply(gfifo_s *, gfunc_t *);

#endif
