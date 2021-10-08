/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ntessier
 *
 * Created on 30 septembre 2020, 11:09
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    float imc;
    float taille;
    float poids;

    printf("Donnez votre taille : ");
    scanf("%f",&taille);

    printf("Donnez votre poids : ");
    scanf("%f",&poids);
    
    imc = poids/(taille*taille);
    
    if (imc >= 18.5 && imc <= 25) {
        printf("Vous êtes dans la norme");
    }
    else{ // imc < 18,5 ou imc > 25
        printf("Vous n'êtes pas dans la norme");
    }
    return (EXIT_SUCCESS);
}

