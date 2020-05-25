//星期查找

#include <stdio.h>
#include <string.h>

int FindDay(char (*p)[10], char *s);

int main()
{
    printf("Please enter a string:\n");
    char day[7][10] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    char (*p)[10];
    p = day;
    char str[10];
    char *s = str;
    gets(s);
    int result = FindDay(p,s);
    if (result != -1)
    {
        printf("%s is %d\n",s,result);
    }
    else
    {
        printf("Not found!\n");
    }
    return 0;
}

int FindDay(char (*p)[10], char *s)
{
    int result;
    int flag = 0;
    for (int i = 0; i < 7; i++)
    {
        if (strcmp(p[i],s) == 0)
        {
            result = i;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        result = -1;
    }
    return result;
}