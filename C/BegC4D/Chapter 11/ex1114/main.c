#include <stdio.h>

int main()
{
    float degrees,radians;

    printf("Enter an angle in radians: ");
    scanf("%f",&radians);
    degrees=radians/0.0174532925;
    printf("%.2f radians equals %.2f degrees.\n",radians,degrees);
    return 0;
}
