# include <stdio.h>

extern void swap_int(int* a, int* b);

int main(void){
    int a, b;
    scanf("%d ",&a);
    scanf("%d ",&b);
    swap_int(&a, &b);
    printf("%d ", a);
    printf("%d ", b);
    return 0;
}