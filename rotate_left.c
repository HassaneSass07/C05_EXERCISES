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
    
    // Sauvegarder le premier élément
    int premier_element = arr[0];
    
    // Décaler tous les éléments vers la gauche
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    // Placer le premier élément à la fin
    arr[n - 1] = premier_element;
    
    // Afficher le tableau après rotation
    printf("Tableau après rotation : ");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) {
            printf(" ");
        }
    }
    printf("\n");
    
    return 0;
}