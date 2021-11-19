/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ntessier
 *
 * Created on 5 janvier 2021, 13:32
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "adherant.h"
/*
 * 
 */
int main(int argc, char** argv) {
    typeAdherent ad;
    typeAdherent *ptrAd;
    ad.numActivite=1581;
    strcpy(ad.nom,"Tessier");
    strcpy(ad.prenom,"Nathan");
    strcpy(ad.numBadge,"AZERT15968");
    printf("Son nom est : %s\nSon prénom est : %s\nSon numéro de badge est : %s\nSon numéro d'activité est : %d\n",ad.nom,ad.prenom,ad.numBadge,ad.numActivite);
    
    ptrAd=nouvelAdherent();
    printf("Son nom est : %s\nSon prénom est : %s\nSon numéro de badge est : %s\nSon numéro d'activité est : %d",ptrAd->nom,ptrAd->prenom,ptrAd->numBadge,ptrAd->numActivite);       

    return (EXIT_SUCCESS);
}

