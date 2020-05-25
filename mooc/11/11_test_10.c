//数列合并

#include <stdio.h>

void Merge(int a[], int b[], int c[], int m, int n);

int main()
{
    int m,n;
    printf("Input m,n:");
    scanf("%d,%d",&m,&n);
    int arrayA[m];
    int arrayB[n];
    printf("Input array a:");
    for (int i = 0; i < m; i++)
    {
        scanf("%d",&arrayA[i]);
    }
    printf("Input array b:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arrayB[i]);
    }
    int arrayC[m+n];
    for (int i = 0; i < m; i++)
    {
        arrayC[i] = arrayA[i];
    }
    int j = 0;
    for (int i = m; i < m+n; i++)
    {
        arrayC[i] = arrayB[j];
        j++;
    }
    Merge(arrayA,arrayB,arrayC,m,n);
    return 0;
}

void Merge(int a[], int b[], int c[], int m, int n)
{
    for (int i = 0; i < m+n-1; i++)
        for (int j = i+1; j < m+n; j++)
        {
            if (c[i] < c[j])
            {
                int temp = c[j];
                c[j] = c[i];
                c[i] = temp;
            }    
        }
    for (int i = 0; i < m+n; i++)
    {
        printf("%4d",c[i]);
    }
}