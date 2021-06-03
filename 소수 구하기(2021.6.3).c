#include<stdio.h>
int isPrime(int n) {
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) return 0;
	}
	return 1;
}
int main() {
	while (1) {
		printf("¼ýÀÚ: ");
		int n;
		scanf_s("%d", &n);
		if (n < 2) return 0;
		if (n > 1000) continue;
		for (int i = 2; i <= n; i++) {
			isPrime(i);
			if (isPrime(i)) printf("%3d", i);
		}
		printf("\n");
	}
}