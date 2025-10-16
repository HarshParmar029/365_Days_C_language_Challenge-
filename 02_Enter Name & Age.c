#include <stdio.h>

int main() {
    char a[50];   // Can store up to 50 characters
    int b;
    printf("Enter Your Name: ");
    scanf("%s", a);   // %s reads a word (no spaces)
    printf("Your Name is: %s\n", a);

    printf("Enter Your age: ");
    scanf("%d",&b);
    printf("Your age is: %d\n", b);
    return 0;
}
