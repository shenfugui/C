//出售金鱼

#include<stdio.h>

int main()
{
        int i, x=11;
        for(i=5;i>=2;i--)
        {
            x = (x*i+1)/(i-1);
        }
        printf("There are %d fishes at first.\n", x);
        return 0;
}

