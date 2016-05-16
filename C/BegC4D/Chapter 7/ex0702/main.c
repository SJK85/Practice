#include<stdio.h>

int main()
{
    int c;

    printf("I'm waiting for the character: ");

    c=getchar();

    printf("I've waited for the '%d' character.",c);

    return(0);

}
