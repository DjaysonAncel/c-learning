#include <stdio.h>
#include <stdbool.h>

// prototype = informe le compilateur du nom, type de retour et paramètres d'une fonction
//             avant sa définition réelle — permet de l'utiliser avant qu'elle soit écrite
//             améliore la lisibilité et évite les erreurs 

void bonjour(char nom[], int age); // prototype — déclaré avant main() pour que le compilateur connaisse la fonction
bool ageCheck(int age);
/*
--- Sans prototype, les fonctions doivent être définies AVANT main()
void bonjour(char nom[], int age){
    printf("Bonjour %s\n", nom);
    printf("Tu as %d\n ans", age);
}
 */



int main() {
    bonjour("Bob", 15);

    if(ageCheck(30)){
        printf("Tu es assez agée pour travailler au Krusty Krab");
    }
    else{
        printf("Tu dois avoir +16 ans pour travailler au Krusty Krab");
    }
    return 0;
}


// --- Grâce aux prototypes, les définitions peuvent être placées APRÈS main()
//     sans prototype = le compilateur ne reconnaîtrait pas la fonction
void bonjour(char nom[], int age){
    printf("Bonjour %s\n", nom);
    printf("Tu as %d ans\n", age);
}

bool ageCheck(int age){
    return age >= 16; 
/*
------------MEME EQUIVALENCE------------
    if(age >= 16){
        return true
    }
    else{
    return false;
    }
*/
}