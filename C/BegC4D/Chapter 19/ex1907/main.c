#include<stdio.h>

int main()
{
    char alpha[26], *pn;
    int x;
    pn=alpha;

    for(x=0;x<26;x++)
    {
        *pn=x+'A';
        printf("alpha[%.2d] = %c\n",x+1,*pn);
        pn++;
    }

    return(0);
}
