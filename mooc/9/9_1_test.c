二分法求根

#include <stdio.h>
#include <math.h>
#define E 10e-6

float calc(float *pa,float *pb,float *px);
int main()
{
	float a,b;
	float x;
	float *pa = &a,*pb = &b,*px = &x;
	scanf("%f,%f",&a,&b);
	x = (a+b) / 2;
	float result = calc(pa,pb,px);
	while (result != 1)
	{
		result = calc(pa,pb,px);
	}
	printf("x=%6.2f\n",*px);
	return 0;
}

float calc(float *pa,float *pb,float *px)
{
	float ya,yb,y;
	ya = pow(*pa,3) - *pa - 1;
	yb = pow(*pb,3) - *pb - 1;
	y = pow(*px,3) - *px - 1;
	if (fabs(y - 0) > E)
	{
		if (ya*y > 0)
		{
			*pa = *px;
			*px = (*pa + *pb) / 2;
		}
		else if (yb*y > 0)
		{
			*pb = *px;
			*px = (*pa + *pb) / 2;
		}
		return 0;
	}
	else
		return 1;
}	