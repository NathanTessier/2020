/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ntessier
 *
 * Created on 3 novembre 2020, 13:16
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    int nombreSymbole;
    int s;
 


    printf("Combien de symbole voulez vous? \n");
    scanf("%d",&nombreSymbole);
    do {
        for (s = 1; s <= nombreSymbole; s++) {
            printf("#");
        }
        printf("\n");
        nombreSymbole = nombreSymbole - 1;
    } while (nombreSymbole >= 0);

    return (EXIT_SUCCESS);
}

