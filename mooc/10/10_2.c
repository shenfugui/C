//查找子串

#include <stdio.h>
#include <string.h>

int SearchString(char s[], char d[]);

int main()
{
	char s[80];
	char d[20];
	printf("Input a string:");
	gets(s);
	printf("Input another string:");
	gets(d);
	int result = SearchString(s,d);
	if (result == -1)
	{
		printf("Not found!\n");
	}
	else
	{
		printf("Searching results:%d\n",result);
	}
	return 0;
}

int SearchString(char s[], char d[])
{
	int n = strlen(d);
	char *ps = s;
	int i = 1;
	int flag = 1;
	while (i <= strlen(s))
	{
		flag = strncmp(ps,d,n);
		if (flag == 0)
		{
			break;
		}
		i++;
		ps++;
	}
	if (flag != 0)
	{
		i = -1;
	}
	return i;
}