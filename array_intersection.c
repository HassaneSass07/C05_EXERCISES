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

    // Affichage des éléments communs sans doublons
    for (int i = 0; i < n1; i++) {
        int deja_vu = 0;

        // Vérifie si a[i] a déjà été traité
        for (int k = 0; k < i; k++) {
            if (a[i] == a[k]) {
                deja_vu = 1;
                break;
            }
        }
        if (deja_vu) continue;

        // Vérifie si a[i] est présent dans b[]
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
