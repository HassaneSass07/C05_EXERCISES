#include <stdio.h>

int main() {
    int n1, n2;

    // Lire les tailles et les tableaux
    scanf("%d", &n1);
    int a[n1];
    for (int i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    scanf("%d", &n2);
    int b[n2];
    for (int i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    // Préparer l'espace pour l'intersection (taille minimale)
    int max_size;
    if (n1 < n2)
        max_size = n1;
    else
        max_size = n2;
    int inter[max_size];
    int sz = 0;

    // Remplir inter[] avec les éléments communs (sans doublons)
    for (int i = 0; i < n1; i++) {
        // Vérifier présence dans b[]
        int in_b = 0;
        for (int j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                in_b = 1;
                break;
            }
        }
        if (!in_b)
            continue;

        // Vérifier doublon dans inter[]
        int in_inter = 0;
        for (int k = 0; k < sz; k++) {
            if (a[i] == inter[k]) {
                in_inter = 1;
                break;
            }
        }
        if (!in_inter)
            inter[sz++] = a[i];
    }

    // Afficher l'intersection
    for (int i = 0; i < sz; i++) {
        printf("%d", inter[i]);
        if (i + 1 < sz)
            printf(" ");
    }
    printf("\n");

    return 0;
}
