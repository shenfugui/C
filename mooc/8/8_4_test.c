//玫瑰花数

#include <stdio.h>
#include <math.h>

int main()
{
	for (int i = 1000; i < 9999; i++)
	{
		int cout = 0;
        int n = i;
		while (n >= 1)
		{
			n /= 10;
			cout++;
		}
        n = i;
		int sum = 0;
		while (n >= 1)
		{

			int m = n % 10;
			sum += pow(m,cout);
			n /= 10;
		}
		if (sum == i)
		{
			printf("%d\n",i);
		}
	}
	return 0;	
}