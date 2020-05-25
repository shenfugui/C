//百万富翁的换钱计划

#include <stdio.h>
#include <math.h>
int main()
{
	int i, n=30;
	double sum1=0, sum2=0;
	for(i=1;i<=n;i++)
	{
		sum1 = sum1 + 100000;
		sum2 = sum2 + pow(2,i-1)*0.01;
	}
	printf("to Stranger: %.2f yuan\n", sum2);
	printf("to Richman: %.2f yuan\n", sum1);
	return 0;
}
