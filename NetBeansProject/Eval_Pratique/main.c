

/* 
 * File:   main.c
 * Author: 
 *
 * Created on 28 novembre 2019, 08:53
 * Modified on 
 * Description : Poker aux dés simplifié
 */

#include <stdio.h>
#include <stdlib.h>

#include "poker.h"
#define NBMAXCAR 50

int main(int argc, char** argv) {
    // exemple d'affichage avec des couleurs
    printf("du texte en %svert%s mais juste le mot vert\n", GREEN, RED);

    // demander nom et age des 2 joueurs
    char nom1[NBMAXCAR];
    char nom2[NBMAXCAR];
    
    int age1;
    int age2;
    
    printf("Joueur 1 ,Donnez votre nom: ");
    scanf(" %s", nom1);
    
    printf("Joueur 2 ,Donnez votre nom: ");
    scanf(" %s", nom2);
    
    printf("Joueur 1 ,Donnez votre age: ");
    scanf("%d", &age1);
    
    printf("Joueur 2 ,Donnez votre age: ");
    scanf("%d", &age2);



    // tester si les ages permettent de jouer
    testerAge(age1,age2,18);
   

    // si oui faire la boucle de jeu
    // sinon afficher un message et terminer le programme

    // boucle de jeu

    // initialiser les cagnottes



    // boucle de partie (fin si l'un des joueurs a un solde de 0)



    // chaque joueur mise



    // lancement des des


    // afficher le résultat


    // choix du des a relancer pour chaque joueur et affichage de la nouvelle combinaison


    //calcul du score de chaque joueur

    // test du score du joueur 1 par rapport au score du joueur 2
    // affichage du gagnant et mise à jour des cagnottes



    //fin de la boucle de partie
    // tester qui a une cagnotte positive et afficher le vainqueur de la partie


    // demander à rejouer (réponse possible uniquement 'o' ou 'n')
    // reposer la question si pas 'o' ou 'n'


    // fin boucle jeu




    // afficher un message d'au revoir

    printf("Merci d'avoir jouer, Au Revoir ");




    return (EXIT_SUCCESS);
}

