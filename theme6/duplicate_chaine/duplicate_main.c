#include <stdio.h>
#include "duplicate.h"

int main(int argc, char** argv){
    char *res, *str;
    int i;
    for (i = 1; i<argc; i++){
        str = argv[i];
        res = mstrdup(str);
        printf("chaine original : %s\n", str);
        printf("chaine cpoié : %s\n", res);
        del(res);
    }
    return 0;
}