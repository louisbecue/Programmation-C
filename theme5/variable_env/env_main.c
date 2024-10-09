#include <stdio.h>

#include "env.h"

int main(int argc, char *arg[]){
    printf("Nombre de varibles d environnemens : %d \n", nvar());
    printf("%c", '\n');
    mprintenv(argc, arg);
    return 0;
}