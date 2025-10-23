#include <stdio.h>
int main() {
    int n, i, flag = 1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Check palindrome
    for (i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - 1 - i]) {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
        printf("Array is a palindrome.\n");
    else
        printf("Array is not a palindrome.\n");
    return 0;
}


