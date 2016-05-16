#include<stdio.h>

int main()
{
    int count=0;

    for(;;)
    {
        printf("%d, ",count);
        count=count+1;
        if(count>49)
        {
            printf("%d\n",count);
            break;
        }
    }
    return(0);
}
