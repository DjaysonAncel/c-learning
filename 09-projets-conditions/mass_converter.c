#include <stdio.h>

int main() {

    // Variable
    int choix = 0;
    float livres = 0.0f;
    float kilogrammes = 0.0f;


    printf("Calculateur de Conversion de masses\n");

    // Choix
    printf("1. Les kilogrammes à livres\n");
    printf("2. Les livres à kilogrammes\n");

    // Intéraction avec l'utilisateur
    printf("Entrez votre choix (1 ou 2): ");
    scanf("%d", &choix);

    if(choix == 1){
        // kilogrammes à livres
        printf("Entrez la masse en kilogrammes: "); // ET NON LE POIDS COMME DANS LA VIDEO
        scanf("%f", &kilogrammes);
        livres = kilogrammes * 2.20462;
        printf("%.2f kg est égale à %.2f livres!\n", kilogrammes, livres);
    }
    else if(choix == 2){
        // livres à kilogrammes
        printf("Entrez la masse en livres: "); // ET NON LE POIDS COMME DANS LA VIDEO
        scanf("%f", &livres);
        kilogrammes = livres / 2.20462;
        printf("%.2f livres est égale à %.2f kg!\n", livres, kilogrammes);
    }
    else{
        printf("Choix invalide! S'il vous plait choisissez 1 ou 2!\n");
    }
    return 0;
}
