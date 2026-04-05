#include <stdio.h>

int main() {


    int scores[5] = {0}; //tableau vide -- [] définir le nombre d'éléments
    // IMPORTANT: Si j'accède et utilise un tableau sans lui attribuer de valeurs
    // Il va déja être rempli de déchets
    // int scores[5]; tableau surement pas vide

    
    for(int i = 0; i < sizeof(scores) / sizeof(scores[0]); i++){
    printf("Entrer un score: ");
    scanf("%d", &scores[i]); // <-- on attribut à l'index noté

    }

    for(int i = 0; i < 5; i++){
        printf("%d ", scores[i]);
    }

    return 0;
}
