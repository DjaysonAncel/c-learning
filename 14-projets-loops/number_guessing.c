#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    // Création de la génération de nombre aléatoire//

    srand(time(NULL));

    int guess = 0; // nb à devinez
    int essais = 0; // nb d'essaies
    int min = 1;
    int max = 100;

    int reponse = rand() % (max - min + 1) + min; // formule du nombre aléatoire

    printf("*** JEU DE DEVINETTE ***\n"); // Titre

    //Commencement du jeu
    do{
        printf("Devinez un nombre entre %d - %d: ", min, max);
        scanf("%d", &guess);
        essais++;

        if(guess < reponse){ 
            printf("TROP BAS!\n");
        
        }
        else if(guess > reponse){
            printf("TROP HAUT!\n");
        }
        else{
            printf("CORRECT!\n");
        }
    }while(guess != reponse);

    printf("La réponse est %d\n", reponse);
    printf("ça t'a pris %d tentives", essais);

    return 0;
}
