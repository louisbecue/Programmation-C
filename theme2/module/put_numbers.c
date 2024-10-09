#include <stdio.h>

extern int putchar(int);

static int put_digit(int h){
    return (h >= 0 && h <= 9 && putchar(h + '0') == h + '0')?0:-1;
}

static put_hdigit(int h){
    if (h < 10){
        return put_digit(h);
    }
    else{
        return (h>=0 && putchar(h - 10 +'A') == h - 10 +'A')?0:-1;
    }
}

void newline(void) {
    putchar('\n');
}


int putdec(long int d){
    if (d < 0){
        putchar('-');
        d = -d;
    }
    if (d < 10){
        return put_digit(d);
    }
    else {
        putdec(d/10);
        put_digit(d%10);
    }   
}
void puthex(long int h) {
    if (h < 0) {
        h = -h;
    }
    if (h < 16) {
        put_hdigit(h);
    } else {
        puthex(h / 16);
        put_hdigit(h % 16);
    }
}


int putbin(long int b){
    unsigned int u = (unsigned int) b;
    if (u == 1 || u == 0){
        return put_digit(u);
    }
    else{
        putbin(u >> 1);
        put_digit(u&1);
        
    }
}