#include<stdio.h>
#include<time.h>

int main()
{
    time_t tictoc;
    struct tm *today;

    time(&tictoc);
    today=localtime(&tictoc);

    if(today->tm_hour>12)
    {
    printf("The time is %.2d:%.2d:%.2d PM\n",
           today->tm_hour-12,
           today->tm_min,
           today->tm_sec);
    }
    else if(today->tm_hour==0)
    {
    printf("The time is %.2d:%.2d:%.2d AM\n",
           today->tm_hour+12,
           today->tm_min,
           today->tm_sec);
    }
    else
    {
    printf("The time is %.2d:%.2d:%.2d AM\n",
           today->tm_hour,
           today->tm_min,
           today->tm_sec);
    }
    return(0);
}
