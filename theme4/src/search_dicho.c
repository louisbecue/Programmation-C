#include <stdlib.h>

float * search_dicho(float v, float *tab, int size){
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (tab[mid] == v) {
            return &tab[mid];
        }

        if (tab[mid] < v) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    exit(EXIT_FAILURE);
}