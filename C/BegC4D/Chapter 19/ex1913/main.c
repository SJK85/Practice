#include<stdio.h>

int main()
{
    char sample[]="From whence cometh my help?\n";
    char *pn;
    pn=sample;

    while(*pn)
        putchar(*pn++);

    return(0);
}
