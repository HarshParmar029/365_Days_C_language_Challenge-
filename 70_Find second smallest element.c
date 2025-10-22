#include <stdio.h>
int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    if (n < 2) {
        printf("Array should have at least 2 elements.\n");
        return 0;
    }
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int smallest = arr[0];
    int second = arr[0];
    // Find smallest element first
    for (i = 1; i < n; i++) {
        if (arr[i] < smallest)
            smallest = arr[i];
    }
    // Initialize second smallest to a large value
    second = 1e9;  // safe large number
    // Find second smallest
    for (i = 0; i < n; i++) {
        if (arr[i] > smallest && arr[i] < second)
            second = arr[i];
    }
    if (second == 1e9)
        printf("No second smallest element found.\n");
    else
        printf("Second smallest element is: %d\n", second);
    return 0;
}
