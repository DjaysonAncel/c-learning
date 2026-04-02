#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// while loop = Ybe boucle WHILE continueraa un certain code tant que
// la condition de la boucle reste valable.
// il y a 2 versions: While loop et Do While loop

int main() {

//     while(1 == 1){ // Attention ! boucle infinie déconseiller
// //        ^^^^^^ Condition
//         printf("AU SECOURS JE SUIS BLOQUE DANS UNE BOUCLE");

//     }

    int nombre = 0;

/*
        WHILE LOOP
     On vérifie d'abord la condition et on entre dans la boucle 
     uniquement si c'est vrai.

    while(nombre <= 0){
        printf("Entrez un nombre supérieur à zéro: ");
        scanf("%d", &nombre);
    }

*/

/*
        DO WHILE LOOP
      On exécute une fois le code puis on vérifie la condition à la fin
    do{
        printf("Entrez un nombre supérieur à zéro: ");
        scanf("%d", &nombre);
    }while(nombre <= 0);
*/
    // EXEMPLE
    // char nom[50] = "";

    // printf("Entrez votre prénom: ");
    // fgets(nom, sizeof(nom), stdin);
    // nom[strlen(nom) - 1] = '\0';

    // while(strlen(nom) == 0){
    //     printf("Le nom ne peut pas être vide! Veuillez entrer votre nom: ");
    //     fgets(nom, sizeof(nom), stdin);
    //     nom[strlen(nom) - 1] = '\0';
    // }
    
    // printf("Bonjour %s!\n", nom);

    bool isRunning = true;
    char réponse = '\0';

    do{
        printf("Tu joues à un jeu\n");
        printf("Voulez-vous continuer? (O = oui, N = non): ");
        scanf(" %c", &réponse);

        if(réponse != 'Y' && réponse != 'y'){
            isRunning = false;
        }
    }while(isRunning);
    
    printf("Tu sort du jeu.");

    return 0;
}
