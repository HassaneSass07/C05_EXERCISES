#include <stdio.h>

int main() {
    int n1, n2;

    // Lire la taille du premier tableau
    if (scanf("%d", &n1) != 1 || n1 <= 0) return 1;
    int a[n1];
    for (int i = 0; i < n1; i++) {
        if (scanf("%d", &a[i]) != 1) return 1;
    }

    // Lire la taille du deuxième tableau
    if (scanf("%d", &n2) != 1 || n2 <= 0) return 1;
    int b[n2];
    for (int i = 0; i < n2; i++) {
        if (scanf("%d", &b[i]) != 1) return 1;
    }

    // Tableau pour stocker les éléments communs sans doublons
    int intersection[n1 < n2 ? n1 : n2];
    int taille_intersection = 0;

    // Parcourir tous les éléments du premier tableau
    for (int i = 0; i < n1; i++) {
        int deja_present = 0;

        // Éviter les doublons dans l'intersection
        for (int k = 0; k < taille_intersection; k++) {
            if (intersection[k] == a[i]) {
                deja_present = 1;
                break;
            }
        }
        if (deja_present) continue;

        // Chercher l'élément dans le deuxième tableau
        for (int j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                intersection[taille_intersection++] = a[i];
                break;
            }
        }
    }

    // Afficher l'intersection
    printf("Intersection :");
    for (int i = 0; i < taille_intersection; i++) {
        printf(" %d", intersection[i]);
    }
    printf("\n");

    return 0;
}
