/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: mmenager
 *
 * Created on 5 novembre 2020, 10:51
 */

#include <stdio.h>
#include <stdlib.h>

#define NBJOURS 4
int main(int argc, char** argv) {
    
    float tempMin[NBJOURS ];
    float tempMax[NBJOURS ];
    int i;
    float mini, maxi;
    int jourTmin = 0;
    int jourTmax = 0;
    
    // initialisation des tableaux
    for( i=0; i<NBJOURS; i++){
    
        printf("Donnez la temperature mini pour le jour %d : ",i+1);
        scanf("%f",&tempMin[i]);
        
        printf("Donnez la temperature max pour le jour %d : ",i+1);
        scanf("%f",&tempMax[i]);
    }
    
    // affichage des couples min/max par jour
    for( i=0; i<NBJOURS; i++){
    
        printf("Jour %d : (%.2f . %.2f)\n",i+1,tempMin[i],tempMax[i]);
    }
    
    // recherche de la temperature mini des mini
    mini = tempMin[0];
    
    for( i=1; i<NBJOURS; i++){
    
        if( mini>tempMin[i]){
        
            mini = tempMin[i];
            jourTmin = i;
        }
        
    }
    
    printf("La temperature mini des mini est attient au jour %d et est de : %.2f\n",jourTmin+1,mini);
    
    // recherche de la temperature maxi des maxi
    maxi = tempMax[0];
    
    for( i=1; i<NBJOURS; i++){
    
        if( maxi<tempMax[i]){
        
            maxi = tempMax[i];
            jourTmax = i;
            
        }
        
    }
    
    printf("La temperature maxi des maxi est attient au jour %d et est de : %.2f\n",jourTmax+1,maxi);
    
    return (EXIT_SUCCESS);
}

