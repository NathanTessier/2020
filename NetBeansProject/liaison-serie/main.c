/* Programme de test de la liaison série via un adaptateur USB série
   Vitesse de transmission 115200 bauds avec ECHO
   Ce programme renvoie le nb de caractères reçus et le message
   tant que le message reçu est différent de bye

    gcc main.c serie.c -o main

*/

#include <stdio.h>
#include <stdlib.h>
#include "serie.h"

int main(int argc, char** argv) {

     char *device = "/dev/tty50";
    int fdSerie;
    char message[1000];
    
    fdSerie = ouvrirPort(device);
    configurerSerie(fdSerie,9600, ECHO);
    
    int nb = recevoirMessage(fdSerie, message, '\r');
    printf("%s", message);
    fermerPort(fdSerie);
    
    return (EXIT_SUCCESS);
}
