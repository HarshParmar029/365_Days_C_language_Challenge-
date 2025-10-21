#include <stdio.h>
int main() {
    int n, i, sum = 0;
    float avg;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    // Input elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // Add each element to sum
    }
    avg = (float)sum / n; // Calculate average
    printf("Average of array elements = %.2f\n", avg);
    return 0;
}

