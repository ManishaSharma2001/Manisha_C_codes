#include<stdio.h>
int main()
{
    int m,n,result;
    printf("entre the value of n \n");
    scanf("%d",&m);

    if(m>0)
    {
        n=1;
        printf(" n =%d \n",n);
    }
    else if(m<0)
    {
        n=-1;
        printf(" n =%d \n",n);
    }
    else
    {
        n=0;
        printf(" n =%d \n",n);
    }
    
    
    
    return 0;
}