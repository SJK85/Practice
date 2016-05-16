#include<stdio.h>

int main()
{
    char *sample="From whence cometh my help?\n";
    char *s;
    s=sample;
    while(putchar(*sample++));
    sample=s;
    puts(sample);

    return(0);
}
