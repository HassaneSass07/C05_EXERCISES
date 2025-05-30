#include <stdio.h>

int main() {
    int n1, n2;
    
    // Lire la taille du premier tableau
    scanf("%d", &n1);
    
    // Déclarer et lire le premier tableau
    int arr1[n1];
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    
    // Lire la taille du deuxième tableau
    scanf("%d", &n2);
    
    // Déclarer et lire le deuxième tableau
    int arr2[n2];
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    
    // Déclarer le tableau fusionné
    int tableau_fusionne[n1 + n2];
    
    // Copier les éléments du premier tableau
    for (int i = 0; i < n1; i++) {
        tableau_fusionne[i] = arr1[i];
    }
    
    // Copier les éléments du deuxième tableau
    for (int i = 0; i < n2; i++) {
        tableau_fusionne[n1 + i] = arr2[i];
    }
    
    // Afficher le tableau fusionné
    printf("Tableau fusionné : ");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d", tableau_fusionne[i]);
        if (i < n1 + n2 - 1) {
            printf(" ");
        }
    }
    printf("\n");
    
    return 0;
}