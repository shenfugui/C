#include <stdio.h>

void Magic(int m);

int main()
{	
	int m;
	scanf("%d",&m);
	Magic(m);
	return 0;
}

void Magic(int m)
{
	int i,flag = 0;
	for (i = 100; i < 999; i++)
	{
		int a[3],s[5];
		a[0] = i % 10; //c
		a[1] = i % 100 / 10; //b
		a[2] = i / 100; //a
		s[0] = a[2]*100 + a[0]*10 + a[1]; //acb
		s[1] = a[1]*100 + a[2]*10 + a[0]; //bac
		s[2] = a[1]*100 + a[0]*10 + a[2]; //bca
		s[3] = a[0]*100 + a[1]*10 + a[2]; //cba
		s[4] = a[0]*100 + a[2]*10 + a[1]; //cab
		int sum = 0;
		for (int j = 0; j < 5; j++)
		{
			sum = sum + s[j];
		}
		if (sum == m)
		{
			flag = 1;
			int n;
			n = a[2]*100 + a[1]*10 + a[0];
			printf("The number is %d\n",n);
			break;
		}
	}
	if (flag == 0)
		printf("The sum you calculated is wrong!\n");
}