#include <stdio.h>
// break = Interrompre la boucle (STOPPER)
// continue = saute le cycle courant d'une boucle (SKIP)

int main() {

    for(int i = 1; i <= 10; i++){

        // if(i == 4){ 1 2 3
        //     break;
        // }

        if(i == 4){ // 1 2 3 5 6 7 8 9 10
            continue;
        }

        printf("%d\n", i);
    }
    return 0;
}
