#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void fatal(int assert, const char message[], int status)
{
    if(assert != 0){
        int i, l;
        l = strlen(message);
        for(i=0; i<l ; i++){
            putchar(message[i]);
        }
    }
    exit(EXIT_FAILURE);
    return;
}

