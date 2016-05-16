#include<stdio.h>
#include<ctype.h>

int main()
{
    char answer;

    printf("Would you like to blow up the moon? ");
    scanf("%c",&answer);
    answer=toupper(answer);
    if(answer=='Y')
        puts("BOOM!");
    else if(answer=='N')
        puts("That's pretty lame.");
    else
        puts("The moon is safe.");
    return 0;
}
