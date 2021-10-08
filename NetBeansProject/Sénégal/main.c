/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ntessier
 *
 * Created on 4 novembre 2020, 09:35
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
      float minima, maxima,moyMin = 0, moyMax = 0, pourcentMin = 0, pourcentMax = 0;
    float sommeMinima = 0;
    float sommeMaxima = 0;
    int valCouple = 1, valManqMin = 0, valManqMax = 0, valMin = 0, valMax = 0;
   
    do{
        printf("Saisissez les couples de température\n");
        printf("\nMinima Couple %d: ", valCouple);
        scanf("%f\b",&minima);
        printf("Maxima Couple %d: ", valCouple);
        scanf("%f",&maxima);
        valCouple++;
       
        if(minima == 0){
            valManqMin++;
        }else {
            valMin++;
        }
        if(maxima == 0){
            valManqMax++;
        }else {
            valMax++;
        }
       
        sommeMinima = sommeMinima + minima;
        sommeMaxima = sommeMaxima + maxima;
       
    }while((minima != 0) || (maxima != 0));
   
    valCouple --;
    moyMin = sommeMinima/valCouple;
    moyMax = sommeMaxima/valCouple;
   
    printf("La moyenne des minima est %f\n",moyMin);
    printf("La moyenne des maxima est %f\n",moyMax);
   
    printf("Le nombre de valeur manquante des minima est %d\n",valManqMin);
    printf("Le nombre de valeur manquante des maxima est %d\n",valManqMax);
   
    pourcentMin = ((float) valManqMin/valCouple)*100;
    pourcentMax = ((float) valManqMax/valCouple)*100;
   
    printf("Le pourcentage des minima est %f\n",pourcentMin);
    printf("Le pourcentages des maxima est %f",pourcentMax);

    

    
    return (EXIT_SUCCESS);
}

