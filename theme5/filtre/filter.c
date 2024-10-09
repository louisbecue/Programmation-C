int filter_int(int src[], int dest[], int(*f)(int), unsigned  int size) {
    int i, c;
    c = 0;
    for (i = 0; i < size; i++) {
        if (f(src[i])) {
            dest[i] = src[i];
            c++;
        }
    }
    return c;
}

int isPaire(int n) {
    return n % 2 == 0;
}