#include <stdio.h>

static int put_digit(int h)
{
    return (h >= 0 && h <= 9 && putchar(h + '0') == h + '0')?0:-1;
}

void putdec(long int d)
{
    if (d < 0){
        putchar('-');
        d = -d;
    }
    if (d < 10){
        return ;
    }
    else {
        putdec(d/10);
        put_digit(d%10);
    }   
}