#include <stdio.h>
#include <stdlib.h>  // bibliothèque standard
#include <time.h> // bibliothèque time

/*
Pseudo-aléatoire = Ils semblent aléatoires mais sont déterminés 
                   par une formule mathématique qui utilise 
                   une valeur de départ (seed) ou générer 
                   une séquence de nombres prévisible.
                   Technique Avancé : Mersenne Twister ou /dev/random
*/

int main() {

    //printf("%d", rand()); //chaque fois ça dit 41 
// -----------nombre "aléatoire" basé sur l'heure--------------------------
    //concept de rand()
    //srand(time(NULL)); //srand() définir la graine; time() = heure actuelle
    // NULL = 0

    //printf("%d", rand());
    //printf("%d", RAND_MAX) // Valeur maximale que rand() peut générer (dépend de l'ordinateur).

// -----------nombre aléatoire--------------------------
    srand(time(NULL));

    int min = 10;
    int max = 12;

    int randomNum1 = (rand() % (max - min + 1)) + min; // 1 ou 2
    int randomNum2 = (rand() % (max - min + 1)) + min;
    int randomNum3 = (rand() % (max - min + 1)) + min;
    printf("%d %d %d", randomNum1, randomNum2,randomNum3);
    return 0;
}
