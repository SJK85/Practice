#include<stdio.h>

int main()
{
    int i=1;
    int *p;

    p=&i;
    printf("%d\n",*p);

    return(0);
}
