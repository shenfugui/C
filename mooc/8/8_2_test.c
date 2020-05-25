//统计用户输入

#include <stdio.h>

int main()
{
	char c;
	int number[3] = {0};
	printf("Please input a string end by #:\n");
	while ((c = getchar()) != '#')
	{
		if (c == ' ') number[0]++;
		else if (c == '\n') number[1]++;
		else number[2]++;
	}
	printf("space: %d,newline: %d,others: %d\n",number[0],number[1],number[2]);
	return 0;
}