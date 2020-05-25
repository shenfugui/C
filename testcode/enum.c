#include <stdio.h>

enum color { red, yellow, green};

void func(enum color c);

int main()
{
	enum color c;
	enum color d;
	printf("%d\n",c);
	printf("%d\n",d);
	c = 100;
	printf("%d\n",c);
	printf("%d\n",red);
	printf("%d\n",yellow);
	printf("%d\n",green);
	return 0;
}