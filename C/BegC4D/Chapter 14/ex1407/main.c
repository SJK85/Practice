#include<stdio.h>

#define SIZE1 4
#define SIZE2 32

int main()
{
    struct scores
    {
        char name[32];
        int score;
    };

    struct scores player[4];
    struct scores temp;
    int x;
    int inner, outer, tempi;
    char tempc[32];

    for(x=0;x<4;x++)
    {
        printf("Enter player %d name: ",x+1);
        scanf("%s",player[x].name);
        printf("Enter player %d score: ",x+1);
        scanf("%d",&player[x].score);
    }

    for(outer=0;outer<SIZE1-1;outer++)
    {
        for(inner=outer+1;inner<SIZE1;inner++)
        {
            if(player[outer].score<player[inner].score)
            {
               temp=player[outer];
               player[outer]=player[inner];
               player[inner]=temp;
            }
        }
    }

    puts("Player Info");
    printf("#\tName\tScore\n");

    for(x=0;x<4;x++)
    {
        printf("%d\t%s\t%d\n",
               x+1,
               player[x].name,
               player[x].score);
    }

    return(0);
}
