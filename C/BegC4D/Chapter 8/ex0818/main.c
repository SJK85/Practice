#include<stdio.h>

int main()
{
    char error;

    printf("Enter error code (A, B,or C): "),scanf("%c",&error);

    switch(error)
    {
        case 'A':
        case 'a':
            puts("Drive Fault, not your fault.");
            break;
        case 'B':
        case 'b':
            puts("Illegal format, call a lawyer.");
            break;
        case 'C':
        case 'c':
            puts("Bad filename, spank it.");
            break;
        default:
            puts("Needs A, B, or C input.");
    }

    return(0);
}
