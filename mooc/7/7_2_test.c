#include <stdio.h>

void Chline(char ch,int column,int row);

int main()
{
	char ch;
	int column,row;
	printf("input a char:\n");
	scanf("%c",&ch);
	printf("input column and row:\n");
	scanf("%d%d",&column,&row);
	Chline(ch,column,row);
	return 0;
}

void Chline(char ch,int column,int row)
{
	for(int i = 0;i < row;i++)
	{
		for (int j = 0; j < column; j++)
		{
			printf("%c",ch);
		}
		printf("\n");
	}
}