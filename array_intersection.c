#include <stdio.h>

int main() {
    int n1, n2;
    
    // Lecture des tableaux
    scanf("%d", &n1);
    int a[n1];
    for (int i = 0; i < n1; i++) 
        scanf("%d", &a[i]);
    
    scanf("%d", &n2);
    int b[n2];
    for (int i = 0; i < n2; i++) 
        scanf("%d", &b[i]);
    
    // Variables pour l'intersection
    int intersection[n1 < n2 ? n1 : n2];
    int count = 0;
    
    // Calcul de l'intersection
    for (int i = 0; i < n1; i++) {
        // Chercher a[i] dans b
        int found = 0;
        for (int j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                found = 1;
                break;
            }
        }
        
        // Si trouvé, vérifier les doublons
        if (found) {
            int duplicate = 0;
            for (int k = 0; k < count; k++) {
                if (intersection[k] == a[i]) {
                    duplicate = 1;
                    break;
                }
            }
            
            // Ajouter si pas de doublon
            if (!duplicate) {
                intersection[count++] = a[i];
            }
        }
    }
    
    // Affichage
    if (count > 0) {
        printf("%d", intersection[0]);
        for (int i = 1; i < count; i++) {
            printf(" %d", intersection[i]);
        }
    }
    printf("\n");
    
    return 0;
}