#include<stdio.h>
int main()
{
    int age_vote,result;
    printf("entre the age of candidate \n");
    scanf("%d",&age_vote);

    if(age_vote>=18)
    {
        printf("eligible to vote");

    }
    else if (age_vote<18)
    {
        printf("not eligible");
    }
    else
    {
            printf("not available");      
    }
    
    return 0;
}