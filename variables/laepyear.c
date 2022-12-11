#include<stdio.h>
int main()
{
    int year,result;
    printf("entre the value of year \n");
    scanf("%d",&year);

    if(year%4 == 0 && year%100 != 0) || year%400 == 0
    {
        printf("leap year !");

    }
    else if(year)
    else
    {
            printf("year is not");      
    }
    
    return 0;
}