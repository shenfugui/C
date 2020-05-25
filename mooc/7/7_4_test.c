#include <stdio.h>
int main()
{
	int a=0,b=0,c=0,count=0;
	while(a<=520 || b<=620 || c<=720)
	{
		if(a%5== 0 || b%6 == 0 || c%7==0)
		count++;
		if(a<=520)
		a++;
		if(b<=620)
		b++;
		if(c<=720)
		c++;
	}
	printf("n=%d",count);
	return 0;
}
