#include <stdio.h>

// Lire un tableau depuis l'entrée
void lire_tableau(int tab[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }
}

// Vérifie si val est présent dans tab[0..taille)
int est_dans_tableau(int tab[], int taille, int val) {
    for (int i = 0; i < taille; i++) {
        if (tab[i] == val) return 1;
    }
    return 0;
}

// Remplit result[] avec les éléments communs à a[] et b[] sans doublons
int trouver_intersection(int a[], int n1, int b[], int n2, int result[]) {
    int taille = 0;
    for (int i = 0; i < n1; i++) {
        if (est_dans_tableau(b, n2, a[i]) && !est_dans_tableau(result, taille, a[i])) {
            result[taille++] = a[i];
        }
    }
    return taille;
}

// Affiche un tableau
void afficher_tableau(int tab[], int taille) {
    printf("Intersection :");
    for (int i = 0; i < taille; i++) {
        printf(" %d", tab[i]);
    }
    printf("\n");
}

int main() {
    int n1, n2;

    // Lecture des tailles
    scanf("%d", &n1);
    int a[n1];
    lire_tableau(a, n1);

    scanf("%d", &n2);
    int b[n2];
    lire_tableau(b, n2);

    int result[n1 < n2 ? n1 : n2]; // Tableau pour stocker l’intersection
    int taille = trouver_intersection(a, n1, b, n2, result);

    afficher_tableau(result, taille);

    return 0;
}
