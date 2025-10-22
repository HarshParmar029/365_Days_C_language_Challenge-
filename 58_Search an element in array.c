#include <stdio.h>
int main() {
    int n, i, search, found = 0;
    int arr[100];
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &search);

    printf("\nSearching for %d...\n", search);
    for (i = 0; i < n; i++) {
        if (arr[i] == search) {
            printf("%d found at position %d\n", search, i + 1);
            found = 1;
        }
    }
    if (found == 0) {
        printf("%d not found in array.\n", search);
    }
    return 0;
}
