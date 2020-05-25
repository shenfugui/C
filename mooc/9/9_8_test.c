//回文素数

#include <stdio.h>
#include <math.h>

int main()
{
	int array[100];
	int count = 0;
	int n;
	printf("Input n:\n");
	scanf("%d",&n);
	for (int i = 10; i < n; i++)
	{
		int flag = 1;
		for (int j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				flag = 0;
                break;
			}
			else
				continue;
		}
		if (flag == 1)
		{
			if (i < 100)
			{
				int a = i / 10;
				int b = i % 10;
				if (a == b)
				{
					array[count] = i;
					count++;
				}
			}
			else
			{
				int a = i / 100;
				int b = i % 10;
				if (a == b)
				{
					array[count] = i;
					count++;
				}
			}			
		}
		else
			continue;
	}
	for (int i = 0; i < count; i++)
	{
		printf("%4d",array[i]);
	}
	printf("\ncount=%d\n",count);
	return 0;
}