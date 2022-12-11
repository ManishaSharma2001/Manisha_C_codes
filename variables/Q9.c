#include <stdio.h>
int main()
{
    int x,y,result;
    printf("entre the value of x and y \n");
    scanf("%d%d",&x,&y);

    if(x>0 && y>0)
    {
        printf("both are positive so it is in 1st quadrant");
    }
    
    else if(x<0 && y<0)
    {
        printf("both are negative so it is in 3rd quadrant");
    }
    else if(x<0 && y>0)
    {
        printf("in quadrant 4");
    }
    else if(x>0 && y<0)
    {
        printf("in quadrant 2");
    }
    else
    {
        printf("it is on line or origin");
    }


    return 0;
}