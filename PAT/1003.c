//我要通过

#include <stdio.h>
#include <string.h>

int Judge(char *p);

int main()
{
    int n;
    scanf("%d", &n);
    char str[101];
    char *p = str;
    for (int i = 0; i < n; i++)
    {
        gets(p);
        int result = Judge(p);
        if (result == 0)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
    return 0;
}

int Judge(char *p)
{
    int flag = 1;
    int i = 0;
    int len = strlen(p);
    for (i = 0; i < len; i++)
    {
        if (p[i] == 'P' || p[i] == 'A' || p[i] == 'T')
            continue;
        else
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {

    }
}