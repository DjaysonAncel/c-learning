#include <stdio.h>

// Lire un fichier

int main() {

    FILE *pFile = fopen("input.txt", "r"); // r = read
    char buffer[1024] = {0}; // Buffer = tampon qui stocke temporairement des données
    // ICI: 1024 octets en RAM pour stocker le texte temporairement.

    //Si le fichier n'existe pas, on arrête tout.
    if(pFile == NULL){
        printf("Erreur ouverture de fichier\n");
        return 1;
    }

    // Tant que 'fgets' arrive à remplir le buffer
    // Il lit ligne par ligne (ou s'arrête à 1024 caractères).
    while(fgets(buffer, sizeof(buffer), pFile) != NULL){
        printf("%s", buffer); // On affiche le contenu actuel du plateau
    }

    fclose(pFile);

    return 0;
}
