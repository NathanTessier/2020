/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   imc.c
 * Author: ntessier
 *
 * Created on 25 novembre 2020, 14:09
 */

#include <stdio.h>
#include <stdlib.h>
#include "imc.h"
/*
 * 
 */

    
    void corpulence(float imc){

    int i;
    float tabSeuil[6]={16.5 , 18.5, 25.0, 30.0, 35.0, 40.0};
    char *tabCorpulence[7]= {"famine","maigreur", "corpulence normale", "surpoids", "obésité modérée", 
    "obésité sévère",
    "obésité morbide"};

    printf(" Votre indice de masse corporelle est de %.1f.\n", imc);
    for (i=0; i<6; i++){
        if(imc <= tabSeuil[i])
	    {
            printf(" Votre corpulence est qualifiée de %s.\n", tabCorpulence[i]);
	    return;
	    }
    }
    printf(" Votre corpulence est qualifiée de %s.\n", tabCorpulence[i]);
}

float devine(char sexe, float taille){

    if(sexe == 'h')
    	return (50 + 2.3 * (taille / 0.0254 - 60));
    else
        return (45.5 + 2.3 * (taille / 0.0254 - 60));
}

