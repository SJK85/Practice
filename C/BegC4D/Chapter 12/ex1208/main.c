#include<stdio.h>

int main()
{
    char sentence[]="Random Text";
    int index;

    index=0;
    while(sentence[index]!='\0')
    {
        putchar(sentence[index]);
        index++;
    }

    putchar('\n');
    return(0);
}
