#include <stdio.h>

void printMatrix(int N);

int main()
{
	int N[10];
	int i = 0;
	while (scanf("%d",&N[i]) != EOF)
	{
		i++;
	}
	for (int j = 0; j < i; j++)
	{
		printMatrix(N[j]);
	}
	return 0;
}

void printMatrix(int N)
{
	int a[N][N];
	int ret_i = 0;
    int ret_j = 2;
	for (int i = 0; i < N; i++)
	{
        ret_i = i;
        ret_j = 2+i;
		if (i == 0)
		{
			a[i][0] = 1;
		}
		else
		{
			a[i][0] = a[i-1][0] + ret_i;
		}
		for (int j = 1; j <= N-1-i; j++)
		{
			a[i][j] = a[i][j-1] + ret_j; 
            ret_j++;
		}
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j <= N-1-i; j++)
		{
			if (j == N-1-i)
			{
				printf("%d\n",a[i][j]);
			}
			else
			{
				printf("%d ",a[i][j]);
			}
		}
	}
}