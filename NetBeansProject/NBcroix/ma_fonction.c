/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ma_fonction.c
 * Author: ntessier
 *
 * Created on 24 novembre 2020, 13:23
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LARGEUR 15
#define HAUTEUR 9
#include "ma_fonction.h"

/*
 * 
 */
 int nbCroix(unsigned char grille[LARGEUR][HAUTEUR]){
     
     int count=0;
     for (int i=0;i<HAUTEUR;i++){
         for (int j=0;j<LARGEUR ;j++){
             if(grille[i][j]=='X'){
                 count++;
             }
         }
     }

    return (EXIT_SUCCESS);
}

