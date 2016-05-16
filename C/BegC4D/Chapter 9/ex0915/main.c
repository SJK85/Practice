#include<stdio.h>

int main()
{
    float x=-5;
    while(x<=5)
    {
        printf("%.1f\t",x);
        x=x+.5;
    }
    return(0);
}
