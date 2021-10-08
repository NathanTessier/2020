
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ntessier
 *
 * Created on 7 octobre 2020, 09:45
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int valOrdinateur = 47;
    int valJoueur;
    int nbCoups=0;




    do {
        printf("valeurJoueur = ");
        scanf("%d", &valJoueur);
        if (valJoueur > valOrdinateur) {
            printf("Votre valeur est trop grande\n");
        }

        if (valJoueur < valOrdinateur) {
            printf("Votre valeur est trop petite\n");

        }
        nbCoups++;
        






    } while (valJoueur != valOrdinateur);

    printf("C'est pas la bonne valeur\n");
    printf("Nombre de coups : %d",nbCoups);









    return (EXIT_SUCCESS);


}