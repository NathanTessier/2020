#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fonction.h"

/*
 * 
 */
int main(int argc, char** argv) {

    typePersonne robert;
    typePersonne *raymonde;
    robert = creePersonne();
    printf("robert existe\n");
    afficherPersonne(robert);
    raymonde = creePersonnePtr();
    printf("raymonde existe\n");
     afficherPersonnePtr(raymonde);
    afficherPersonnePtr(&robert);
    afficherPersonne(*raymonde);
    return (EXIT_SUCCESS);
}
