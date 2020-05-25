#include <stdio.h>

int main()
{
    int N, M;
    int number[100];
    scanf("%d %d", &N, &M);
    M %= N;
    for (int i = 0; i < N; i++)
    {
        scanf("%d",&number[i]);
    }
    for (int i = N-M; i < N; i++)
    {
        printf("%d ",number[i]);
    }
    for (int i = 0; i < N-M-1; i++)
    {
        printf("%d ",number[i]);
    }
    printf("%d",number[N-M-1]);
    return 0;
}