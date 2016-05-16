#include<stdio.h>
#include<time.h>

int main()
{
    time_t tictoc;
    struct tm *today;

    time(&tictoc);
    today=localtime(&tictoc);
    printf("The time is %d:%d:%d\n",
           today->tm_hour,
           today->tm_min,
           today->tm_sec);

    return(0);
}
