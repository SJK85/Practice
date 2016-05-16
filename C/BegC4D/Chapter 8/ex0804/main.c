#include<stdio.h>

int main()
{
    int first,second;

    printf("Input first value: ");
    scanf("%d",&first);
    printf("Input second value: ");
    scanf("%d",&second);

    if(first<second)
    {
        printf("%d is less than %d.\n",first,second);
    }

    if(second<first)
    {
        printf("%d is greater than %d.\n",first,second);
    }

    return(0);
}
