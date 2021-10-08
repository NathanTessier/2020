/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ntessier
 *
 * Created on 30 septembre 2020, 11:01
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int note;

    printf("note: ");
    scanf("%d", &note);

    if (note < 10) {
        printf("Vous avez moins que la moyenne");
    } else { // note >= 10
        if (note == 10) {
            printf("Vous avez la moyenne");
        } else { // note > 10
            printf("Vous avez plus que la moyenne");
        }
    }
    return (EXIT_SUCCESS);
}

