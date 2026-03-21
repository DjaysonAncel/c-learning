#include <stdio.h>
#include <string.h>

int main() {

    // SHOPPING CART PROGRAMME

    // Variables
    char item[50] = "";
    float prix = 0.0f;
    int quantité = 0;
    char monnaie = '$';
    float total = 0.0f;

    // Intéraction avec l'utilisateur
    printf("Quel article aimerais-tu acheter?: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    printf("Quel est le prix pour chaque article?: ");
    scanf("%f", &prix);

    printf("Combien voudrais tu?: ");
    scanf("%d", &quantité);

    total = prix * quantité;

    printf("\nVous avez acheté(e) %d %s\n", quantité, item);
    printf("Le total est de: %c%.2f", monnaie, total);
    return 0;
}
