//学生管理系统v2.0

#include <stdio.h>

void Menu();//显示学生管理系统菜单

void InputInfo(long *num, float *score, int n); //录入每个学生的学号和考试成绩

void SumGrades(float *score, int n);//计算课程的总分和平均分

void RankGrades(long number[30], float grade[30], int n);//按成绩排出名次表

void RankNum(long number[30], float grade[30], int n);//按学号从小到大排出成绩表

void SearchNum(long number[30], float grade[30], int n);//按学号查询学生排名及其考试成绩

void SortGrades(long *num, float *score, int n);//按类别统计学生人数及其所占比例

void Print(long number[30], float grade[30], int choice, int n);//输出每个学生的学号、考试成绩


int main()
{
	int n;
	printf("Input student number(n<30):\n");
	scanf("%d",&n);
	int choice;
	long number[30];
	float grade[30];
	long *num = number;
	float *score = grade;
	while (choice != 0)
	{
		Menu();
		scanf("%d",&choice);
		switch (choice)
		{
			case 1:InputInfo(num,score,n);break;
			case 2:SumGrades(score,n);break;
			case 3:Print(number,grade,3,n);break;
			case 4:Print(number,grade,4,n);break;
			case 5:RankNum(number,grade,n);break;
			case 6:SearchNum(number,grade,n);break;
			case 7:SortGrades(num,score,n);break;
			case 8:Print(number,grade,8,n);break;
			case 0:printf("End of program!\n");break;
			default:printf("Input error!\n");
		}
	}
	return 0;
}

void Menu()
{
	printf("Management for Students' scores\n");
	printf("1.Input record\n");
	printf("2.Caculate total and average score of course\n");
	printf("3.Sort in descending order by score\n");
	printf("4.Sort in ascending order by score\n");
	printf("5.Sort in ascending order by number\n");
	printf("6.Search by number\n");
	printf("7.Statistic analysis\n");
	printf("8.List record\n");
	printf("0.Exit\n");
	printf("Please enter your choice:\n");
}

void InputInfo(long *num, float *score, int n)
{
	printf("Input student's ID and score:\n");
	for (int i = 0; i < n; i++)
	{
		scanf("%ld%f",&num[i],&score[i]);
	}
}

void SumGrades(float *score, int n)
{
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += score[i];
	}
	float aver = 0;
	aver = sum / n;
	printf("sum=%.0f,aver=%.2f\n",sum,aver);
}

void RankGrades(long *num, float *score,int n)
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (score[i] < score[j])
			{
				float tempG = score[j];
				score[j] = score[i];
				score[i] = tempG;
				long tempN = num[j];
				num[j] = num[i];
				num[i] = tempN;
			}
		}
	}
}

void Print(long number[30], float grade[30], int choice, int n)
{
	long *num = number;
	float *score = grade;
	if (choice == 3)
	{
		RankGrades(num,score,n);
		printf("Sort in descending order by score:\n");
		for (int i = 0; i < n; i++)
		{
			printf("%ld\t%.0f\n",num[i],score[i]);
		}
	}
	else if (choice == 4)
	{
		printf("Sort in ascending order by score:\n");
		for (int i = n-1; i >= 0; i--)
		{
			printf("%ld\t%.0f\n",num[i],score[i]);
		}
	}
	else if (choice == 8)
	{
		for (int i = 0; i < n; i++)
		{
			printf("%ld\t%.0f\n",number[i],grade[i]);
		}
	}
}


void RankNum(long number[30], float grade[30], int n)
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (number[i] > number[j])
			{
				float tempG = grade[j];
				grade[j] = grade[i];
				grade[i] = tempG;
				long tempN = number[j];
				number[j] = number[i];
				number[i] = tempN;
			}
		}
	}
	printf("Sort in ascending order by number:\n");
	for (int i = 0; i < n; i++)
	{
		printf("%ld\t%.0f\n",number[i],grade[i]);
	}
}

void SearchNum(long number[30], float grade[30], int n)
{
	printf("Input the number you want to search:\n");
	long num;
	scanf("%ld",&num);
	int flag = 0;
	for (int i = 0; i < n; i++)
	{
		if (num == number[i])
		{
			printf("%ld\t%.0f\n",number[i],grade[i]);
			flag = 1;
			break;
		}
	}
	if (flag == 0)
	{
		printf("Not found!\n");
	}
}

void SortGrades(long *num, float *score, int n)
{
	float rateA,rateB,rateC,rateD,rateE;
	float rateG;
	int countA,countB,countC,countD,countE;
	int countG;
	countA = countB = countC = countD = countE = countG = 0;
	for (int i = 0; i < n; i++)
	{
		switch ((int)score[i]/10)
		{
			case 0:
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:countE++;break;
			case 6:countD++;break;
			case 7:countC++;break;
			case 8:countB++;break;
			case 9:countA++;break;
			case 10:countG++;break;
		}
	}
	rateG = (countG /1.0 / n)*100;
	rateE = (countE /1.0 / n)*100;
	rateD = (countD /1.0 / n)*100;
	rateC = (countC /1.0 / n)*100;
	rateB = (countB /1.0 / n)*100;
	rateA = (countA /1.0 / n)*100;
	printf("<60\t%d\t%.2f%%\n",countE,rateE);
	printf("%d-%d\t%d\t%.2f%%\n",60,69,countD,rateD);
	printf("%d-%d\t%d\t%.2f%%\n",70,79,countC,rateC);
	printf("%d-%d\t%d\t%.2f%%\n",80,89,countB,rateB);
	printf("%d-%d\t%d\t%.2f%%\n",90,99,countA,rateA);
	printf("%d\t%d\t%.2f%%\n",100,countG,rateG);
}