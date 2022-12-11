#include<stdio.h>
int main()
{
    int num1,num2,result;
    printf("entre the value of num1 and num2\n");
    scanf("%d%d",&num1,&num2);
    // result=num1==num2;
    // if (result)
    if(num1==num2)
    {
         printf("both are equal");
    }
    else
    {
        printf("both are not equal");
    }
    return 0;
}