#include<stdio.h>

int main()
{
    int alpha, code;

    for(alpha='A';alpha<='G';alpha=alpha+1)
    {
        for(code=1;code<=7;code=code+1)
        {
            printf("%c%d\t",alpha,code);
        }
        putchar('\n'); /* makes end of line */
    }
    return(0);
}
