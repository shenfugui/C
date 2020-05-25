//子串判断

#include <stdio.h>
#include <string.h>

int IsSubString(char a[], char b[]);

int main()
{
    char a[80];
    char b[80];
    printf("Input the first string:");
    gets(a);
    printf("Input the second string:");
    gets(b);
    int result = IsSubString(a,b);
    if (result == 1)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}

int IsSubString(char a[], char b[])
{
    int ans = 0;
    int i = 0;
    int j = 0;
    int count = 0;
    int len = strlen(b);
    char str[50];
    while (count < strlen(a))
    {
        i = 0;
        i += count;
        for (j = 0; j < len; j++)
        {
            str[j] = a[i];
            if (a[i] != 0)
            {
                i++;
            }
        }
        str[j] = '\0';
        if (strcmp(str,b) == 0)
        {
            ans = 1;
            break;
        }
        count++;
    }
    return ans;
}