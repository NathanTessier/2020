/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ntessier
 *
 * Created on 3 novembre 2020, 13:57
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    float somme;
    int n;
    float grainDeBase;
    grainDeBase = 1;
    somme = 0;
    for (n = 1; n < 64; n++) {
        somme = somme + grainDeBase;
        grainDeBase = grainDeBase * 2;

    }
    printf("Le roi doit %f grains", somme);

    return (EXIT_SUCCESS);
}

