#include<stdio.h>
void main()
{
    int s,h,r,d,m;
    printf("Enter the time in Seconds:\n");
    scanf("%d",&s);
    h=s/360;
    r=s%360;
    m=r/60;
    d=r%60;
    printf("\n hour=%d , minutes=%d , seconds=%d",h,m,d);
}