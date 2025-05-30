#include <stdio.h>

int main() {
    int n1, n2;

    // Lecture du premier tableau
    scanf("%d", &n1);
    int a[n1];
    for (int i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    // Lecture du deuxième tableau
    scanf("%d", &n2);
    int b[n2];
    for (int i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    int intersection[n1 < n2 ? n1 : n2]; // Taille max = min(n1,n2)
    int taille_intersection = 0;

    // Chercher les éléments communs
    for (int i = 0; i < n1; i++) {
        // Vérifier si a[i] est dans b
        int dans_b = 0;
        for (int j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                dans_b = 1;
                break;
            }
        }
        if (!dans_b)
            continue;

        // Vérifier que a[i] n'est pas déjà dans intersection
        int deja_present = 0;
        for (int k = 0; k < taille_intersection; k++) {
            if (intersection[k] == a[i]) {
                deja_present = 1;
                break;
            }
        }
        if (!deja_present) {
            intersection[taille_intersection++] = a[i];
        }
    }

    // Affichage de l'intersection
    for (int i = 0; i < taille_intersection; i++) {
        printf("%d", intersection[i]);
        if (i < taille_intersection - 1)
            printf(" ");
    }
    printf("\n");

    return 0;
}
