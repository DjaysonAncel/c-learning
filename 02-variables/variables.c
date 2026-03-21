#include <stdio.h>
#include <stdbool.h> // Travailler avec les booléens
// Variables sont des conteneurs de données


/*
Différent type de variables:
int    = nombres entiers (4 octets)
float  = nombre décimal simple précision (4 octets)
double = nombre décimal double précision (8 octets)
char   = un seul caractère (1 octet)
char[] = chaîne de caractères (taille variable)
bool   = vrai ou faux (1 octet, nécessite <stdbool.h>)
*/
int main() {

    /*
    Nombre entiers (int)
    int age = 15;
    int année = 2026;
    int quantité = 1;

    printf("Tu as %d ans\n", age); // %d afficher un int
    printf("L'année est %d\n", année);
    printf("Tu as commendé %d x articls\n", quantité);*/

//--------------------------------------------------------------------------------------
    /*
    Nombre Décimaux (float)
    float gpa = 2.5;
    float prix = 19.99;
    float température = -10.1;

    printf("Ton gpa est %f\n", gpa); // %f afficher un float
    printf("Le prix est €%f\n", prix);
    printf("La température est %f°C\n", température);*/
//--------------------------------------------------------------------------------------

    /* Nombre Décimaux Précis (double)
    double pi = 3.14159265358979;
    double e = 2.7182818284590;

    printf("La valeur de pi est %.15lf\n", pi);// %lf afficher double (6 chiffres après la virgule valeur par défauts.) Il faut faire %.[nombre que tu veux]lf pour afficher le nombre de virgule que tu veux.
    printf("La valeur de pi est %.15lf\n", e);*/
//--------------------------------------------------------------------------------------

    /* Caractère (char)
    char grade = 'A'; // pour char guillemet simple
    char symbol = '!';
    char monnaie = '$';

    printf("Ton grade est %c\n", grade); // %c afficher un char
    printf("Ton symbole favori est %c\n", symbol);
    printf("La monnaie est %c\n", monnaie);*/
//--------------------------------------------------------------------------------------

    /* Chaine de caractère (char nom[])
    char nom[] = "Djayson";
    char aliment[] = "pizza";
    char email[] = "fake123@gmail.com";
    
    printf("Bonjour %s\n", nom); // %s afficher une chaîne de caractère
    printf("Ton aliment préféré est la %s\n", aliment);
    printf("Ton email est %s\n", email);*/
//--------------------------------------------------------------------------------------

    bool isOnline = false;// true = 1, false = 0 uniquement 2 valeurs possible
    bool isStudent = true; 
    bool forSale = false;
    printf("%d\n", isOnline); // %d afficher un booléen version numérique
    return 0;
}
