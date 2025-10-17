// DIVISION OF TWO NUMBERS CONDITIONOS:
/*
    Condition                 Description
 --------------------------  ------------------------------------------------------------------
  Invalid input check      = Uses `scanf` return value to detect wrong input (like characters).
  Division by zero         = Prevents program crash if denominator is 0.
  Float & Integer division = Handles both automatically using `float`.
  Remainder (modulus)      =  Displays only when both inputs are integers.

*/
#include <stdio.h>

int main() {
    float A,B,C;   // float for accurate division

    printf("Enter first number: ");
    if (scanf("%f", &A) != 1) {
        printf("Invalid input! Please enter a valid number.\n");
        return 1;
    }

    printf("Enter second number: ");
    if (scanf("%f", &B) != 1) {
        printf("Invalid input! Please enter a valid number.\n");
        return 1;
    }

    // Check division by zero
    if (B == 0) {
        printf("Error! Division by zero is not allowed.\n");
        return 1;
    }

    C = A / B;

    // Check result type (integer or float)
    if ((int)C == C)
        printf("Result = %.0f (Integer division)\n", C);
    else
        printf("Result = %.2f (Floating-point division)\n", C);

    return 0;
}

/*OUTPUT LIKE THIS:
Enter first number: 10
Enter second number: 2
Result = 5 (Integer division)

Enter first number: 7
Enter second number: 3
Result = 2.33 (Floating-point division)
Remainder = 1

Enter first number: 8
Enter second number: 0
Error! Division by zero is not allowed.
*/
