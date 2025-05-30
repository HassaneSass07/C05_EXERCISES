#include <stdio.h>

int main() {
    int n1, n2;

    // Lecture du premier tableau
    scanf("%d", &n1);
    int a[n1];
    for (int i = 0; i < n1; i++) scanf("%d", &a[i]);

    // Lecture du deuxième tableau
    scanf("%d", &n2);
    int b[n2];
    for (int i = 0; i < n2; i++) scanf("%d", &b[i]);

    int result[n1 < n2 ? n1 : n2]; // Tableau pour stocker l’intersection (max = min(n1,n2))
    int size = 0; // Taille réelle de l’intersection

    // Recherche de l'intersection
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                // Vérifie si a[i] est déjà dans result[]
                int deja = 0;
                for (int k = 0; k < size; k++) {
                    if (result[k] == a[i]) {
                        deja = 1;
                        break;
                    }
                }
                if (!deja) {
                    result[size++] = a[i]; // Ajoute à l’intersection
                }
                break; // Pas besoin de chercher plus loin
            }
        }
    }

    // Affichage
    printf("Intersection :");
    for (int i = 0; i < size; i++) {
        printf(" %d", result[i]);
    }
    printf("\n");

    return 0;
}
