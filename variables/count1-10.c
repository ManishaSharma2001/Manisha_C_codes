#include<stdio.h>
int main()
{
    int a,n ;
    printf("entre the value of number");
    scanf("%d", &n);

    // for(a=1; a<=n ;a++)
    // {
    //     printf("%d\n",a);
    // }
    for(a=n; a>0; a--)
    {
        printf("%d \n",a);
    }
    return 0;
}