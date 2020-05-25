//求最大数和最小数的最大公约数

#include <stdio.h>

void FindEle(int *number);

int main()
{
    int num[10];
    printf("Input 10 numbers:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&num[i]);
    }
    int *number = num;
    FindEle(number);
    return 0;
}

void FindEle(int *number)
{
    int max = *number;
    int min = *(number+1);
    for (int i = 0; i < 10; i++)
    {
        if (max < *(number+i))
        {
            max = *(number+i);
        }
        if (min > *(number+i))
        {
            min = *(number+i);
        }
    }
    printf("maxNum=%d\n",max);
    printf("minNum=%d\n",min);
    if (max > 0 && min > 0)
    {
        int num = 1;
        for (int i = 1; i <= min; i++)
        {
            if (max % i == 0 && min % i == 0)
            {
                num = i;
            }
        }
        printf("%d",num);
    }
}
