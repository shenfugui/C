//计算时间差v2.0

#include <stdio.h>
#include <math.h>

typedef struct clock
{
    int hour;
    int minute;
    int second;
} CLOCK;

int main()
{
    CLOCK t1, t2;
    printf("Input time one:(hour，minute):");
    scanf("%d,%d", &t1.hour, &t1.minute);
    printf("Input time two: (hour，minute):");
    scanf("%d,%d", &t2.hour, &t2.minute);
    int t1_sum = t1.hour*60 + t1.minute;
    int t2_sum = t2.hour*60 + t2.minute;
    int sub = abs(t1_sum - t2_sum);
    printf("%dhour,%dminute\n", sub/60, sub%60);
    return 0;
}
