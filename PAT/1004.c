//rank score

#include <stdio.h>

typedef struct student
{
    char name[20];
    char number[20];
    int score;
} Student;

int main()
{
    int n;
    scanf("%d", &n);
    Student stu[n];
    Student tmp;
    for (int i = 0; i < n; i++)
    {
        fscanf(stdin, "%s %s %d", stu[i].name, stu[i].number, &stu[i].score);
    }
    for (int i = 0; i < n-1; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (stu[i].score > stu[j].score)
			{
				tmp = stu[j];
				stu[j] = stu[i];
				stu[i] = tmp;
			}
		}
	}
    printf("%s %s\n", stu[n-1].name, stu[n-1].number);
    printf("%s %s\n", stu[0].name, stu[0].number);
    return 0;
}
