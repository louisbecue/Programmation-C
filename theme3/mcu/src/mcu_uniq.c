extern void fatal(int assert, const char message[], int status);

int comparer(char chaine1[], char chaine2[]){
    int size1, size2;
    size1 = strlen(chaine1);
    size2 = strlen(chaine2);
    if (size1 != size2){
        return 1;
    }
    for (int i = 0; i < size1; i++){
        if (chaine1[i] != chaine2[i]){
            return 1;
        }
    }
    return 0;
}

void copier(char cible[], char source[]){
    int size1, size2;
    size1 = strlen(cible);
    size2 = strlen(source);
    if (size1 != size2){
        fatal(1, "too small", 0);
    }
    for (int i = 0; i < size1; i++){
        cible[i] = source[i];
    }
}