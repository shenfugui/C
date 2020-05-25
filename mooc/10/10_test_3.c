//程序改错 -1

#include <stdio.h>
#include <string.h>

char* MyStrcat(char *desk, char *source);

int main()
{
	char d[80] = "\0";
	char s[80] = "\0";
	printf("Input the first string:\n");
	gets(d);
	printf("Input the second string:\n");
	gets(s);
	char *p = MyStrcat(d,s);
	printf("The result is : %s\n",p);
	return 0;
}

char* MyStrcat(char *desk, char *source)
{
	char *result = strcat(desk,source);
	return result;
}