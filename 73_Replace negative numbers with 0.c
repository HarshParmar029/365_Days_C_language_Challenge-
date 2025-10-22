#include <stdio.h>
int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Replace negative numbers with 0
    for (i = 0; i < n; i++) {
        if (arr[i] < 0)
            arr[i] = 0;
    }
    printf("Array after replacing negative numbers with 0:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

