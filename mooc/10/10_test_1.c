//有趣的回文检测

#include <stdio.h>
#include <string.h>

int main()
{
    char str[20] = "\0";
    printf("Input string:");
    gets(str);
    char *pStart = str;
    char *pEnd = str + strlen(str) - 1;
    int flag = 0;
    while (1)
    {
        if (*pStart != *pEnd)
        {
            break;
        }
        else
        {
             if (pStart == pEnd || pStart > pEnd)
            {
                flag = 1;
                break;
            }
            pStart++;
            pEnd--;
        }

    }
    if (flag == 1)
    {
        printf("Yes!\n");
    }
    else
    {
        printf("No!\n");
    }
    return 0;
}