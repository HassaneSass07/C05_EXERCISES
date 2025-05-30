#include <stdio.h>

int main() {
    int n1, n2;
    scanf("%d", &n1);
    int a[n1];
    for (int i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    scanf("%d", &n2);
    int b[n2];
    for (int i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    // Parcours du 2e tableau (ordre d’affichage basé sur b[])
    for (int i = 0; i < n2; i++) {
        int deja_affiche = 0;

        // Éviter les doublons dans b[]
        for (int k = 0; k < i; k++) {
            if (b[i] == b[k]) {
                deja_affiche = 1;
                break;
            }
        }
        if (deja_affiche) continue;

        // Vérifie si b[i] est présent dans a[]
        for (int j = 0; j < n1; j++) {
            if (b[i] == a[j]) {
                printf("%d ", b[i]);
                break;
            }
        }
    }

    printf("\n");
    return 0;
}
