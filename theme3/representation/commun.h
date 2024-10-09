/* ------------------------------
   commun.h
   Définition des types
   ------------------------------------------------------------
*/
#define NB_ETU 30
#if NB_ETU < 1 || NB_ETU > 30
    #error "NB_ETU must be between 1 and 30"
#endif

struct etudiant_s {
    unsigned int numero;
    float moyenne;
};

union bloc_u {
    struct etudiant_s etu;
    char data[sizeof(struct etudiant_s)];
};

struct etudiant_s etudiants[NB_ETU];

