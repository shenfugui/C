//亲密数_1

#include <stdio.h>

int main()
{
	int m,n;
	int a[20] = {0},b[20] = {0};
	printf("Input m, n:\n");
	scanf("%d,%d",&m,&n);
    int j = 0;
    for (int i = 1; i <= (m/2); i++)
    {
        if (m % i == 0)
        {
            a[j] = i;
            j++;
        }
    }
    j = 0;
    for (int i = 1; i <= (n/2); i++)
    {
        if (n % i == 0)
        {
            b[j] = i;
            j++;
        }
        
    }  
	int sum_a = 0,sum_b = 0;
	for (int i = 0; i < 20; i++)
	{
		sum_a += a[i];
		sum_b += b[i];
	}
	if (sum_a == n && sum_b == m)
	{
		printf("Yes!\n");
	}
	else
	{
		printf("No!\n");
	}
	return 0;
}