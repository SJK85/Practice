#include<stdio.h>

int main()
{
    float alpha;

    alpha=501;
    printf("alpha = %.1f\n",alpha);
    alpha+=99;
    printf("alpha = %.1f\n",alpha);
    alpha-=250;
    printf("alpha = %.1f\n",alpha);
    alpha/=82;
    printf("alpha = %.1f\n",alpha);
    alpha*=43;
    printf("alpha = %.1f\n",alpha);
    return 0;
}
