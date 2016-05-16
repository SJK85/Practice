#include<stdio.h>

int main()
{
    int numbers[10];
    int x;
    int *pn;

    pn=numbers;

    for(x=0;x<10;x++)
    {
        *pn=x+1;
        pn++;
    }

    for(x=0;x<10;x++)
    {
        printf("numbers[%d] = %d\t\t%p\n",x+1,numbers[x],&numbers[x]);
    }

    return(0);
}
