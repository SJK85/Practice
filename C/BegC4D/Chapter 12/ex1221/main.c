#include<stdio.h>

int main()
{
    char tictactoe[3][3][3];
    int x,y,z;

//Initialize Matrix
    for(x=0;x<3;x++)
        for(y=0;y<3;y++)
            for(z=0;z<3;z++)
                tictactoe[x][y][z]='.';
    tictactoe[1][1][1]='X';

//Display board
    puts("Ready to play Tic-Tac-Toe?");
    for(z=0;z<3;z++)
    {
        for(x=0;x<3;x++)
        {
            for(y=0;y<3;y++)
                printf("%c\t",tictactoe[x][y][z]);
            putchar('\n');
        }
    }

    return 0;
}
