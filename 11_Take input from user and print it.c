#include<stdio.h>
int main()
{
    int a;
    float b;
    char c;

    printf("Enter Only Integer Value\n");
    scanf("%d", &a);

    printf("Enter Only Float Value\n");
    scanf("%f", &b);

    printf("Enter Only Character Value\n");
    scanf(" %c", &c);
    printf("Integer Value : %d\n", a);
    printf("Float Value : %f\n", b);
    printf("Character Value : %c\n", c);

    return 0;
}
