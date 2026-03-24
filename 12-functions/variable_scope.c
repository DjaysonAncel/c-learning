#include <stdio.h>

int result = 0;
//  ^^^^^^   ^
//  |        |
//  |        valeur initiale
//  variable GLOBALE : accessible dans toutes les fonctions
//  ⚠ à éviter en C : difficile à débogger, n'importe quelle
//  fonction peut la modifier sans qu'on s'en rende compte

// Variable Scope : zone où une variable est reconnue et accessible
// Deux variables peuvent avoir le même nom si elles sont dans des scopes différents

int soustraire(int x, int y){
    int result = x - y; // result local à soustraire()
    return result;
}

int add(int x, int y){
    int result = x + y; // result local à add()
//      ^^^^^^
//      même nom que dans soustraire() et main()
//      mais scope différent → pas de conflit
    return result;
}

int main() {
    int x = 5;
    int y = 6;

    int result = soustraire(x, y);
//      ^^^^^^
//      même nom que dans les fonctions du dessus
//      mais local à main() → scope différent, pas de conflit

    // int result = 1; ← interdit ici : même nom, même scope

    printf("%d", result);

    return 0;
}