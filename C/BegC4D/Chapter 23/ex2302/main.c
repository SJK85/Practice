#include<stdio.h>
#include<stdlib.h>
#include<dirent.h>

int main()
{
    DIR *folder;
    struct dirent *file;

    folder=opendir(".");
    if(folder==NULL)
    {
        puts("Unable to read directory");
        exit(1);
    }
    file=readdir(folder);
    while(printf("Found the file '%s'\n",file->d_name))
        file=readdir(folder);
    closedir(folder);
    return(0);
}
