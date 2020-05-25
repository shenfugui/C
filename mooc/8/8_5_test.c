//四位反叙数

#include <stdio.h>

int main()
{
	int a[4];
	for (int i = 1000; i < 9999; i++)
	{
		int sum = 0;
		int n = i;
		int j = 0;
		while (n >= 1)
		{
			a[j] = n % 10;
			n /= 10;
            j++;
		}
		sum = a[0]*1000 + a[1]*100 + a[2]*10 + a[3];
		if (sum == 9*i)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}