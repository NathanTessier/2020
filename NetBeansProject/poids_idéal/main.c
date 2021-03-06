/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ntessier
 *
 * Created on 25 novembre 2020, 13:52
 */

#include <stdio.h>
#include <stdlib.h>
#include "imc.h"
/*
 * 
 */
    
    int main(int argc, char** argv)
{
    char  nom[100] ;
    char  prenom[100] ;
    char  sexe;
    char  choixFormule;
    int   age;
    int   menu = 0;
    float taille;
    float poids;
    float imc;
    float poidsIdeal;

    printf(" Votre nom: ");
    scanf("%s",nom);
    printf(" Votre prénom: ");
    scanf("%s",prenom);
    printf(" Votre sexe (h ou f): ");
    do{
        scanf(" %c", &sexe);
    }
    while(sexe != 'h' && sexe != 'f');

    printf(" Votre age: ");
    scanf("%d", &age);
    printf(" Votre taille (en mètre): ");
    scanf("%f", &taille);
    printf(" Votre poids (en kg): ");
    scanf("%f", &poids);
    printf("\n");
    printf(" Votre fiche récapitulative :\n");
    printf("  - Identité   : %s %s\n", prenom, nom);
    printf("  - Age        : %d ans\n", age);
    printf("  - Poids      : %.2f kg\n", poids);
    printf("  - Taille     : %.2f m\n", taille);

 
    if(sexe == 'h')
    {
        printf("  - Sexe : homme\n\n");
    }
    else
    {
        printf("  - Sexe : femme\n\n");
    }

    imc = poids / (taille * taille);
    corpulence(imc);
    printf("\n");

    do
    {
        printf(" Calculez votre poids idéal :\n");
        printf("  a - formule de Lorents\n");
        printf("  b - formule de Devine\n");
        printf("  c - formule de Lorents avec l'age\n");
        printf("  q - quitter le menu \n");
        printf(" Le choix : ");
        scanf(" %c", &choixFormule);

   
        switch (choixFormule)
        {
        case 'a':

            printf("Votre poids idéal selon la formule de Lorents est de %.1f kg.\n\n", poidsIdeal);
            break;
        case 'b':
            printf("Votre poids idéal selon la formule de Devine est de %.1f kg.\n\n", devine(sexe,taille));
            break;
        case 'c':
            poidsIdeal = 50 + ((taille * 100 - 150) / 4) + ((age - 20) / 4);
            printf("Votre poids idéal selon la formule de Lorents en tenant compte de l'age est de %.1f kg.\n\n", poidsIdeal);
            break;
        case 'q':
            printf("Vous avez quitté le menu de calcul du poids idéal.\n");
            menu++;
            break;
        default:
            printf("Caractère entré incorrecte. Réessayez.\n\n");
        }
    }
    while (menu == 0);
return 0;

}

