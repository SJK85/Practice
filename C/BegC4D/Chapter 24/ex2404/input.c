#include "ex2404.h"

extern human person;

void fillstructure(void)
{
    printf("Enter your name: ");
    scanf("%s",person.name);
    printf("Enter your age: ");
    scanf("%d",&person.age);
}
