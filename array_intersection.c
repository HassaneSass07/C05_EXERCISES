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

    int intersection[n1 < n2 ? n1 : n2]; // Tableau pour stocker les éléments communs
    int count = 0; // Nombre d'éléments communs uniques trouvés

    // Parcourir chaque élément du tableau a
    for (int i = 0; i < n1; i++) {
        // Vérifier si a[i] est dans b
        int found_in_b = 0;
        for (int j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                found_in_b = 1;
                break;
            }
        }

        if (found_in_b) {
            // Vérifier si a[i] n'est pas déjà dans intersection
            int already_added = 0;
            for (int k = 0; k < count; k++) {
                if (intersection[k] == a[i]) {
                    already_added = 1;
                    break;
                }
            }

            // Ajouter a[i] s'il n'est pas encore présent
            if (!already_added) {
                intersection[count] = a[i];
                count++;
            }
        }
    }

    // Affichage final
    printf("Intersection :");
    for (int i = 0; i < count; i++)
        printf(" %d", intersection[i]);
    printf("\n");

    return 0;
}
