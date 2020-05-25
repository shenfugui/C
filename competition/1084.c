#include <stdio.h>
#include <math.h>

int main()
{
	int N;
	scanf("%d",&N);
	for (int i = 2; i <= N; i++)
	{
		int flag = 1;
		for (int j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}