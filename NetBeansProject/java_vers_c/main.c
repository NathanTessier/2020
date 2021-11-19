/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ntessier
 *
 * Created on 21 janvier 2021, 10:49
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float i,i2,i3,i4;
    float somme;
    printf("premiere valeur : ");
    scanf("%f",&i);
    printf("deuxieme valeur : ");
    scanf("%f",&i2);
    printf("troisieme valeur : ");
    scanf("%f",&i3);
    printf("quatrieme valeur : ");
    scanf("%f",&i4);
    somme = i+i2+i3+i4;
    printf("la somme est de %f",somme);

    return (EXIT_SUCCESS);
}

