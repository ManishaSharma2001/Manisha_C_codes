#include<stdio.h>
int main ()
{
    int num1, num2, result;
    printf("entre the two number");
    scanf("%d %d", &num1 ,&num2);
    result =(num1 > num2)? num1:num2;
    printf("the result is %d",result);
    return 0;
}