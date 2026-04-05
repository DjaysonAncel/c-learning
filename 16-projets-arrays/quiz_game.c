#include <stdio.h>
#include <ctype.h>
int main() {
    // Tableau et Variable
    char questions[][100] = {"Quelle est la plus grande planète du système solaire?",
                             "Quelle est la planète la plus chaude?",
                             "Quelle planète compte le plus de lunes?",
                             "La Terre est-elle plate?"};
    
    char options[][100] = {"A. Juptier\nB. Saturne\nC. Uranus\nD. Neptune",
                           "A. Mercure\nB. Vénus\nC. Terre\nD. Mars",
                           "A. Terre\nB. Mars\nC. Jupitère\nD. Saturne",
                           "A. Oui\nB. Non\nC. Peut-être\nD. Elle est carrée"};
                           

    char réponseclé[] = {'A', 'B', 'D', 'B'};
    
    int nbquestions = sizeof(questions) / sizeof(questions[0]);

    char devine = '\0';
    int score = 0;

    printf("*** Jeu de quiz ***");
    

    // Fonctionnement du jeu
    for(int i = 0; i < nbquestions; i++){
        printf("\n%s\n", questions[i]);
        printf("\n%s\n", options[i]);
        printf("Saisissez votre choix: ");
        scanf(" %c", &devine);

        devine = toupper(devine); // Permet de transformer les minuscules en majuscule


        // Vérification
        if(devine == réponseclé[i]){
            printf("CORRECTE!\n");
            score++;
        }
        else{
            printf("MAUVAISE REPONSE!");
        }
    }

    // Résultat
    printf("\nVotre score est %d sur %d points", score, nbquestions);

      
    return 0;
}
