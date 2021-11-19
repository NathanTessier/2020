/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "fonction.h"


void afficherSteganoTxt(FILE *ficSrc, int pas)
{
    fseek(ficSrc,1078,SEEK_SET);
    int i=0;
    char message[50];
    while(i < 15)
    {
        message[i] = fgetc(ficSrc);
        fseek(ficSrc,pas,SEEK_CUR);
        printf("%c",message[i]);
        i++;
    }
}

void afficheEnTeteFichierBmp(typeEnTeteFichierBmp ef) {

    printf("signature : %hhu%hhu\n", ef.signature[0], ef.signature[1]);
    printf("Taille Fichier : %u\n", ef.tailleFichier);
    printf("Reserve : %u\n", ef.reserve);
    printf("Adresse : %u\n", ef.adresseImg);
}

void afficheEnTeteImageBmp(typeEnTeteImageBmp ei) {
    printf("Taille en tete : %u\n", ei.tailleEnTete);
    printf("largueur : %u\n", ei.largeur);
    printf("hauteur : %u\n", ei.hauteur);
    printf("Nombre de plan : %hu\n", ei.nbPlan);
    printf(" bit par pixel: %hu\n", ei.bitParPixel);
    printf("type de compression : %u\n", ei.typeCompression);
    printf("taile de l'image : %u\n", ei.tailleImage);
    printf("resolution horizontale : %u\n", ei.resolutionHorizontale);
    printf("resolution veticale : %u\n", ei.resolutionVerticale);
    printf("nombre de couleurs utilisées : %u\n", ei.nbCouleursUtilises);
    printf("nombre de couleurs importantes : %u\n", ei.nbCouleursImportantes);

}

