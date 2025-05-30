#include <stdio.h>

int main() {
    int n1, n2;

    // Lire la taille du premier tableau et ses éléments
    scanf("%d", &n1);
    int a[n1];
    for (int i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    // Lire la taille du deuxième tableau et ses éléments
    scanf("%d", &n2);
    int b[n2];
    for (int i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    // Parcourir le premier tableau
    for (int i = 0; i < n1; i++) {
        int est_deja_affiche = 0;

        // Vérifier si a[i] a déjà été affiché
        for (int k = 0; k < i; k++) {
            if (a[i] == a[k]) {
                est_deja_affiche = 1;
                break;
            }
        }
        if (est_deja_affiche)
            continue;

        // Vérifier si a[i] existe dans le tableau b[]
        for (int j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                printf("%d ", a[i]);
                break;
            }
        }
    }

    printf("\n");
    return 0;
}
