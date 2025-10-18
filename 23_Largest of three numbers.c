#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
        printf("Largest number is: %d\n", a);// a is largest
    else if (b >= a && b >= c)
        printf("Largest number is: %d\n", b);//b is largest
    else
        printf("Largest number is: %d\n", c);//c is largest

    return 0;
}

