//统计重复字符

#include <stdio.h>
#include <string.h>

char *c;

int CountRepeatStr(char str[], int *tag);

int main()
{
	char str[80];
	printf("Input a string:\n");
	gets(str);
	int tag;
	int count = CountRepeatStr(str,&tag);
	printf("%c:%d\n",*c,count);
	return 0;
}

int CountRepeatStr(char str[], int *tag)
{
	int count = 1;
	int max = count;
	*tag = 1;
	int pos = 1;
	char *p;
	c = &str[0];
	for (int j = 0; j < strlen(str)-1; j++)
	{
		p = &str[j];
		count = 1;
		for (int i = 1; i < strlen(str)-j; i++)
		{
			if (*p == *(p+i))
			{
				count++;
				pos = i+j;
				*c = *p;
			}
		}
		if (max <= count)
		{
			max = count;
			*c = str[j];
		}	
	}
	return max;
}