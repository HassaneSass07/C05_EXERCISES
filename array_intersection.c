#include <stdio.h>

int main() {
    int n1, n2;

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

    // Parcourir chaque élément du premier tableau
    for (int i = 0; i < n1; i++) {
        int doublon = 0;

        // Vérifier si cet élément a déjà été affiché (éviter doublons)
        for (int k = 0; k < i; k++) {
            if (a[i] == a[k]) {
                doublon = 1;
                break;
            }
        }
        if (doublon) continue;

        // Vérifier si l'élément est présent dans le deuxième tableau
        int commun = 0;
        for (int j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                commun = 1;
                break;
            }
        }

        // Afficher si l'élément est commun
        if (commun) {
            printf("%d ", a[i]);
        }
    }

    printf("\n");
    return 0;
}
