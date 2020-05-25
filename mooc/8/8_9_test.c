//抓交通肇事犯

#include <stdio.h>

int main()
{
	int k,m;
	for (m = 31; m <= 99; m++)
	{
		for (int i = 0; i <= 9; i++)
		{
			for (int j = 0; j <= 9; j++)
			{
				if (i == j) continue;
				else
				{
					k = 1000*i + 100*i + 10*j + j;
					if (k == m*m)
					{
						printf("k=%d,m=%d\n",k,m);
					}
				}
			}
		}
	}
	return 0;
}