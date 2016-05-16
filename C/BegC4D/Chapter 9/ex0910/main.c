#include<stdio.h>

int main()
{
    char lower;

    for(lower='z';lower>='a';lower=lower-1)
    {
        printf("%c,",lower);
        if(lower=='a')
            printf("\b ");
    }
    printf("\n");
}
