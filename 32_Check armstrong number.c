/*An Armstrong number (also called a narcissistic number) is a number that is equal to
the sum of its own digits each raised to the power of the number of digits.

🔹Examples:
Number	Calculation	Armstrong?
153	1³ + 5³ + 3³ = 153	: Yes
370	3³ + 7³ + 0³ = 370	: Yes
9474	9⁴ + 4⁴ + 7⁴ + 4⁴ = 9474	:Yes
123	1³ + 2³ + 3³ = 36	:No

short:
A number = sum of each of its digits raised to the power of total digits → Armstrong number */

#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, n = 0;
    float result = 0.0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // count number of digits
    while (original != 0) {
        original /= 10;
        ++n;
    }

    original = num;

    // calculate the sum of power of digits
    while (original != 0) {
        remainder = original % 10;
        result += pow(remainder, n);
        original /= 10;
    }

    if ((int)result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
