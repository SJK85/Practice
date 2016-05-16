#include<stdio.h>
#include<ctype.h>

int main()
{
    struct player
    {
        char name[32];
        int highscore;
        float hours;
    };

    struct player xbox;

    printf("Enter the players name: ");
    scanf("%s",xbox.name);
    printf("Enter their high score: ");
    scanf("%d",&xbox.highscore);
    printf("Enter their hours played: ");
    scanf("%f",&xbox.hours);
    xbox.name[0]=toupper(xbox.name[0]);

    printf("Player %s has a high score of %d with %.1f hours played.\n",xbox.name,xbox.highscore,xbox.hours);
    return 0;
}
