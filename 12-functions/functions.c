#include <stdio.h>
#include <string.h>

// function = bloc de code réutilisable qui peut être "appelé" (invoqué)
//            on peut lui envoyer des arguments pour qu'elle les utilise

void joyeuxAnniversaire(char nom[], int age){
// ^    ^                ^^^^^^^^^^^^^^^^^^^^^
// |    |                paramètres = variables reçues lors de l'appel
// |    nom de la fonction
// void = ne retourne rien (contrairement à int, float, etc.)
    printf("\n Joyeuse Anniversaire!");
    printf("\n Joyeuse Anniversaire!");
    printf("\n Joyeuse Anniversaire %s!", nom);
    printf("\n Joyeuse Anniversaire!");
    printf("\n Tu as %d ans!\n", age);
}

int main() {

    // Différence: Sans fonction & Avec fonction

    // Sans fonction
    /*printf("\n Joyeuse Anniversaire!");
    printf("\n Joyeuse Anniversaire!");
    printf("\n Joyeuse Anniversaire [nom]!");
    printf("\n Joyeuse Anniversaire!");
    printf("\n Tu as [age] ans!\n");
    
    printf("\n Joyeuse Anniversaire!");
    printf("\n Joyeuse Anniversaire!");
    printf("\n Joyeuse Anniversaire [nom]!");
    printf("\n Joyeuse Anniversaire!");
    printf("\n Tu as [age] ans!\n");
    
    printf("\n Joyeuse Anniversaire!");
    printf("\n Joyeuse Anniversaire!");
    printf("\n Joyeuse Anniversaire [nom]!");
    printf("\n Joyeuse Anniversaire!");
    printf("\n Tu as [age] ans!\n");*/


    // Avec Fonction

    char nom[50] = "";
    int age = 0;

    printf("Entrez votre prénom: ");
    fgets(nom, sizeof(nom), stdin);
    nom[strlen(nom) - 1] = '\0';

    printf("Entrez votre age: ");
    scanf("%d", &age);

    joyeuxAnniversaire(nom, age); //pas oublier les ()
    joyeuxAnniversaire(nom, age);
    joyeuxAnniversaire(nom, age);
    return 0;
}
