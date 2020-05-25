#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "hello world!";
	char *p = str;
	int i = 0;
	while (i < strlen(str))
	{
		printf("%c",*(p+i));
		i++;
	}
	return 0;
}