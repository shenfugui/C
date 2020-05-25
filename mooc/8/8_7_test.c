//矩阵转置V1.0

#include <stdio.h>

#define N 10

int func(int a[][N],int n);

int main()
{
	int n;
	printf("Input n:");
	scanf("%d",&n);
	int a[N][N];
	printf("Input %d*%d matrix:\n",n,n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	func(a,n);
	return 0;
}

int func(int a[][N],int n)
{
	printf("The transposed matrix is:\n");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%4d",a[j][i]);
		}
		printf("\n");
	}
	return 0;
}