/* ------------------------------
   input.c
   Lecture de données
   ------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>

#include "commun.h"

int main(void) {
    etudiant_s etudiant = {19, 20};
    for (int i = 0; i < sizeof(etudiant); i++) {
        putchar(etudiant_s.data[i]);
    }
    return 0;
}
