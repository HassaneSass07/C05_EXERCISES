#include <stdio.h>

int main() {
    int n1, n2;

    // Lire la taille du premier tableau
    scanf("%d", &n1);
    int a[n1];
    for (int i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    // Lire la taille du deuxième tableau
    scanf("%d", &n2);
    int b[n2];
    for (int i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    int intersection[n1 + n2]; // tableau temporaire pour stocker les communs
    int taille_intersection = 0;

    // Parcourir le premier tableau
    for (int i = 0; i < n1; i++) {
        int commun = 0;

        // Vérifie si l'élément de a[] est présent dans b[]
        for (int j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                commun = 1;
                break;
            }
        }

        // Vérifie que ce n'est pas un doublon dans le tableau résultat
        if (commun) {
            int deja_present = 0;
            for (int k = 0; k < taille_intersection; k++) {
                if (intersection[k] == a[i]) {
                    deja_present = 1;
                    break;
                }
            }

            // Si l'élément est commun et pas encore ajouté, on l'ajoute
            if (!deja_present) {
                intersection[taille_intersection] = a[i];
                taille_intersection++;
            }
        }
    }

    // Afficher les éléments communs
    printf("Intersection :");
    for (int i = 0; i < taille_intersection; i++) {
        printf(" %d", intersection[i]);
    }
    printf("\n");

    return 0;
}
