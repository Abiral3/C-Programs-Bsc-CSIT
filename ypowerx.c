#include<stdio.h>
void main()
{
    int x,y,i,z=1;
    printf("Enter the power");
    scanf("%d",&x);
    printf("Enter the base");
    scanf("%d",&y);
    for ( i = 1; i <=x; i++)
    {
        z=z*y;
    }
    printf("\n%d",z);
}