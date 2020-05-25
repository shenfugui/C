#include <stdio.h>
#include <stdlib.h>

int func(int number, int notKey[], int count);

void compare(int notKey[], int count, int array[], int K, int *p);

int cmp(const void *a, const void *b)
{
    return *(int *)b > *(int *)a;
}

int main()
{
    int K;
    scanf("%d", &K);
    int array[K];
    int count = 0;
    int notKey[1000];
    int Key[100];
    int *p = Key;
    for (int i = 0; i < K; i++)
    {
        scanf("%d", &array[i]);
    }
    int number[K];
    for (int i = 0; i < K; i++)
    {
        number[i] = array[i];
    }
    for (int i = 0; i < K; i++)
    {
        int flag;
        while (number[i] != 1)
        {
            if (number[i] % 2 == 0)
            {
                number[i] /= 2;
                flag = func(number[i], notKey, count);
                if (flag == 1)
                    continue;
                else
                {
                    notKey[count] = number[i];
                    count++;
                }
            }
            else
            {
                number[i] = (3 * number[i] + 1) / 2;
                flag = func(number[i], notKey, count);
                if (flag == 1)
                    continue;
                else
                {
                    notKey[count] = number[i];
                    count++;
                }
            }
        }
    }
    compare(notKey, count, array, K, p);
    return 0;
}

int func(int number, int notKey[], int count)
{
    int flag = 0;
    for (int i = 0; i < count; i++)
    {
        if (notKey[i] == number)
        {
            flag = 1;
            break;
        }
    }
    return flag;
}

void compare(int notKey[], int count, int array[], int K, int *p)
{
    int n = 0;
    for (int i = 0; i < K; i++)
    {
        int flag = 0;
        for (int j = 0; j < count; j++)
        {
            if (array[i] == notKey[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            p[n] = array[i];
            n++;
        }
    }
    qsort(p, n, sizeof(p[0]), cmp);
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            printf("%d", p[i]);
        }
        else
        {
            printf(" %d", p[i]);
        }
    }
}