#include<stdio.h>
int main()
{
    //  4/3*pi*r*r*r
    float radius,pi=3.14,result;
    printf("enter the radius :");
    scanf("%f",&radius);

    result=4.0/3.0*pi*radius*radius*radius;

    printf("the volume of sphere is %f \n",result);


    return 0;
}

// h.w : volume of cone => 1/3*pi*r*r*h;
// volume of cylinder => pi*r*r*h;
// volume of cube => r*r*r;
// area of triangle => 1/2*b*h;
// convert celsius to fahrenheit => (C × 9/5) + 32
// convert fahrenheit to celsius => (F − 32) × 5/9;
// convert miles to kilometer => 1.609*miles;
// simple interest => p*r*t/100;
// surface area of sphere => 4*pi*r*r;
// surface area of cylinder => 2*pi*r*r+2*pi*r*h;
// surface area of cube => 6*r*r;