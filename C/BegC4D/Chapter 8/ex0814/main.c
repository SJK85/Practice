#include<stdio.h>

int main()
{
    float coordinate;

    printf("Input target coordinate: ");
    scanf("%f",&coordinate);

    if(coordinate>=-5&&coordinate<=5)
    {
        puts("Close enough!\n");
    }
    else
    {
        puts("Target is out of range!\n");
    }
    return(0);
}
