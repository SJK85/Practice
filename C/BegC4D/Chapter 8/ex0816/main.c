#include<stdio.h>

int main()
{
    char maybe;

    printf("Answer with \"y\" for yes, or \"n\" for no.\nHave you ever had sex with a goat? "), scanf("%c",&maybe);

    if(maybe=='y'||maybe=='Y')
        printf("\nWow, just wow...\nThat is messed up.\n");
    else if(maybe=='n'||maybe=='N')
        printf("\nThat's a relief.\nYou wouldn't believe what the last guy said...\n");
    else
        printf("\nStop trying to avoid the question!\n");
    return(0);
}
