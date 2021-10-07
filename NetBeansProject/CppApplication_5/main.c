/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ntessier
 *
 * Created on 8 décembre 2020, 14:44
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
    scanf("%c\n", nom1);
    printf("Joueur 2 ,Donnez votre nom: ");
    scanf("%c\n", nom2);
    printf("Joueur 1 ,Donnez votre age: ");
    scanf("%d\n", &age1);
    printf("Joueur 2 ,Donnez votre age: ");
    scanf("%d\n", &age2);



    // tester si les ages permettent de jouer
    testerAge(age1,age2);
   

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

