/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ntessier
 *
 * Created on 18 novembre 2020, 15:31
 */

#include <stdio.h>
#include <stdlib.h>
#include "fonction.h"
#define NBCARFIN 2
#define NBMAXCAR 50

/*
 * 
 */
int main(int argc, char** argv) {

    char mot[NBMAXCAR];
    char terminaison[NBCARFIN] = {'e', 'r'};
    int finEnEr;

    printf("donner un mot : ");
    scanf("%s", mot);
    finEnEr = verifTerminaison(mot, terminaison);
    if (finEnEr == 1) {
        printf("%s se termine bien en ER\n",mot);
    }
    else
    {
        printf("%s ne se termine pas en ER\n",mot);
    }

    return 0;
}

