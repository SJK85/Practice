#include<stdio.h>

int main()
{
    char alpha[27], *pn;
    int x;
    pn=alpha;

    for(x=0;x<26;x++)
        *pn++=x+'A';

    pn=alpha;

    for(x=0;x<26;x++)
    {
        putchar(*pn);
        pn++;
    }
    putchar('\n');

    return 0;
}
