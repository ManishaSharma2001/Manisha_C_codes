#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("term ki value daalo :");
    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        printf("%d  ",i);
        sum=sum+i;
    }
    printf("\nthe sum is %d \n",sum);
    return 0;
}