#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "adherant.h"

typeAdherent *nouvelAdherent(){
    typeAdherent *adherent;

adherent = (typeAdherent*) malloc(sizeof(typeAdherent));

    printf("Nom: ");
    scanf("%s", adherent->nom);
    printf("Prenom: ");
    scanf("%s", adherent->prenom);
    printf("Numero de badge: ");
    scanf("%s", adherent->numBadge);
    printf("Numero d'activite: ");
    scanf("%u", &adherent->numActivite);
    
    return adherent;

}