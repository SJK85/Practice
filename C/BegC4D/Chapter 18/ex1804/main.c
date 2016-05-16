#include<stdio.h>

int main()
{
    int string[5]={1,2,3,4};

    printf("The string \"%s\"\n",string);
    printf("strlen\t%d\n",strlen(string));
    printf("sizeof\t%u\n",sizeof(string));

    return(0);
}
