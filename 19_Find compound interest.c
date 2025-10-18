#include<stdio.h>
#include <math.h>  // for pow() function

int main()
{
    float P, R, T, CI;

    printf("Enter Principal Amount: ");
    scanf("%f", &P);

    printf("Enter Rate of Interest: ");
    scanf("%f", &R);

    printf("Enter Time (in years): ");
    scanf("%f", &T);

    // Formula for Compound Interest
    CI = P * pow((1 + R / 100), T) - P;

    printf("Compound Interest = %.2f\n", CI);
    printf("Total Amount = %.2f\n", (P + CI));

    return 0;
}
