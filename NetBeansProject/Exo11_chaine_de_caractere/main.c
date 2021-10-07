/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ntessier
 *
 * Created on 4 janvier 2021, 15:02
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
     char phrase[50];

    printf("Quelle est la phrase : ");
    scanf("%s", phrase);

    if (strcmp("salut", phrase) == 0) {
        printf("bon debut");
    }

    return (EXIT_SUCCESS);
}

