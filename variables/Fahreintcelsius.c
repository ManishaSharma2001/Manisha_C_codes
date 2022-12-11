#include<stdio.h>
int main()
{
    float F,celsius;
    printf ("entre the value in fahrenheit\n");
    scanf("%f",&F);
    celsius=(F-32)*5/9;
    printf("the celsius is %f",celsius);
    return 0;

}
