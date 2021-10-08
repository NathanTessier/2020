/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: mmenager
 *
 * Created on 5 novembre 2020, 10:30
 */

#include <stdio.h>
#include <stdlib.h>

#define NBELEVES 25

int main(int argc, char** argv) {

    
        float notesEleves[NBELEVES];
        int i;
    
        // initialisation du tableau des notes
        for( i=0; i<NBELEVES; i++){
            
            notesEleves[i] = i%20;
        }
        
        // affichage des notes
        for( i=0; i<NBELEVES; i++){
            
            printf("l'eleve numero %d a eu la notes %.2f / 20\n",i,notesEleves[i]);
        }
    
    
    return (EXIT_SUCCESS);
}

