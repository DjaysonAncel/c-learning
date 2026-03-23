#include <stdio.h>
#include <math.h>

int main(){
    /// Point du triangle
    float A = 0.0f;
    float B = 0.0f;
    float C = 0.0f;

    // Intéraction
    printf("Entrez le côté A: ");
    scanf("%f", &A);
    printf("Entrez le côté B: ");
    scanf("%f", &B);
    printf("Entrez le côté C (hypoténuse): ");
    scanf("%f", &C);

    // calcule triangle rectangle pythagore
    float M = pow(A, 2);
    float N = pow(B, 2);
    float X = M + N;
    float Y = pow(C, 2);

    // Vérification
    if (X == Y){
        printf("Truee");
    }
    else{
        printf("False");
    }


    return 0;
}