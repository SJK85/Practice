#include<stdio.h>

int main()
{
    int hello[5]={1,2,3,4,5};
    int i=0;

    for(i=0;i<5;i++)
        printf("%d at %p\n",hello[i],&hello[i]);

    return 0;
}
