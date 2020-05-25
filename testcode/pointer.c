#include <stdio.h>

void func(int (*p)[5]);

int main()
{
	int (*p)[5];
	// int a[3][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};
	int a[3][5];
	p = a;
	func(p);
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%4d",p[i][j]);
		}
		putchar('\n');
	}
	return 0;
}

void func(int (*p)[5])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{ 
			// printf("%4d",p[i][j]);
			scanf("%d",&p[i][j]);
		}
	}
}