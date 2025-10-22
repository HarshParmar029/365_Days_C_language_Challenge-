#include <stdio.h>
int main() {
    int n, i;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Replace even -> 1, odd -> 0
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            arr[i] = 1;   // even
        else
            arr[i] = 0;   // odd
    }
    printf("\nModified array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

