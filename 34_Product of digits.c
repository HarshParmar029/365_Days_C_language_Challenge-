#include <stdio.h>
int main() {
    int num, product = 1, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0) {
        remainder = num % 10;        // Get last digit
        product = product * remainder; // Multiply with product
        num = num / 10;              // Remove last digit
    }
    printf("Product of digits = %d", product);
    return 0;
}

