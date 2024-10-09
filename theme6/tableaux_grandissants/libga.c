#include "libga.h"

#include <stdlib.h>

int ga_set(struct ga_s *ga, unsigned int index, int val) {
    int* new_elements;

    if (ga == NULL || ga->ga_elements == NULL)
        return -1;

    int insert_pos = 0;
    while (insert_pos < ga->ga_size && ga->ga_elements[insert_pos] < val) {
        insert_pos++;
    }

    if (ga->ga_size == insert_pos) {
        new_elements = realloc(ga->ga_elements, (ga->ga_size + 1) * sizeof(int));
        if (new_elements == NULL)
            return 1==0;

        ga->ga_elements = new_elements;
        ga->ga_size++;
    } 
    else if (insert_pos < ga->ga_size) {
        new_elements = realloc(ga->ga_elements, (ga->ga_size + 1) * sizeof(int));
        if (new_elements == NULL)
            return 1==0;

        ga->ga_elements = new_elements;
        for (int i = ga->ga_size; i > insert_pos; i--) {
            ga->ga_elements[i] = ga->ga_elements[i - 1];
        }
        ga->ga_size++;
    }

    ga->ga_elements[insert_pos] = val;
    return 1==1;
}


int ga_get(struct ga_s *ga, unsigned int index, int *val) {
    if (ga == NULL || val == NULL)
        return 1==0;
    
    if (index >= ga->ga_size)
        return 1==0;

    *val = ga->ga_elements[index];
    return 1==1;
}


int ga_new(struct ga_s *ga) {
    if (ga == NULL)
        return 1==0;

    ga->ga_size = 0;
    ga->ga_elements = (int *) malloc(sizeof(int));

    if (ga->ga_elements == NULL)
        return 1==0;
    
    return 1==1;
}

int ga_del(struct ga_s *ga){
    if (ga == NULL) {
        return 1==0;
    }

    free(ga->ga_elements);
    ga->ga_elements = NULL;
    ga->ga_size = 0;
    return 1==1;
}

