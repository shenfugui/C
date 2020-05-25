//写出这个数

#include <stdio.h>
#include <string.h>

int main()
{
    char number[10][5] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    char n[101];
    gets(n);
    int sum = 0;
    for (int i = 0; i < strlen(n); i++)
    {
        sum += n[i] - 48;
    }
    int result[10];
    int m = sum;
    int i = 0;
    while (m > 0)
    {
        result[i] = m % 10;
        m /= 10;
        i++;
    }
    for (int j = i-1; j >= 0; j--)
    {
        if (j == 0)
        {
            printf("%s",number[result[j]]);
        }
        else
        {
            printf("%s ",number[result[j]]);        
        }
    }
    return 0;
}