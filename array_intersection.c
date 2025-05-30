#include <stdio.h>

int main() {
    int n1, n2;

    // Lecture du premier tableau
    scanf("%d", &n1);
    int a[n1];
    for (int i = 0; i < n1; i++) scanf("%d", &a[i]);

    // Lecture du deuxième tableau
    scanf("%d", &n2);
    int b[n2];
    for (int i = 0; i < n2; i++) scanf("%d", &b[i]);

    // Stockage des éléments communs sans doublons
    int inter[n1 < n2 ? n1 : n2];
    int taille_inter = 0;

    // Pour chaque élément de a
    for (int i = 0; i < n1; i++) {
        int deja = 0;
        for (int k = 0; k < taille_inter; k++) {
            if (inter[k] == a[i]) {
                deja = 1;
                break;
            }
        }
        if (deja) continue;

        // Vérifier si a[i] est dans b
        for (int j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                inter[taille_inter++] = a[i];
                break;
            }
        }
    }

    // Affichage formaté avec majuscule et espace après ":"
    printf("Intersection : ");
    for (int i = 0; i < taille_inter; i++) {
        printf(" %d", inter[i]);
    }
    printf("\n");

    return 0;
}
