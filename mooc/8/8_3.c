//组合三位数

#include<stdio.h>

int combination(int x,int y,int z)
{
	int i,j,k,a[10] = {0};
 	k = 0;
 	while(x > 0)
 	{
  		j = x % 10；
  		a[j]++;
  		x = x / 10;
 	}
 	while(y > 0)
 	{
  		j = y % 10;
  		a[j]++;
  		y = y / 10;
 	}
  	while(z > 0)
 	{
  		j = z % 10;
  		a[j]++;
  		z = z / 10;
 	}
 	for(i = 0;i < 10;i++)
 	{
  		if(a[i] == 1)
   		k++;
 	}
 	return k;
}

int main()
{
	int i,j,n,m;
 	for(i = 100;i < 339;i++)
 	{
  		n = i*2;
 		m = i*3;
 		j = combination(i,n,m);
  		if(j == 9)
  		{
   			printf("%d,%d,%d\n",i,n,m);
  		}
 	}
 	return 0;
}