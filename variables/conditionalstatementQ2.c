#include<stdio.h>
int main()
{
    int num1,result;
    printf("entre the value of num1 and num2\n");
    scanf("%d",&num1);

    if (num1%2 == 0)
    {
        printf("even number");
    }
    else
    {
        printf("odd");
    }

    return 0;
}