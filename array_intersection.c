#include <stdio.h>

int main() {
    int n1, n2;

    // Lire la taille et les éléments du premier tableau
    scanf("%d", &n1);
    int a[n1];
    for (int i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    // Lire la taille et les éléments du deuxième tableau
    scanf("%d", &n2);
    int b[n2];
    for (int i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    // Tableau pour stocker l'intersection (taille max = min(n1,n2))
    int inter[n1 < n2 ? n1 : n2];
    int taille_inter = 0;

    // Pour chaque élément de a
    for (int i = 0; i < n1; i++) {
        int present = 0;

        // Vérifier si déjà dans inter (éviter doublons)
        for (int k = 0; k < taille_inter; k++) {
            if (inter[k] == a[i]) {
                present = 1;
                break;
            }
        }
        if (present) continue;

        // Vérifier si a[i] est dans b
        for (int j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                inter[taille_inter++] = a[i];
                break;
            }
        }
    }

    // Afficher l'intersection avec majuscule et espace exact
    printf("Intersection :");
    for (int i = 0; i < taille_inter; i++) {
        printf(" %d", inter[i]);
    }
    printf("\n");

    return 0;
}
