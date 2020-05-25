#include <stdio.h>

int func(int n);

int main()
{
	int n[100];
	int i = 0;
	scanf("%d",&n[i]);
	while (n[i] != 0)
	{
		i++;
		scanf("%d",&n[i]);
	}
	for (int j = 0; j < i; j++)
	{
		int result = func(n[j]);
		printf("%d\n",result);
	}
	return 0;
}

int func(int n)
{
	int count = 0;
	if (n <= 4)
	{
		count = n;
	}
	else
	{
		count = func(n-1) + func(n-3);
	}
	return count;
}