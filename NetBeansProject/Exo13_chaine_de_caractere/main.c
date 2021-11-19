/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ntessier
 *
 * Created on 4 janvier 2021, 15:17
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
     char phrase[50];
     int i;

    printf("Quelle est la phrase : ");
    gets(phrase);
    
    for(i=0;i<strlen(phrase)==0;i++){
        if(phrase[i] !=' '){
            printf("%c",phrase[i]);
        }
    }

   
    return (EXIT_SUCCESS);
}

