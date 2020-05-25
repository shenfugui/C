//猴子吃桃程序（扩展三）

#include <stdio.h>

int Monkey(int n,int x);

int main()
{
	int n,x = 1;
	printf("Input days n:");
	scanf("%d",&n);
    if (n == 1)
    {
        x = 2 * (x+1);
    }
    else
    {
	    x = Monkey(n,x);
    }
	printf("x=%d\n",x);
	return 0;
}

int Monkey(int n,int x)
{
	int result;
    if (n == 1)
    {
        result = x;
    }
    else
    {
        result = Monkey(n-1,2*(x+1));
    }   
    return result;
}