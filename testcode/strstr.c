#include <stdio.h>
#include <string.h>

int main()
{
	char s1[] = "How are you!";
	char s2[] = "are";
	char *i = strstr(s1,s2);
	printf("%s\n",i);
	return 0;
}