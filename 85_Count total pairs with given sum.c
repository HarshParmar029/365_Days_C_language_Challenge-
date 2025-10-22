/* Uses two loops to check every unique pair (i, j) where i < j.

If arr[i] + arr[j] == sum, it increases the count.

Prints both the pairs and the total number found.*/
#include <stdio.h>
int main() {
    int n, i, j, sum, count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter target sum: ");
    scanf("%d", &sum);
    // Check all pairs
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == sum) {
                count++;
                printf("Pair found: (%d, %d)\n", arr[i], arr[j]);
            }
        }
    }
    printf("Total pairs with sum %d = %d\n", sum, count);
    return 0;
}

