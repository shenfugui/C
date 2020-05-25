//梅森尼数

#include <stdio.h>
#include <math.h>

int main()
{
	double x = 0;
	int n;
	printf("Input n:\n");
	scanf("%d",&n);
	int count = 0;
	for (int i = 2; i <= n; i++)
	{
		int flag = 1;
		double m = 2;
        x = 0;
		for (int j = 1; j < i ; j++)
		{
			m *= 2;
		}
		x += m - 1;
		for (int k = 2; k <= sqrt(x); k++)
		{
			flag = 1;
			if (x/k == (int)(x/k))
			{
				flag = 0;
				break;
			}		
			else continue;
		}
		if (flag == 1)
		{
			printf( "2^%d-1=%.0lf\n",i,x);
			count++;
		}
		else continue;
	}
	printf("count=%d\n",count);
	return 0;
}