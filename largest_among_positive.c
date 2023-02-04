#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    if (a,b,c>0)
    {
        if (a>b && a>c)
        {
            printf("\n%d is the greatest num",a);
        }
        else if (b>a && b>c)
        {
            printf("\n%d is the greatest num",a);
        }
        else
            printf("\n%d is the greatest num",c);
        
    }
    else
    printf("\n One of the number is negative");
}