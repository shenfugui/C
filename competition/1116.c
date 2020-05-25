#include <stdio.h>
#include <string.h>

void JudgeIp(char str[20][20], int n);

int main()
{
	char str[20][20];
	int i = 0;
	while (scanf("%s",str[i]) != EOF)
	{
		getchar();
		i++;
	}
	JudgeIp(str,i);
	return 0;
}

void JudgeIp(char str[20][20], int n)
{
	int flag = 1;
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		flag = 1;
		int k = 0;
		sum = 0;
		for (int j = 0; j < 4; j++)
		{
            sum = 0;
			while(str[i][k] != '.')
			{
				if (str[i][k] < '0' || str[i][k] > '9')
					{
						flag = 0;
						break;
					}
					sum += str[i][k];
					k++;
                if (k >= strlen(str[i]))
                {
                    break;
                }	
			}
			if (str[i][k] == '.')
			{
				k++;
			}
			if (sum < '0' || sum > '2'+'5'+'5')
			{
				flag = 0;
			}	
		}
		if (flag == 1)
		{
			printf("Y\n");
		}
		else
		{
			printf("N\n");
		}
	}
}
