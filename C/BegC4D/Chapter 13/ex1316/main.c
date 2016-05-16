#include<stdio.h>

int main()
{
    char first[4][10]={"George","John","Thomas","James"};
    char last[4][15]={"Washington","Adams","Jefferson","Monroe"};
    int x=0;

    for(x=0;x<4;x++)
        printf("%-6s %s\n",first[x],last[x]);

    return(0);
}
