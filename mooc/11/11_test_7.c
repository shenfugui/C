//冒泡排序

#include <stdio.h>


int main()
{
    int n;
    printf("Input n:");
    scanf("%d",&n);
    int number[n];
    printf("Input %d numbers:",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&number[i]);
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (number[i] > number[j])
            {
                int temp = number[j];
                number[j] = number[i];
                number[i] = temp;
            }
        }
    }
    printf("Sorting results:");
    for (int i = 0; i < n; i++)
    {
        printf("%4d",number[i]);
    }
    return 0;
}