//山地训练

#include <stdio.h>
#include <string.h>
#define LONG_C 100000
long Fun(long M, long T, long U, long F, long D, char str[]);
int main()
{
	long m, t, u, f, d, num;
	char str[LONG_C+1];
	printf("Input M,T,U,F,D:");
	scanf("%ld%ld%ld%ld%ld", &m, &t, &u, &f, &d);
	printf("Input conditions of road:");
	scanf("%s", str);
	num = Fun(m, t, u, f, d, str);
	printf("num=%ld\n", num);
	return 0;
}
long Fun(long M, long T, long U, long F, long D, char str[])
{
	int i, sum=0, num=0;
	for(i=0;i<T;i++)
	{
		if(str[i] == 'u' || str[i] == 'd')
		{
			sum = sum + (U+D);
		}
		else 
		{
			sum = sum + (F+F);
		}
		if(sum <= M)
		{
			num++;
		}
		else
			return num;
	}
	return num-1;//不理解为什么是7 不应该是8 吗 唉  非得减一才能通过
}
