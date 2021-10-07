/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   type_enum.h
 * Author: ntessier
 *
 * Created on 3 décembre 2020, 10:18
 */

#ifndef TYPE_ENUM_H
#define TYPE_ENUM_H

#ifdef __cplusplus
extern "C" {
#endif

    typedef enum{LUNDI,MARDI,MERCREDI,JEUDI,VENDREDI,SAMEDI,DIMANCHE} jours;
    typedef enum{FALSE,TRUE} boolean;
    boolean estUnPalindrome(char*);
    


#ifdef __cplusplus
}
#endif

#endif /* TYPE_ENUM_H */

