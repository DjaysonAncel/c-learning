#include <stdio.h>
#include <string.h>

int main() {


    /*
    char fruits[][10] = {"Pomme",
                         "Banane",
                         "Orange"}; // tableau 2D pour stocker plusieur string                   
    int taille = sizeof(fruits) / sizeof(fruits[0]); // calculer la taille d'un tableau

    fruits[0][0] = 'e';
    fruits[0][4] = 'P';

    fruits[1][0] = 'e';
    fruits[1][5] = 'B';

    fruits[2][0] = 'e';
    fruits[2][5] = 'O';

    for(int i = 0;i < taille; i++){ 
        printf("%s\n", fruits[i]); // affiche chaque string
    }
    */
    

    // EXERCICE

    char noms[3][25] = {0}; // Peut contenir 3 noms et chaque nom à une taille maximale de 25 caractères
    int taille = sizeof(noms) / sizeof(noms[0]);
    
    for(int i = 0; i < taille; i++){
        printf("Entrez un nom: ");
        fgets(noms[i], sizeof(noms), stdin);
        noms[i][strlen(noms[i]) - 1] = '\0';
    }

    for(int i = 0; i < taille; i++){
        printf("%s\n", noms[i]);
    }

    return 0;
}
