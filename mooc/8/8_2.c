//好数对

#include <stdio.h>

int main()
{
	int a[1000];
	int n;
	scanf("%d",&n);
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (i == j)
			{
				continue;
			}
			int sum = a[i] + a[j];
			for (int k = 0; k < n; k++)
			{
				if (sum == a[k])
				{
					count++;	
				}
			}
		}
	}
	printf("%d\n",count);
	return 0;

}