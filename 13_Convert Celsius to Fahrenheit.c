#include<stdio.h>
int main()
{   float c,f;
    printf("Enter Celsius Value: ");
    scanf("%f",&c);
    f=9*c/5+32;
    printf("Fahrenheit Value: %.2f",f);
    //If Asked 1 Variable ,SO Method is:
    // printf("Fahrenheit Value: %.2f",9*c/5+32);
    return 0;
}
