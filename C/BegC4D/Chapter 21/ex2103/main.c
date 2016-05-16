#include<stdio.h>
#include<time.h>

int main()
{
    time_t tictoc;
    int x;

    time(&tictoc);
    printf("The time is now %ld\n",tictoc);
    tictoc=time(NULL);
    printf("The time is now %ld\n",tictoc);
    return 0;
}
