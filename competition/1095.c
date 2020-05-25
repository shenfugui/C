#include <stdio.h>

int func(int a, int b);

int main()
{
	int i[10],j[10];
	int count = 0;
	while (scanf("%d",&i[count]) != EOF)
	{
		scanf("%d",&j[count]);
		count++;
	}
	int result[10];
	for (int k = 0; k < count; k++)
	{
        if (i[k] > j[k])
        {
            result[k] = func(j[k],i[k]);
        }
        else
        {
            result[k] = func(i[k],j[k]);
        }	
	}
	for (int k = 0; k < count; k++)
	{
		printf("%d %d %d\n",i[k],j[k],result[k]);
	}
	return 0;
}

int func(int a, int b)
{
	int count = 1;
	int max = 1;
	for (int k = a; k <= b; k++)
	{
        int number = k;
        count = 1;
		while (number != 1)
		{
			if (number % 2 == 0)
			{
				number /= 2;
			}
			else
			{
				number = 3*number + 1;
			}
			count++;
		}
		if (max < count)
		{
			max = count;
		}
	}
	return max;
}