/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "golf.h"

/*
 *  paramètre d'entrées  : 	le nombre actuel d'element(s) du tableau
 *		
 *  en entrées :
 *		
 *  paramètre de sortie
 *		
 *  paramètre  d'E/S 		un tableau de pointeur(s) sur parcours
 *		
 * en sortie :
  
 *  valeur retournée :		le nouveau nombre de parcours present dans le tableau
 *		
 *  DESCRIPTION	: 	creation dynamique d'un parcours, initialisation 
 *				et ajout de ce dernier dans le tableau des parcours
 *
 */
int creerParcours(typeParcours *tab[], int nbParcours) {
    int i;
    // creation du parcours a l'indice nbParcours
    tab[nbParcours] = (typeParcours*) malloc(sizeof ( typeParcours));
    printf("\nnom du parcours ");
    scanf("%s", tab[nbParcours]->nom);
    printf("nombre de trous ");
    scanf("%d", &tab[nbParcours]->nbTrou);

    // initialisation des trous
    for (i = 0; i < tab[nbParcours]->nbTrou; i++) {
        printf("numero du trou : %d\n", i + 1);
        tab[nbParcours]->listeTrous[i].numero = i + 1;
        printf("distance (en metre) : ");
        scanf("%f", &tab[nbParcours]->listeTrous[i].distance);
        printf("valeur du par : ");
        scanf("%d", &tab[nbParcours]->listeTrous[i].par);
        printf("nombre maximum de coups pour ce trou : ");
        scanf("%d", &tab[nbParcours]->listeTrous[i].nbMaxCoups);
    }

    return nbParcours + 1;
}

/*
 *  paramètre d'entrées  : 	un tableau de pointeur(s) sur parcours
                                le numero d'index du parcours a afficher
 *		
 *  en entrées :
 *		
 *  paramètre de sortie
 *		
 *  paramètre  d'E/S 		
 *		
 * en sortie :			affichage de info à l'ecran
  
 *  valeur retournée :		
 *		
 *  DESCRIPTION	: 	afficher les informations d'un parcours particulier
 *
 */
void afficherUnParcours(typeParcours *tab[], int nro) {
    int i;
    printf("\nnom du parcours %s\n", tab[nro]->nom);
    printf("nombre de trous %d\n", tab[nro]->nbTrou);

    // afficher le detail de chaque trou du parcours
    for (i = 0; i < tab[nro]->nbTrou; i++) {
        afficherInfoTrou(tab[nro]->listeTrous[i]);
    }
}

void aficherMenu(int nbParcours) {
    if (nbParcours > 0) {

        printf("[J] Jouer un parcours \n");
        printf("[D] Jouer un parcours avec deux joueurs \n");
        printf("[V] Afficher un parcours \n");
        printf("[C] Creer un parcours \n");
        printf("[Q] Quitter\n");
    } else {
        printf("[J] Jouer un parcours \n");
        printf("[Q] Quitter\n");
    }
}

void afficherInfoTrou(typeTrou p) {

    printf("Numéro du trou : %d\n", p.numero);
    printf("Distance du trou : %f\n", p.distance);
    printf("Valeur du par : %d\n", p.par);
    printf("Nombre maximum de coups %d\n: ", p.nbMaxCoups);

}

void afficherLesParcours(typeParcours*tab[], int nro) {
    nro = 0;
    nro++;
    do {

        printf("\nnom des parcours %s\n", tab[nro]->nom);
        printf("nombre de trous %\n", &tab[nro]->nbTrou);


    } while (nro < NBMAXPARCOURS);
}


