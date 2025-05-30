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

    // Parcourir le premier tableau
    for (int i = 0; i < n1; i++) {
        int deja_imprime = 0;

        // Vérifie si l'élément a[i] a déjà été traité dans a[]
        for (int j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                deja_imprime = 1;
                break;
            }
        }
      

        // Cherche a[i] dans b[]
        for (int j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                printf("%d ", a[i]);  // Affiche l’élément commun
                break;
            }
        }
    }

    printf("\n");  // Retour à la ligne final
    return 0;
}
