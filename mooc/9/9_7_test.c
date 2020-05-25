//完全数

#include <stdio.h>

int main()
{
	int m;
	printf("Input m:\n");
	scanf("%d",&m);
	int a[20];
	int count = 0;
	for (int i = 1; i <= (m/2); i++)
	{	
		if (m % i == 0)
		{
			a[count] = i;
			count++;
		}
	}
	int sum = 0;
	for (int i = 0; i < count; i++)
	{
		sum += a[i];
	}
	if (sum == m)
	{
		printf("Yes!\n");
		for (int i = 0; i < count; i++)
		{
			printf("%d",a[i]);
			if (i < count-1)
			{
				printf(",");
			}
		}
	}
	else
	{
		printf("No!\n");
	}
	return 0;
}