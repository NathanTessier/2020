/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   fonction.c
 * Author: ntessier
 *
 * Created on 18 novembre 2020, 15:54
 */

#include <stdio.h>
#include <stdlib.h>
#include "fonction.h"
#include <string.h>

/*
 * 
 */
int verifTerminaison(char* chaine, char fin[2]) {
    int retour = -1;
    

    if (chaine[strlen(chaine)-2] == fin[0]) {
        if (chaine[strlen(chaine)-1] == fin[1]) {
            retour= 1;
        }

    }
    return retour;
}

