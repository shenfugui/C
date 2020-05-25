#include <stdio.h>
#include <math.h>

double fun(double q);

int main()
{
    printf("Input q:");
    double q;
    scanf("%lf",&q);
    double e = fun(q);
    printf("%.10lf",e);
    return 0;
}

double fun(double q)
{
    double fact = 1;
    double e = 1;
    for (int i = 1; ; i++)
    {
        fact *= i;
        if (1/fact > q)
            e += 1 / fact;
        else
            break;
    }
    return e;
}