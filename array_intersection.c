#include <stdio.h>

int main() {
    int n1, n2;

    // Lire taille et éléments du premier tableau
    scanf("%d", &n1);
    int a[n1];
    for (int i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    // Lire taille et éléments du deuxième tableau
    scanf("%d", &n2);
    int b[n2];
    for (int i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    // Intersection max taille = min(n1,n2)
    int inter[n1 < n2 ? n1 : n2];
    int t_inter = 0;

    // Pour chaque élément du premier tableau
    for (int i = 0; i < n1; i++) {
        int deja = 0;

        // Vérifier doublon dans inter
        for (int k = 0; k < t_inter; k++)
            if (inter[k] == a[i]) {
                deja = 1;
                break;
            }
        if (deja) continue;

        // Vérifier présence dans b
        for (int j = 0; j < n2; j++)
            if (a[i] == b[j]) {
                inter[t_inter++] = a[i]; // Ajouter si commun
                break;
            }
    }

    // Afficher résultats
    printf("Intersection :");
    for (int i = 0; i < t_inter; i++)
        printf(" %d", inter[i]);
    printf("\n");

    return 0;
}
