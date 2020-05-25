//亲密数_2

#include<stdio.h>
int f(int n)
{  
    int r,sum = 0;
    for(r = n-1;r >= 1;r--)
    {
         if(n % r == 0)
         sum += r;
 	}
	return sum;
}
int main()
{
	int i,n,m,t;
	printf("Input n:\n");
	scanf("%d",&n);
	for(i = 1;i <= n;i++)
	{
		m = f(i);
        t = f(m);
		if(t == i && i < m)
        	printf("(%d,%d)\n",i,m);
	}
   return 0;
}
