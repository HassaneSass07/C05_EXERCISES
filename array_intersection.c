#include <stdio.h>

// Fonction pour vérifier si un élément est déjà présent dans un tableau
int est_deja_present(int tab[], int taille, int valeur) {
    for (int i = 0; i < taille; i++) {
        if (tab[i] == valeur) {
            return 1; // trouvé
        }
    }
    return 0; // non trouvé
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

    int intersection[n1 + n2]; // Tableau pour stocker les éléments communs
    int taille_intersection = 0;

    // Pour chaque élément de a[], vérifier s'il est dans b[] et pas déjà ajouté
    for (int i = 0; i < n1; i++) {
        // Vérifie s'il existe dans b[]
        for (int j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                // Vérifie qu'il n'est pas déjà dans l'intersection
                if (!est_deja_present(intersection, taille_intersection, a[i])) {
                    intersection[taille_intersection] = a[i];
                    taille_intersection++;
                }
                break; // inutile de continuer à chercher dans b[]
            }
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
