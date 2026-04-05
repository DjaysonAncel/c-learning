#include <stdio.h>


// 2D array = un tableau où chaque élément est un tableau
//           array[][] = {{}, {}, {}};
//           Un tableau bidimensionnel sont excellent si besoin d'une matrice ou grille de données
int main() {

    //int nombres[] = {1, 2, 3}; Un tableau unidimensionnel

/* LEçON
//           taille maximale  de nombres par rangé
    int nombres[][3] = {{1, 2, 3},
                       {4 ,5 ,6},
                       {7 ,8 ,9}}; // Un tableau bidimensionnel
    
    
    /*
    ///////SANS BOUCLE///////
    printf("%d ", nombres[0][0]); //rangé 0; colonne 0
    printf("%d ", nombres[0][1]); // rangé 0; colonne  1
    printf("%d\n", nombres[0][2]); // rangé 0; colonne  2

    printf("%d ", nombres[1][0]); //rangé 1; colonne 0
    printf("%d ", nombres[1][1]); // rangé 1; colonne  1
    printf("%d\n", nombres[1][2]); // rangé 1; colonne  2

    printf("%d ", nombres[2][0]); //rangé 2; colonne 0
    printf("%d ", nombres[2][1]); // rangé 2; colonne  1
    printf("%d\n", nombres[2][2]); // rangé 2; colonne  2
    */
    
    /*
    ///////AVEC BOUCLE//////
    for(int i = 0; i < 3; i++){ // i rangé
        for(int j = 0; j < 3; j++){ // j colonne
            printf("%d ", nombres[i][j]);  
        }
        printf("\n");
    }
*/

    char numpad[][3] = {{'1', '2', '3'},
                        {'4', '5', '6'},
                        {'7', '8', '9'},
                        {'*', '0', '#'}};    

    for(int i = 0; i < 4; i++){ // i rangé
        for(int j = 0; j < 3; j++){ // j colonne
            printf("%c ", numpad[i][j]);  
        }
        printf("\n");
    }
    return 0;
}
