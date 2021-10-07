/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ntessier
 *
 * Created on 10 novembre 2020, 13:37
 */

#include <stdio.h>
#include <stdlib.h>
#include"mes fonctions.h"
/*
 * 
 */
int main(int argc, char** argv) {

    float res,val1,val2;
    
    printf("val1 : ");
    scanf("%f",&val1);
    printf("val2 : ");
    scanf("%f",&val2);
    res=additionsReels(val1,val2);
    printf("resultat : %.2f\n",res);
    printf("resultat : %.2f\n",additionsReels(val1,val2));
    res=additionsReels(val1,3.14);
    printf("resultat : %.2f\n",res);
    res=additionsReels(1.896,3.14);
    printf("resultat : %.2f\n",res);
    res=additionsReels(3.14,val2);
    printf("resultat : %.2f\n",res);
    
    return (EXIT_SUCCESS);
}

