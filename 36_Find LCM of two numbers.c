#include <stdio.h>
int main() {
    int num1, num2, max;
    printf("Enter two numbers: \n");
    scanf("%d %d", &num1, &num2);

    max = (num1 > num2) ? num1 : num2; // Start from the greater number

    while (1) {
        if (max % num1 == 0 && max % num2 == 0) {
            printf("LCM = %d", max);
            break;
        }
        max++;
    }

    return 0;
}

