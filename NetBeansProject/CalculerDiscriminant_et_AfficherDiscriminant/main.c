/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ntessier
 *
 * Created on 10 novembre 2020, 13:59
 */

#include <stdio.h>
#include <stdlib.h>
#include "mesfonctions.h"
#include <math.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    float a,b,c;
    float resultat;
    
    
    printf("Donnez la valeur de a : ");
    scanf("%f",&a);
    printf("Donnez la valeur de b : ");
    scanf("%f",&b);
    printf("Donnez la valeur de c : ");
    scanf("%f",&c);
    resultat=calculerDiscriminant(a,b,c);
    printf("discriminant : %f\n", resultat);
    
    
        afficherRacines(a,b,c);
    
    
    
    

    return (EXIT_SUCCESS);
}

