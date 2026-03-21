#include <stdio.h>
#include <string.h> // nombreuse fonction lié avec mes chaines de caractère.

int main() {

    int age = 0;
    float gpa = 0.0f;// 'f' à la fin = indique que c'est un float et non un entier
    char note = '\0'; // caractère nul, initialisation vide (bonne pratique)
    char nom[30] = ""; // max 30 caractère

    // scanf entrée de l'utilisateur
    printf("Entrez votre âge: ");
    scanf("%d", &age); // '&' définir à quelle variable on veut adresser

    printf("Entrez votre gpa: ");
    scanf("%f", &gpa);

    printf("Entrez votre note: ");
    scanf(" %c", &note);// l'espace avant %c ignore les caractères blancs (\n, espaces...)

    getchar(); // mange le \n laissé par scanf avant le prochain fgets
    printf("Entrez votre nom complet: ");
    //scanf("%s", &nom); // ne peux pas lire des espaces
    fgets(nom, sizeof(nom), stdin); // file get string
    //    ^^^   ^^^^^^^^^^^  ^^^^^
    //    var   taille max   source (stdin = terminal/clavier)
    nom[strlen(nom) - 1] = '\0';// fgets garde le '\n' à la fin,
    // ^^^  ^^^^^^^^  ^    ^^^
    // var  longueur  -1   remplace le '\n' par nul
    //      totale    recule d'un caractère (le '\n')
    
    printf("%s\n", nom);
    printf("%d\n", age);
    printf("%.2f\n", gpa);
    printf("%c\n", note);
 
    return 0;
}
