 #include <stdio.h>
#include <string.h>

int main()
{
	int N;
	scanf("%d",&N);
	getchar();
	char str[100][1000];
	int i = 0;
	gets(str[i]);
	while (strlen(str[i]) != 0)
	{
		i++;
		gets(str[i]);
	}
	for (int j = 0; j < N; j++)
	{
		printf("%s\n",str[j]);
		printf("\n");
	}
	for (int j = N; j < i; j++)
	{
        int len = strlen(str[j]);
		for (int k = 0; k < len; k++)
		{
			if (str[j][k] == '\n' || str[j][k] == ' ')
			{
				printf("\n\n");
			}
            else
            {
                printf("%c",str[j][k]);
            }
		}
		printf("\n\n");
	}
	return 0;
}