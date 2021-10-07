/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   caractère.h
 * Author: ntessier
 *
 * Created on 9 décembre 2020, 08:15
 */

#ifndef CARACTERE_H
#define CARACTERE_H
#define NBMAX 100

#ifdef __cplusplus
extern "C" {
#endif
    
    
int comptageA(char phrase[NBMAX]);
int Voyelle(char lettre);
int A(char lettre);
int Lettre(char lettre);
int comptageVoyelle(char phrase[NBMAX]);
int EspaceBlanc(char lettre);
int comptageConsonne(char phrase[NBMAX]);
int comptageMots(char phrase[NBMAX]);
void Inverser(char phrase[NBMAX],char phraseInverse[NBMAX]);
void InverserCar(char lettre);
void MajMInInverse(char phrase[]);



#ifdef __cplusplus
}
#endif

#endif /* CARACTÈRE_H */

