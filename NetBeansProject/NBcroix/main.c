/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ntessier
 *
 * Created on 18 novembre 2020, 16:48
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ma_fonction.h"
#define LARGEUR 15
#define HAUTEUR 9

/*
 * 
 */
void initGrille(unsigned char grille[LARGEUR][HAUTEUR]) {
    int x, y;

    for (y = 0; y < HAUTEUR; y++) {
        for (x = 0; x < LARGEUR; x++) {
            grille[x][y] = '.';
        }
    }
}

void afficheGrille(unsigned char grille[LARGEUR][HAUTEUR]) {
    int x, y;
    unsigned char lettre = 'A';
    printf("  ");
    for (x = 0; x < LARGEUR; x++) {
        printf(" %c", lettre++);
    }
    printf("\n");
    for (y = 0; y < HAUTEUR; y++) {


        printf("%d ", y + 1);
        for (x = 0; x < HAUTEUR; x++) {
            printf(" %c", grille[x][y]);
        }
        printf("\n");
    }
}

int main() {
    unsigned char tab[LARGEUR][HAUTEUR];
    int x, y;
    unsigned char lettre;
    int chiffre;
    int nombreDeCroix;

    initGrille(tab);
    do {
        afficheGrille(tab);
        printf("ajouter une croix : lettreChiffre (ex: b4)\n");
        printf("fin avec a-1 : \n");
        scanf(" %c%d", &lettre, &chiffre);
        if ((lettre >= 'a' && lettre <= 'a' + LARGEUR) && (chiffre >= 1 && chiffre <= HAUTEUR)) {
            tab[lettre - 'a'][chiffre - 1] = 'X';
        }
    } while (lettre != 'a' || chiffre != -1);
    nombreDeCroix = nbCroix(tab);
    printf("il y a %d croix \n", nombreDeCroix);
}






