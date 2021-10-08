/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ntessier
 *
 * Created on 10 septembre 2020, 11:53
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float val1;
    float val2;
    float somme;
    
    printf("Valeur 1: ");
    scanf("%f",&val1);
    printf("Valeur 2: ");
    scanf("%f",&val2);
    
    somme = val1+val2;
    
    printf("La somme : %f ",somme);
    
    return (EXIT_SUCCESS);
}

