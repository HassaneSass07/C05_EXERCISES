#include <stdio.h>

int main() {
    int n1, n2;

    // Lecture de la taille du premier tableau
    scanf("%d", &n1);
    int a[n1];
    for (int i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    // Lecture de la taille du deuxième tableau
    scanf("%d", &n2);
    int b[n2];
    for (int i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    // Tableau pour stocker les éléments communs (intersection) sans doublons
    int intersection[n1 < n2 ? n1 : n2];
    int taille_intersection = 0;

    // Pour chaque élément de a
    for (int i = 0; i < n1; i++) {
        // Vérifier si l'élément est déjà dans intersection (éviter doublons)
        int deja_present = 0;
        for (int k = 0; k < taille_intersection; k++) {
            if (intersection[k] == a[i]) {
                deja_present = 1;
                break;
            }
        }
        if (deja_present) continue;

        // Vérifier si l'élément a[i] est dans b
        int present_dans_b = 0;
        for (int j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                present_dans_b = 1;
                break;
            }
        }

        // Si oui, ajouter à intersection
        if (present_dans_b) {
            intersection[taille_intersection] = a[i];
            taille_intersection++;
        }
    }

    // Affichage de l'intersection
    printf("Intersection :");
    for (int i = 0; i < taille_intersection; i++) {
        printf(" %d", intersection[i]);
    }
    printf("\n");

    return 0;
}
