#include <stdio.h>
#include <stdbool.h>

int getMax(int x, int y){
//^^
// type de retour : la fonction renverra un int
    if(x >= y){
        return x;
//      ^^^^^^
//      stoppe la fonction et renvoie x à l'appelant
    }
    else{
        return y;
    }
}

// bool ageCheck(int age){
//     if(age >= 18){
//         return true;
//     }
//     else{
//         return false;
//     }
    
// }

// return = valeur que la fonction calcule et renvoie à l'appelant

// double cube(double num){
//     return num * num * num;
// }

// double carré(double num){
//     return num * num;
// }
int main() {

    // double x = cube(2.1);
    // double y = cube(3.2);
    // double z = cube(4.3);

    // printf("%lf\n", x);
    // printf("%lf\n", y);
    // printf("%lf\n", z);
    
    // int age = 12;
    // if(ageCheck(age)){
    //     printf("Vous pouvez vous inscrire");
    // }
    // else{
    // printf("Tu dois avoir +18 pour vous inscrire");
    // return 0;
    // }

    int max = getMax(90,4);

    printf("%d", max);

}
