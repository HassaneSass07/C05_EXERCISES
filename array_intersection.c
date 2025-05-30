#include <stdio.h>

int main() {
    int n1, n2;

    // Lire la taille et les éléments du premier tableau
    scanf("%d", &n1);
    int a[n1];
    for (int i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    // Lire la taille et les éléments du second tableau
    scanf("%d", &n2);
    int b[n2];
    for (int i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    // Parcourir le premier tableau
    for (int i = 0; i < n1; i++) {
        int deja_affiche = 0;

        // Éviter les doublons : vérifier si a[i] a déjà été affiché
        for (int j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                deja_affiche = 1;
                break;
            }
        }
        if (deja_affiche) continue;

        // Vérifier si a[i] existe dans le second tableau
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
