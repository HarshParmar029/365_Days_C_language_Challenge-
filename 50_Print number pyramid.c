#include <stdio.h>
int main() {
    int i, j, space, rows, num = 1;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++) {
        // Print spaces
        for (space = i; space < rows; space++) {
            printf(" ");
        }
        // Print numbers
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}

