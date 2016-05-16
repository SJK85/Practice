#include<stdio.h>

#define SIZE 21

int main()
{
    int inner,outer,temp;
    char prog[]="C programming is fun!";

    puts("Original Statement:");
    puts(prog);

    for(outer=0;outer<SIZE;outer++)
    {
        for(inner=outer+1;inner<SIZE;inner++)
        {
            if(prog[outer]<prog[inner])
            {
                temp=prog[outer];
                prog[outer]=prog[inner];
                prog[inner]=temp;
            }
        }
    }

    puts("Sorted Statement:");
    puts(prog);
    return(0);
}
