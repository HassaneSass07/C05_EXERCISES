#include <stdio.h>
#include <stdbool.h> // For boolean type
#include <stdlib.h>  // For malloc and free

// Function to check if an element is already in an array (for uniqueness)
bool isElementInArray(int *arr, int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return true;
        }
    }
    return false;
}

int main() {
    int n1, n2;

    // Get size of the first array
    printf("Enter the size of the first array: ");
    scanf("%d", &n1);

    int arr1[n1];
    printf("Enter %d elements for the first array:\n", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Get size of the second array
    printf("Enter the size of the second array: ");
    scanf("%d", &n2);

    int arr2[n2];
    printf("Enter %d elements for the second array:\n", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Create a temporary array to store intersection elements
    // The maximum possible intersection size is the minimum of n1 and n2
    int maxIntersectionSize = (n1 < n2) ? n1 : n2;
    int *intersectionArray = (int *)malloc(maxIntersectionSize * sizeof(int));
    if (intersectionArray == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    int intersectionCount = 0;

    // Find common elements
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                // Check if the element is already added to avoid duplicates in intersection
                if (!isElementInArray(intersectionArray, intersectionCount, arr1[i])) {
                    intersectionArray[intersectionCount] = arr1[i];
                    intersectionCount++;
                }
                break; // Move to the next element in arr1 once a match is found
            }
        }
    }

    // Print the intersection
    printf("Intersection : ");
    if (intersectionCount == 0) {
        printf("No common elements.\n");
    } else {
        for (int i = 0; i < intersectionCount; i++) {
            printf("%d ", intersectionArray[i]);
        }
        printf("\n");
    }

    // Free dynamically allocated memory
    free(intersectionArray);

    return 0;
}