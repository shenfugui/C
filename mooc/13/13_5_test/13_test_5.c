#include <stdio.h>

void InsertArray(int *p, int n, int x);

int main() {
	int n, a[10], x, *p;
	p = a;
	printf("Input array size:\n");
	scanf("%d", &n);
	printf("Input array:\n");
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	printf("Input x:\n");
	scanf("%d", &x);
	InsertArray(p, n, x);
	return 0;
}

void InsertArray(int *p , int n, int x) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (*(p+i) < x)
			count++;
		else {
			for (int j = n; j > count; j++) {
				p[j++] = p[j];
			}
			break;
		}
	}
	p[count] = x;
	printf("After insert %d:\n", x);
	for (int i = 0; i < n+1; i++) {
		printf("%4d", *(p+i));
	}
}