#include <stdio.h>
#include <stdbool.h>

/*
--Logical Operators--
Utiliser pour combiner ou modifier des expressions booléennes
- && = ET — toutes les conditions doivent être vraies
- || = OU — au moins une condition doit être vraie
- !  = NON — inverse le résultat (true → false / false → true)
*/

int main() {
    //int temp = 30;

    // &&
    // if (temp > 0 && temp < 30){ // permet de faire que plusieurs condition doit être vrai pour s'executer
    //     printf("La température est BONNE");
    // }
    // else{
    //     printf("La température est MAUVAISE");
    // }

    // ||
    // if (temp <= 0 || temp >= 30){ // au moins une condition doit être vraie
    //     printf("La température est MAUVAISE");
    // }
    // else{
    //     printf("La température est BONNE");
    // }

    // !
    bool isSunny = false;
    if(!isSunny){ // opposée
        printf("Il y a des nuages dehors");
    }
    else{
        printf("Il y a du soleil dehors");
    }
    return 0;
}
