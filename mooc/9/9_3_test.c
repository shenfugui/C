//程序改错

#include <stdio.h>

int main()
{
	int a[10];
	int n;
	printf("Input n(n<=10):\n");
	scanf("%d",&n);
	printf("Input %d Numbers:\n",n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}
	int max = a[0];
	int min = a[1];
	int x = 0,y = 1;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > max)
		{
            max = a[i];
			x = i;
		}
		if (a[i] < min)
		{
            min = a[i];
			y = i;
		}
	}
	int temp = a[x];
	a[x] = a[y];
	a[y] = temp;
	printf("After MaxMinExchange:\n");
	for (int i = 0; i < n; i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}