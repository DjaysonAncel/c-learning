#include <stdio.h>
#include <math.h>
int main() {

    // Variable

    double capital = 0.0;
    double taux = 0.0;
    int années = 0;
    int foisComposé = 0;
    double total = 0.0;

    //Intéraction avec l'utilisateur

    printf("/////CALCULATEUR D'INTÉRÊTS COMPOSÉS/////\n");

    printf("Entrez le capital de départ (P): ");
    scanf("%lf", &capital);

    printf("Entrez le taux d'intérêt % (r): ");
    scanf("%lf", &taux);

    taux = taux/100;

    printf("Entrez le nombre d'années (t): ");
    scanf("%d", &années);

    printf("Entrez le nombre de fois composé par an (n): ");
    scanf("%d", &foisComposé);

    // Résultat
    total = capital * pow(1 + taux / foisComposé, foisComposé * années);
    printf("Après %d ans, le total sera de €%.2lf", années, total);

    return 0;
}
