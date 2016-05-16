#include<stdio.h>

#define SECRET 17

int main()
{
    int guess;

    printf("Can you guess the secret number: ");
    scanf("%d",&guess);
    if(guess==SECRET)
    {
        printf("You guessed it!");
        return(0);
    }
    else
    {
        printf("Wrong!");
        return(1);
    }
}
