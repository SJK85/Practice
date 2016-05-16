#include<stdio.h>

int main()
{
    int i;
    float f;

    int *o;
    float *p;
    o=&i;p=&f;
    *o=42;*p=1.2345;
    printf("Values are:\n%d\t%.4f",i,f);

    return(0);
}
