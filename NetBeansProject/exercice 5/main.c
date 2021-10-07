/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ntessier
 *
 * Created on 14 octobre 2020, 10:27
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

/*int main(int argc, char** argv) {
    
    int val=0;
    int nbCoups=0;
    
    while(val>=0){
        printf("La valeur est de : ");
        scanf("%d",&val);
        nbCoups++;
    }
    nbCoups=nbCoups-1;
     printf("le nombre de valeurs positives est de : %d \n",nbCoups);
        
    
    return (EXIT_SUCCESS);
}*/

/*
 int main(int argc, char** argv) {

    int val = 0;



    do {

        printf("La valeur est de : ");
        scanf("%d", &val);
 


    } while (val >= 0);

 




    return (EXIT_SUCCESS);
}
*/

/*int main(int argc, char** argv) {
    
    int val=0;
    int Somme;
    
    while(val>=0){
        
        Somme=val+val+val;
        printf("La valeur est de : ");
        scanf("%d",&val);
        
         
    }
  
    printf("La somme est de : %d ",+Somme);
        
    
    return (EXIT_SUCCESS);
}*/

int main(int argc, char** argv) {
    
    int val=0;
    int moyenne;
    
    while(val>=0){
        
        moyenne=(val+val+val)/3;
        printf("La valeur est de : ");
        scanf("%d",&val);
        
         
    }
  
    printf("La moyenne est de : %d ",+moyenne);
        
    
    return (EXIT_SUCCESS);
}