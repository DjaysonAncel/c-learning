#include <stdio.h>
// #include <stdbool.h> // fonction booléen
#include <string.h>

// Faire des conditions
int main() {

    ////EXEMPLE 1 — Conditions sur les nombres////
    // int age = 0;
    // printf("Entrez votre age: ");
    // scanf("%d", &age);


    // if(age >= 65){ // si - condition entre parenthèses () obligatoire en C (contrairement à Python)
    //     printf("Vous êtes une personne âgée.");
    // }
    // else if(age >= 18){
    //     printf("Tu es un adulte.");
    // }
    // else if(age < 0){ // sinon si
    //     printf("Tu n'es pas encore né(e)");
    // }
    // else if (age == 0){
    //     printf("Tu es un nouveau-né");
    // }
    // else{ // sinon
    //     printf("Tu es un enfant");
    // }

    ////EXEMPLE 2 — Condition booléenne////
    // bool isStudent = false;

    // if(isStudent){
    //     printf("Tu es un étudiant.");
    // }
    // else{
    //     printf("Tu n'es pas un étudiants.");
    // }

    ////EXEMPLE 3 — Condition sur une chaîne////
    char nom[50] = "";

    printf("Entrez votre prénom: ");
    fgets(nom, sizeof(nom), stdin);
    nom[strlen(nom) - 1] = '\0'; // supprimer le \n de fgets

    if(strlen(nom) == 0){ // RAPPEL: strlen() taille de la chaîne de caractère.
        printf("Tu n'as pas entré ton prénom.");
    }
    else{
        printf("Bonjour, %s", nom);
    }

    return 0;
}
