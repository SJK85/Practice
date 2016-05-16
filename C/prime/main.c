#include<stdio.h>
#include<math.h>

int main()
{
    int range,x,y;
//  printf("Prime numbers up to: ");
    printf("Check if prime number: ");
    scanf("%d",&range);

    int set[range];

    for(x=0;x<range;x++)
        set[x]=x+1;

    for(x=2;x<range;x++)
    {
        for(y=1;y<sqrt(x);y++)
        {
            if((set[x]%set[y])==0)
                set[x]=9;
        }
    }
/*  will list all prime numbers in the range
    for(x=1;x<range;x++)
    {
        if(set[x]!=9)
        {
        printf("%d\t",set[x]);
        }
    }
*/
    if(set[range-1]!=9)
        printf("%d is a prime number!\n",set[range-1]);
    else
        printf("%d is not a prime number.",range);

    return(0);
}
