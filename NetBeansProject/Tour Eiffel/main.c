/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ntessier
 *
 * Created on 3 novembre 2020, 14:09
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    float hauteur;
    int n;
    int pliure=0;
    hauteur = 0.000076474;
    do{
        hauteur = hauteur*2;
       pliure = pliure+1;

    }while(hauteur<320.755);
    printf("il faut %d pliure", pliure);
    
    return (EXIT_SUCCESS);
}

