/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mesfonctions.c
 * Author: ntessier
 *
 * Created on 17 novembre 2020, 14:48
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "mesfonctions.h"




float calculerDiscriminant(float a, float b, float c) {
    
    float discriminant;
    discriminant = (b * b) - 4 * a*c;
    return discriminant;
   
}

void afficherRacines(float a, float b, float c) {
    
    float x1;
    float x2;
    float discriminant;
    discriminant=calculerDiscriminant(a,b,c);
    if (discriminant>=0){
    x1=(-b+sqrtf(discriminant))/2*a;
    x2=(-b-sqrtf(discriminant))/2*a;
    printf("racine 1 = %f\n",x1);
    printf("racine 2 = %f\n",x2);
    }
    else{
        printf("Il n'y a pas de solutions dans l'ensemble des réels\n");
    }
}


