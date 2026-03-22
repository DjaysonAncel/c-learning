#include <stdio.h>
#include <math.h>
int main() {

    // Variable 
    double radiant = 0.0;
    double aire = 0.0;
    double aireTotale = 0.0;
    double volume = 0.0;
    const double PI = 3.14159; // 'const' faire que la variable ne peux pas se changer

    // Intéraction avec l'utilisateur
    printf("Entrez le radiant: ");
    scanf("%lf", &radiant);

    // Aire d'un cercle
    aire = PI * pow(radiant, 2);
    aireTotale = 4 * PI * pow(radiant, 2);
    volume = (4.0 / 3.0) * PI * pow(radiant, 3);

    printf(" Aire: %.2lf\n", aire);
    printf(" Aire Totale: %.2lf\n", aireTotale);
    printf("Volume: %.2lf\n", volume);
    return 0;
}
