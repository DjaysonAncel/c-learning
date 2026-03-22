#include <stdio.h>

int main() {

    // Variable
    char choix = '\0'; // Valeur nul
    float fahrenheit = 0.0f;
    float celsius = 0.0f;

    printf("Programme de conversion de température.\n");
    // Choix
    printf("C. Celsius à Fahrenheit\n");
    printf("F. Fahrenheit à Celsius\n");
    printf("La température est en Celsius (C) ou Fahrenheit(F)?: \n");
    scanf(" %c", &choix);

    if(choix == 'C'){
        // C à F
        printf("Entrez la température en Celsius: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9 / 5) + 32; // C à F
        printf("%.1f Celsius est égale à %.1f Fahrenheit\n", celsius, fahrenheit);
    }
    else if(choix == 'F'){
        // F à C
        printf("Entrez la température en Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5 / 9; // F à C
        printf("%.1f Fahrenheit est égale à %.1f Celsius\n", fahrenheit, celsius);
    }
    else{
        printf("Choix invalide! S'il vous plait choisissez C ou F\n");
    }


    return 0;
}
