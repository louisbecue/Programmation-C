#include <stdio.h>

#include "compteur.h"

int main(void){
    int i;
    for (i = 0; i < 10 ; i++)
        printf("%d\n", compteur());
    return 0;
}