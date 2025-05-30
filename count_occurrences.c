#include <stdio.h>

int main() {
    int n;
    
    // Lire le nombre d'éléments
    scanf("%d", &n);
    
    // Déclarer le tableau
    int arr[n];
    
    // Lire les éléments du tableau
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Lire l'élément à rechercher
    int element_recherche;
    scanf("%d", &element_recherche);
    
    // Compter les occurrences de l'élément
    int compteur = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == element_recherche) {
            compteur++;
        }
    }
    
    // Afficher le résultat
    printf("L'élément %d apparaît %d fois.\n", element_recherche, compteur);
    
    return 0;
}