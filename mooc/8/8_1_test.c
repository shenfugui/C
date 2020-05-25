//三天打渔两天晒网

#include <stdio.h>

int JudgeStatus(int year,int month,int day);

int main()
{
   	int year,month,day;
	int sum,flag = 1;
    scanf("%4d-%2d-%2d",&year,&month,&day);
	if (year < 1999 || month < 1 || month > 12 || day < 1 || day > 31) flag = 0;
	else if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
	{		
		if (month == 2 && day > 29) flag = 0;
	}
	else if (year % 4 != 0 || (year % 100 == 0 && year % 400 != 0))
	{
		if (month == 2 && day > 28) flag = 0;	
	}
	if (flag != 1)
	{
		printf("Invalid input");
	}
	else
	{
		sum = JudgeStatus(year,month,day);
		if (sum % 5 == 1 || sum % 5 == 2 || sum % 5 == 3)
		{
			printf("He is working");
		}
		else
		{
			printf("He is having a rest");
		}
	}
	return 0;	
}


int JudgeStatus(int year,int month,int day)
{
	int sum = 0;
	for (int i = 1990; i < year; i++)
	{
		if (i % 400 == 0 || (i % 4 == 0 && i % 100 != 0))
		{
			sum += 366;
		}
		else
		{
			sum += 365;
		}
	}
	switch (month)
	{
		case 1:sum += 0;break;
		case 2:sum += 31;break;
		case 3:sum += 60;break;
		case 4:sum += 91;break;
		case 5:sum += 121;break;
		case 6:sum += 152;break;
		case 7:sum += 182;break;
		case 8:sum += 213;break;
		case 9:sum += 244;break;
		case 10:sum += 274;break;
		case 11:sum += 305;break;
		case 12:sum += 335;break;
	}
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 == 0))
	{
		sum -= 1;
	}
	sum += day;
	return sum;
}
