#include <stdio.h>
int main() {
    int n, i, temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Array is too small to reverse.\n");
        return 0;
    }
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int half = n / 2;  // first half size
    // Reverse first half
    for (i = 0; i < half / 2; i++) {
        temp = arr[i];
        arr[i] = arr[half - 1 - i];
        arr[half - 1 - i] = temp;
    }
    printf("Array after reversing first half:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

