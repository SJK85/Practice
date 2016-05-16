#include<stdio.h>

int main()
{
    char string[]="Does this string make me look fat?";

    printf("The string \"%s\"\n",string);
    printf("strlen\t%d\n",strlen(string));
    printf("sizeof\t%u\n",sizeof(string));

    return(0);
}
