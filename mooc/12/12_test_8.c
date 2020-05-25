//最大公约数

#include <stdio.h>

int CommonFactors(int a, int b, int *p);

int main()
{
    int a,b;
    int count = 0;
    printf("Input a and b:\n");
    scanf("%d,%d",&a,&b);
    int result[20];
    int *p = result;
    count = CommonFactors(a,b,p);
    int i = 1;
    while (result[count-1] != -1)
    {
        printf("Common factor %d is %d\n",i,result[count-1]);
        count--;
        i++;
    }
    return 0;
}

int CommonFactors(int a, int b, int *p)
{
    int min = a < b ? a : b;
    int count = 1;
    for (int i = 1; i <= min; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            p[count] = i;
            count++;
        }
    }
    p[0] = -1;
    return count;
}