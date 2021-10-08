/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ntessier
 *
 * Created on 4 novembre 2020, 08:16
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
 * 
 */
int main(int argc, char** argv) {
    
    float epsilon;
    float x;
    float somme=0;
    float fonction;
    int a;
    int b;
   
    printf("Indiquer la valeur de a : ");
    scanf("%d",&a);
    printf("Indiquer la valeur de b : ");
    scanf("%d",&b);
    printf("Indiquer la valeur d'epsilon: ");
    scanf("%f",&epsilon);
    
    for (x = a; x < b; x=x+epsilon){
        
        
        fonction=x*x+3*x-5;
        somme = somme +fonction * epsilon;
        
    }
        
    printf("L'integrale de la fonction est de: %f ",somme);
    
    
    
   
    return (EXIT_SUCCESS);
    
}

