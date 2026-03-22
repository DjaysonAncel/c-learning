#include <stdio.h>

int main() {

    // Variable
    char operateur = '\0';
    double nom1 = 0.0;
    double nom2 = 0.0;
    double résultat = 0.0;

    // Intéraction avec l'utilisateur

    printf("Entrez le premier nombre: ");
    scanf("%lf", &nom1);

    printf("Entrez l'opérateur (+ - * /): ");
    scanf(" %c", &operateur); // effacer \n de l'input (buffer)
 
    printf("Entrez le deuxieme nombre: ");
    scanf("%lf", &nom2);

    // Formule selon le choix de l'utilisateur
    switch(operateur){
    case '+':
        résultat = nom1 + nom2;
        break;
    case '-':
        résultat = nom1 - nom2;
        break;
    case '*':
        résultat = nom1 * nom2;
        break;
    case '/':
        if(nom2 == 0){
            printf("Tu ne peux pas diviser par 0!!\n");
        }
        else{
            résultat = nom1 / nom2;
        }
        break;
    default:
        printf("Veuillez choisir un opérateur correcte! (+ - * /)");
    }
    printf("Le résultat est: %.4lf", résultat);

    return 0;
}
