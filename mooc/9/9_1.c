//重复数字检查

#include <stdio.h>

int CountRepeatNum(int count[],int n);
int main()
{
	long int n;
	printf("Input n:\n");
	scanf("%ld",&n);
    int count[10];
    int i = 0;
    while (n > 0)
    {
    	count[i] = n % 10;
    	n /= 10;
    	i++;
    }
	CountRepeatNum(count,i);
	return 0;
}

int CountRepeatNum(int count[],int n)
{
	int flag = 1;
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (count[i] == count[j])
			{
				flag = 0;
				break;
			}
			else continue;
		}
	}
	if (flag == 0)
	{
		printf("Repeated digit!\n");
	}
	else
	{
		printf("No repeated digit!\n");
	}
	return 0;
}