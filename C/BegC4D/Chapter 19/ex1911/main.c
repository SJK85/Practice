#include<stdio.h>

int main()
{
    float temps[5]={58.7,62.8,65.0,63.3,63.2};
    float *p;
    p=temps;

    printf("The temperature on Tuesday will be %.1f\n",*(p+1));
    printf("The temperature on Friday will be %.1f\n",*(p+4));

    return(0);
}
