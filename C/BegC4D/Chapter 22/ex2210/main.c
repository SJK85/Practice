#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *dumpme;
    char filename[255];
    int x,c;

    printf("File to dump: ");
    scanf("%s",filename);
    dumpme=fopen(filename,"r");
    if(!dumpme)
    {
        printf("Unable to open '%s'\n",filename);
        exit(1);
    }
    x=0;
    while((c=fgetc(dumpme))!=EOF)
    {
        printf("%02X ",c);
        x++;
        if(!(x%16))
            putchar('\n');
    }
    putchar('\n');
    close(dumpme);
    return(0);
}
