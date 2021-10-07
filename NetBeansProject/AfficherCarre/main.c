/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ntessier
 *
 * Created on 10 novembre 2020, 13:41
 */

#include <stdio.h>
#include <stdlib.h>
#include "mes Fonctions.h"
/*
 * 
 */
int main(int argc, char** argv) {
    
int val,car;
    
    printf("val1 : ");
    scanf("%d",&val);
    afficherCarre(val);
    car=calculerCarre(val);
    if(car>80){
        printf("grand nombre\n");
    }
    else{
        printf("petit nombre\n");
    }
    return (EXIT_SUCCESS);
}

