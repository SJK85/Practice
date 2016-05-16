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

    int x,y;

    for(x=0;x<7;x++)
    {
        y=0;
        while(putchar(*(*(fruit+x)+y++)));
        putchar('\n');
    }

    return(0);
}
