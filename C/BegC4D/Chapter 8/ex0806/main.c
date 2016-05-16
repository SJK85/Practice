#include<stdio.h>

#define SECRET 17

int main()
{
    int guess;

    printf("Can you guess the secret number: ");
    scanf("%d",&guess);

    if(guess==SECRET)
    {
        printf("You guessed it!\n");
        return(0);
    }

    if(guess!=SECRET)
    {
        printf("Wrong!\n");
        return(1);
    }
}
