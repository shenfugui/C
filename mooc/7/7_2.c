//递归法求和

#include <stdio.h>

int Sum(int n);

int main()
{
	int sum,n;
	printf("Please input n:");
	scanf("%d",&n);
	sum = Sum(n);
	if (sum != -1)
	{
		printf("sum=%d\n",sum);
	}
	else
	{
		printf("data error!\n");
	}
	return 0;
}

int Sum(int n)
{
	if (n <= 0)
	{
		return -1;
	}
	else if (n == 1)
	{
		return n;
	}
	else 
	{
		return n+Sum(n-1);
	}
}