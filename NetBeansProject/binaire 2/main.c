/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ntessier
 *
 * Created on 3 novembre 2020, 13:17
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
/*
int main(int argc, char** argv) {
   

    int main(void) {


        int val;

        printf("Donnez une valeur comprise entre 0 et 255: \n");
        scanf("%d", &val);

        if (val >= 128) {
            val = val - 128;
            printf("1");
        } else {
            printf("0");
        }

        if (val >= 64) {
            val = val - 64;
            printf("1");
        } else {
            printf("0");
        }

        if (val >= 32) {
            val = val - 32;
            printf("1");
        } else {
            printf("0");
        }

        if (val >= 16) {
            val = val - 16;
            printf("1");
        } else {
            printf("0");
        }

        if (val >= 8) {
            val = val - 8;
            printf("1");
        } else {
            printf("0");
        }

        if (val >= 4) {
            val = val - 4;
            printf("1");
        } else {
            printf("0");
        }
        if (val >= 2) {
            val = val - 2;
            printf("1");
        } else {
            printf("0");
        }

        if (val >= 1) {
            val = val - 1;
            printf("1");
        } else {
            printf("0");
        }

        return 0;
    }

*/


#include <stdio.h>
#include <stdlib.h>

    int main(int argc, char** argv) {

unsigned long val;
unsigned long valeurDeBase;

valeurDeBase = 2147483648 ;
        
printf("Donnez une valeur comprise entre 0 et 2147483648 : \n");
scanf("%lu",&val);

do {

if (val >= valeurDeBase){
    val = val - valeurDeBase;
    printf("1");
} else {
    printf("0");
    }
    valeurDeBase = (valeurDeBase / 2);
} while (val != 0 ||valeurDeBase !=0 );
        
        
return (EXIT_SUCCESS);
}

