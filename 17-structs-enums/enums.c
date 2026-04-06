#include <stdio.h>


    // Enum : abréviation de enumerations
    //        Types de données définis par l'utilisateur qui
    //        consitent en un ensemble de constantes entières nommées
    //        Bénéfice: Remplaces les nombres avec des noms lisible

    /*
    DIMANCHE = 0;
    LUNDI = 1;
    MARDI = 2;
    */
// typedef enum{
//     DIMANCHE = 1, LUNDI = 2, MARDI = 3, MERCREDI = 4, JEUDI = 5, VENDREDI = 6, SAMEDI = 7 // la première constante a une valeur null ensuite on incrémente
// }Jour;

typedef enum{
    SUCCES, ECHEC, ATTENTE
}Status;

void connectStatus(Status status);

int main() {


    /*
    EXEMPLE 1
    Jour ajd = LUNDI;

    if(ajd == DIMANCHE || ajd == SAMEDI){
        printf("C'est le week-end");
    }
    else{
        printf("C'est un jour de semaine");
    }
    */
    
    Status status = ATTENTE;


    connectStatus(status);

    return 0;
}

void connectStatus(Status status){

    switch(status){
        case SUCCES:
            printf("Connexion a été réussie!\n");
            break;
        case ECHEC:
            printf("Nous n'avons pas pu se connecter\n");
            break;
        case ATTENTE:
            printf("Connexion...\n");
            break;
    }
}