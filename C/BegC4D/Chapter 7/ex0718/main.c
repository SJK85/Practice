#include<stdio.h>

int main()
{
    char firstname[10], lastname[10];

    printf("First name: ");
    fgets(firstname,10,stdin);
    printf("Last name: ");
    fgets(lastname,10,stdin);
    printf("Nice to meet you %s %s.",firstname,lastname);
    return 0;
}
