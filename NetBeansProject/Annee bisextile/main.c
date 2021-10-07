/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ntessier
 *
 * Created on 3 novembre 2020, 14:21
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
     int annee;

    printf("Donnez une année \n");
    scanf("%d",&annee);

    if (annee %4 == 0) 
    {
        if (annee %100 == 0) 
        {
            if (annee %400 == 0)
                printf("C'est une année bissextile");
            else
                printf("Ce n'est pas une année bissextile");
        }
         else
                printf("C'est une année bissextile");
    }
     else
           printf("Ce n'est pas une année bissextile");

    return (EXIT_SUCCESS);
}

