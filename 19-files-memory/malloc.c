#include <stdio.h>
#include <stdlib.h> // Indispensable pour utiliser malloc et free

// Commentaire aidé par Gemini car j'ai eu du mal à comprendre
    // malloc()
    // C'est une fonction qui "réserve" un bloc de mémoire précis dans l'ordinateur 
    // pendant que le programme tourne. On lui dit : "Prépare-moi de la place pour X éléments".
int main() {

    int nombre = 0;
    printf("Entrez le nombre de notes: ");
    scanf("%d", &nombre);

    // Ici : On réserve (nombre de notes * taille d'un caractère).
    char *grades = malloc(nombre * sizeof(char));

    // VÉRIFICATION : Si l'ordinateur n'a plus de place (RAM saturée), grades sera "NULL".
    if(grades == NULL){
        printf("L'allocation mémoire a échoué!\n");
        return 1;
    }

    // UTILISATION :On remplit les cases qu'on vient de louer.
    for(int i = 0; i < nombre; i++){
        printf("Enter grade #%d: ", i + 1);
        scanf(" %c", &grades[i]);
    }

    printf("Vos notes sont :");
    for(int i = 0; i < nombre; i++){
        printf(" %c", grades[i]);
    }

    // LIBÉRATION : Très important ! On rend la mémoire à l'ordinateur.
    // Si on ne le fait pas, la mémoire reste bloquée pour rien (c'est une "fuite").
    free(grades); 
    grades = NULL; // On remet le pointeur à zéro pour éviter qu'il pointe vers du vide.
    return 0;
}
