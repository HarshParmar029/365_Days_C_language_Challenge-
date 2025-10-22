#include <stdio.h>
int main() {
    int n, i, sum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Sum only even elements
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            sum += arr[i];
    }
    printf("Sum of even elements: %d\n", sum);
    return 0;
}

