#include <stdio.h>

int main() {

    // Il ne faut pas faire une répétion de code!
    //for(int i = 1; i < 10; i++){
    //     printf("%d ", i);
    // }
    // printf("\n");

    // for(int i = 1; i < 10; i++){
    //     printf("%d ", i);
    // }
    // printf("\n");
    // for(int i = 1; i < 10; i++){
    //     printf("%d ", i);
    // }
    // printf("\n");

    // // Bonne méthode
    // for(int i = 1; i < 4; i++){
    //     for(int j = 1; j < 10; j++){ // j convention de dénonciation quand il y a une boucle dans un autre.
    //      printf("%d ", j);
    // }
    // printf("\n");
    // }

    

    // table de multiplication!
    // for(int i = 1; i <= 10; i++){
    //     for(int j = 1; j <= 10; j++){
    //         printf("%3d", i * j);
    //     }
    //     printf("\n");
    // }

    int lignes = 0;
    int colonnes = 0;
    char symbol = '\0';

    printf("Entrez le nombre de lignes: ");
    scanf("%d", &lignes);

    printf("Entrez le nombre de lignes de colonne: ");
    scanf("%d", &colonnes);

    printf("Entrez le symbole à utiliser: ");
    scanf(" %c", &symbol);

    for (int i = 0; i < lignes; i++){
        for (int i = 0; i < colonnes; i++){
            printf("%c", symbol);
        }
        printf("\n");
    }

    return 0;
}
