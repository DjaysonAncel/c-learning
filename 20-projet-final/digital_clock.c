#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h>
#include <windows.h>

// Les commentaires sont faire par Gemini car la bibliothèque time.h n'a jamais était abordé par Bro Dev :)
// HEURE DIGITIAL

int main() {

    // Variables
    time_t rawtime = 0; // 1. time_t : C'est juste un énorme nombre entier.
    // Il compte le nombre de secondes écoulées depuis le 1er janvier 1970 (l'Epoch Unix).

    // 2. struct tm : C'est une grosse boîte (structure) qui contient des variables
    // comme tm_hour, tm_min, tm_sec. On utilise un pointeur (*pTime) car
    // la fonction localtime va nous donner l'adresse de cette boîte.
    struct tm *pTime = NULL;
    bool isRunning = true;

    printf("HEURE DIGITAL\n");

    while(isRunning){
        // 3. time() : On demande à l'ordi de mettre le nombre de secondes actuel dans rawtime.
        time(&rawtime);

        // 4. localtime() : Cette fonction transforme le gros nombre de secondes
        // en une structure lisible (heures, minutes, secondes) selon ton fuseau horaire.
        // Elle renvoie l'adresse mémoire où elle a rangé ces infos (donc un pointeur).
        pTime = localtime(&rawtime);

        // 5. Affichage :
        // \r : permet de revenir au début de la ligne (pour effacer l'ancienne heure).
        // %02d : affiche le nombre sur 2 chiffres (ex: 05 au lieu de 5).
        // pTime->tm_hour : On utilise "->" car pTime est un pointeur. Ça veut dire :
        // "Va à l'adresse pTime et récupère la variable tm_hour".
        printf("\r%02d:%02d:%02d", pTime->tm_hour, pTime->tm_min, pTime->tm_sec);

        Sleep(1000);
    }
    return 0;
}
