#include<stdio.h>

void graph(int count,char item);

int main()
{
    int value;
    char input;

    value=2;
    printf("Pick your character for graphing:");
    scanf("%c",&input);
    putchar('\n');
    while(value<64)
    {
        graph(value,input);
        printf("Value is %d\n",value);
        value=value*2;
    }

    return(0);
}

void graph(int count,char item)
{
    int x;

    for(x=0;x<count;x=x+1)
    {
        putchar(item);
    }
    putchar('\n');
}
