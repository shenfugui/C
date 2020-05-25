//网购打折商品V2.0

#include <stdio.h>

float calculate(float pay);

int main()
{
	float pay,p;
	printf("Input payment:");
	scanf("%f",&pay);
	p = calculate(pay);
	printf("price = %.1f\n",p);
	return 0;	
}

float calculate(float pay)
{
	float p;
	int n;
	n = (int)(pay/100);
	switch (n)
	{
		case 0:p = pay;break;
		case 1:p = 0.95 * pay;break;
		case 3:
		case 4:p = 0.92 * pay;break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:p = 0.9 * pay;break;
		default:p = 0.85 * pay;
	}
	return p;
}