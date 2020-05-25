//分数比较

#include <stdio.h>

int CompareFraction(int a, int b, int c, int d);

int main()
{
    int a,b,c,d;
    printf("Input two FENSHU:\n");
    scanf("%d/%d,%d/%d",&a,&b,&c,&d);
    int result = CompareFraction(a,b,c,d);
    if (result == -1)
        printf("%d/%d<%d/%d\n",a,b,c,d);
    else if (result == 0)
        printf("%d/%d=%d/%d\n",a,b,c,d);
    else
        printf("%d/%d>%d/%d\n",a,b,c,d);
    return 0;
}

int CompareFraction(int a, int b, int c, int d)
{
    int result;
    int num = b;
    while (!(num % b == 0 && num % d == 0))
    {
        num++;
    }
    a *= num/b;
    c *= num/d;
    if (a > c)
        result = 1;
    else if (a == c)
        result = 0;
    else 
        result = -1;
    return result;
}