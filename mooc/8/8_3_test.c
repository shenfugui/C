//统计正整数中指定数字的个数

#include <stdio.h>

int CountDigit(int number,int digit);

int main()
{
	int m,n;
	printf("Input m,n:\n");
	scanf("%d,%d",&m,&n);
	int result = CountDigit(m,n);
	printf("%d\n",result);
	return 0;
}

int CountDigit(int number,int digit)
{
	int cout = 0;
	if (number < 10)
	{
		if (number % 10 == digit) cout++;
	}
	else
	{
		while (number >= 1)
		{	
			if (number % 10 == digit) cout++;
			number /= 10;
		}	
	}
	return cout;
}