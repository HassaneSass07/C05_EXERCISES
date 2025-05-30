#include <stdio.h>

int main() {
    int n1, n2;
    
    // Lire la taille du premier tableau
    scanf("%d", &n1);
    int a[n1];
    for (int i = 0; i < n1; i++)
        scanf("%d", &a[i]);  // Remplir le tableau a[]

    // Lire la taille du deuxième tableau
    scanf("%d", &n2);
    int b[n2];
    for (int i = 0; i < n2; i++)
        scanf("%d", &b[i]);  // Remplir le tableau b[]

    // Parcourir chaque élément du tableau a[]
    for (int i = 0; i < n1; i++) {
        int deja_vu = 0;

        // Vérifie si l'élément a[i] a déjà été traité
        for (int j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                deja_vu = 1;
                break;
            }
        }
        if (deja_vu) continue;

        // Vérifie si a[i] est présent dans le tableau b[]
        for (int j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                printf("%d ", a[i]); // Affiche l'élément commun une seule fois
                break;
            }
        }
    }

    printf("\n");
    return 0;
}
