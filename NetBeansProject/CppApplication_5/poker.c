/* 
 * File:   poker.c
 * Author: 
 *
 * Created on 28 novembre 2019, 08:53
 * Modified on 
 * Description : définition des fonctions pour le poker aux dés
 */
#include "poker.h"

void msleep(unsigned int maxTime) {

    struct timespec req;
    struct timespec rem;
    time_t secondes = 0;
    long nanoSecondes = 0;
    if (maxTime >= 1000) {
        do {
            secondes++;
            maxTime -= 1000;
        } while (maxTime >= 1000);
    }
    nanoSecondes = maxTime * 1000000;
    req.tv_sec = secondes;
    req.tv_nsec = nanoSecondes;
    nanosleep(&req, &rem);

}

unsigned int aleatoire(unsigned int maxAlea) {
    struct timeb t;
    float a, b;
    unsigned int nbmilli;
    ftime(&t);
    nbmilli = t.time * 1000 + t.millitm;
    srand(nbmilli);
    a = rand();
    b = (maxAlea * a) / RAND_MAX;
    msleep(250);
    return ( (unsigned int) b);


}

int calculerScore(int des[], int nbDes) {
    unsigned int idem[NBFACES] = {0, 0, 0, 0, 0, 0};
    // compteurs de combinaison
    int paire = 0, brelan = 0, carre = 0, poker = 0;
    int score = 0;
    // faire le compte des faces identiques pour chaque valeur de face
    for (int i = 0; i < nbDes; i++) {
        idem[des[i]]++;
    }
    // pour chaque face de des, compter le nombre d'occurence
    for (int i = 0; i < NBFACES; i++) {
        if (idem[i] == 2) {
            paire++;

        }
        if (idem[i] == 3) {
            brelan++;

        }
        if (idem[i] == 4) {
            carre++;

        }
        if (idem[i] == 5) {
            poker++;

        }
    }
    // application de la pondération pour chaque combinaison pour avoir le score
    score = paire * 10 + brelan * 30 + carre * 60 + poker * 70;



    return score;

}

int testerAge(int age, int ageLimite) {
    int age1;
    int age2;
    int LimiteAge = 18;

    if ((age1 >= LimiteAge) || (age2 >= LimiteAge)) {
        printf("Vous Pouvez jouer\n");
        return -1;

    } else {
        printf("Vous devez être majeur.\n");
        return 0;
    }
}

int demanderMise(int solde){
    
    int miseJoueur;
    int solde1=100;
    
    do{
        printf("Quelle est la mise : ");
        scanf("%d\n",miseJoueur);       
    }
    while(miseJoueur<solde1);
        
  return miseJoueur;  
}

int lancerUnDes(int nbFace){

int des;

printf("Demander une valeur entre 0 et %d: ",NBFACES);
scanf("%d",&des);

return des>NBFACES;
}

void afficherCombinaison(int des[], int nbDes);