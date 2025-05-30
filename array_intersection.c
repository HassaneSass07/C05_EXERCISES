#include <stdio.h>

int main() {
    int n1, n2;

    scanf("%d", &n1);
    int a[n1];
    for (int i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &n2);
    int b[n2];
    for (int i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    int max_size = (n1 < n2) ? n1 : n2;
    int intersection[max_size];
    int count = 0;

    for (int i = 0; i < n1; i++) {
        int found_in_b = 0;
        for (int j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                found_in_b = 1;
                break;
            }
        }

        if (found_in_b) {
            int already_added = 0;
            for (int k = 0; k < count; k++) {
                if (intersection[k] == a[i]) {
                    already_added = 1;
                    break;
                }
            }

            if (!already_added) {
                intersection[count] = a[i];
                count++;
            }
        }
    }

    if (count > 0) {
        printf("%d", intersection[0]);
        for (int i = 1; i < count; i++) {
            printf(" %d", intersection[i]);
        }
    }
    printf("\n");

    return 0;
}