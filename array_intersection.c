#include <stdio.h>

int main() {
    int n1, n2;

    // Lire la taille du premier tableau
    scanf("%d", &n1);
    int a[n1];
    for (int i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    // Lire la taille du deuxième tableau
    scanf("%d", &n2);
    int b[n2];
    for (int i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    // Afficher l'en-tête
    printf("Intersection :");
    printf("\n");
    return 0;
}
