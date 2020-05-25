//蛇形矩阵

#include<stdio.h>
#define N 100
void ZigzagMatrix(int a[][N], int n);
int main()
{
    int a[N][N] = {0};
    int n;
    a[0][0] = 1;
    printf("Input n:\n");
    if(!scanf("%d",&n) || n<=0 || n >100)   /* 清除非法输入 */
    {
        printf("Input error!");
    }
    else
    {
        ZigzagMatrix(a, n);    /* 调用输出蛇形矩阵的函数 */
    }

}

void ZigzagMatrix(int a[][N], int n)  /* 函数功能：输出蛇形矩阵 */
{
    int i, j, k, m;
    for(m = 1; m < 2*n - 2; m++)
    {
        if(m<=n-1)   /* 循环打印上三角 */
        {
            k = m;
            for(i = 0; i <= k; i++)
            {
                if(k%2)    /* k为偶数的情况 */
                {
                    if(i == 0)      /* 每个对角线开始打印的第一个和上一个衔接 */
                        a[i][k-i] = a[i][k-1] + 1;
                    else            /*  除了第一个，对角线的元素等于上一个元素加一1*/
                        a[i][k-i] = a[i-1][k-i+1] + 1;
                }
                else           /* 与k为偶数的情况类似 */
                {
                    if( i == 0)
                        a[k-i][i] = a[k-1][i] + 1;
                    else
                        a[k-i][i] = a[k-i+1][i-1] + 1;
                }
            }
        }
        else  /* 中心对称规律打印下三角 */
        {
            for(i = n-1; i >= 0; i--)
            {
                for(j = n-i; j < n; j++)
                    a[i][j] = n*n + 1 - a[n-1-i][n-1-j];
            }
        }

    }
    for(i = 0; i < n ;i++)     /* 输出蛇形矩阵 */
    {
        for(j = 0; j < n; j++)
        {
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
}
