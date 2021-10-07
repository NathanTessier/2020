/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ntessier
 *
 * Created on 16 novembre 2020, 17:19
 */

#include <stdio.h>
#include <stdlib.h>
#define NBCOL 5
#define NBLIGNE 3

/*
 * 
 */
int main(int argc, char** argv) {

    int tab[NBCOL][NBLIGNE]= {0};
    int cpt = 0;

    for (int j = 0; j < NBLIGNE; j++) {
        for (int i = 0; i < NBCOL; i++) {
            tab[i][j] = cpt;
            cpt++;
        }
    }
    for (int j = 0; j < NBLIGNE; j++) {
        printf("| ");
        for (int i = 0; i < NBCOL; i++) {
            printf("%3d |",tab[i][j]);
        }
        printf("\n");
    }
    return (EXIT_SUCCESS);
}

