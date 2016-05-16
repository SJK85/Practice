#include<stdio.h>

#define SIZE 40

int main()
{
    int bubble[SIZE];
    int inner, outer,temp,x;

    srand((unsigned)time(NULL));
    for(x=0;x<40;x++)
    {
        bubble[x]=rand();
        bubble[x]%=100;
        bubble[x]+=1;
    }

/* Display original array */
    puts("Original Array: ");
    for(x=0;x<SIZE;x++)
        printf("%d\t",bubble[x]);
    putchar('\n');

// Bubble Sort
    for(outer=0;outer<SIZE;outer++)
    {
        for(inner=outer+1;inner<SIZE;inner++)
        {
            if(bubble[outer]>bubble[inner])
            {
                temp=bubble[outer];
                bubble[outer]=bubble[inner];
                bubble[inner]=temp;
            }
        }
    }
// Display sorted Array
    puts("Sorted Array: ");
    for(x=0;x<SIZE;x++)
        printf("%d\t",bubble[x]);
    putchar('\n');
    return 0;
}
