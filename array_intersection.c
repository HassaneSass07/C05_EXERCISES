#include <stdio.h>

int main() {
    int n1, n2;
    scanf("%d", &n1);
    int a[n1];
    for (int i = 0; i < n1; i++) scanf("%d", &a[i]);

    scanf("%d", &n2);
    int b[n2];
    for (int i = 0; i < n2; i++) scanf("%d", &b[i]);

    // Affichage direct des communs sans doublons
    for (int i = 0; i < n1; i++) {
        int existe_deja = 0;
        for (int j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                existe_deja = 1;
                break;
            }
        }
        if (existe_deja) continue;

        // Vérifie si présent dans b[]
        for (int j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                printf("%d ", a[i]);
                break;
            }
        }
    }

    return 0;
}
