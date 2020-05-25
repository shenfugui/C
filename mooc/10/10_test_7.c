//杨辉三角形

#include <stdio.h>

void printYH(int n);

int main()
{
	int n;
	printf("Input n (n<=10):\n");
	scanf("%d",&n);
	printYH(n);	
	return 0;
}

void printYH(int n)
{
	int num[10][10];
	num[0][0] = num[1][0] = num[1][1] = 1;
	 
	for (int i = 2; i < n; i++)
	{
		num[i][0] = 1;
		num[i][i] = 1;
		for (int j = 1; j < i; j++)
		{
			num[i][j] = num[i-1][j-1] + num[i-1][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%4d",num[i][j]);
		}
		printf("\n");
	}
}