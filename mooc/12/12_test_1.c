//大奖赛现场统分

#include <stdio.h>
#include <math.h>
#define N 50

void AppendPlayer(int m, int n, int i);

void PrintScore(int m, int n, int i);

void OrderAthletes(int n);

void OrderJudges(int m, int n);

int ph[N];
float pf[N];

struct player
{
    int sh;     //选手编号
    float sf;   //选手最后得分
    float f[N]; //评委给分
} tmp, Player[N];

int main()
{
    int n; //选手人数
    printf("How many Athletes?\n");
    scanf("%d", &n);
    int m; //评委人数
    printf("How many judges?\n");
    scanf("%d", &m);
    printf("Scores of Athletes:\n");
    for (int i = 1; i <= n; i++)
    {
        AppendPlayer(m, n, i);
        PrintScore(m, n, i);
    }
    OrderAthletes(n);
    OrderJudges(m,n);
    printf("Over!Thank you!\n");
    return 0;
}

void AppendPlayer(int m, int n, int i)
{
    printf("Athlete %d is playing.\n", i);
    printf("Please enter his number code:\n");
    scanf("%d", &Player[i].sh);
    for (int k = 1; k <= m; k++)
    {
        ph[k] = k;
        printf("Judge %d gives score:\n", k);
        scanf("%f", &Player[i].f[k]);
    }
}

void PrintScore(int m, int n, int i)
{
    float max = Player[i].f[i];
    float min = Player[i].f[i];
    for (int k = 1; k <= m; k++)
    {
        if (max < Player[i].f[k])
            max = Player[i].f[k];
        if (min > Player[i].f[k])
            min = Player[i].f[k];
    }
    float sum = 0;
    for (int k = 1; k <= m; k++)
    {
        if (Player[i].f[k] == max || Player[i].f[k] == min)
            continue;
        else
            sum += Player[i].f[k];
    }
    Player[i].sf = sum / (m - 2);
    printf("Delete a maximum score:%.1f\n", max);
    printf("Delete a minimum score:%.1f\n", min);
    printf("The final score of Athlete %d is %.3f\n", Player[i].sh, Player[i].sf);
}

void OrderAthletes(int n)
{
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (Player[i].sf < Player[j].sf)
            {
                tmp = Player[j];
                Player[j] = Player[i];
                Player[i] = tmp;
            }
        }
    }
    printf("Order of Athletes:\n");
    printf("order\tfinal score\tnumber code\n");
    for (int count = 1; count <= n; count++)
    {
        printf("%5d\t%11.3f\t%6d\n", count, Player[count].sf, Player[count].sh);
    }
}

void OrderJudges(int m, int n)
{
    for (int i = 1; i <= m; i++)
    {
        float sum = 0;
        for (int j = 1; j <= n; j++)
        {
            sum += pow(Player[j].f[i] - Player[j].sf, 2);
        }
        pf[i] = 10 - sqrt(sum / n);
    }
    for (int i = 1; i <= m - 1; i++)
    {
        for (int j = i + 1; j <= m; j++)
        {
            if (pf[i] < pf[j])
            {
                float temp_pf = pf[j];
                pf[j] = pf[i];
                pf[i] = temp_pf;
                int temp_ph = ph[j];
                ph[j] = ph[i];
                ph[i] = temp_ph;
            }
        }
    }
    printf("Order of judges:\n");
    printf("order\tfinal score\tnumber code\n");
    for (int i = 1; i <= m; i++)
    {
        printf("%5d\t%11.3f\t%6d\n", i, pf[i], ph[i]);
    }
}