//数字字符转换为整型数

#include <stdio.h>

int Myatoi(char str[]);

int main()
{
	char str[7];
	int number;
	printf("Input a string:");
	scanf("%7s",str);
	number = Myatoi(str);
	printf("%d\n",number);
	return 0;
}

int Myatoi(char str[])
{
	int count = 0;
	int i = 0;
	int number[7];
    while (i < 7)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            number[count] = str[i] - 48;
            count++;       
        }
        i++;
    }
	int sum = 0;
	int n = 1;
	for (i = count-1; i >= 0; i--)
	{
		sum += number[i] * n;
		n *= 10;
	}
	return sum;
}