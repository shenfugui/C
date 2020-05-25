  //学生成绩管理系统v3.0

#include <stdio.h>
#include <string.h>

typedef struct students
{
    long number;   //学号
    char name[10]; //姓名
    float score;   //考试成绩
} Student;

void PrintMenu(); //显示菜单

void InputRecord(Student std[]); //输入数据

void Calc(Student std[]); //计算课程总分和平均分

void Descending(Student std[]); //按成绩从高到低排序

void Ascending(Student std[]); //按成绩从低到高排序

void AscendingNum(Student std[]); //按学号从低到高排序

void SortByDict(Student std[]); //按姓名的字典顺序输出成绩表

void SearchByNum(Student std[]); //按学号查询学生排名及其考试成绩

void SearchByName(Student std[]); //按名字查询学生排名及其考试成绩

void Statistics(Student std[]); //统计比例

void ListRecord(Student std[]); //输出数据

int n; //学生人数

Student tmp; // 作为临时交换数据用

int main()
{
    printf("Input student number(n<30):\n");
    scanf("%d", &n);
    Student std[n];
    PrintMenu();
    int choice;
    scanf("%d", &choice);
    while (choice != 0)
    {
        switch (choice)
        {
        case 1:
            InputRecord(std);
            break;
        case 2:
            Calc(std);
            break;
        case 3:
            Descending(std);
            break;
        case 4:
            Ascending(std);
            break;
        case 5:
            AscendingNum(std);
            break;
        case 6:
            SortByDict(std);
            break;
        case 7:
            SearchByNum(std);
            break;
        case 8:
            SearchByName(std);
            break;
        case 9:
            Statistics(std);
            break;
        case 10:
            ListRecord(std);
            break;
        default:
            printf("Input error!\n");
        }
        PrintMenu();
        scanf("%d", &choice);
    }
    printf("End of program!");
    return 0;
}

void PrintMenu()
{
    printf("Management for Students' scores\n");
    printf("1.Input record\n");
    printf("2.Caculate total and average score of course\n");
    printf("3.Sort in descending order by score\n");
    printf("4.Sort in ascending order by score\n");
    printf("5.Sort in ascending order by number\n");
    printf("6.Sort in dictionary order by name\n");
    printf("7.Search by number\n");
    printf("8.Search by name\n");
    printf("9.Statistic analysis\n");
    printf("10.List record\n");
    printf("0.Exit\n");
    printf("Please Input your choice:\n");
}

void InputRecord(Student std[])
{
    printf("Input student's ID,name and score:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%ld%s%f", &std[i].number, std[i].name, &std[i].score);
    }
}

void Calc(Student std[])
{
    float sum = 0;
    float aver;
    for (int i = 0; i < n; i++)
    {
        sum += std[i].score;
    }
    aver = sum / n;
    printf("sum=%.0f,aver=%.2f\n", sum, aver);
}

void Descending(Student std[])
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (std[i].score < std[j].score)
            {
                tmp = std[j];
                std[j] = std[i];
                std[i] = tmp;
            }
        }
    }
    printf("Sort in descending order by score:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%ld\t%s\t%.0f\n", std[i].number, std[i].name, std[i].score);
    }
}

void Ascending(Student std[])
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (std[i].score > std[j].score)
            {
                tmp = std[j];
                std[j] = std[i];
                std[i] = tmp;
            }
        }
    }
    printf("Sort in ascending order by score:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%ld\t%s\t%.0f\n", std[i].number, std[i].name, std[i].score);
    }
}

void AscendingNum(Student std[])
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (std[i].number > std[j].number)
            {
                tmp = std[j];
                std[j] = std[i];
                std[i] = tmp;
            }
        }
    }
    printf("Sort in ascending order by number:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%ld\t%s\t%.0f\n", std[i].number, std[i].name, std[i].score);
    }
}

void SortByDict(Student std[])
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strncmp(std[i].name, std[j].name, 1) > 0)
            {
                tmp = std[j];
                std[j] = std[i];
                std[i] = tmp;
            }
            else if (strncmp(std[i].name, std[j].name, 1) == 0)
            {
                int n = 2;
                while (1)
                {
                    int result = strncmp(std[i].name, std[j].name, n);
                    if (result > 0)
                    {
                        tmp = std[j];
                        std[j] = std[i];
                        std[i] = tmp;
                        break;
                    }
                    else if (result == 0)
                    {
                        n++;
                    }
                    else
                    {
                        break;
                    }
                    
                }
            }
        }
    }
    printf("Sort in dictionary order by name:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%ld\t%s\t%.0f\n", std[i].number, std[i].name, std[i].score);
    }
}

void SearchByNum(Student std[])
{
    printf("Input the number you want to search:\n");
    long num;
    scanf("%ld", &num);
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (num == std[i].number)
        {
            flag = 1;
            printf("%ld\t%s\t%.0f\n", std[i].number, std[i].name, std[i].score);
            break;
        }
    }
    if (flag == 0)
    {
        printf("Not found!\n");
    }
}

void SearchByName(Student std[])
{
    char name[10];
    printf("Input the name you want to search:\n");
    scanf("%s", name);
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (strcmp(name, std[i].name) == 0)
        {
            flag = 1;
            printf("%ld\t%s\t%.0f\n", std[i].number, std[i].name, std[i].score);
            break;
        }
    }
    if (flag == 0)
    {
        printf("Not found!\n");
    }
}

void Statistics(Student std[])
{
    float rateA, rateB, rateC, rateD, rateE;
    float rateG;
    int countA, countB, countC, countD, countE;
    int countG;
    countA = countB = countC = countD = countE = countG = 0;
    for (int i = 0; i < n; i++)
    {
        switch ((int)std[i].score / 10)
        {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            countE++;
            break;
        case 6:
            countD++;
            break;
        case 7:
            countC++;
            break;
        case 8:
            countB++;
            break;
        case 9:
            countA++;
            break;
        case 10:
            countG++;
            break;
        }
    }
    rateG = (countG / 1.0 / n) * 100;
    rateE = (countE / 1.0 / n) * 100;
    rateD = (countD / 1.0 / n) * 100;
    rateC = (countC / 1.0 / n) * 100;
    rateB = (countB / 1.0 / n) * 100;
    rateA = (countA / 1.0 / n) * 100;
    printf("<60\t%d\t%.2f%%\n", countE, rateE);
    printf("%d-%d\t%d\t%.2f%%\n", 60, 69, countD, rateD);
    printf("%d-%d\t%d\t%.2f%%\n", 70, 79, countC, rateC);
    printf("%d-%d\t%d\t%.2f%%\n", 80, 89, countB, rateB);
    printf("%d-%d\t%d\t%.2f%%\n", 90, 99, countA, rateA);
    printf("%d\t%d\t%.2f%%\n", 100, countG, rateG);
}

void ListRecord(Student std[])
{
    for (int i = 0; i < n; i++)
    {
        printf("%ld\t%s\t%.0f\n", std[i].number, std[i].name, std[i].score);
    }
}
