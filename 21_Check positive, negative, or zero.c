#include<stdio.h>
int main()
{
    int a;
    printf("Enter Any Number ");
    scanf("%d",&a);
    if(a>0)
    {
     printf("This Number is Positive");
    }
    else if (a<0)
    {
        printf("This Number is Negative");
    }
    else
        {
            printf("ZERO");
        }
    return 0;
}
