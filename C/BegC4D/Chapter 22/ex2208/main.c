#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *handle;
    int highscore,x;

    handle=fopen("scores.dat","w");
    if(!handle)
    {
        puts("File error!");
        exit(1);
    }
    for(x=0;x<5;x++)
    {
    printf("What is your number %d score? ",x+1);
    scanf("%d",&highscore);
    fwrite(&highscore,sizeof(int),1,handle);
    }
    fclose(handle);
    puts("Score saved.");
    return(0);
}
