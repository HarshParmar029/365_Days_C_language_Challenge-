#include <stdio.h>
int main() {
    int n1, n2, i, j, k = 0, found;

    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter %d elements:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter %d elements:\n", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    int unionArr[n1 + n2];
    // Copy first array elements
    for (i = 0; i < n1; i++) {
        unionArr[k++] = arr1[i];
    }
    // Add elements from second array if not already present
    for (i = 0; i < n2; i++) {
        found = 0;
        for (j = 0; j < n1; j++) {
            if (arr2[i] == arr1[j]) {
                found = 1;
                break;
            }
        }
        if (!found)
            unionArr[k++] = arr2[i];
    }
    printf("Union of two arrays:\n");
    for (i = 0; i < k; i++) {
        printf("%d ", unionArr[i]);
    }
    return 0;
}
