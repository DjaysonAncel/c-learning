#include <stdio.h>
// Petit plus de moi même!
#include <string.h>

// tableau (array) = une collection de taille fixe d'éléments de même type.
// (Semblable à une variable, mais peut contenir plusieurs valeurs)  

int main() {

    /*
    int nombre = 10; Variable
    */
    int nombres[] = {10, 20, 30, 40, 50, 60}; // Exemple de tableau
    // Chaque valeur dans un tableau est un élément

    //printf("%d", nombres); // leçon avenir "pointeurs"
    //printf("%d", nombres[5]); // index 0, affiche le premier éléments
    // En language C: on peut dépasser la longueur du tableau contrairement à python par exemple.

    char notes[] = {'A', 'B', 'C', 'D', 'F'};
    // printf("%c", notes[0]);

    

/*----------------------------------------------------------------------------------
    //attribuer une nouvelle valeur à un élément précis.
    nombres[0] = 100;
    nombres[1] = 90;
    nombres[2] = 80;
    nombres[3] = 70;
    nombres[4] = 60;

    printf("%d\n", nombres[0]);
    printf("%d\n", nombres[1]);
    printf("%d\n", nombres[2]);
    printf("%d\n", nombres[3]);
    printf("%d\n", nombres[4]);
----------------------------------------------------------------------------------*/

 


    printf("%d\n", sizeof(nombres)); // int nombres[] = {10, 20, 30, 40, 50, 60}; va afficher 24 qui signifie 24 octets
    printf("%d", sizeof(nombres[0])); // un élément 4 octets

    for(int i = 0; i < sizeof(nombres) / sizeof(nombres[0]); i++){ // taille du tableau divisé par la taille d'un élement 
        printf("%d ", nombres[i]);
    }


/*----------------------------------------------------------------------------------

    char noms[] = "Djayson";
    //printf("%c", noms[0]);
    // affiche un caractère par caractère

    --trouvé par moi même pour afficher un tableau string entier qu'importe la taille

    for(int i = 0; i < strlen(noms); i++){
        printf("%c ", noms[i]);
    }
----------------------------------------------------------------------------------*/
    

    return 0;
}
