// array_intersection.c
// Programme qui affiche l'intersection de deux tableaux (éléments communs sans doublons)

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

    // Tableau temporaire pour stocker les éléments communs sans doublons
    int intersection[n1 < n2 ? n1 : n2];
    int taille_intersection = 0;

    // Parcours de tous les éléments du premier tableau
    for (int i = 0; i < n1; i++) {
        int deja_present = 0;  // Flag pour éviter les doublons dans l'intersection

        // Vérifier si a[i] est déjà dans intersection
        for (int k = 0; k < taille_intersection; k++) {
            if (intersection[k] == a[i]) {
                deja_present = 1;
                break;
            }
        }
        if (deja_present) continue;  // Ignorer cet élément s'il est déjà enregistré

        // Vérifier si a[i] est présent dans le deuxième tableau b
        int present_dans_b = 0;
        for (int j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                present_dans_b = 1;
                break;
            }
        }

        // Ajouter à l'intersection si trouvé dans b
        if (present_dans_b) {
            intersection[taille_intersection] = a[i];
            taille_intersection++;
        }
    }

    // Affichage du résultat
    printf("Intersection :");
    for (int i = 0; i < taille_intersection; i++) {
        printf(" %d", intersection[i]);
    }
    printf("\n");

    return 0;
}
