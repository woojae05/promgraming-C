#include<stdio.h>
int prime(int n) {
	if (n < 2) return 0;
		for (int i = 2; i * i <= n; i++) {
			if (n % i == 0) {
				return 0;
			}
		}
		return 1;

}
int main() {
	int n;
	printf("¼ö ÀÔ·Â: ");
	scanf_s("%d", &n);
	int cnt = 0;
	for (int i = 2; i < 100; i++) {
		if (i > n)break;
		if (prime(i)) {
			printf("%4d", i);
			cnt++;
			
		}
		if (cnt % 10 == 0) printf("\n");
	}
	return 0;
}