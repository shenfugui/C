#include <stdio.h>
#include <stdlib.h>

typedef struct _book {
    int number;
    char name[30];
    struct _book *next;
} book;

void AppendNode(book **head);

int main() {
    char choice;
    book *head;
    printf("Do you want to append a new node ?\n");
    scanf("%c", &choice);  
    while (choice == 'y' || choice == 'Y') {
        AppendNode(&head);
        printf("%d %s", head->number, head->name);
        scanf("%c", &choice);
    }
    return 0; 
}

void AppendNode(book **head) {
    book *info = NULL;
    info = (book *)malloc(sizeof(book));
    if (info != NULL) {
        printf("Please input the infomation:\n");
        scanf("%d %s", &info->number, info->name);
        *head = info;
        info->next = NULL;
    } else {
        printf("error!\n");
        exit(1);
    }
}