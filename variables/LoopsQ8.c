#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("entre the value of number\n");
    scanf("%d", &n);

    for(i=1; i<=n*2; i++)
    {
        if (i%2 != 0)
        {
            printf("%d ",i);
            sum=sum+i;
        }
    }
    printf("\nthe sum of odd numbers is %d \n",sum);
    return 0;
}