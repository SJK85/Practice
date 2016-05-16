#include<stdio.h>

int main()
{
    int count;

    for(count=25;count>0;count=count-1)
    {
        printf("%d,",count);
        if(count==1)
            printf("%d\n",count-1);
    }
    return(0);
}
