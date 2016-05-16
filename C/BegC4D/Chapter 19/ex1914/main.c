#include<stdio.h>

int main()
{
    char sample[]="From whence cometh my help?\n";
    char *pn;
    pn=sample;

    while(putchar(*pn++));

    return(0);
}
