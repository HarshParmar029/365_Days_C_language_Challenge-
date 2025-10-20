#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, avg, num;

    printf("Enter the number of values: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%f", &num);
        sum += num;
    }

    avg = sum / n;

    printf("Average of %d numbers = %.2f\n", n, avg);

    return 0;
}

