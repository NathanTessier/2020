/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ntessier
 *
 * Created on 26 novembre 2020, 09:29
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fonction.h"


typePersonne creePersonne() {
    typePersonne p;
    printf("Donnez un nom ");
    scanf("%s", p.nom);
    printf("Donnez un prenom ");
    scanf("%s", p.prenom);
    printf("Donnez l'annee de naissance ");
    scanf("%d", &p.annee);
    printf("Donnez un poids ");
    scanf("%f", &p.poids);
    printf("Donnez une taille ");
    scanf("%f", &p.taille);
    
    return p;
}

void afficherPersonne(typePersonne p) {

    printf("Nom : %s\n",p.nom);
    printf("Prenom : %s\n",p.prenom);
    printf("Année : %d\n",p.annee);
    printf("Taille : %.2f\n",p.taille);
    printf("Poids : %.2f\n",p.poids);
    

}
typePersonne *creePersonnePtr() {
    
    typePersonne *p;
    p=(typePersonne *)malloc(sizeof(typePersonne));
    printf("Donnez un nom ");
    scanf("%s", p->nom);
    printf("Donnez un prenom ");
    scanf("%s", p->prenom);
    printf("Donnez l'annee de naissance ");
    scanf("%d", &p->annee);
    printf("Donnez un poids ");
    scanf("%f", &p->poids);
    printf("Donnez une taille ");
    scanf("%f", &p->taille);
    
    return p;
}
void afficherPersonnePtr(typePersonne *p) {

    printf("Nom : %s\n",p->nom);
    printf("Prenom : %s\n",p->prenom);
    printf("Année : %d\n",p->annee);
    printf("Taille : %.2f\n",p->taille);
    printf("Poids : %.2f\n",p->poids);
    

}
