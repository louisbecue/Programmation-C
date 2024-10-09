#include <stdio.h>

int count(void)
{
    int i, c;
    int i = 0;
    while (c = getchar()!= EOF){
        i ++;
    }
    return i;
}