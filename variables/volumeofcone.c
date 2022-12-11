#include<stdio.h>
int main()
{
    float r,h,p=3.14,result;
    printf("entre the value of r and h\n");
    scanf("%f%f",&r,&h);
    result=1.0/3.0*p*r*h;
    printf("the volume of cone is %f \n",result);
    return 0;
}