//兔子生崽问题

#include<stdio.h>
int f(int n)
{
	if(n==1||n==2)
		return n;
	else   return  f(n-1)+f(n-2);
}
int main()
{
	int i,n;
	printf("Input n(n<=12):\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
        printf("%4d",f(i));
	printf("\nTotal=%d\n",f(i-1));
return 0;
}