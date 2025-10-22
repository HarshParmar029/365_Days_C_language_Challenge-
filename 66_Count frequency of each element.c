#include <stdio.h>
int main() {
    int n, i, j;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n], freq[n];
    // Input elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1;  // initialize frequency array
    }
    // Count frequency
    for (i = 0; i < n; i++) {
        if (freq[i] != -1) continue; // already counted
        int count = 1;
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = 0;  // mark as counted
            }
        }
        freq[i] = count;
    }
    // Print frequency
    printf("Frequency of each element:\n");
    for (i = 0; i < n; i++) {
        if (freq[i] != 0)
            printf("%d occurs %d times\n", arr[i], freq[i]);
    }
    return 0;
}
