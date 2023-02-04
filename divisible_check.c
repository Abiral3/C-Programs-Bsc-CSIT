#include<stdio.h>
void main()
{
    int a;
    printf("enter a number\n");
    scanf("%d",&a);
    if (a%5==0 && a%10!=0)
    {
        printf("The number is divisible by 5 and not divisible by 10");
    }
    else
    printf("Condition does not match!");
}