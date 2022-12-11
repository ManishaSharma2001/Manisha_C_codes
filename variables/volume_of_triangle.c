#include<stdio.h>
int main()
{
    //  1/2*b*h
    float b,h,result;
    printf("enter b and h \n");
    scanf("%f%f",&b,&h);

    result=(1.0/2.0)*b*h;

    printf("the volume of triangle is %f \n",result);
    return 0;
}
