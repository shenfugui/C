//寻找鞍点


#include <stdio.h>

#define N 100

void FindSaddlePoint(int a[][N], int m, int n);


int main()
{
	int m,n;

	printf("Input m,n:\n");

	scanf("%d,%d",&m,&n);

	int a[100][100];

	//输入矩阵
	printf("Input matrix:\n");

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	FindSaddlePoint(a,m,n);

	return 0;
}

void FindSaddlePoint(int a[][N], int m, int n)
{
	int flag = 1;
	int i = 0;
	int x = i,y = 0;

	for (i = 0; i < m; i++)
	{
		flag = 1;
		int max = a[i][0];
		int j = 0;

		for (j = 0; j < n; j++)
		{
			if (max < a[i][j])
			{
				max = a[i][j];
				x = i;
				y = j;
			}
			else continue;
		}


		for (int k = 0; k < m; k++)
		{
			if (max > a[k][y])
			{
				flag = 0;
				break;
			}
			else continue;
		}

        if (flag == 1)
        {
            break;
        }
        else continue;
	}

	if (flag == 0)
	{
		printf("No saddle point!\n");
	}
	else
	{
		printf("a[%d][%d] is %d\n",x,y,a[x][y]);
	}
}