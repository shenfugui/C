//判断星期几

#include <stdio.h>
#include <string.h>


int main()
{
    char str[3];
    printf("please input the first letter of someday:\n");
    scanf(" %c",&str[0]);
    char week[7][10] = {"monday","tuesday","wednesday","thursday","friday","saturday","sunday"};
    if (str[0] == 's' || str[0] == 'S' || str[0] == 'T' || str[0] == 't')
    {
        printf("please input second letter:\n");
        scanf(" %c",&str[1]);
    }
    int flag = 0;
    if (str[0] >= 65 && str[0] <= 90)
        str[0] += 32;
    int len = strlen(str);
    for (int i = 0; i < 7; i++)
    {
        if (len == 1)
        {
            if (strncmp(&str[0],week[i],1) == 0)
            {
                flag = 1;
                printf("%s\n",week[i]);
                break;
            }
        }
        else if (len == 2)
        {
            if (strncmp(str,week[i],2) == 0)
            {
                flag = 1;
                printf("%s\n",week[i]);
                break;
            }
        }
    }
    if (flag == 0)
    {
        printf("data error\n");
    }
    return 0;
}