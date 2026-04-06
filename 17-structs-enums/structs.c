#include <stdio.h>
#include <stdbool.h>
#include <string.h>

    // struct = Un contenant personnalisé qui contient plusieurs informations connexes  
    //          Similaires aux objets dans d'autres languages

typedef struct{
    char nom[50];
    int age;
    float gpa;
    bool isPleinTemps;
}Etudiant;

void printfEtudiant(Etudiant etudiant);

int main() {

    Etudiant etudiant1 = {"Bob l'éponge" , 30, 2.5, true};
    Etudiant etudiant2 = {"Patrick" , 36, 1.0, false};
    Etudiant etudiant3 = {"Carlo" , 48, 3.2, false};
    Etudiant etudiant4 = {0};

    strcpy(etudiant4.nom, "Sandy"); // attribuer les valeur dans struct pour les string
    etudiant4.age = 27;
    etudiant4.gpa = 4.0;
    etudiant4.isPleinTemps = true;

    printfEtudiant(etudiant1);
    printfEtudiant(etudiant2);
    printfEtudiant(etudiant3);
    printfEtudiant(etudiant4);

    return 0;
}

void printfEtudiant(Etudiant etudiant){
    printf("Nom :%s\n", etudiant.nom); // . pour acceder aux variables aux seins de struct
    printf("Age: %d\n", etudiant.age);
    printf("GPA: %.2f\n", etudiant.gpa);   
    printf("Plein-Temps: %s\n", (etudiant.isPleinTemps) ? "Oui" : "Non");
    printf("\n");
    //printf("%d\n", etudiant1.isPleinTemps); // 1 = true; 0 = false
}