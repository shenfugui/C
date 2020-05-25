#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *p;
	p = (int *)malloc(sizeof(int));
	if (p == NULL)
	{
		printf("error\n");
		exit(1);
	}
	scanf("%d",p);
	printf("%d\n",*p);
	return 0;
}