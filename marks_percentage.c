// WAP to read marks of five subjects and display marks and percentage
#include <stdio.h>
void main()
{
    int eng,nep,comp,math,phy,total,per;
    printf("Enter the marks of English:\n");
    scanf("%d",&eng);
    printf("Enter the marks of Nepali:\n");
    scanf("%d",&nep);
    printf("Enter the marks of Computer:\n");
    scanf("%d",&comp);
    printf("Enter the marks of Math:\n");
    scanf("%d",&math);
    printf("Enter the marks of Physics:\n");
    scanf("%d",&phy);
    total=nep+eng+comp+math+phy;
    per=(float)total/5;
    if(eng>=35&&nep>=35&&comp>=35&&math>=35&&phy>=35)
    {
        if(per>=80)
        printf("\n Distinction");
        else if(per>=60)
        printf("\n First Division");
        else if (per>=45)
        printf("\n Second Division");
        else
        printf("\n Third Division");
    }
else
printf("Sorry! you failed.");
}