#include <stdio.h>

int main() {
    long long int num;
    int sum = 0, remainder;

    printf("Enter a number: ");
    scanf("%lld", &num);

    while (num != 0) {
        remainder = num % 10;
        sum = sum + remainder;
        num = num / 10;
    }

    printf("Sum of digits = %d", sum);

    return 0;
}
