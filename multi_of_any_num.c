#include<stdio.h>
void main()
{
    int a,b,i;
    printf("Enter the number \t");
    scanf("%d",&a);
    for ( i = 1; i <= 10; i++)
    {
       b=a*i;
       printf("\n%d x %d = %d",a,i,b); 
    }
    
}