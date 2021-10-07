/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ntessier
 *
 * Created on 30 septembre 2020, 11:55
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    int valeur;
    
    printf("Donnez une valeur comprise entre 0 et 255 : ");
    scanf("%d",&valeur);
    if(valeur >=128)
        valeur=valeur-128;
    

    return (EXIT_SUCCESS);
}

