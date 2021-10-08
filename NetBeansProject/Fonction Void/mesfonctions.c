/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "mesfonctions.h"
#include <stdio.h>
#include <stdlib.h>

void afficherMenu(char sexe){
    if (sexe=='f'){
        printf("menu pour femmes\n");
    }
    if (sexe=='h'){
        printf("menu des hommes\n");
    }
}
float additionsReels(float v1, float v2){
    float resultat;
    resultat= v1+v2;
    return resultat;
    
}
void afficherCarre(int nombre){
    int carre;
    carre = nombre*nombre;
    printf("carre de %d = %d \n",nombre,carre);
}
int calculerCarre(int nombre){
    int carre;
    carre = nombre*nombre;
    return carre;
}