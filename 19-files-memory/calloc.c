#include <stdio.h>
#include <stdlib.h>

    /* MALLOC (Mémoire Allocation) :
    - Il te donne une zone mémoire "dans l'état". 
    - S'il y avait des vieux chiffres bizarres avant (des résidus d'autres programmes), 
      ils seront encore là.(déchets).
    - C'est rapide car l'ordi ne passe pas un coup de balai.
    
    int *scores = malloc(nombre * sizeof(int)); 
    */


    // calloc() = allocation contiguë
    // DÉFINITION : Réserve la mémoire ET met TOUT à zéro immédiatement.
    // C'est comme louer un appart mais l'agence fait le ménage avant que tu n'arrives.
    // Syntaxe : calloc(combien d'éléments, taille de chaque élément)
    //            malloc() est plus rapide, mais calloc() entraîne moins de bugs
    //            calloc(#, size)
    //            malloc(octets)


int main() {

    int nombre = 0;
    printf(" Entrez le nombres de joueurs: ");
    scanf("%d", &nombre);

    /*
    int *scores = malloc(nombre * sizeof(int));

    if(scores == NULL){
        printf("L'allocation mémoire a échoué!\n");
        return 1;
    }

    for(int i = 0; i < nombre; i++){
        printf("%d ", scores[i]); // affiche 2097268 5439574 4390944 6553711 6029413 6881378 3866734 3801155 5570652 6619251 
    }

    */

    int *scores = calloc(nombre, sizeof(int));

    if(scores == NULL){
        printf("L'allocation mémoire a échoué!\n");
        return 1;
    }

    //  On remplit nos cases propres.
    for(int i = 0; i < nombre; i++){
        printf("Entrez un score n°%d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    for(int i = 0; i < nombre; i++){
        printf("%d ", scores[i]);
    }

    free(scores);
    scores = NULL;
    return 0;
}
