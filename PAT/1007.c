#include <stdio.h>
#include <math.h>

int Judge(int number[], int k);

int main()
{
    long N;
    scanf("%ld",&N);
    int number[N];
    int k = 0;
    for (int i = 2; i <= N; i++)
    {
        int flag = 1;
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            number[k] = i;
            k++;
        }
    }
    int count = Judge(number,k);
    printf("%d\n",count);
    return 0;
}

int Judge(int number[], int k)
{
    int count = 0;
    for (int i = 0; i < k-1; i++)
    {
        int d = number[i+1] - number[i];
        if (d == 2)
        {
            count++;
        }
    }
    return count;
}