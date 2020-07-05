#include <stdio.h>

int quick_sort(int arr[], int l, int r, int k);

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("%d", quick_sort(arr, 0, n-1, k));
    return 0;
}

int quick_sort(int arr[], int l, int r, int k) {
    if (l >= r) return arr[l];
    int i = l-1, j = r+1, pivot = arr[(l+r)/2];
    while (i < j) {
        do i++; while (arr[i] < pivot);
        do j--; while (arr[j] > pivot);
        if (i < j) {
            int tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
        }
    }
    if (k <= j-l+1) return quick_sort(arr, l, j, k);
    else return quick_sort(arr, j+1, r, k-(j-l+1));
}