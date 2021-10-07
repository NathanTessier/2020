/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ntessier
 *
 * Created on 10 novembre 2020, 13:33
 */

#include <stdio.h>
#include <stdlib.h>
#include "mes fonctions.h"

/*
 * 
 */
int main(int argc, char** argv) {
    
char genre;
    printf("are you male or female (h/f) ? ");
    scanf("%c",&genre);
    afficherMenu(genre);
    afficherMenu('h');
    
    return (EXIT_SUCCESS);
}

