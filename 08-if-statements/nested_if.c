#include <stdio.h>
#include <stdbool.h>

int main() {

    float prix = 10.00;
    bool isStudent = true; // 10% de réduction
    bool isSenior = true; //20% de réduction

    // étudiant = 9€
    // senior = 8€
    // étudiant + senior = 7€

    if(isStudent){
        if(isSenior){ // if imbriqué 
            printf("Vous bénéficiez d'une réduction étudiante de 10%%\n");
            printf("Vous bénéficiez d'une réduction sénior de 20%%\n");
            prix *= 0.7;
        }
        else{
            printf("Vous bénéficiez d'une réduction étudiante de 10%%\n");
            prix *= 0.9;
        }

    }
    else if(isSenior){
        printf("Vous bénéficiez d'une réduction sénior de 20%%\n");
        prix *= 0.8;
    }

    printf("Le prix d'un billet est de: %.2f€\n", prix);
    return 0;
}
