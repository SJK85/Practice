#include <stdio.h>
#include <math.h>

#define PI 3.14159*2
#define WAVELENGTH 35
#define PERIOD .1

int main()
{
    float graph,s,x;

    for(graph=0;graph<PI;graph+=PERIOD)
    {
        s=cos(graph);
        s+=1;
        for(x=0;x<s*WAVELENGTH;x++)
            putchar('*');
        putchar('\n');
    }
    return(0);
}
