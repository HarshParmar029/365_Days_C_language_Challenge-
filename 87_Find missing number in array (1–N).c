#include <stdio.h>
int main() {
    int n, i, total, sum = 0;

    printf("Enter value of N (last number in sequence 1–N): ");
    scanf("%d", &n);

    int arr[n - 1];
    printf("Enter %d numbers (from 1 to %d, one missing):\n", n - 1, n);
    for (i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    total = n * (n + 1) / 2;   // Sum of 1 to N
    printf("Missing number = %d\n", total - sum);
    return 0;
}


