#include <stdio.h>

float convert(float f);

int main()
{
    float temp_f;

    printf("Temperature in Fahrenheit:");
    scanf("%f",&temp_f);
    printf("%.1fF is %.1fC",temp_f,convert(temp_f));
    return(0);
}

float convert(float f)
{
    float t;
    t=(f-32)/1.8;
    return(t);
}