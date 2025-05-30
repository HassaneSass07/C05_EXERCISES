#include <stdio.h>

int main() {
    int n1, n2;

    // Lire la taille du premier tableau
    scanf("%d", &n1);
    int a[n1];
    for (int i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    // Lire la taille du deuxième tableau
    scanf("%d", &n2);
    int b[n2];
    for (int i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    // Afficher l'en-tête
    printf("Intersection :");

    // Rechercher les éléments communs sans doublons
    for (int i = 0; i < n1; i++) {
        int existe_deja = 0;

        // Vérifier si a[i] a déjà été affiché
        for (int k = 0; k < i; k++) {
            if (a[i] == a[k]) {
                existe_deja = 1;
                break;
            }
        }

        if (existe_deja) {
            continue; // Éviter les doublons
        }

        // Vérifier si a[i] existe dans b[]
        for (int j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                printf(" %d", a[i]); // Affichage de l'élément commun
                break;
            }
        }
    }

    printf("\n");
    return 0;
}
