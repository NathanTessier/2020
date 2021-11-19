/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ntessier
 *
 * Created on 5 janvier 2021, 13:03
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#define LONG 1001

/* renvoie true si s est un palindrome, false sinon */
bool palindrome(const char* s)  // const car la chaîne s n'est pas modifiée
{

    int j = strlen(s);
    int i = 0;
    while ( i < j ) {
        while (!isalpha(s[i]))
	    { i++; }
        while (!isalpha(s[j]))
	    { j--; }
        if ( toupper(s[i]) != toupper(s[j]) ) return false; // echec!
    	i++;
    	j--;
    }
    return true; // OK
}

int main()
{
    char buffer[LONG];
    printf("Saisir une phrase (sans lettres accentuées) : ");
    scanf("%[^\n]",buffer);

    if(palindrome(buffer))
 	printf("La phrase \033[92m%s\033[0m est un palindrome\n", buffer);
    else
	printf("La phrase \033[92m%s\033[0m n'est pas un palindrome\n", buffer);

    return 0;
}
