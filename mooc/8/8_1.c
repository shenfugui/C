//摘苹果

#include <stdio.h>

int GetApple(int a[],int height,int n);

int main()
{
	int height,n = 0;
	int a[10];
	for (int i = 0; i < 10; i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&height);
	n = GetApple(a,height,n);
	printf("%d",n);
	return 0;
}

int GetApple(int a[],int height,int n)
{
	int chair = 30;
	for (int i = 0; i < 10; i++)
	{
		if (height+chair >= a[i])
		{
			n += 1;
		}
	}
	return n;
}