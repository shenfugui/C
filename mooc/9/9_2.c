//教授的课

#include <stdio.h>

int IsCancel(int a[], int n, int k);


int main()
{
	int n,k; //n为学生人数，k是应到的学生最小数目

	printf("Input n,k:\n");

	scanf("%d,%d",&n,&k);

	/*
		输入每名学生的到达时间
	*/

	int a[1000];
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}

	int result = IsCancel(a,n,k);

	if (result == 1)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}

	return 0;
}


int IsCancel(int a[], int n, int k)
{
	int count = 0;

	for (int i = 0; i < n; i++)
	{
		if (a[i] <= 0)
		{
			count++;
		}
		else continue;
	}

	if (count >= k)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}