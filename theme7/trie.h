#ifndef TRIE_H
#define TRIE_H
#include "gfifo.h"
#include "ififo.h"

/* fusion de deux files d'entiers triées.
   condition d'utilisation : f1 et f2 triées
   effet de bord : f1 et f2 vides
   résultat : une nouvelle file d'entiers triée 
*/
ififo_s *ififo_merge(ififo_s *f1, ififo_s *f2);

/*tant que la file générique contient deux files d'entiers ou plus
on défile deux files d'entiers
on fusionne ces deux files d'entiers triées en une nouvelle file
d'entiers, elle aussi triée
on enfile cette nouvelle file dans la file générique
*/
void algo_trie(gfifo_s *);

#endif
