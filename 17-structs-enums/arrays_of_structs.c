#include <stdio.h>

    // array of structs = Array un tableau où chaque élement contien un struct {}
    //                    Aide à organiser et regrouper les données connexes

typedef struct{
    char modèle[25];
    int année;
    int prix;
}Voiture;
int main() {

    Voiture voitures[] = {{"Mustang", 2025, 32000},
                          {"Corvette", 2026, 68000},
                          {"Challenger", 2024, 29000}};

    int nombre = sizeof(voitures) / sizeof(voitures[0]);

    for(int i = 0; i < nombre; i++){
       printf("%s %d %d€\n", voitures[i].modèle, voitures[i].année, voitures[i].prix); 
    }
    return 0;
}
