#include<stdio.h>

int main()
{
    char firstname[16];
    char lastname[16];

    printf("What is your first name? ");
    scanf("%15s",&firstname);
    printf("And your last name? ");
    scanf("%15s",&lastname);
    printf("Pleased to meet you %s %s.\n",firstname, lastname);
    return(0);
}
