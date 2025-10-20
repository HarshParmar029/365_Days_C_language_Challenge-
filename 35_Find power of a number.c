#include <stdio.h>
#include <math.h>

int main() {
    double base, exponent, result;

    printf("Enter base: ");
    scanf("%lf", &base);

    printf("Enter exponent: ");
    scanf("%lf", &exponent);

    result = pow(base, exponent);  // Using math.h function

    printf("%.2lf ^ %.2lf = %.2lf", base, exponent, result);

    return 0;
}

