#include<stdio.h>

int main()
{
    char *fruit[]=
    {
        "watermelon",
        "banana",
        "pear",
        "apple",
        "coconut",
        "grape",
        "blueberry"
    };

    int x=0;

    while(puts(*(fruit+(x++))));  //Solution with while instead
   // for(x=0;x<7;x++)              Solution asked for
   //     puts(*(fruit+x));

    return(0);
}
