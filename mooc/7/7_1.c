#include <stdio.h>
#include <math.h>

double Y(double x,int n);

int main()
{
    double x;
    int n;
    printf("Please input x and n:");
    scanf("%lf,%d",&x,&n);
    double Result;
    Result = Y(x,n);
    printf("Result=%.2f\n",Result);
    return 0;
}

double Y(double x,int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return sqrt(x);
    else
        return sqrt(x+Y(x,n-1));
}
