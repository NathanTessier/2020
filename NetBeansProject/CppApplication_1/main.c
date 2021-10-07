/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ntessier
 *
 * Created on 1 octobre 2020, 10:23
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
 
    char lettre;

    printf("La lettre est de: ");
    scanf("%c", &lettre);
    switch(lettre){
        case 'A':
        case 'a':
            printf("L'intervale est de: [16.20]\n");
        break;
        case 'B': printf("L'intervale est de: [12.16[\n");
        break;
        case 'C': printf("L'intervale est de: [8.12[\n");
        break;
        case 'D': printf("L'intervale est de: [4.8[\n");
        break;
        case 'E': printf("L'intervale est de: [0.4[\n");
        break;
        default: printf("note indéterminée");
    }
    
}

