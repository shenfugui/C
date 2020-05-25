//找最值
#include<stdio.h>
#define N 50
int FindMax(int num[], int n, int *pMaxPos);//函数返回最大值，pMaxPos返回最大值所在的下标
int FindMin(int num[], int n, int *pMinPos);//函数返回最小值，pMaxPos返回最小值所在的下标

int main()
{
        int num[N], i;
        int *pMaxPos=num, *pMinPos=num;
        int max, min;
        printf("Input 10 numbers:\n");
        for(i=0;i<10;i++)
        {
            scanf("%d", &num[i]);
        }
        max = FindMax(num, 10, pMaxPos);
        min = FindMin(num, 10, pMinPos);
        printf("Max=%d,Position=%d,Min=%d,Position=%d\n", num[max], max, num[min], min);
        return 0;
}

int FindMax(int num[], int n, int *pMaxPos)
{
    int i;
    int max=0;
    for(i=1;i<n;i++)
    {
        if(num[i]>num[max])
            max = i;
    }
    pMaxPos+=max;
    return max;
}

int FindMin(int num[], int n, int *pMinPos)
{
    int i;
    int min=0;
    for(i=1;i<n;i++)
    {
        if(num[i]<num[min])
            min = i;
    }
    pMinPos+=min;
    return min;
}
