/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ntessier
 *
 * Created on 4 novembre 2020, 11:53
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    
    int taillePopulation1 = 2000;
    int taillePopulation2 = 1000;
    int tauxPopulation1 = 15;
    int tauxPopulation2 = 30;
    int annees = 0;
   
    while (taillePopulation1 > taillePopulation2){
        taillePopulation1 = taillePopulation1 + taillePopulation1 + tauxPopulation1/annees
        taillePopulation2 = taillePopulation2 + taillePopulation2 + tauxPopulation2/annees
        annees++;
        printf("Taille de la population 1 : %d",taillePopulation1);
        printf("Taille de la population 2 : %d\n\¬",taillePopulation2);
    }
   
    printf("Le nombre d'annees pour atteindre l'équilibre est : %d",annees);

   
	
	


    return (EXIT_SUCCESS);
}

