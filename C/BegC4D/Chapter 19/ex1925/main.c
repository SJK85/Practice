#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void create(int *a);
void show(int *a);

int main()
{
    int numbers[10];

    create(numbers);
    show(numbers);

    return(0);
}

void create(int *a)
{
    int x;

    srandom((unsigned)time(NULL));

    for(x=0;x<10;x++)
    {
        *a++=(((random())%10)+1);
    }
}

void show(int *a)
{
    while(*a)
        printf("%d\n",*a++);
}
