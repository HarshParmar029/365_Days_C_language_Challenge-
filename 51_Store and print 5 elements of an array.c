#include <stdio.h>

int main() {
    int arr[5], i;
    // Input 5 elements
    printf("Enter 5 elements:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    printf("The elements are:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

