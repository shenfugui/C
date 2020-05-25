//求100以内的最大素数

#include <stdio.h>
#include <math.h>

int main()
{
	int a[10];
	int n;
	int k = 0;
	printf("Input n(n<=500):");
	scanf("%d",&n);
	for (int i = n; i >= 2; i--)
	{
		int flag = 1;
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				flag = 0;
                break;
			}
			else
			{
				continue;
			}
		}
		if (flag == 1 && k < 10)
		{
			a[k] = i;
			k++;
		}
	}
	int sum = 0;
	for (int i = 0; i <= k-1 ; i++)
	{
		printf("%6d",a[i]);
		sum += a[i];
	}
	printf("\nsum=%d\n",sum);
	return 0;
}