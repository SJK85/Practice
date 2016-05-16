#include<stdio.h>
#include<math.h>

int main()
{
    int first[7]={10,12,14,15,16,18,20};
    int x;
    float root[7];

    for(x=0;x<7;x++)
        root[x]=sqrt(first[x]);

    for(x=0;x<7;x++)
    {
        printf("The square-root of %d is %.2f\n",first[x],root[x]);
    }

    return(0);
}
