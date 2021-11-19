/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ntessier
 *
 * Created on 14 janvier 2021, 09:11
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int main(int argc, char** argv) {

    FILE *fic;

    int retour;
    unsigned int largeur;
    unsigned int hauteur;
    unsigned int nbCouleurs;


    fic = fopen("/home/USERS/ELEVES/SNIR2020/imgBMP/image256Couleurs.bmp", "r");
    if (fic == NULL) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }

    retour = fseek(fic, 2 + 4 + 4 + 4 + 4, SEEK_SET);

    if (retour == -1) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }

    retour = fread(&largeur, sizeof (unsigned int), 1, fic);

    if (retour != 1) {
        printf("erreur d'ecriture avec fread %s\n", strerror(errno));
        exit(retour);
    }
    retour = fread(&hauteur, sizeof (unsigned int), 1, fic);

    if (retour != 1) {
        printf("erreur d'ecriture avec fread %s\n", strerror(errno));
        exit(retour);
    }



    retour = fseek(fic, 2 + 2 + 4 + 4 + 4 + 4, SEEK_CUR);

    if (retour == -1) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }

    retour = fread(&nbCouleurs, sizeof (unsigned int), 1, fic);

    if (retour != 1) {
        printf("erreur d'ecriture avec fread %s\n", strerror(errno));
        exit(retour);
    }







    retour = fclose(fic);
    if (retour == EOF) {
        printf("%s\n", strerror(errno));
        exit(errno);

    }
    printf("format de l'image : %u x %u | % couleurs\n", largeur, hauteur, nbCouleurs);

    return (EXIT_SUCCESS);
}