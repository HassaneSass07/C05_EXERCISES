#include <stdio.h>

int main() {
    int n1, n2;
    
    // Lire les tailles
    scanf("%d", &n1);
    int a[n1];
    for (int i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    scanf("%d", &n2);
    int b[n2];
    for (int i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    // Parcourir le tableau a[]
    for (int i = 0; i < n1; i++) {
        int deja_vu = 0;

        // Vérifie si a[i] est déjà apparu avant dans a[]
        for (int j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                deja_vu = 1;
                break;
            }
        }
        if (deja_vu) continue;

        // Vérifie si a[i] existe dans b[]
        for (int j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                printf("%d ", a[i]);
                break;
            }
        }
    }

    printf("\n");
    return 0;
}
