#include <stdio.h>
#include <stdbool.h>
    // ternary operator ? = raccourci pour utiliser des instructions if else

    // (condition) ? retuen valeur_if_true : return valeur_if_false
int main() {


/*
    1er EXEMPLE

    int x = 7;
    int y = 6;
    int max = (x > y) ? x : y;
    printf("%d", max);

    2eme EXEMPLE

        bool isOnline = false;

    printf("%s", (isOnline) ? "En ligne": "Hors ligne");


    3eme EXEMPLE
    int nombre = 9;

    printf("%d est %s", nombre, (nombre % 2 == 0) ? "normal" : "impair");

    4eme EXEMPLE
    int age = 12;

    printf("%s", (age > 18) ? "Adulte" : "Enfant");


*/

    int heures = 12;
    int minutes = 5;

    // Hors cours: pointeur
    char *meridien = (heures < 12) ? "AM" : "PM"; // pas encore expliquer la fonction d'un pointeur

    printf("%02d:%02d %s", heures, minutes, meridien);
   
    return 0;
}
