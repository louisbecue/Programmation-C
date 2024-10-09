#include <stddef.h>

float * search_interval(float v, float *tab, float *end) {
    if (end >= tab) {
        float *mid = tab + (end - tab) / 2;
        if (*mid == v)
            return mid;
        if (*mid > v)
            return search_interval(v, tab, mid - 1);
        return search_interval(v, mid + 1, end);
    }
    return NULL;
}