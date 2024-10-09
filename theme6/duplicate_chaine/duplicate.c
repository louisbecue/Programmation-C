#include <stdlib.h>
#include <string.h>

char *mstrdup(const char *str){
    int l, i;
    char * res;
    l = strlen(str);
    res = (char *) malloc((l+1) * sizeof(char));
    for (i = 0; i < l; i++)
        res[i] = str[i];
    res[i] = 0;
    return res;
}

void del(char *t){
    free(t);
    return;
}
