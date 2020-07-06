#include <stdio.h>

int merge_sort(int arr[], int l, int r);

int n, count = 0;

int main() {
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("%d", merge_sort(arr, 0, n-1));
    return 0;
}

int merge_sort(int arr[], int l, int r) {
    if (l >= r) return 0;
    int mid = (l+r)/2;
    int tmp[n];
    int i = l, j = mid+1, k = 0;
    count = merge_sort(arr, l, mid) + merge_sort(arr, mid+1, r);
    while (i <= mid && j <= r) {
        if (arr[i] < arr[j]) tmp[k++] = arr[i++];
        else {
            count += mid-i+1;
            tmp[k++] = arr[j++];
        }
    }
    while (i <= mid) tmp[k++] = arr[i++];
    while (j <= r) tmp[k++] = arr[j++];
    for (int i = l, j = 0; i <= r; i++, j++) arr[i] = tmp[j];
    return count; 
}