#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>

int main()
{
    char curdir[255];

    getcwd(curdir,255);
    printf("Current directory is '%s'\n",curdir);
    if(mkdir("very_temporary",755)==-1)
    {
        puts("Error creating directory. Exiting now.");
        exit(1);
    }
    puts("New directory created.");
    if(chdir("very_temporary"))
    {
        puts("Error changing directory. Exiting now.");
        exit(1);
    }
    getcwd(curdir,255);
    printf("Current directory is '%s'\n",curdir);
    return(0);
}
