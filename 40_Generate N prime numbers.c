#include <stdio.h>
int main() {
    int n, count = 0, num = 2, i, flag;

    printf("Enter how many prime numbers to print: ");
    scanf("%d", &n);

    printf("First %d prime numbers are: ", n);
    while (count < n) {
        flag = 0;            // assume number is prime
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                flag = 1;    // not prime
                break;
            }
        }
        if (flag == 0) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    return 0;
}

