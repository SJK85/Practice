#include<stdio.h>
#include<stdlib.h>

int main()
{
    char *input;

    input=(char*)malloc(sizeof(char)*1024);
    if(input==NULL)
    {
        puts("Unable to allocate buffer! Oh no!");
        exit(1);
    }

    puts("Puts something long and boring:");
    fgets(input,1023,stdin);
    puts("You wrote:");
    printf("\"%s\"\n",input);

    return(0);
}
