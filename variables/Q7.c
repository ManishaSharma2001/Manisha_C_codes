#include<stdio.h>
int main()
{
    int height,result;
    printf("entre the value of height \n ");
    scanf("%d", &height);

    if (height<100)
    {
        printf("small height");

    }
    else if (height<250)
    {
        printf("medium height");
    }
    else if(height<350)
    {
        printf("large height");
    }
    else
    {
        printf("extra tall or invalid length ");
    }
    return 0;

}