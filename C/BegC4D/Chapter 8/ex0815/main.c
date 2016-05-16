#include<stdio.h>

int main()
{
    int coordinate;

    printf("Input target coordinate: "),scanf("%d",&coordinate);

    if(coordinate<-5||coordinate>5)
        printf("Close enough!\n");
    else
        printf("Target is out of range!\n");
    return(0);
}
