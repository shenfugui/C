#include <stdio.h>
#include <stdlib.h>

struct link 
{
	int data;
	struct link *next;
};

struct link *DeleteNode (struct link *head, int nodeData)
{
	struct link *p = head;
	struct link *pr = head;
	if (head == NULL)
	{
		printf("This linked table is empty!\n");
	}
	while (nodeData != p->data && p->next != NULL)
	{
		pr = p;
		p = p->next;
	}
	if (nodeData == p->data)
	{
		if (p == head)
		{
			head = p->next;
		}
		else
		{
			pr->next = p->next;
		}
		free(p);
	}
	else
	{
		printf("This Node has not been found1\n");
	}
	return head;
}

int main()
{
	struct link *head = NULL;
	
}