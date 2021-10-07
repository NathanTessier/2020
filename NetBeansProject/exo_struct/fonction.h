/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newfile.h
 * Author: ntessier
 *
 * Created on 26 novembre 2020, 09:29
 */

#ifndef NEWFILE_H
#define NEWFILE_H
#define NBCARMAXNOM 70  
#define NBCARMINNOM 50 

#ifdef __cplusplus
extern "C" {
#endif

    typedef struct personne {
        char nom[NBCARMAXNOM];
        char prenom[NBCARMINNOM];
        int annee;
        float taille;
        float poids;
    }typePersonne;

    typePersonne creePersonne();
    typePersonne* creePersonnePtr();
    void afficherPersonne(typePersonne p);
    void afficherPersonnePtr(typePersonne *p);

#ifdef __cplusplus
}
#endif

#endif /* NEWFILE_H */

