#include <stdio.h>
#include <string.h>

extern char **environ;

int nvar(void){
    int i; 
    i = 0;
    while (environ[i] != (char *) 0)
        i ++;
    return i; 
}

void mprintenv1(void){
    int i, len; 
    len = nvar();
    for(i = 0; i<len; i++) {
        printf("%s", environ[i]);
        printf("%s", "\n");
    }
    return;
}

void mprintenv(int argc, char *arg[]){
    int i, j, z, len, clen, b; 
    len = nvar();
    for (i = 0; i < len; i++) {
        for (j = 0; j < argc; j++) {
            clen = strlen(arg[j]);
            b = 0;
            for (z = 0; z < clen; z++){
                if (arg[j][z] != environ[i][z])
                    b = 1;
            }
            if (b == 0) {
                printf("%s", environ[i]);
                printf("%c", '\n');
    
            }
        }
    }
    return;
}
