#include <stdio.h>


// Ecrire un fich
int main() {

    //FILE *pFile = fopen("output.txt", "w"); // fopen("[nom du fichier]"", "mode; w = write; r = read") un peu comme linux pour les permissions chmod
    // Se génere dans le même fichier où le code se situe

    FILE *pFile = fopen("C:\\Users\\Djayson\\Desktop\\output.txt", "w"); // Chemin absolu
    char text[] = "LA PROGRAMMATION C'EST TROP BIEN!\n DIFFICILE A COMPRENDRE LE POINTEUR";

    if(pFile == NULL){
        printf("Erreur ouverture de fichier\n");
        return 1;
    }

    fprintf(pFile, "%s", text); //file printf fprintf([pointeur], [Spécificateur de format], )

    printf("Le fichier a été écrit avec succès!\n");

    fclose(pFile);

    return 0;
}
