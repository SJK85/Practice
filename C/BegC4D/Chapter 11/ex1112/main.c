#include<stdio.h>
#include<math.h>

int main()
{
    int power,value;
    for(power=0;power<11;power++)
    {
        value=pow(2,power);
        printf("2 to the %d power is %d\n",power,value);
    }
    return 0;
}
