#include <stdio.h>


    // pointer = Une variable qui stocke l'adresse mémoire d'une autre variable.
    //           Bénéfice: Aide à éviter de gaspiller de la mémoire en permettant de passer l'adresse d'une grande
    //           structure de données au lieu de copier l'intégralité des données et de les transmettre
void anniversaire(int* age);
int main() {

    int age = 25;
    int *pAge = &age; // * = deference operator / créer un pointeur
    // ou  int* pAge, les 2 marchent

    //printf("%p" , &age); // %p afficher une adresse de pointer -- & retroune l'adresse mémoire de cette variable
    //printf("%p\n", pAge);

    anniversaire(pAge);
    printf("Tu as %d ans!", age);
    return 0;
}

void anniversaire(int* age){
    // pass par déréférence
    (*age)++;
}