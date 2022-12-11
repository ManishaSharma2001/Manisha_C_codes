#include<stdio.h>
int main()
{
    int a,n,d,i,temp;
    printf("entre the value of a and n and d");
    scanf("%d%d%d", &a,&n,&d);

    for(i=0; i<n; i++)
    {
        temp= a+i*d;
        printf("%d ",temp);
    }


    return 0;
}