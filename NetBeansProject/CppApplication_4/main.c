/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ntessier
 *
 * Created on 25 novembre 2020, 13:09
 */

#include <stdio.h>
#include <stdlib.h>
#define TAILLETAB 5

/*
 * 
 */
int main(int argc, char** argv) {

    int tabVal[TAILLETAB];
    int i;
    int versVide;

   

    for (i = 0; i < TAILLETAB; i++) {
        printf("val%d : ", i + 1);
        scanf("%d", &tabVal[i]);
    }
    for(i=0;i<TAILLETAB/2;i++){
        versVide=tabVal[i];
        tabVal[i]=tabVal[TAILLETAB -i-1];
        tabVal[TAILLETAB -i-1]=versVide;
    }
    for(i = 0; i < TAILLETAB; i++){
        printf("%d", tabVal[i]);
    }



    return (EXIT_SUCCESS);
}

