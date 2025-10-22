#include <stdio.h>
int main() {
    int n, i, j, count;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int visited[n];  // to mark duplicates
    for (i = 0; i < n; i++) visited[i] = 0;

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Duplicate elements are:\n");
    for (i = 0; i < n; i++) {
        if (visited[i] == 1) continue;  // skip already counted
        count = 1;
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1;  // mark duplicate
            }
        }
        if (count > 1) {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}
