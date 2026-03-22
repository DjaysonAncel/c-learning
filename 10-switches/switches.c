#include <stdio.h>

// Alternatif de if-else 
// PLus efficace avec des valeur entier constant
int main() {

    //int jourDelaSemaine = 0;
    
    //printf("Entrez un jour de la semaine (1-7): ");
    //scanf("%d", &jourDelaSemaine);

        /*switch(jourDelaSemaine){
        case 1: // équivaut à else if(jourDelaSemaine == 1){}
        printf("C'est Lundi");
        break; // Très important!
    case 2:
        printf("C'est Mardi");
        break;
    case 3:
        printf("C'est Mercredi");
        break;
    case 4:
        printf("C'est Jeudi");
        break;
    case 5:
        printf("C'est Vendredi");
        break;
    case 6:
        printf("C'est Samedi");
        break;
    case 7:
        printf("C'est Dimanche");
        break;
    default:
        printf("S'il vous plait uniquement un nombre entre 1 et 7"); // Equivaut à else
    }*/

    char jourDelaSemaine = '\0';

    printf("Entrez un jour de la semaine (L-M-m-J-V-S-D): ");
    scanf("%c", &jourDelaSemaine);

    switch(jourDelaSemaine){ // uniquement la variable, pas de condition (pas de ==, >, < etc.)
        case 'L': // C compare jourDelaSemaine à 'L'
        printf("C'est Lundi");
        break; // Sans break, le code continue dans les case suivants
       // Exemple sans break : case 'L' exécuterait aussi Mardi, Mercredi, etc.
    case 'M':
        printf("C'est Mardi");
        break;
    case 'm':
        printf("C'est Mercredi");
        break;
    case 'J':
        printf("C'est Jeudi");
        break;
    case 'V':
        printf("C'est Vendredi");
        break;
    case 'S':
        printf("C'est Samedi");
        break;
    case 'D':
        printf("C'est Dimanche");
        break;
    default:
        printf("S'il vous plait uniquement une lettre dans cette liste: (L-M-m-J-V-S-D)"); // Equivaut à else
    }
    return 0;
}
