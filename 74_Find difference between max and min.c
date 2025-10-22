#include <stdio.h>
int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Array must have at least 1 element.\n");
        return 0;
    }
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    int min = arr[0];
    // Find max and min
    for (i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    int difference = max - min;

    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);
    printf("Difference between max and min: %d\n", difference);
    return 0;
}
