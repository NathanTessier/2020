/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ntessier
 *
 * Created on 12 novembre 2020, 09:37
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NBMAX 250
/*
 * 
 */
int main(int argc, char** argv) {
    
    char chaine[NBMAX];
    char autreChaine[NBMAX];
    
    // strlen sert à calculer la longueur d'une chaine
        printf("Votre phrase : ");
        gets(chaine);
        
        printf("il y a %u de caractere\n", (unsigned)strlen(chaine) );
        
    // strcmp pert de comparer des chaines de caractere avec l'ordre alphabetique
        printf("Votre autre phrase : ");
        gets(autreChaine);
        
        if( strcmp( chaine, autreChaine ) == 0 ){
            printf("la chaine et l'autreChaine sont identiques\n");
        }
        if( strcmp( chaine, autreChaine ) > 0 ){
            printf("la chaine est alphabetiquement apres l'autreChaine\n");
        }
        if( strcmp( chaine, autreChaine ) < 0 ){
            printf("l'autreChaine est alphabetiquement apres la chaine\n");
        }
        
    // strncmp est la meme fonction que strcmp, mais il compare sur les n 1er caractere
        if( strncmp( chaine, autreChaine, 5) == 0){
            printf("Les 5 premiers caractere de chaine et d'autreChaine sont identiques\n");
        }
        else{
            printf("Les 5 premiers caractere de chaine et d'autreChaine sont different\n");
        }
        
    return (EXIT_SUCCESS);
}

