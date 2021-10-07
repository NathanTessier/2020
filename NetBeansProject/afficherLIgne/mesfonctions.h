/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mesfonctions.h
 * Author: ntessier
 *
 * Created on 18 novembre 2020, 13:08
 */

#ifndef MESFONCTIONS_H
#define MESFONCTIONS_H

#ifdef __cplusplus
extern "C" {
#endif

    void afficherUneLigne(int longueur);
    void afficherUnCarre(int hauteur);
    void afficherUnRectangle(int longueur, int hauteur);
    int compterSymbole(char* chaine, char caractere);


#ifdef __cplusplus
}
#endif

#endif /* MESFONCTIONS_H */

