#include <stdio.h>

// Fonction qui vérifie si un élément est déjà apparu dans un tableau jusqu'à l'index donné
int deja_present(int tab[], int taille, int valeur, int limite) {
    for (int i = 0; i < limite; i++) {
        if (tab[i] == valeur)
            return 1; // Oui, déjà présent
    }
    return 0; // Non, pas encore rencontré
}

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

    // Affichage de l'intersection sans doublons
    printf("Intersection :");
    for (int i = 0; i < n1; i++) {
        // Vérifie si a[i] existe dans b[]
        for (int j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                // Vérifie si ce n'est pas déjà affiché (doublon dans a[])
                if (!deja_present(a, n1, a[i], i))
                    printf(" %d", a[i]);
                break;
            }
        }
    }

    printf("\n");
    return 0;
}
