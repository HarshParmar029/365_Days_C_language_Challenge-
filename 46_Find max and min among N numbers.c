#include <stdio.h>
int main() {
    int n, i;
    float num, max, min;

    printf("Enter how many numbers: ");
    scanf("%d", &n);
    printf("Enter number 1: ");
    scanf("%f", &num);

    max = min = num; // initialize first number as both max and min
    for (i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%f", &num);

        if (num > max)
            max = num;
        if (num < min)
            min = num;
    }
    printf("\nMaximum = %.2f", max);
    printf("\nMinimum = %.2f", min);
    return 0;
}

