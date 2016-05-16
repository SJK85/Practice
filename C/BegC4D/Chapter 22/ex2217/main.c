//Interactive linked list program
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

struct typical {
    int value;
    struct typical *next;
    };

struct typical *first, *current, *new;

int menu(void);
void add(void);
void show(void);
void delete(void);
struct typical *create(void);

//Main function works with input only, everything else is handled by a function
int main()
{
    int choice='\0';
    first=NULL;

    while(choice!='Q')
    {
        choice=menu();
        switch(choice)
        {
        case 'S':
            show();
            break;
        case 'A':
            add();
            break;
        case 'R':
            delete();
            break;
        case 'Q':
            break;
        default:
            break;
        }
    }

    return(0);
}

//Display main menu and collect input
int menu(void)
{
    int ch;

    printf("S)how, A)dd, R)emove, Q)uit: ");
    ch=getchar();
    while(getchar()!='\n')
        ;
    return(toupper(ch));
}

//add an item to the end of a linked list
void add(void)
{
    if(first==NULL) //special case for first item
    {
        first=create();
        current=first;
    }

    else            //find last item
    {
        current=first;
        while(current->next)
            current=current->next;
        new=create();
        current->next=new;
        current=new;
    }

    printf("Type a value: ");
    scanf("%d",&current->value);
    current->next=NULL;
    while(getchar()!='\n')
        ;
}

//Display all structures in the linked list
void show(void)
{
    int count=1;

    if(first==NULL)
    {
        puts("Nothing to show.");
        return;
    }

    puts("Showing all records: ");
    current=first;
    while(current)
    {
        printf("Record %d: %d\n",count,current->value);
        current=current->next;
        count++;
    }
}

//Remove a record from the list
void delete(void)
{
    struct typical *previous;   //save previous
    int r,c;

    if(first==NULL)
    {
        puts("No records to remove");
        return;
    }

    puts("Choose a record to remove: ");
    show();
    printf("Record: ");
    scanf("%d",&r);
    while(getchar()!='\n')
        ;
    c=1;
    current=first;
    previous=NULL;
    while(c!=r)
    {
        if(current==NULL)   //ensure 'r' is in range
        {
            puts("Record not found");
            return;
        }

        previous=current;
        current=current->next;
        c++;
    }

    if(previous==NULL)
        first=current->next;
    else
        previous->next=current->next;
    printf("Record %d removed.\n",r);
    free(current);
}

//Build an empty structure and return it's address
struct typical *create(void)
{
    struct typical *a;

    a=(struct typical*)malloc(sizeof(struct typical));
    if(a==NULL)
    {
        puts("Some kind of malloc() error.");
        exit(1);
    }
    return(a);
}
