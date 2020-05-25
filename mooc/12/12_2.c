//奖学金发放

#include <stdio.h>

typedef struct winners
{
    char name[20];
    int finalScore;
    int classScore;
    char work;
    char west;
    int paper;
    int scholarship;
} WIN;

void Addup(WIN stu[], int n);

int FindMax(WIN student[], int n);

int main()
{
    int n; // 学生人数
    printf("Input n:");
    scanf("%d", &n);
    WIN stu[n];
    Addup(stu, n);
    int number = FindMax(stu, n);
    printf("%s get the highest scholarship %d\n", stu[number].name, stu[number].scholarship);
    return 0;
}

void Addup(WIN stu[], int n)
{
    for (int i = 0; i < n; i++)
    {
        stu[i].scholarship = 0;
        printf("Input name:");
        scanf("%s", stu[i].name);
        printf("Input final score:");
        scanf("%d", &stu[i].finalScore);
        printf("Input class score:");
        scanf("%d", &stu[i].classScore);
        printf("Class cadre or not?(Y/N):");
        scanf(" %c", &stu[i].work);
        printf("Students from the West or not?(Y/N):");
        scanf(" %c", &stu[i].west);
        printf("Input the number of published papers:");
        scanf("%d", &stu[i].paper);
        if (stu[i].finalScore > 80 && stu[i].paper >= 1)
            stu[i].scholarship += 8000;
        if (stu[i].finalScore > 85 && stu[i].classScore > 80)
            stu[i].scholarship += 4000;
        if (stu[i].finalScore > 90)
            stu[i].scholarship += 2000;
        if (stu[i].finalScore > 85 && stu[i].west == 'Y')
            stu[i].scholarship += 1000;
        if (stu[i].classScore > 80 && stu[i].work == 'Y')
            stu[i].scholarship += 850;
        printf("name:%s,scholarship:%d\n", stu[i].name, stu[i].scholarship);
    }
}

int FindMax(WIN student[], int n)
{
    int number = 0;
    int max = student[0].scholarship;
    for (int i = 1; i < n; i++)
    {
        if (max < student[i].scholarship)
        {
            max = student[i].scholarship;
            number = i;
        }        
    }
    return number;
}