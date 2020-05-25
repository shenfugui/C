//找数组最值


#include <stdio.h>

void InputArray(int (*p)[10], int m, int n);

int FindMax(int (*p)[10], int m, int n, int *pRow, int *pCol);

int main()
{
	int m,n;
    int a = 0,b = 0;
	printf("Input m,n:\n");
	scanf("%d,%d",&m,&n);
	int array[m][n];
	int (*p)[n];
	p = array;
	InputArray(p,m,n);
	int max = FindMax(p,m,n,&a,&b);
	printf("max=%d,row=%d,col=%d\n",max,a,b);
	return 0;
}

void InputArray(int (*p)[10], int m, int n)
{
    printf("Input %d*%d array:\n",m,n);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d",&p[i][j]);
		}
	}
}

int FindMax(int (*p)[10], int m, int n, int *pRow, int *pCol)
{
	int max = p[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (p[i][j] >= max)
			{
				max = p[i][j];
				*pRow = i;
				*pCol = j;
			}
		}
	}
    return max;
}