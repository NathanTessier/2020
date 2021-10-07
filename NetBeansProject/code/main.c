/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ntessier
 *
 * Created on 3 novembre 2020, 14:55
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int codeSaisie;
    int code;
    int chiffre;
    int chiffre2;
    int chiffre3;
    int compteur;

    code = 123;
    compteur = 0;
    
    do {
        printf("Donnez chiffre: ");
        scanf("%d", &chiffre);
        printf("Donnez chiffre2: ");
        scanf("%d", &chiffre2);
        printf("Donnez chiffre3: ");
        scanf("%d", &chiffre3);

        codeSaisie = (chiffre * 100)+(chiffre2 * 10)+(chiffre3);
       


        if (codeSaisie != code) {
            compteur++;
            printf("Code incorrect\n");

        } else printf("code OK\n");
    } while (compteur < 3 && codeSaisie != code);
    printf("trop d'erreur");
    
    
    return (EXIT_SUCCESS);
}

