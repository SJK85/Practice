#include<stdio.h>

int verify(int value);
void limit(int stop);

int main()
{
    int s,x;

    for(x=1;x==1;x=verify(s))
    {
        printf("Enter a stopping value (0-100): ");
        scanf("%d",&s);
    }
    limit(s);
    return(0);
}

int verify(int value)
{
    if (value<=100)
    {
        if(value>=0)
        {
            return(0);
        }
    }
    printf("Invalid number.\n");
    return(1);
}

void limit(int stop)
{
    int x;

    for(x=0;x<=100;x=x+1)
    {
        printf("%d ",x);
        if(x==stop)
        {
            puts("\nYou win!");
            return(0);
        }
    }
    puts("I win!");
}
