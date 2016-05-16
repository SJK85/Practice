#include<stdio.h>
#include<time.h>

int main()
{
    time_t tictoc;
    int x;

    for(x=0;x<20;x++)
    {
        tictoc=time(NULL);
        printf("The time is now %ld\n",tictoc);
    }
    return 0;
}
