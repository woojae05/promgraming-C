#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	else return gcd(b, a % b);
}
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("최대 공약수: %d\n", gcd(a, b));
	printf("최소 공배수: %d\n", a * b / gcd(a, b));
}