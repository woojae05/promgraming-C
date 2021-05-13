#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int n, d[110];
int f(int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	n = sum;
}

int t() {
	int max = 0;
	int result = 0;
	for (int i = 0; i < n; i++) {
		if (max < d[i]) {
			max = d[i];
			result = i;
		}
	}
	
			return result+1;
	}
int main() {
#if 0
	scanf_s("%d", &n);
	printf("%d\n", f(n));

#endif

#if 0
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &d[i]);
	}
	printf("%d", t());

#endif

#if 0
	printf("¼ö ÀÔ·Â: ");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (i < 2 && i != n && j>1 && j != i) {
				printf(" ");
				continue;
			}
		printf("* ");
		}
		printf("\n");
	}
#endif

#if 1
	int arr[100][100] = { 0, };
	int cnt = 1;
	int n1, n2;
	int k=1;
	scanf_s("%d %d", &n1, &n2);
	for (int i = 0; i < n1; i++) {
		for (int j = 0; j < n2; j++) {
			arr[i][j] = k;
				k+=
		}
	}
	for (int i = 0; i < n1; i++) {
		for (int j = 0; j < n2; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
#endif
	return 0;
}