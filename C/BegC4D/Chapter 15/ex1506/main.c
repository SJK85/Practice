#include<stdio.h>
#include<stdlib.h>

int main()
{
    printf("Press Enter to clear the screen:");
    getchar();
/*  system("cls");      Windows command */
    system("clear");    /* Mac - Unix */
    puts("That's better");
    return(0);
}
