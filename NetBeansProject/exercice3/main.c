/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ntessier
 *
 * Created on 23 septembre 2020, 08:53
 */

#include <stdio.h>
#include <stdlib.h>
#include <senseHat.h>
#include <unistd.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int colonne;
    int ligne;

    InitialiserLeds();

    for (ligne = 0; ligne < 8; ligne++) {
        sleep(1);
        Effacer();

        for (colonne = 0; colonne <= ligne; colonne++) {
            Allumer(ligne, colonne, );
            Allumer(colonne, ligne, BLEU);
        }
    }
    
    return (EXIT_SUCCESS);
}

