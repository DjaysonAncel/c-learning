#include <stdio.h>
//BANQUE

// FONCTION PROTOTYPE
void checkSolde(float solde);
float depot();
float retire(float solde);

int main() {


    int choix = 0;
    float solde = 0.0f;

    printf("*** BIEVNEUE A LA BANQUE ***");

    do{
        printf("\nSélectionnez une option:\n");
        printf("\n1. Checker votre solde");
        printf("\n2. Déposer de l'argent ");
        printf("\n3. Retirer de l'argent ");
        printf("\n4. Sortie \n");
        printf("\nEntrez votre choix: ");
        scanf("%d", &choix);

        switch(choix){
            case 1:
                checkSolde(solde);
                break;
            case 2:
                solde += depot();
                break;
            case 3:
                solde -= retire(solde);
                break;
            case 4:
                printf("\nMerci d'avoir utilisé la banque!");
                break;
            default:
                printf("\nChoix invalide! Veuillez sélectionner 1 - 4\n");
        }

    }while(choix != 4);

}

void checkSolde(float solde){
    printf("\nTon solde actuel est de: %.2f€", solde);
}
float depot(){

    float montant = 0.0f;
    printf("\n Entrer le montant à déposer: €");
    scanf("%f", &montant);

    if(montant < 0){
        printf("Montant Invalide\n");
        return 0.0f;
    }
    else{
        printf("Déposée avec succès %.2f€\n", montant);
        return montant;
    }

    
}
float retire(float solde){

    float montant = 0.0f;

    printf("\nEntrez le montant à retirer: €");
    scanf("%f", &montant);

    if(montant < 0){
        printf("Montant Invalide!");
        return 0.0f;
    }
    else if(montant > solde){
        printf("Fonds insuffisants! Votre solde est %.2f€\n", solde);
        return 0.0f;
    }
    else{
        printf("Retirer avec succès %.2f€\n", montant);
        return montant;
    }

    return 0.0f;
}
