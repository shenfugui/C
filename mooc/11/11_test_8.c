//删除字符串中与某字符相同的字符

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *DelChar(char *str , char c);

int main()
{
    char s[100];
    char c;
    printf("Input a string:\n");
    gets(s);
    char *str = s;
    printf("Input a character:\n");
    c = getchar();
    char *p = DelChar(str,c);
    printf("Results:%s\n",p);
    return 0;
}

char *DelChar(char *str, char c)
{
    char *p = (char *)malloc(sizeof(char));
    int n = strlen(str);
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (*(str+i) != c)
        {
            *(p+j) = *(str+i);
            j++;
        }
    }
    *(p+j) = '\0';
    return p;
}