/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   adherant.h
 * Author: ntessier
 *
 * Created on 5 janvier 2021, 13:32
 */

#ifndef ADHERANT_H
#define ADHERANT_H
#define TAILLE 50
#define TAILLEBADGE 10

#ifdef __cplusplus
extern "C" {
#endif

    typedef struct {
        char nom[TAILLE];
        char prenom[TAILLE];
        char numBadge[TAILLEBADGE];
        int numActivite;
    } typeAdherent;

    typeAdherent *nouvelAdherent();

    




#ifdef __cplusplus
}
#endif

#endif /* ADHERANT_H */

