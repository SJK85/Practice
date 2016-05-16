#include<stdio.h>

void prompt();
void busy();

int main()
{
    busy();
    return(0);
}

void prompt()
{
    printf("C:\\DOS> ");
}

void busy()
{
    int loop;
    char input[32];
    loop=0;
    while(loop<5)
    {
        prompt();
        fgets(input,31,stdin);
        loop=loop+1;
    }
}
