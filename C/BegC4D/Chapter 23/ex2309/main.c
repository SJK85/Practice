#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
    if(unlink("wambooli")==-1)
    {
        puts("I just can't kill that file!");
        exit(1);
    }
    puts("File killed");
    return(0);
}
