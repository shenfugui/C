#include <stdio.h>
#include <string.h>

int main()
{
	char str[100];
	gets(str);
    int count = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        count++;
        i++;
    }
	for (int i = count-1; i >= 0; i--)
	{
		printf("%c",str[i]);
	}
	return 0;

}