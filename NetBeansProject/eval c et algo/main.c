/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ntessier
 *
 * Created on 13 octobre 2020, 13:53
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int chiffre1 = 2;
    int chiffre2 = 7;
    int chiffre3 = 5;
    int chiffre4 = 1;

    if
        (chiffre1 >= 0 && chiffre1 <= 9,
            chiffre2 >= 0 && chiffre2 <= 9,
            chiffre3 >= 0 && chiffre3 <= 9,
            chiffre4 >= 0 && chiffre4 <= 9) {

        do {

            printf("Le premier chiffre est : %d \n", +chiffre1);
            scanf("%d", &chiffre1);
            printf("Le deuxième chiffre est : %d \n", +chiffre2);
            scanf("%d", &chiffre2);
            printf("Le troisième chiffre est : %d \n", +chiffre3);
            scanf("%d", &chiffre3);
            printf("Le quatrième chiffre est : %d \n", +chiffre4);
            scanf("%d", &chiffre4);


        } while (chiffre1 != 2, chiffre2 != 7, chiffre3 != 5, chiffre4 != 1);
        printf("Félicitation");



    }


    return (EXIT_SUCCESS);
}

