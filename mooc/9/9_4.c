//计算三位阶乘和数


#include <stdio.h>

int main()
{
	for (long i = 100; i < 1000; i++)
	{
			int a = i / 100;
			int b = i / 10 % 10;
			int c = i % 10;

			int ma = 1,mb = 1,mc = 1;

			if (a > 0)
			{
				for (int x = 1; x <= a; x++)
				{
					ma *= x;	
				}
			}
			else
				ma = 1;

			if (b > 0)
			{
				for (int y = 1; y <= b; y++)
				{
					mb *= y;
				}
			}
			else
				mb = 1;

			if (c > 0)
			{
				for (int z = 1; z <= c; z++)
				{
					mc *= z;
				}
			}
			else
				mc = 1;

			long sum = ma + mb + mc;

			if (sum == i)
			{
				printf("%ld\n",i);
			}
			else 
				continue;
	}
	return 0;
}