#include "gfifo.h"
#include "ififo.h"
#include <stdio.h>

ififo_s *ififo_merge(ififo_s *f1, ififo_s *f2) {
    ififo_s *res;
    int tmp;
    res = ififo_new();
    tmp = 0;
    
    while (!ififo_is_empty(*f1) && !ififo_is_empty(*f2)) {
        if (ififo_head(*f1) < ififo_head(*f2)) {
            ififo_dequeue(f1, &tmp);
            ififo_enqueue(res, tmp);
        } 
        else {
            ififo_dequeue(f2, &tmp);
            ififo_enqueue(res, tmp);
        }
    }
    while (!ififo_is_empty(*f1)) {
        ififo_dequeue(f2, &tmp);
        ififo_enqueue(res, tmp);
    }

    while (!ififo_is_empty(*f2)) {
        ififo_dequeue(f2, &tmp);
        ififo_enqueue(res, tmp);
    }
    
    ififo_del(f1);
    ififo_del(f2);

    return res;
}

void algo_trie(gfifo_s *gf) {
    ififo_s *f1, *f2, *merged;
    void *data1, *data2;

    while (*gf && (*gf)->prev) {
        gfifo_dequeue(gf, &data1);
        gfifo_dequeue(gf, &data2);

        f1 = (ififo_s *)data1;
        f2 = (ififo_s *)data2;

        merged = ififo_merge(f1, f2);
        gfifo_enqueue(gf, merged);
    }
    
    ififo_del(f1);
    ififo_del(f2);
    ififo_del(merged);
    return;
}
