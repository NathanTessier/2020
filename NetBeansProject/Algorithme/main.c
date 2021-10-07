/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ntessier
 *
 * Created on 30 septembre 2020, 10:30
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int age;

    printf("age: ");
    scanf("%d",&age);
    if (age >= 18) {
        printf("Vous ètes majeur");
    }
    else {  // age < 18
        printf("Vous ètes mineur");
    }
    return (EXIT_SUCCESS);
}

