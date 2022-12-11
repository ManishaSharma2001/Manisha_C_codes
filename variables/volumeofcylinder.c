#include<stdio.h>
int main ()
{
    // pi*r*r*h
    float r,h,pi=3.14,result;
    printf("entre the value of r and h \n");
    scanf("%f%f",&r,&h);
    result= pi*r*r*h;
    printf("the volume of cylinder is %f \n",result);
    return 0;
}