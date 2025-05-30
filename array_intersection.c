#include <stdio.h>

int main() {
    int n1, n2;

    // Lire la taille du premier tableau
    scanf("%d", &n1);
    int a[n1];

    // Lire les éléments du premier tableau
    for (int i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    // Lire la taille du deuxième tableau
    scanf("%d", &n2);
    int b[n2];

    // Lire les éléments du deuxième tableau
    for (int i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    // Parcourir le premier tableau
    for (int i = 0; i < n1; i++) {
        int existe_deja = 0;

        // Vérifier si a[i] a déjà été affiché (évite les doublons)
        for (int j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                existe_deja = 1;
                break;
            }
        }

        // Si déjà affiché, on passe à l'élément suivant
        if (existe_deja) continue;

        // Vérifier si a[i] est présent dans le tableau b[]
        for (int j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                printf("%d ", a[i]);  // Afficher l'élément commun
                break;                // Passer à l'élément suivant
            }
        }
    }

    printf("\n");  // Nouvelle ligne finale
    return 0;
}
