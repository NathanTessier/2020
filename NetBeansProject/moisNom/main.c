/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ntessier
 *
 * Created on 23 novembre 2020, 17:31
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * moisNom(int Numero);
/*
 * 
 */
int main(int argc, char** argv) {
    
    int numero;
    char * ptr_char;   
    printf("De quel mois voulez-vous le nom ? \n");
    scanf("%d",&numero);
    ptr_char = moisNom(numero);
    
    printf("%s\n",ptr_char);

    return (EXIT_SUCCESS);
}



char * moisNom(int numero){

  char * tabMois[12]= {"Janvier", "Février", "Mars",
                  "Avril", "Mai", "Juin", "Juillet",
                  "Aout", "Septembre", "Octobre", 
                  "Novembre", "Décembre"};
char *retour;

retour = (char *)malloc(strlen(Mois[numero]) * sizeof(char));
strcpy(retour,Mois[numero-1] );

return retour;
}