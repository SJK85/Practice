#include<stdio.h>

int main()
{
    char name[4];

    printf("What is your name? ");
    fgets(name,4,stdin);
    printf("Nice to meet you, %s.\n",name);
    return 0;
}
