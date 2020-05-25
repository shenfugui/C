#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int number[5];
    int i = 0;
    while (n > 0)
    {
        number[i] = n % 10;
        n /= 10;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        if (j == 2)
        {
            for (int k = 0; k < number[j]; k++)
            {
                printf("B");
            }
        }
        else if (j == 1)
        {
            for (int k = 0; k < number[j]; k++)
            {
                printf("S");
            }
        }
        else
        {
            for (int k = 0; k < number[j]; k++)
            {
                printf("%d", k + 1);
            }
        }
    }
    return 0;
}