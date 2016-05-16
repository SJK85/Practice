#include<stdio.h>

#define SIZE 3

int main()
{
    char president[SIZE][8]={
    "Clinton",
    "Bush",
    "Obama"
    };

    int x,index;

    for(x=0;x<SIZE;x++)
    {
        puts(president[x]);
    }
    return 0;
}
