/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   fonction.c
 * Author: ntessier
 *
 * Created on 10 novembre 2020, 13:45
 */

#include <stdio.h>
#include <stdlib.h>
#include "mes Fonctions.h"

/*
 * 
 */
int main(int argc, char** argv) {

    void afficherCarre(int nombre) {
        int carre;
        carre = nombre*nombre;
        printf("carre de %d = %d \n", nombre, carre);
    }

    int calculerCarre(int nombre) {
        int carre;
        carre = nombre*nombre;
        return carre;
    }
    return (EXIT_SUCCESS);

}
