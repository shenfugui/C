//找出按字典顺序排在最前面的国名

#include <stdio.h>
#include <string.h>

void Compare(char Country[5][10]);

int main()
{
	char Country[5][10];
	printf("Input five countries' names:\n");
	for (int i = 0; i < 5; i++)
	{
		gets(Country[i]);
	}
	Compare(Country);
	return 0;
}

void Compare(char Country[5][10])
{
	char *min = Country[0];
	for (int i = 0; i < 4; i++)
	{	
		for (int j = i+1; j < 5; j++)
		{
			int flag = strcmp(min,Country[j]);
			if (flag > 0)
			{
				min = Country[j]; 
			}
		}
	
	}
	printf("The minimum is:%s\n",min);
}