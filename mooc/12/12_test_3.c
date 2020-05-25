//单词接龙

#include <stdio.h>
#include <string.h>

void FindRepeat(char str1[], char str2[], char *str);

int main()
{
    char str1[20];
    char str2[20];
    scanf("%s%s",str1,str2);
    char result[20];
    char *str = result;
    FindRepeat(str1,str2,str);
    printf("%s\n",str);
    return 0;
}

void FindRepeat(char str1[], char str2[], char *str)
{
    int len1,len2;
    len1 = strlen(str1);
    len2 = strlen(str2);
    char *pStr1 = &str1[len1-1];
    char *pStr2 = str2;
    int count = 0;
    while (*pStr1 != *pStr2)
    {
        pStr1--;
    }
    while (*pStr1 == *pStr2)
    {
        str[count] = *pStr1;
        count++;
        pStr1++;
        pStr2++;
    }
}