#include<stdio.h>

int main()
{
    int count;

    for(count=11;count<=19;count=count+1)
    {
        printf("%d\t",count);
        if(count==19)
            printf("\n");
    }

    return(0);
}
