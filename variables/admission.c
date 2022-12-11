#include<stdio.h>
int main()
{
    int marks;
    printf("enter the marks ");
    scanf("%d",&marks);

    if (marks>=90)
    {
        printf("u got DU \n");
        if (marks == 100)
        {
            printf(" u got 1 lac. scholarship !");
        }
    }
    else if (marks>=80)
    {
        printf("u got IPU \n");
    }
    else if (marks>=60)
    {
        printf("u got Amity \n");
    }
    else
    {
        printf("Fail ! Sell Tea");
    }
    
}