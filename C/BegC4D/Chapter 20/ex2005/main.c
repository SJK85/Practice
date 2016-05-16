#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *input,*second,*place;

    input=(char*)malloc(sizeof(char)*1024);
    second=(char*)malloc(sizeof(char)*1024);
    if(input==NULL|second==NULL)
    {
        puts("Unable to allocate memory.");
        exit(1);
    }
    place=second;
    puts("Type something long and boring:");
    fgets(input,1023,stdin);
    while(*input!='\n')
        *second++=*input++;
    puts("You wrote:");
    second=place;
    printf("\"%s\"\n",second);

    return(0);
}
