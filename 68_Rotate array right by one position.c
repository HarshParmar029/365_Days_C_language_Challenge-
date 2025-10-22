#include <stdio.h>
int main() {
    int n, i, last;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Store last element
    last = arr[n - 1];
    // Shift all elements one position to the right
    for (i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    // Move last element to first position
    arr[0] = last;
    printf("Array after right rotation by 1:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
