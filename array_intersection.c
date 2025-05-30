#include <stdio.h>

int main() {
    int n1, n2;

    // ===== LECTURE DES DONNÉES =====
    // Lire la taille et les éléments du premier tableau
    scanf("%d", &n1);
    int a[n1];
    for (int i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    // Lire la taille et les éléments du deuxième tableau
    scanf("%d", &n2);
    int b[n2];
    for (int i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    // ===== PRÉPARATION DU TABLEAU D'INTERSECTION =====
    // Taille maximale possible de l'intersection = min(n1, n2)
    int max_size = (n1 < n2) ? n1 : n2;
    int intersection[max_size];  // Tableau pour stocker les éléments communs
    int count = 0;               // Compteur d'éléments dans l'intersection

    // ===== CALCUL DE L'INTERSECTION =====
    // Parcourir chaque élément du premier tableau
    for (int i = 0; i < n1; i++) {
        
        // ÉTAPE 1: Vérifier si a[i] existe dans le tableau b
        int found_in_b = 0;
        for (int j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                found_in_b = 1;
                break;  // Sortir dès qu'on trouve l'élément
            }
        }

        // ÉTAPE 2: Si l'élément est commun, vérifier les doublons
        if (found_in_b) {
            // Vérifier si a[i] n'est pas déjà dans le tableau intersection
            int already_added = 0;
            for (int k = 0; k < count; k++) {
                if (intersection[k] == a[i]) {
                    already_added = 1;
                    break;  // Sortir dès qu'on détecte le doublon
                }
            }

            // ÉTAPE 3: Ajouter l'élément s'il n'est pas déjà présent
            if (!already_added) {
                intersection[count] = a[i];
                count++;  // Incrémenter le compteur
            }
        }
    }

    // ===== AFFICHAGE DE L'INTERSECTION =====
    // Format strict pour correcteurs automatiques: éléments séparés par espaces
    if (count > 0) {
        printf("%d", intersection[0]);        // Premier élément sans espace avant
        for (int i = 1; i < count; i++) {
            printf(" %d", intersection[i]);   // Espaces avant les autres éléments
        }
    }
    printf("\n");  // Saut de ligne final obligatoire

    return 0;
}