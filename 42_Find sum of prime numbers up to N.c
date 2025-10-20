#include <stdio.h>
int main() {
    int n, i, j, isPrime, sum = 0;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        isPrime = 1;    // assume i is prime
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0; // not prime
                break;
            }
        }
        if (isPrime == 1)
            sum += i;    // add prime to sum
    }
    printf("Sum of prime numbers up to %d = %d\n", n, sum);
    return 0;
}

