#include <stdio.h>
int main()
{
    int num1, num2, num3, result;
    printf("entre the value of num1 and num2 and num3 \n");
    scanf("%d%d%d", &num1, &num2, &num3);

    // if(num1>num2 && num1>num3)
    // {
    //     printf("%d is largest\n",num1);
    // }
    // else if (num2 > num3 && num2>num1)
    // {
    //     printf("%d is largest\n",num2);
    // }
    // else
    // {
    //     printf("%d is greater \n",num3);
    // }

    if (num1 > num2)
    {
        if (num2 > num3)
        {
            printf(" %d is greatest \n", num1);
        }
        else
        {
            printf("%d is the largest number.", num3);
        }
    }
    else if (num2 > num3)
    {
        printf("%d is greatest\n", num2);
    }
    else
    {
        printf("%d is greatest \n", num3);
    }

    return 0;
}