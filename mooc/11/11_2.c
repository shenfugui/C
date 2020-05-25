//奇偶数分离

#include <stdio.h>

void Seperate(int a[], int n);

int main()
{
    int n;
    printf("Input n:");
    scanf("%d",&n);
    int a[n];
    printf("Input numbers:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    Seperate(a,n);
    return 0;
}

void Seperate(int a[], int n)
{
    int odd[50],even[50];
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            even[count1] = a[i];
            count1++;
        }
        else
        {
            odd[count2] = a[i];
            count2++;
        }
    }
    printf("%d",odd[0]);
    for (int i = 1; i < count2; i++)
    {
        printf(",%d",odd[i]);
    }
    printf("\n");
    printf("%d",even[0]);
    for (int i = 1; i < count1; i++)
    {
        printf(",%d",even[i]);
    }
}