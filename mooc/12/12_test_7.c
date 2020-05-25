//平方根表

#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Input n(n<=10):\n");
    scanf("%d",&n);
    float result[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            result[i][j] = sqrt(i*10+j);
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%7d",i);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d",i);
        for (int j = 0; j < n; j++)
        {
            printf("%7.3f",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}