#include<stdio.h>
void main()
{
    int a, i, fact=1;
    printf("Enter the number \n");
    scanf("%d",&a);
    if (a==0)
    {
        printf("\nThe factorial of 0 = 1");
        
    }
    else{
    for ( i = 1; i <= a; i++)
    {
        fact=fact*i;
        
    }
    printf("\nThe factorial of %d = %d",a,fact);
    }
}