#include<stdio.h>
void main()
{
    int i=1;
    label1:
    printf("%d\n",i);
    i++;
    if (i<=10)
    {
        goto label1;
    }
}