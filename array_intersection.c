#include <stdio.h>

int main() {
    int n1, n2;

    // Lecture de la taille du premier tableau
    scanf("%d", &n1);
    int a[n1];
    for (int i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    // Lecture de la taille du deuxième tableau
    scanf("%d", &n2);
    int b[n2];
    for (int i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    // Début de l'affichage de l'intersection
    printf("Intersection :");

    // Parcours du tableau a
    for (int i = 0; i < n1; i++) {
        int deja_affiche = 0;

        // Vérifie si a[i] a déjà été traité
        for (int k = 0; k < i; k++) {
            if (a[i] == a[k]) {
                deja_affiche = 1;
                break;
            }
        }

        if (deja_affiche) {
            continue;
        }

        // Vérifie si a[i] est présent dans le tableau b
        for (int j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                printf(" %d", a[i]); // Affiche l'élément commun
                break;
            }
        }
    }

    printf("\n");
    return 0;
}
