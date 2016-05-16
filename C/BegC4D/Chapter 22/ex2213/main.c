#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    struct entry{
        char actor[32];
        int year;
        char title[32];
    };
    struct entry bond,bond1,bond2;
    FILE *a007;

    strcpy(bond.actor,"Sean Connery");
    bond.year=1962;
    strcpy(bond.title,"Dr. No");

    strcpy(bond1.actor,"Roger Moore");
    bond1.year=1973;
    strcpy(bond1.title,"Live and Let Die");

    strcpy(bond2.actor,"Pierce Brosnan");
    bond2.year=1995;
    strcpy(bond2.title,"Goldeneye");

    a007=fopen("bond.db","a");
    if(!a007)
    {
        puts("Spectre Wins!");
        exit(1);
    }
    fwrite(&bond1,sizeof(struct entry),1,a007);
    fwrite(&bond2,sizeof(struct entry),1,a007);
    fclose(a007);
    puts("Record written.");

    return(0);
}
