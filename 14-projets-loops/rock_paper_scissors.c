#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Fonction prototype
int getChoixOrdinateur();// Choix entre 1 et 3
int getChoixUtilisateur(); // Choix entre 1 et 3
void checkGagnant(int choixUser, int choixOrdi); // Pas de type 

// PIERRE FEUILLE CISEAUX
int main() {


    // Generation du nombre aléatoire
    srand(time(NULL));

    // Fonctionnement
    printf("*** PIERRE FEUILLE CISEAUX ***\n");

    int choixUser = getChoixUtilisateur();
    int choixOrdi = getChoixOrdinateur();

    switch(choixUser){
        case 1:
            printf("TU AS CHOISI LA PIERRE!\n");
            break; // TRES IMPORTANT (faillit OUBLIER)
        case 2:
            printf("TU AS CHOISI LA FEUILLE!\n");
            break;
        case 3:
            printf("TU AS CHOISI LES CISEAUX!\n");
            break;
    }

    switch(choixOrdi){
        case 1:
            printf("L'ORDINATEUR A CHOISI LA PIERRE!\n");
            break; // TRES IMPORTANT (faillit OUBLIER)
        case 2:
            printf("L'ORDINATEUR A CHOISI LA FEUILLE!\n");
            break;
        case 3:
            printf("L'ORDINATEUR A CHOISI LES CISEAUX!\n");
            break;
    }

    checkGagnant(choixUser, choixOrdi);
    return 0;
}

//Fonction 
int getChoixOrdinateur(){
    return (rand() % 3) + 1; // Entre 1 et 3
}
int getChoixUtilisateur(){

    int choix = 0;


    // CHOIX DE L'UTILISATEUR
    do{
        printf("Choississez une option\n");
        printf("1. PIERRE\n2. FEUILLE\n3. CISEAUX\n");
        printf("Entrez votre choix: ");
        scanf("%d", &choix);

    }while(choix < 1 || choix > 3); // RAPPEL: || = ou
    return choix;
}
void checkGagnant(int choixUser, int choixOrdi){
    if(choixUser == choixOrdi){
        printf("EGALITE!");
    }
    else if((choixUser == 1 && choixOrdi == 3) ||
            (choixUser == 2 && choixOrdi == 1) ||
            (choixUser == 3 && choixOrdi == 2)){ // Plus compact et efficace!
        printf("TU AS GAGNE!!!");
    }
    else{
        printf("TU AS PERDU!!!");
    }
}