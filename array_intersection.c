#include <stdio.h>

// Fonction pour vérifier si un 'element' est déjà présent dans un 'tableau' de 'taille' donnée.
int estElementDansTableau(int *tableau, int taille, int element) {
    for (int i = 0; i < taille; i++) {
        if (tableau[i] == element) {
            return 1; // L'élément est trouvé, retourne 1 (vrai)
        }
    }
    return 0; // L'élément n'est pas trouvé, retourne 0 (faux)
}

int main() {
    int taille1, taille2; // Variables pour stocker les tailles des deux tableaux

    // --- Saisie du premier tableau ---
    printf("Entrez la taille du premier tableau : ");
    scanf("%d", &taille1);

    // Déclaration du premier tableau 
    int tableau1[taille1];
    printf("Entrez %d éléments pour le premier tableau :\n", taille1);
    for (int i = 0; i < taille1; i++) {
        scanf("%d", &tableau1[i]);
    }

    // --- Saisie du deuxième tableau ---
    printf("Entrez la taille du deuxième tableau : ");
    scanf("%d", &taille2);

    // Déclaration du deuxième tableau 
    int tableau2[taille2];
    printf("Entrez %d éléments pour le deuxième tableau :\n", taille2);
    for (int i = 0; i < taille2; i++) {
        scanf("%d", &tableau2[i]);
    }

    // --- Préparation pour le tableau d'intersection ---
    // La taille maximale possible de l'intersection est la taille du plus petit des deux tableaux.
    int tailleMaxIntersection = (taille1 < taille2) ? taille1 : taille2;

    // Déclaration du tableau d'intersection 
    int tableauIntersection[tailleMaxIntersection];
    
    int compteurIntersection = 0; // Compteur pour le nombre d'éléments dans l'intersection

    // --- Recherche des éléments communs (intersection) ---
    for (int i = 0; i < taille1; i++) {
        // Pour chaque élément du premier tableau, on le compare avec chaque élément du deuxième tableau
        for (int j = 0; j < taille2; j++) {
            if (tableau1[i] == tableau2[j]) { 
                // Utilise la fonction 'estElementDansTableau' qui retourne 0 ou 1.
                if (estElementDansTableau(tableauIntersection, compteurIntersection, tableau1[i]) == 0) {
                    tableauIntersection[compteurIntersection] = tableau1[i]; // Ajoute l'élément
                    compteurIntersection++; 
                }
                break; 
                      
            }
        }
    }

    // --- Affichage du résultat ---
    printf("Intersection : ");
    if (compteurIntersection == 0) {
        printf("Aucun élément commun.\n");
    } else {
        for (int i = 0; i < compteurIntersection; i++) {
            printf("%d ", tableauIntersection[i]);
        }
        printf("\n");
    }

    return 0; 
}