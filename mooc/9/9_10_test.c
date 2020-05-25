//ç»Ÿè®¡å·¥èµ„

#include<stdio.h>

void Input(float wage[], int n);
float Compute(float wage[], int n, float *pmaxwage, float *pminwage);
int main()

{
    float wage[50],maxwage,minwage,avewage;
    int n;
    printf("Please input n:\n");
    scanf("%d",&n);
    Input(wage, n);     
    avewage = Compute(wage, n, &maxwage, &minwage);
    printf("maxwage=%.2f, minwage=%.2f, avewage=%.2f\n",maxwage,minwage,avewage);
    return 0;
}

void Input(float wage[], int n)
{
	for (int i = 0; i < n; i++)
	{
		scanf("%f",&wage[i]);
	}
}

float Compute(float wage[], int n, float *pmaxwage, float *pminwage)
{
	*pmaxwage = wage[0];
	*pminwage = wage[1];
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (wage[i] > *pmaxwage)
		{
			*pmaxwage = wage[i];
		}
		if (wage[i] < *pminwage)
		{
			*pminwage = wage[i];
		}
		sum += wage[i];
	}
	float avewage = sum / n;
	return avewage;
}