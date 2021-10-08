/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ntessier
 *
 * Created on 19 novembre 2020, 09:09
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    int *ptrInt;
    char *ptrChar;
    float *ptrFloat;
    
  //  printf("taille d'un int %ld\ntaille du pointeur sur int : %ld\n",sizeof(int),sizeof(int*));
  //  printf("taille d'un char %ld\ntaille du pointeur sur char : %ld\n",sizeof(char),sizeof(char*));
   // printf("taille d'un float %ld\ntaille du pointeur sur float : %ld\n",sizeof(float),sizeof(float*));

    unsigned char *ptrOctet;
    int unEntier=0x12345678, i;
    
    ptrOctet=(char * )&unEntier;
    for (i=0; i<sizeof(unEntier);i++)
    {
       printf("%p : %hhX\n",ptrOctet, *ptrOctet); 
    }
    return (EXIT_SUCCESS);
}

