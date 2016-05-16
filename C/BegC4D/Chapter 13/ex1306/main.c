#include<stdio.h>
#include<ctype.h>

int main()
{
    char crap[]={"This is the example text. I don't know why it's important."};
    int index=0;

    printf("First example text:\n%s\n\n",crap);
    while(crap[index])
    {
        if(isspace(crap[index]))
            crap[index]='_';
        if(islower(crap[index]))
            crap[index]=toupper(crap[index]);
        else if(isupper(crap[index]))
            crap[index]=tolower(crap[index]);
        index++;
    }

    printf("Characters converted from example:\n%s\n",crap);
    return(0);
}
