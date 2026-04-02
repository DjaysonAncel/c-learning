#include <stdio.h>
#include <windows.h> // pour windows
// linux ou mac : #include <unistd.h>

// for loop = Répeter un code limiter en nombre (pas indéfiniment)
// for(Initialization; Condition; Update)
int main() {

    for(int i = 10; i >= 0; i--){ // i++ = incrément de 1; i-- décrément de 1
        Sleep(1000); // Windows: pause de 1000 ms
        // sleep(1); // Linux/mac pause de 1 sec
        printf("%d\n", i);
    }

    printf("BONNE ANNEE!");
    return 0;
}
