#include<stdio.h>

int main()
{
    char input[64];
    int ch;
    int x=0;

    printf("type in some text: ");
    fgets(input,63,stdin);

    while(input[x]!='\n')
    {
        ch=input[x]&255;
        putchar(ch);
        x++;
    }
    putchar('\n');
    return(0);
}
