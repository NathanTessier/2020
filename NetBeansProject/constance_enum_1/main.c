/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ntessier
 *
 * Created on 3 décembre 2020, 10:11
 */

#include <stdio.h>
#include <stdlib.h>
#include "type_enum.h"
/*
 * 
 */
int main(int argc, char** argv) {
    
    char*nomJours[7]={"lundi","mardi","mercredi","jeudi","vendredi","samedi","dimanche",};
    jours aujourdhui=JEUDI;
    jours autreJours=SAMEDI;
    printf("%s \n",nomJours[aujourdhui]);
    printf("%s \n",nomJours[autreJours]);
    if(estUnPalindrome("coucou\n")){
        printf("coucou est un palindrome\n");
    }
    else{
        printf("coucou n'est un palindrome\n");
    }
    if(estUnPalindrome("eluparcettecrapule\n")){
        printf("eluparcettecrapule est un palindrome\n");
    }
    else{
        printf("eluparcettecrapule n'est un palindrome\n");
    }

    return (EXIT_SUCCESS);
}

