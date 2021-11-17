/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ntessier
 *
 * Created on 19 janvier 2021, 13:05
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

#include "fonctions.h"

    int main(int argc, char** argv) {
        FILE *ficSrc;
        FILE *ficDst;
        typeEnTeteFichierBmp enTeteFic;
        typeEnTeteImageBmp enTeteImg;
        typeCouleur palette[NBCOULEURS];
        size_t retour;
        int i, nbDonneesImg;
        char octet;
        int retClose;
        if (argc != 3) {
            printf("usage %s cheminEtNomDuFichierImage\n ", argv[0]);
            exit(argc);
        }
        // ouverture fichier en lecture
        ficSrc = fopen(argv[1], "r");
        if (ficSrc == NULL) {
            printf("pb ouverture : %s\n", strerror(errno));
            exit(errno);
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

        // afficher les infos
        afficheEnTeteFichierBmp(enTeteFic);
        afficheEnTeteImageBmp(enTeteImg);



        // lecture de la palette
        retour = fread(palette, sizeof (typeCouleur), NBCOULEURS, ficSrc);
        if (retour != NBCOULEURS) {
            printf("pb lecture palette : %s\n", strerror(errno));
            exit(errno);
        }


        // ouverture fichier dst en ecriture
        ficDst = fopen(argv[2], "w");
        if (ficDst == NULL) {
            printf("pb ouverture : %s\n", strerror(errno));
            exit(errno);
        }
        //ecriture en tete fichier
        retour = fwrite(&enTeteFic, sizeof (typeEnTeteFichierBmp), 1, ficDst);
        if (retour != 1) {
            printf("pb ecriture en tete fic : %s\n", strerror(errno));
            exit(errno);
        }
        //ecriture en tete image
        retour = fwrite(&enTeteImg, sizeof (typeEnTeteImageBmp), 1, ficDst);
        if (retour != 1) {
            printf("pb ecriture en tete img : %s\n", strerror(errno));
            exit(errno);
        }
        //modification de la palette en nuance de rouge
        for (i = 0; i < NBCOULEURS; i++) {
            palette[i].vert = 0;
            palette[i].bleu = 0;

        }
        // ecriture de la palette
        retour = fwrite(palette, sizeof (typeCouleur), NBCOULEURS, ficDst);
        if (retour != NBCOULEURS) {
            printf("pb ecriture palette : %s\n", strerror(errno));
            exit(errno);
        }
        // copie des données de Src vers Dst
        nbDonneesImg = enTeteFic.tailleFichier - sizeof (typeEnTeteFichierBmp)
                - sizeof (typeEnTeteImageBmp) - NBCOULEURS * sizeof (typeCouleur);
        for (i = 0; i < nbDonneesImg; i++) {
            retour = fread(&octet, sizeof (char), 1, ficSrc);
            if (retour != 1) {
                printf("pb lecture octet : %s\n", strerror(errno));
                exit(errno);
            }
            retour = fwrite(&octet, sizeof (char), 1, ficDst);
            if (retour != 1) {
                printf("pb ecriture octet : %s\n", strerror(errno));
                exit(errno);
            }
        }
        // fermeture fichier dst
        retClose = fclose(ficDst);
        if (retClose == EOF) {
            printf("pb fermeture fichier : %s\n", strerror(errno));
            exit(errno);
        }

        // fermeture fichier src
        retClose = fclose(ficSrc);
        if (retClose == EOF) {
            printf("pb fermeture fichier : %s\n", strerror(errno));
            exit(errno);
        }
        //afficher les infos des entetes
        afficheEnTeteFichierBmp(enTeteFic);
        afficheEnTeteImageBmp(enTeteImg);


        return (EXIT_SUCCESS);
    }
