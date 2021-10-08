/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ntessier
 *
 * Created on 1 octobre 2020, 11:31
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

/*int main(int argc, char** argv) {
    int n=0;
    int r;
    int multi;
    int fin;
    int debut;
    
    printf("Donnez le multiplicateur: ");
    scanf("%d",&multi);
    
    printf("Donnez la borne de debut: ");
    scanf("%d",&debut);
    
    printf("Donnez la borne de fin: ");
    scanf("%d",&fin);
    n=debut;
    do{
        
   
    r=n*multi;
    printf("%d * %d = %d \n",n,multi,r);
    n++;
    }while(n<=fin);
    
        
    
    
    
    
    return (EXIT_SUCCESS);
}*/

/*int main(int argc, char** argv) {
    int n=0;
    int r;
    int multi;
    int fin;
    int debut;
    
    printf("Donnez le multiplicateur: ");
    scanf("%d",&multi);
    
    printf("Donnez la borne de debut: ");
    scanf("%d",&debut);
    
    printf("Donnez la borne de fin: ");
    scanf("%d",&fin);
    
    for (n=debut; n<=fin;n++){
        
        (r=n*multi);
    
        printf("%d * %d = %d \n",n,multi,r);
    }
        
}*/

int main(int argc, char** argv) {
    int n = 0;
    int r;
    int multi;
    int fin;
    int debut;


    printf("Donnez le multiplicateur: ");
    scanf("%d", &multi);

    printf("Donnez la borne de debut: ");
    scanf("%d", &debut);

    printf("Donnez la borne de fin: ");
    scanf("%d", &fin);

    n=debut;


    while (n <= fin)
    {
        r = n * multi;
        printf("%d * %d = %d \n", n, multi, r);
        n++;
    }













}