#include<stdio.h>
int main()
{
    float p,r,t;
    printf("Enter (initial amount of money boeeowed or invested)");
    scanf("%f",&p);
    printf("Enter (Annual interest rate,expressed as a percentage)");
    scanf("%f",&r);
    printf("Enter (duration for which the money is borrowed or invested,in years)");
    scanf("%f",&t);

    printf("Interest Value= %.2f",p*r*t/100);s
    return 0;
}
