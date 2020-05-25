//用计数控制的循环实现正数累加求和

#include <stdio.h>

int main()
{
    int sum = 0;
    int number;
    int count = 0;
    printf("Input a number:\n");
    scanf("%d",&number);
    while (number != 0)
    {
        if (number > 0)
        {
            sum += number;
            count++;
        }
        printf("Input a number:\n");
        scanf("%d",&number);
    }
    printf("sum=%d,count=%d\n",sum,count);
    return 0;
}