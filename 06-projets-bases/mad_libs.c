#include <stdio.h>
#include <string.h>

int main() {
    // MAD LIBS GAME

    // Variable
    char nom[50] = "";
    char verbe[50] = "";
    char adj1[50] = "";
    char adj2[50] = "";
    char adj3[50] = "";

    // intéraction avec l'utilisateur
    printf("Choisis un adjectif (description): ");
    fgets(adj1, sizeof(adj1), stdin);
    adj1[strlen(adj1) - 1] = '\0';

    printf("Choisis nom (animal ou personne): ");
    fgets(nom, sizeof(nom), stdin);
    nom[strlen(nom) - 1] = '\0';

    printf("Choisis un adjectif (description): ");
    fgets(adj2, sizeof(adj2), stdin);
    adj2[strlen(adj2) - 1] = '\0';

    printf("Choisis un verbe (qui se termine par -ant): ");
    fgets(verbe, sizeof(verbe), stdin);
    verbe[strlen(verbe) - 1] = '\0';

    printf("Choisis un adjectif (description): ");
    fgets(adj3, sizeof(adj3), stdin);
    adj3[strlen(adj3) - 1] = '\0';

// Message
    printf("\nAujourd'hui je suis allé(e) dans un %s zoo.\n", adj1);
    printf("Dans une exposition, j'ai vu un(e) %s.\n", nom);
    printf("%s était %s et %s!\n", nom, adj2, verbe);
    printf("J'étais %s!\n", adj3);

    return 0;
}
