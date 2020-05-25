//评选最牛群主

#include <stdio.h>
#include <string.h>

// typedef struct electorates
// {
//     char name[10];
//     int sum;
// }Elec;

int main()
{
    int n;
    printf("Input the number of electorates:");
    scanf("%d", &n);
    char name[10];
    char name1[10] = "tom", name2[10] = "jack", name3[10] = "rose";
    int count1, count2, count3;
    count1 = count2 = count3 = 0;
    // Elec person[n];
    for (int i = 0; i < n; i++)
    {
        printf("Input vote %d:", i + 1);
        scanf("%s", name);
        if (strcmp(name, name1) == 0)
            count1++;
        else if (strcmp(name, name2) == 0)
            count2++;
        else if (strcmp(name, name3) == 0)
            count3++;
        else
            continue;
    }
    printf("Election results:\n");
    printf("tom:%d\n", count1);
    printf("jack:%d\n", count2);
    printf("rose:%d\n", count3);
    int max = count1 > count2 ? count1 : count2;
    max = max > count3 ? max : count3;
    if (max == count1)
    {
        printf("tom wins\n");
    }
    else if (max = count2)
    {
        printf("jack wins\n");
    }
    else
    {
        printf("rose wins\n");
    }
    return 0;
}