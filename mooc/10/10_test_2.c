//学生成绩管理系统V1.0

#include <stdio.h>
#include <string.h>

void StudentManagement(long stuNum[30],float stuSocre[],int choice,int n); //学生系统管理

void StudentMonitor();//菜单显示

int main()
{
	int n;
	long stuNum[30];
	float stuSocre[30];
	printf("Input student number(n<30):\n");
	scanf("%d",&n);
	StudentMonitor();
	int choice;
	scanf("%d",&choice);
	while (choice != 0)
	{
		StudentManagement(stuNum,stuSocre,choice,n);
		StudentMonitor();
		scanf("%d",&choice);
	}
	printf("End of program!\n");
	return 0;
}

void StudentMonitor()
{
	printf("Management for Students' scores\n");
	printf("1.Input record\n");
	printf("2.Caculate total and average score of course\n");
	printf("3.Sort in descending order by score\n");
	printf("4.Sort in ascending order by number\n");
	printf("5.Search by number\n");
	printf("6.Statistic analysis\n");
	printf("7.List record\n");
	printf("0.Exit\n");
	printf("Please Input your choice:\n");
}

void StudentManagement(long stuNum[30],float stuSocre[],int choice,int n)
{
	switch (choice)
	{
		case 1:
        {
			printf("Input student's ID, name and score:\n");
			int i = 0;
			while (i < n)
			{
				scanf("%ld%f",&stuNum[i],&stuSocre[i]);
				i++;
			}
			break;
        }
		case 2:
        {
			int i = 0;
			float sum = 0;
			float aver = 0;
			while (i < n)
			{
				sum += stuSocre[i];
				i++;
			}
			aver = sum / n;
			printf("sum=%.0f,aver=%.2f\n",sum,aver);
			break;
        }
		case 3:
        {
			printf("Sort in descending order by score:\n");
			for (int i = 0; i < n-1; i++)
			{
				for (int j = i+1; j < n; j++)
				{
					if (stuSocre[i] < stuSocre[j])
					{
						float tempScore = stuSocre[j];
						stuSocre[j] = stuSocre[i];
						stuSocre[i] = tempScore;
						long tempNum = stuNum[j];
						stuNum[j] = stuNum[i];
						stuNum[i] = tempNum;
					}
				}
			}
			for (int i = 0; i < n; i++)
			{
				printf("%ld\t%.0f\n",stuNum[i],stuSocre[i]);
			}
			break;
        }
		case 4:
        {
			printf("Sort in ascending order by number:\n");
			for (int i = 0; i < n-1; i++)
			{
				for (int j = i+1; j < n; j++)
				{
					if (stuNum[i] > stuNum[j])
					{
						float tempScore = stuSocre[j];
						stuSocre[j] = stuSocre[i];
						stuSocre[i] = tempScore;
						long tempNum = stuNum[j];
						stuNum[j] = stuNum[i];
						stuNum[i] = tempNum;
					}
				}
			}
			for (int i = 0; i < n; i++)
			{
				printf("%ld\t%.0f\n",stuNum[i],stuSocre[i]);
			}
			break;
        }
		case 5:
        {
			long number;
			printf("Input the number you want to search:\n");
			scanf("%ld",&number);
			int flag = 0;
			for (int i = 0; i < n; i++)
			{
				if (stuNum[i] == number)
				{
					flag = 1;
					printf("%ld\t%.0f\n",stuNum[i],stuSocre[i]);
					break;
				}
			}
			if (flag == 0)
			{
				printf("Not found!\n");
			}
			break;
        }
		case 6:
        {
			float rateA,rateB,rateC,rateD,rateE;
			float rateG;
			int countA,countB,countC,countD,countE;
			int countG;
			countA = countB = countC = countD = countE = 0;
			for (int i = 0; i < n; i++)
			{
				switch ((int)stuSocre[i]/10)
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
			break;
        }
		case 7:
        {
			for (int i = 0; i < n; i++)
			{
				printf("%ld%f",stuNum[i],stuSocre[i]);
			}
			break;
        }
		case 0:break;
	}
}