#include <stdio.h>

void merge_sort(int arr[], int l, int r);

int n;

int main() {
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    merge_sort(arr, 0, n-1);
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0; 
}

void merge_sort(int arr[], int l, int r) {
    if (l >= r) return;
    int tmp[n];
    int mid = (l+r)/2;
    int k = 0, i = l, j = mid+1;
    merge_sort(arr, l, mid);
    merge_sort(arr, mid+1, r);
    while (i <= mid && j <= r) {
        if (arr[i] <= arr[j]) tmp[k++] = arr[i++];
        else tmp[k++] = arr[j++];
    }
    while (i <= mid) tmp[k++] = arr[i++];
    while (j <= r) tmp[k++] = arr[j++];
    for (int i = l, j = 0; i <= r; i++, j++) arr[i] = tmp[j];
}