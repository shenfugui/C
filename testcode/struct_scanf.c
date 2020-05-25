#include <stdio.h>

// struct point* func(struct point*);

struct point 
{
	int x;
	int y;
};

struct point func(struct point p);

int main()
{
	struct point su;
	su.x = 1;
	su.y = 2;
	printf("%d\n%d\n",su.x,su.y);
	su = func(su);
	// func(&su);
	printf("%d\n%d\n",su.x,su.y);
	return 0;
}

struct point func(struct point p)
{
	struct point q = p;
}

// struct point* func(struct point *p)
// {
// 	scanf("%d",&p->x);
// 	scanf("%d",&p->y);
// 	printf("%d\n%d\n",p->x,p->y);
// 	return 0;
// }