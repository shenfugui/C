#include <stdio.h>

void quick_sort(int arr[], int l, int r);

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    quick_sort(arr, 0, n-1);
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}

void quick_sort(int arr[], int l, int r) {
    if (l >= r) return;
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
    quick_sort(arr, l, j);
    quick_sort(arr, j+1, r);
}