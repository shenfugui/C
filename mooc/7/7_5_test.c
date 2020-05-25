#include <stdio.h>

int divide(int n, int m);
static int people; 

int main()
{
    int i;
    int n;
    printf("Input n(1<n<=5):\n");
    scanf("%d", &n);
    people = n;
    if (n <= 1 || n > 5)
    {
        printf("Error!\n");
    }
    else
    {
        for (i=1;;i++)
        {
            if (divide(i, n))
            {
                printf("y=%d\n", i);
                break;
            }
        }
    }
    return 0;
}

int divide(int n, int m)
{
    if (n / people == 0 || n % people != 1)
        return 0;
    if (m == 1)
        return 1;
    return divide(n - n / people - 1,m - 1);
}
