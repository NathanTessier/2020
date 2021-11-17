/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ntessier
 *
 * Created on 14 janvier 2021, 08:16
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <ctype.h>
/*
 * 
 */

 void afficherErreur();

int main() {
    FILE *fd;
    int resultat;
    char caractere;
    int compteur=0;

    fd = fopen("/home/USERS/ELEVES/SNIR2020/ntessier/essai.txt", "w");
    
    if (fd == NULL) // pb ouverture fichier
    {
        afficherErreur();
    } else {
        resultat = fputs("Bonjour\n",fd);
        printf("valeur de retour : %d\n",resultat);

    fclose(fd);
    }
    printf("_______________________________________\n");
    
    fd = fopen("/home/USERS/ELEVES/SNIR2020/fichierTexte.txt", "r");
    
    if (fd == NULL) // pb ouverture fichier
    {
        afficherErreur();
    } else {
        //lecture
        while (!feof(fd)) {
            caractere = fgetc(fd);
            if(caractere>=97 && caractere<=122){
                compteur++;
            }
        }
        printf("Il y a %d minuscules non accentuées",compteur);
        


        fclose(fd);
    }
    
    
    return EXIT_SUCCESS;
}

void afficherErreur() {
    if (errno != 0) {
        printf("Erreur : %s\n", strerror(errno));
    }
}
