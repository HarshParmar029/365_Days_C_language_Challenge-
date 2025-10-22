#include <stdio.h>
int main() {
    int n, i;
    int largest, second;
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
    largest = second = -2147483648; // minimum possible int
    //or {-1e9}
    for (i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }
    if (second == -2147483648)
        printf("No second largest element found.\n");
    else
        printf("Second largest element is: %d\n", second);
    return 0;
}

