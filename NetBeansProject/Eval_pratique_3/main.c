/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ntessier
 *
 * Created on 26 janvier 2021, 13:07
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "golf.h"

int main(int argc, char *argv[]) {

    typeScore * scores[NBMAXSCORES];
    /**********************************************
    declaration du tableau des parcours
     **********************************************/


    int nbParcours = 0; // nombre de parcours disponibles
    int nbScores = 0;
    char choix;
    int nro, i;
    int tab[NBMAXPARCOURS];
    nbParcours = chargerParcours( tab[NBMAXPARCOURS]);

    if (nbParcours > 0) {
        do {
            // appel de la fonction afficherMenu


            aficherMenu(choix);
            scanf(" %c", &choix);

            switch (choix) {
                case 'J':
                    afficherLesParcours(tab, nbParcours);
                    printf("Numero du parcours sur lequel vous voulez jouer :");
                    scanf(" %d", &nro);
                    scores[nbScores++] = jouerParcours(tab[nro]);
                    break;
                case 'D':
                    afficherLesParcours(tab, nbParcours);
                    printf("Numero du parcours sur lequel vous voulez jouer :");
                    scanf(" %d", &nro);
                    jouerParcoursADeux(tab[nro]);
                    break;


                case 'V':
                    afficherLesParcours(tab, nbParcours);
                    printf("Numero du parcours a afficher :");
                    scanf(" %d", &nro);
                    afficherUnParcours(tab, nro);
                    
                    break;

                case 'C':

                    nbParcours = creerParcours(tab, nbParcours);
                    sauvegarderParcours(tab, nbParcours);
                    break;
            }
        } while (choix != 'Q');
    } else {
        do {
            aficherMenu(choix);
            scanf(" %c", &choix);


            switch (choix) {
                case 'C':

                    nbParcours = creerParcours(tab, nbParcours);
                    sauvegarderParcours(tab, nbParcours);
                    break;
            }
        }while (choix !='Q');

    }
    return EXIT_SUCCESS;
}
