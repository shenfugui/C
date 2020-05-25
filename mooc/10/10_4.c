//凯撒密码

#include <stdio.h>

void Caesar(char c[]);

int main()
{
	char c[100];
	printf("Input a string:");
	gets(c);
	Caesar(c);
	return 0;
}

void Caesar(char c[])
{
	int i = 0;
	while (c[i] != '\0')
	{
		if ((int)c[i] >= 119)
		{
			c[i] = 97 + (int)c[i] - 119;
		}
		else
		{
			c[i] += 3;
		}
		i++;
	}
	puts(c);
}