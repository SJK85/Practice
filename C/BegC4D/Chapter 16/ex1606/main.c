#include<stdio.h>

void proc(void);

int main()
{
    puts("First Call");
    proc();
    puts("Second Call");
    proc();
    return(0);
}

void proc(void)
{
    static int a;

    printf("The value of the variable a is %d\n",a);
    printf("Enter new value: ");
    scanf("%d",&a);
}
