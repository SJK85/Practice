#include "ex2403.h"

human person;

int main()
{
    fillstructure();
    printstructure();
    return(0);
}

void fillstructure(void)
{
    printf("Enter your name: ");
    scanf("%s",person.name);
    printf("Enter your age: ");
    scanf("%d",&person.age);
}

void printstructure(void)
{
    printf("You are %s.\n",person.name);
    printf("And you are %d years old.\n",person.age);
}
