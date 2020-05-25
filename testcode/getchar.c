#include <stdio.h>

int main()
{
	FILE *fp = fopen("a.txt","r");
	int count = 0;
	char c;
	while ((c=fgetc(fp)) != EOF)
	{
		if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
		{
			count++;
		}
	}
	printf("%d\n",count);
	return 0;
}