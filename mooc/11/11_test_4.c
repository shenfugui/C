//程序改错----1

#include  <stdio.h>
#define STUD 30            //最多可能的学生人数
#define COURSE 5             //最多可能的考试科目数
void  Total(int (*score)[COURSE], int sum[], float aver[], int m, int n);
void  Print(int (*score)[COURSE], int sum[], float aver[], int m, int n);
int main(void)
{
     int   i, j, m, n, sum[STUD];
     int score[STUD][COURSE];
     int (*p)[COURSE];
     float  aver[STUD];
     p = score;
     printf("Enter the total number of students and courses:\n");
     scanf("%d%d",&m,&n);
     printf("Enter score:\n");
     for (i=0; i<m; i++)
     {
        for (j=0; j<n; j++)
        {
            scanf("%d", &score[i][j]);
        }
    }
    Total(p, sum, aver, m, n);
    Print(p, sum, aver, m, n);
    return 0;
}
 
void  Total(int (*score)[COURSE], int sum[], float aver[], int m, int n)
{
    int  i, j;
    for (i=0; i<m; i++)
    {
        sum[i] = 0;
        for (j=0; j<n; j++)
        {
            sum[i] += *(*(score+i)+j);
        }
        aver[i] = (float) sum[i] / n;
    }
}
 
void  Print(int (*score)[COURSE], int sum[], float aver[], int m, int n)
{
    int  i, j;
    printf("Result:\n");
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            printf("%4d\t", *(*(score+i)+j));
        }
        printf("%5d\t%6.1f\n", sum[i], aver[i]);
 }
}