/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ntessier
 *
 * Created on 12 novembre 2020, 09:26
 */

#include <stdio.h>
#include <stdlib.h>
#define NBMAXCAR 250
/*
 * 
 */
int main(int argc, char** argv) {
    
    
    char chaine[NBMAXCAR];
    printf("Tapez une phrase : ");
    // récupération de la phrase saisie
    gets(chaine);
    // affichage de la phrase
    printf("Vous avez fait la saisie suivante : \n%s\n",chaine);
    
    

    return (EXIT_SUCCESS);
}

