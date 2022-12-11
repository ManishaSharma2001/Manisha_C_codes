#include<stdio.h>
int main()
{
    int Maths,Phy,Chem,result;
    printf("marks in Maths,Phy,Chem\n");
    scanf("%d%d%d",&Maths,&Phy,&Chem);

    if(Maths>=65)
    {
        printf("eligible to pass");

    }
    elseif(Phy>=55)
    {
        printf("eligible to pass");
    }
    
    elseif(Chem>=50)
    {
        printf("eligible to pass");
    }
    else
    {
        printf("fail");
    }
    return 0;
}