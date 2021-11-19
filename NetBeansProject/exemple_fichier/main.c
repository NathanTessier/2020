/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ntessier
 *
 * Created on 4 janvier 2021, 16:47
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

void afficherErreur();

int main(int argc, char** argv) {
    FILE* fd;
    fd = fopen("essai.txt", "r");
    int resultat;

    if (fd == NULL) {
        afficherErreur();
    } else {
        
       resultat= fputs("Bonjour\n",fd);
       printf("valeur de retour : %d",resultat);
        fclose(fd);
    }
    return (EXIT_SUCCESS);
}
while(!feof(fd)){
    caractere=fgetc(fd);
    printf("%c", caractere)
}

void afficherErreur() {
    if (errno != 0) {
        printf("Erreur : %s", strerror(errno));
    }
}
