/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ntessier
 *
 * Created on 10 décembre 2020, 10:23
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * 
 */
int main(int argc, char** argv) {

    float val1, val2, resultat;
    if (argc != 4) {
        printf("usage : %s operation val1 val2\n", argv[0]);
        exit(0);
    }
    if (strcmp(argv[1], "+") == 0) {
        sscanf(argv[2], "%f", &val1);
        sscanf(argv[3], "%f", &val2);
    }
    resultat = val1 + val2;
    printf("%.2f + %.2f = %.2f\n", val1, val2, resultat);
    
    if (strcmp(argv[1], "-") == 0) {
        sscanf(argv[2], "%f", &val1);
        sscanf(argv[3], "%f", &val2);
    }
    resultat = val1 + val2;
    printf("%.2f - %.2f = %.2f\n", val1, val2, resultat);
    
    if (strcmp(argv[1], "/") == 0) {
        sscanf(argv[2], "%f", &val1);
        sscanf(argv[3], "%f", &val2);
    }
    resultat = val1 + val2;
    printf("%.2f / %.2f = %.2f\n", val1, val2, resultat);

    return (EXIT_SUCCESS);
}


