#include <stdio.h>

double Calculate(double x,double y);

int main()
{
	double x,y;
	printf("Input two doubles:\n");
	scanf("%lf%lf",&x,&y);
	double result;
	result = Calculate(x,y);
	printf("1/((1/x+1/y)/2) = %0.3f\n",result);
	return 0;
}

double Calculate(double x,double y)
{
	double result;
	result = 1/((1/x+1/y)/2);
	return result;
}