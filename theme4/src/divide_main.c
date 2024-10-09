# include <stdio.h>

extern void divide(int*, int*, int*, int*);

int 
main(void){
    int diviseur, dividende, quotient, reste;
    diviseur = 10;
    dividende = 4;
    divide(&diviseur, &dividende, &quotient, &reste);
    printf("le quotient est %d ", quotient);
    printf("le reste est %d ", reste);
    return 0;
}