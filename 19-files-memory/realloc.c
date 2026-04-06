#include <stdio.h>
#include <stdlib.h>

    // realloc() = Reallocation.
    //             Redimensionne la mémoire précidemment allouée
    //             realloc(pointeur, octets)

int main() {

    int nombre = 0;
    printf("Entre le nombre de prix: ");
    scanf("%d", &nombre);

    // 1. ALLOCATION INITIALE : On réserve la place pour les premiers prix.
    float *prix = malloc(nombre * sizeof(float));

    if(prix == NULL){
        printf("L'allocation mémoire a échoué!\n");
        return 1;
    }

    for(int i = 0; i < nombre; i++){
        printf("Entrer le prix #%d: ", i + 1);
        scanf("%f", &prix[i]);
    }
    // --- LE MOMENT REALLOC ---
    int newNombre = 0;
    printf("Entrez un nouveau nombre de prix: ");
    scanf("%d", &newNombre);

    // DÉFINITION DE REALLOC : 
    // Ça sert à agrandir (ou rétrécir) un bloc de mémoire déjà alloué sans perdre tes données.
    // L'ordi essaie d'agrandir ton bloc actuel, ou il t'en trouve un nouveau plus grand ailleurs 
    // et déménage tes anciennes données automatiquement.

    // On utilise un pointeur "temp" par sécurité (si realloc échoue, on ne perd pas l'ancien "prix").
    float *temp = realloc(prix, newNombre * sizeof(float));

    if(temp == NULL){
        printf("Peut pas réalloqué échoué!\n");
    }
    else{
        prix = temp; // On met à jour notre adresse principale.
        temp = NULL; // Sécurité : on nettoie le pointeur temporaire.

        // On ne demande que les nouveaux prix (ceux qui n'étaient pas là avant).
        for(int i = nombre; i <  newNombre; i++){
        printf("Entrer le prix #%d: ", i + 1);
        scanf("%f", &prix[i]);
        }
        // On affiche tout le nouveau tableau.
        for(int i = 0; i < newNombre; i++){
        printf("%.2f€ ", prix[i]);
        }
    }



    free(prix);
    prix = NULL;

    return 0;
}
