#include<stdio.h>
void main()
{
    int a,i=0,b=0,c=0;
    printf("enter a number");
    scanf("%d",&a);
    while (b<=a)
    {
        if(b%2!=0)
        {
            c=c+b;
        }
        b++;
        
    }
    printf("The sum of odd numbers is %d",c);
}