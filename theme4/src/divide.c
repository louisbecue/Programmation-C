void divide(int* diviseur, int* dividende, int* quotient, int* reste){
    *quotient = (*diviseur)/(*dividende);
    *reste = (*diviseur)%(*dividende);
    return;
}