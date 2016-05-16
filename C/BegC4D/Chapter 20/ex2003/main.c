#include<stdio.h>
#include<stdlib.h>

int main()
{
    int tres[3];
    int *num;
    int x;

    num=(int*)malloc(sizeof(int)*4);
    if(tres==NULL)
        exit(1);

    num=tres;
    *num=0;
    for(x=0;x<3;x++)
        *num++=100*(x+1);
    for(x=0;x<3;x++)
        printf("%d,",tres[x]);

    return(0);
}
