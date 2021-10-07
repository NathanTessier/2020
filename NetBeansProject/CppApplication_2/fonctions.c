/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ntessier
 *
 * Created on 10 novembre 2020, 13:09
 */

#include <stdio.h>
#include <stdlib.h>
#include "mes fonctions.h"

void afficherMenu(char sexe) {

    if (sexe == 'f') {
        printf("menu pour femme\n");
    }
    if (sexe == 'h') {

        printf("menu pour homme\n");
    }


    return (EXIT_SUCCESS);
}

