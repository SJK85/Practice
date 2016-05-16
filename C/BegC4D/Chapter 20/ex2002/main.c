#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *temp;
    char *degree;

    degree=(char*)malloc(sizeof(char)*1);
    temp=(float*)malloc(sizeof(float)*1);
    if(degree==NULL|temp==NULL)
        exit(1);
    printf("What is the temperature outside? ");
    scanf("%f",temp);
    printf("Celsius (C) or Fahrenheit (F)? ");
    while(*degree!='f'&*degree!='c')
        scanf("%c",degree);
    if(*degree=='f')
        printf("It is %.2f degrees Kelvin.\n",(*temp+459.67)*5/9);
    else if(*degree=='c')
        printf("It is %.2f degrees Kelvin.\n",*temp+273.15);
    return(0);
}
