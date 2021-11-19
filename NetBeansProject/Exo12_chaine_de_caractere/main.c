/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ntessier
 *
 * Created on 4 janvier 2021, 15:08
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    char login1[] = "Nathan";
    char login2[10];
    char motd1[] = "Tessier";
    char motd2[10];

    printf("Quelle est le login : ");
    scanf("%s", login2);
    printf("Quelle est le mot de passe : ");
    scanf("%s", motd2);

    if (strcmp("Nathan", login2) == 0 && strcmp("Tessier", motd2) == 0) {
        
        printf("Accès autorisé");

    }else{
        printf("Accès refusé");
    }


    return (EXIT_SUCCESS);
}

