/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "caractere.h"
#define true 1
#define false 0

/*
 * 
 */

int A(char lettre) {
    char lettreA[1] = "a";
    int i;
    int retour = false;

    for (i = 0; i < 14; i++) {
        if (lettre == lettreA[i]) {
            retour = true;
        }
    }

    return retour;
}
int comptageA(char phrase[]) {
    int x = 0;
    int i;
    for (i = 0; phrase[i] != '\0'; i++) {
        if (A(phrase[i])) {
            x++;
        }
    }

    return x;
}

int Voyelle(char lettre) {
    char voyelles[14] = "aeiouyAEIOUY";
    int i;
    int retour = false;

    for (i = 0; i < 14; i++) {
        if (lettre == voyelles[i]) {
            retour = true;
        }
    }

    return retour;
}

int comptageVoyelle(char phrase[]) {
    int x = 0;
    int i;
    for (i = 0; phrase[i] != '\0'; i++) {
        if (Voyelle(phrase[i])) {
            x++;
        }
    }

    return x;
}

int Lettre(char lettre) {
    return (lettre >= 'a' && lettre <= 'z' || lettre >= 'A' && lettre <= 'Z');

}

int comptageConsonne(char phrase[]) {
    int x = 0;
    int i;
    for (i = 0; phrase[i] != '\0'; i++) {
        if (!Voyelle(phrase[i]) && Lettre(phrase[i])) {
            x++;
        }
    }

    return x;
}

int EspaceBlanc(char lettre) {
    char espaceBlancs[3] = " \n\t";
    int i;
    int retour = false;

    for (i = 0; i < 3; i++) {
        if (lettre == espaceBlancs[i]) {
            retour = true;
        }
    }

    return retour;
}

int comptageMots(char phrase[]) {
    int x = 0;
    if (Lettre(phrase[0])) {
        x++;
    }
    int i;
    for (i = 0; phrase[i] != '\0'; i++) {
        if (EspaceBlanc(phrase[i]) && Lettre(phrase[i + 1])) {
            x++;
        }
    }

    return x;
}

void Inverser(char phrase[], char phraseInverse[]) {
    int longueur;
    int i;
    longueur = strlen(phrase);
    for (i = 0; i < longueur; i++) {
        phraseInverse[i] = phrase[longueur - i - 1];
    }
    phraseInverse[i] = '\0';
}
void MajMInInverse(char phrase[]){
    int longueur;
    int i;
    longueur= strlen(phrase);
    
     for (i = 0; i < longueur; i++) {
        if (phrase[i] >= 65 && phrase[i] <= 90) {
            phrase[i] = phrase[i] + 32;
        } else
            if (phrase[i] >= 97 && phrase[i] <= 122) {
            phrase[i] = phrase[i] - 32;
        }
    }
}