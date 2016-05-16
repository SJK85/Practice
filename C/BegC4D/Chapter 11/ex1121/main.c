#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int guess,secret;

    srand((unsigned)time(NULL));
    secret=rand();
    secret%=20+1;
    while(guess!=secret)
    {
    printf("Can you guess the secret number between 1-20: ");
    scanf("%d",&guess);

    if(guess==secret)
    {
        printf("You guessed it!\n");
        return(0);
    }

    if(guess!=secret)
    {
        printf("Wrong!\n");
    }
    }
    return(0);
}
