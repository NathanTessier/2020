/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ntessier
 *
 * Created on 27 janvier 2021, 08:39
 */

#include <stdio.h>
#include <stdlib.h>
#include "fonction.h"

/*
 * 
 */
int main(int argc, char** argv) {

    FILE *ficSrc;
    FILE *ficDst;
    typeEnTeteFichierBmp enTeteFic;
    typeEnTeteImageBmp enTeteImg;
    typeCouleur palette[NBCOULEURS];
    int retour;
    unsigned char octet;
    int pas = 42195;

   /* if ((argc > 1) && (argc < 5)) {
        if (argv[1][0] == 'i') {
            ficSrc = fopen(argv[2], "r");
            if (ficSrc == NULL) {
                printf("pb ouverture : %s\n", strerror(errno));
                exit(errno);
            }
        }
        //lecture en tete fichier
        retour = fread(&enTeteFic, sizeof (typeEnTeteFichierBmp), 1, ficSrc);
        if (retour != 1) {
            printf("pb lecture en tete fic : %s\n", strerror(errno));
            exit(errno);
        }
        //lecture en tete image
        retour = fread(&enTeteImg, sizeof (typeEnTeteImageBmp), 1, ficSrc);
        if (retour != 1) {
            printf("pb lecture en tete img : %s\n", strerror(errno));
            exit(errno);
        }

        afficheEnTeteFichierBmp(enTeteFic);
        afficheEnTeteImageBmp(enTeteImg);
        retour = fclose(ficSrc);
        if (retour == EOF) {
            printf("pb fermeture fichier : %s\n", strerror(errno));
            exit(errno);
        }
        
    }*/
    ficSrc=fopen("/home/USERS/ELEVES/SNIR2020/imgBMP/plasmaSteganoTexte.bmp","r");
    afficherSteganoTxt(ficSrc, pas);
    return (EXIT_SUCCESS);
}

