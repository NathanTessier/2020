/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ntessier
 *
 * Created on 3 novembre 2020, 13:45
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int nbCoucou;
    int n;

    

    printf("Combien il y a de coucou ?\n ");
    scanf("%d",&nbCoucou);
    
    for (n=0; n< nbCoucou ;n++)
    {
    printf("Coucou!\n");
    }
    
    return (EXIT_SUCCESS);
}

