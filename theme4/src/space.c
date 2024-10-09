char * 
skip_spaces(char *s){
    int i, len;
    len = strlen(s);
    for(i = 0; i < len; i++){
        if(s[i] != ' ')
            return &s[i];
    }
    return &s[len-1];
}
