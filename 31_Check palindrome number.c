/*
Palindrome number means —
A number that remains the same when its digits are reversed.

🔹 Examples:
Number	Reversed	Palindrome?
121     	121	       Yes
12321	  12321	       Yes
123	        321	        No
4554	   4554	       Yes

simply —

                        If the original number = reversed number → it is a palindrome number.
                        ----------------------------------------------------------------------
->.Example:

1221 → reverse is 1221 → same → palindrome
1234 → reverse is 4321 → different → not palindrom
*/
#include <stdio.h>

int main() {
    int num, original, remainder, reversed = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;  // store the original number

    // reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    // check palindrome condition
    if (original == reversed)
        printf("%d is a Palindrome number.\n", original);
    else
        printf("%d is not a Palindrome number.\n", original);

    return 0;
}

