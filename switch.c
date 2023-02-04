#include<stdio.h>
void main()
{
    int a,b,c,ch;
    printf("Enter first number\n");
    scanf("%d",&a);
    printf("Enter second number\n");
    scanf("%d",&b);
    printf("Enter Your Choice(1-3)");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1 : c=a+b;
    printf("The sum = %d",c);
        break;
    case 2 : c=a-b;
    printf("The difference=%d",c);
        break;
    case 3 : c=a*b;
    printf("The product=%d",c);
        break;
    default:
        break;
    }

}