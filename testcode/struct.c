#include <stdio.h>

struct date 
{
	int year;
	int month;
	int day;
};

int main()
{
	struct date today;
	today = (struct date) {2020,05,01};
	struct date *ptoday = &today;
	printf("%d-%i-%i\n",today.year,today.month,today.day);
	
	struct date day;
	day = today;
	struct date *pday = &day;
	printf("%d-%i-%i\n",day.year,day.month,day.day);

	printf("%p\n%p\n",ptoday,pday);
	return 0;
}