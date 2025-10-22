#include <stdio.h>
int main() {
    int n, i, first;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Store first element
    first = arr[0];
    // Shift all elements one position to the left
    for (i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    // Move first element to last
    arr[n - 1] = first;

    printf("Array after left rotation by 1:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

