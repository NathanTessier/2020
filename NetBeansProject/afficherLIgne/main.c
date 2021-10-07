/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ntessier
 *
 * Created on 18 novembre 2020, 13:07
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mesfonctions.h"

/*
 * 
 */
int main(int argc, char** argv) {

    int longueur;
    int hauteur;
    char chaine[20];
    char caractere;
    
   /* printf("Quelle est la longueur de la ligne : ");
    scanf("%d", &longueur);
    printf("Quelle est la hauteur de la ligne : ");
    scanf("%d", &hauteur);

    afficherUneLigne(longueur);
    
    printf("\n----------------------\n");
    
    //afficherUnCarre(hauteur);
    afficherUnRectangle(longueur,hauteur);*/
    printf("Quel est le mot : ");
    scanf("%s",chaine);
    printf("Quel est le caractere : ");
    scanf(" %c",&caractere);
    printf("Le nombre d'occurence est de : %d",compterSymbole(chaine,caractere));
    

    return (EXIT_SUCCESS);
}
