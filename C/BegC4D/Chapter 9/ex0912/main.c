#include<stdio.h>

int main()
{
    int one,two,three,count;

    count=0;

    for(one='A';one<='Z';one=one+1)
    {
        for(two='A';two<='Z';two=two+1)
        {
            for(three='A';three<='Z';three=three+1,count=count+1)
            {
                printf("%c%c%c\n",one,two,three);
            }
        }
    }
    printf("\n%d combinations",count);
    return(0);;
}
