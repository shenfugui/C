#include <stdio.h>
#include <stdlib.h>

typedef struct book
{
    char author[10];
    char name[10];
    int number;
    struct book *next;
}Book;

void AppendBook(Book *head);

int main()
{
    Book *head = NULL;
    printf("Do you want to append a new node?(y/n)\n");
    char choice;
    scanf("%c",&choice);
    if (choice == 'y' || choice == 'Y')
    {
        AppendBook(head);
    }
    return 0;
}

void AppendBook(Book *head)
{
    Book *p = NULL;
    p = (Book *)malloc(sizeof(Book));
    head = p;
    Book *pr = head;
    printf("Please enter information:\n");
    while (getchar() != '\n');
    gets(p->author);
    gets(p->name);
    scanf(" %d",&p->number);
    puts(p->author);
    puts(p->name);
    printf("%d",p->number);
    p->next = NULL;
    pr = p;
}

