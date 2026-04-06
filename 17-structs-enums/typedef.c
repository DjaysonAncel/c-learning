#include <stdio.h>

    // typedef = mot-clé réservé -- donne à un type de données existant un "surnom"
    //           aide à simplifier les types complexes et améliore la lisibilité du code

    //           typedef existing_type nouveau_nom;

typedef int Nombre;
typedef char String[50]; // utiliser un pointeur: pas besoin de préciser une taille : typedef char* String
typedef char Initiales[3];
int main() {

    // Nombre x = 3;
    // Nombre y = 4;
    // Nombre z = x + y;

    // printf("%d", z);

    // String nom = "Djayson ANCEL";

    Initiales utilisateur1 = "DA";
    Initiales utilisateur2 = "SS";
    Initiales utilisateur3 = "PS";
    Initiales utilisateur4 = "ST";

    printf("%s\n", utilisateur1);
    printf("%s\n", utilisateur2);
    printf("%s\n", utilisateur3);
    printf("%s\n", utilisateur4);
    return 0;
}
