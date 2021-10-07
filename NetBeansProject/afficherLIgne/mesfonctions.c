/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mesfonctions.c
 * Author: ntessier
 *
 * Created on 18 novembre 2020, 13:08
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mesfonctions.h"

/*
 * 
 */
void afficherUneLigne(int longueur) {

    int l;

    for (l = 0; l < longueur; l++) {
        printf("* ");
    }
    printf("\n");
}

void afficherUnCarre(int hauteur) {

    int h;

    for (h = 0; h < hauteur; h++) {
        afficherUneLigne(hauteur);
    }


}

void afficherUnRectangle(int longueur, int hauteur) {


    int i;

    for (i = 0; i < hauteur; i++) {
        afficherUneLigne(longueur);
    }



}

int compterSymbole(char* chaine, char caractere){
    
    int nombre=0;
    int n;
    
    for (n=0; n<strlen(chaine-1); n++){
        
        
        if (chaine[n]==caractere){
            
            nombre++;
        }
    }
    
    
    
    return nombre;
    
}





