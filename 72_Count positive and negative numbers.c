#include <stdio.h>
int main() {
    int n, i, positive = 0, negative = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Count positive and negative numbers
    for (i = 0; i < n; i++) {
        if (arr[i] > 0)
            positive++;
        else if (arr[i] < 0)
            negative++;
    }
    printf("Number of positive numbers: %d\n", positive);
    printf("Number of negative numbers: %d\n", negative);
    return 0;
}

