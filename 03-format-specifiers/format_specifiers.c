#include <stdio.h>

// Format specifier = Symboles spéciaux commençant par %,
//                   suivis d'un caractère qui indique le type de donnée
//                   et des modificateurs optionnels (largeur, précision, flags).
//                   Ils contrôlent comment une donnée est affichée ou interprétée.

int main() {

/* "Sans modificateur"
    int age = 25;
    float prix = 19.99;
    double pi = 3.1415926535;
    char monnaie = '$';
    char nom[] = "Djayson";

    printf("%d\n", age);
    printf("%f\n", prix);
    printf("%lf\n", pi);
    printf("%c", monnaie);
    printf("%s", nom);
*/

//-------------------------------------Largeur-------------------------------------------
    /*int num1 = 1;
    int num2 = 10;
    int num3 = 100;
    int num4 = -100;

    printf("%4d\n", num1); // Précise le nombre de caractère min qu'on veut imprimer
    printf("%-4d\n", num2); // - pour l'inverse
    printf("%04d\n", num3); // 0 au lieu d'avoir des espaces c'est des 0
    printf("%+d\n", num4); // montrer si c'est positif ou pas*/
    
//-------------------------------------Précision-------------------------------------------
    /*float prix1 = 19.99;
    float prix2 = 1.50;
    float prix3 = -100.00;

    printf("%.2f\n", prix1); // Rajoute le nombre de chiffre à afficher après la virugule.
    printf("%.2f\n", prix2);
    printf("%.2f\n", prix3);*/
//-------------------------------------Largeur + Précision + Flags-------------------------------------------
    float prix1 = 19.99;
    float prix2 = 1.50;
    float prix3 = -100.00;

    printf("%+7.2f\n", prix1); // largeur avanc le .
    printf("%+7.2f\n", prix2);
    printf("%+7.2f\n", prix3);
    return 0;

}
