#include <stdio.h>

int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr1[n], arr2[n];

    printf("Enter %d elements of first array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }
    // Copying elements from arr1 to arr2
    for (i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }
    printf("Elements copied to second array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    return 0;
}
