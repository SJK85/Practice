#include<stdio.h>

int main()
{
    int c;

    printf("I'm waiting for the character: ");

    c=getc(stdin);

    printf("I've waited for the '%c' character.",c);

    return 0;

}
