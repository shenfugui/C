#include <stdio.h>
#include <stdlib.h>

struct link *AppendNode (struct link *head); 

void DisplayNode (struct link *head);

void DeleteMemory (struct link *head);

struct link
{
	int data;
	struct link *next;
};

int main()
{
	int i = 0;
	char c;
	struct link *head = NULL; 
	printf("Do you want to append a new node(Y/N)?\n");
	scanf(" %c",&c);
	while (c == 'y' || c == 'Y')
	{
		head = AppendNode(head);
		DisplayNode(head);
		printf("Do you want to append a new node(Y/N)?\n");
		scanf(" %c",&c);
		i++;
	}
	printf("%d new nodes have been appended!\n",i);
	DeleteMemory(head);
	return 0;
}

struct link *AppendNode (struct link *head)
{
	struct link *p = NULL;
	struct link *pr = head;
	int data;
	p = (struct link *)malloc(sizeof(struct link));
	if (p == NULL)
	{
		printf("No enough memory to allocate!\n");
		exit(0);
	}
	if (head == NULL)
	{
		head = p;
	}
	else 
	{
		while (pr->next != NULL)
		{
			pr = pr->next;
		}
		pr->next = p;
	}
	printf("Input node data:\n");
	scanf("%d",&data);
	p->data = data;
	p->next = NULL;
	return head;
}

void DisplayNode (struct link *head)
{
	struct link *p = head;
	int j = 1;
	while (p != NULL)
	{
		printf("%5d%10d\n",j,p->data);
		p = p->next;
		j++;
	}
}

void DeleteMemory (struct link *head)
{
	struct link *p = head;
	struct link *pr = NULL;
	while (p != NULL)
		{
			pr = p;
			p = p->next;
			free(pr);
		}
}