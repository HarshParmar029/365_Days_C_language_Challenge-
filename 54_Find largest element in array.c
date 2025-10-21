#include <stdio.h>
int main() {
    int n, i, max;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Initialize max with first element
    max = arr[0];

    // Find largest element
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("Largest element = %d\n", max);
    return 0;
}

