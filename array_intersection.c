#include <stdio.h>

int main() {
    int n1, n2;
    scanf("%d", &n1);               // taille du premier tableau
    int a[n1];
    for (int i = 0; i < n1; i++)
        scanf("%d", &a[i]);         // lecture de a[]

    scanf("%d", &n2);               // taille du deuxième tableau
    int b[n2];
    for (int i = 0; i < n2; i++)
        scanf("%d", &b[i]);         // lecture de b[]

    int printed = 0;                // flag pour gérer les espaces

    // pour chaque élément de a[]
    for (int i = 0; i < n1; i++) {
        int seen_before = 0;
        // éviter les doublons en a[]
        for (int k = 0; k < i; k++) {
            if (a[i] == a[k]) {
                seen_before = 1;
                break;
            }
        }
        if (seen_before) continue;

        // vérifier présence dans b[]
        for (int j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                if (printed) putchar(' ');
                printf("%d", a[i]);
                printed = 1;
                break;
            }
        }
    }

    putchar('\n');
    return 0;
}
