//23根火柴游戏

#include <stdio.h>

int Game(int *sum);

int main()
{
    int n = 23;
    int *sum = &n;
    printf("Game start!\n");
    printf("Note: the maximum number is 3\n");
    int result = Game(sum);
    if (result == 1)
        printf("Congratulations！You won!\n");
    else
        printf("I'm sorry. You lost!\n");
    return 0;
}

int Game(int *sum)
{
    int p; //人
    int m; //电脑
    int flag;
    while (1)
    {
        printf("Please enter the number of matches you are moving:\n");
        scanf("%d",&p);
        if (p < 0 || p > 3 || p > *sum)
        {
            printf("The number you entered is wrong，please re-enter!\n");
            printf("Please enter the number of matches you are moving:\n");
            scanf("%d",&p);
        }
        printf("The number of matches you are moving is:%d\n",p);
        *sum -= p;
        printf("The number of matches left is:%d\n",*sum);
        if (*sum == 0)
        {
            flag = 0;
            break;
        }
        else if (*sum > 3)
        {
            m = *sum % 3 + 1;
            *sum -= m;
            printf("The number of matches that have been moved by the computer is:%d\n",m);
            printf("The number of matches left is:%d\n",*sum);
            if (*sum == 0)
            {
                flag = 1;
                break;
            }
        }
        else
        {
            m = 1;
            *sum -= m;
            printf("The number of matches that have been moved by the computer is:%d\n",m);
            printf("The number of matches left is:%d\n",*sum);
            if (*sum == 0)
            {
                flag = 1;
                break;
            }
        }
    }
    return flag;
}