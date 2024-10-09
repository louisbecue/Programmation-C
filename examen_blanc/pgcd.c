#include <stdio.h>

#include "liste.h"

void listeDiviseur (int n, liste *l) {
    int i;
    for (i = 1; i <= n; i++) {
        if ((n % i) == 0)
            insert(i, l);
    }
}

void listeFusion (liste l1, liste l2, liste *com) {
    liste tmpl1, tmpl2;
    init(&tmpl1);
    init(&tmpl2);

    tmpl1 = l1;
    while (!(isEmpty(tmpl1))) {
        tmpl2 = l2;
        while (!(isEmpty(tmpl2))) {
            if (tmpl1->value == tmpl2->value)
                insert(tmpl1->value, com);
            tmpl2 = tmpl2->next;
        }
        tmpl1 = tmpl1->next;
    }
}

int main (void) {
    int a, b;
    liste div_a, div_b, div_com;

    printf("Saisie du premier entier :");
    scanf("%d", &a);
    printf("Saisie du deuxiéme entier :");
    scanf("%d", &b);

    init(&div_a);
    listeDiviseur(a, &div_a);
    init(&div_b);
    listeDiviseur(b, &div_b);
    affiche(&div_a);
    affiche(&div_b);

    init(&div_com);
    listeFusion(div_a, div_b, &div_com);
    affiche(&div_com);

    printf("Le pgcd est %d\n", max(div_com));

    return 1 == 1;
}
