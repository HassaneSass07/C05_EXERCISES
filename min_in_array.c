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
    
    // Initialiser le minimum avec le premier élément
    int min = arr[0];
    
    // Parcourir le tableau pour trouver le minimum
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    
    // Afficher le résultat
    printf("Le minimum est : %d\n", min);
    
    return 0;
}