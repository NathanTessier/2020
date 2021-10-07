/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ntessier
 *
 * Created on 30 novembre 2020, 17:38
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NBMAX 100
#include "caractere.h"
/*
 * 
 */
int main(int argc, char** argv) {
    
    char phrase[NBMAX];
    char phraseInverse[NBMAX];
    char copie[NBMAX];
    
    printf("Saisir une phrase \n");
    //gets(phrase);
    //scanf("%[^\n]", phrase);
    fgets(phrase,NBMAX , stdin );
    strncpy(copie,phrase,NBMAX);
    printf("La phrase est : \"%s\"\n", copie);
    
    if (strncmp(copie,"essai\n", 5) == 0){
        printf("le début de la phrase entrée est essai \n");
    }
    else{
        printf("le début de la phrase entrée n' est pas essai \n");
    }
    printf ("le nombre de a est : %d\n", comptageA(phrase));
    printf ("le nombre de voyelles est : %d\n", comptageVoyelle(phrase));
    printf ("le nombre de consonnes est : %d\n", comptageConsonne(phrase));
    printf ("le nombre de mots est : %d\n", comptageMots(phrase));
    Inverser(phrase, phraseInverse);
    printf("%s\n",phraseInverse);
    MajMInInverse(phrase);
    printf("%s\n",phrase);

    return (EXIT_SUCCESS);
}

