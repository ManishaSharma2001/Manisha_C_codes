#include<stdio.h>
int main()
{
    int num1,result;
    printf("entre the value of num1 \n");
    scanf("%d",&num1);

    if(num1>0)
    {
        printf("positive number");

    }
    else if (num1<0)
    {
        printf("negitive number");
    }
    else
    {
            printf("zero number");      
    }
    
    return 0;
}