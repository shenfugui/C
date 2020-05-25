//月份表示

#include <stdio.h>

int main()
{
	char month[12][10] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
	int number;
	char (*str)[10] = month;
	printf("Input month number:\n");
	scanf("%d",&number);
	if (number < 1 || number > 12)
	{
		printf("Illegal month");
	}
	else 
	{
		printf("month %d is %s\n",number,str[number-1]);
	}
}