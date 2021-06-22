#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main() {
//	FILE* ifp = fopen("run,txt", "r");
//	FILE* ofp = fopen("result.txt", "w");
//	char name[20];
//	double avg, n1, n2, n3;
//	fscanf(ifp, "%s %lf %lf %lf", name, &n1, &n2, &n3);
//	avg = (n1 + n2 + n3) / 3.0;
//	printf("%s %.1lf\n", avg);
//	fprintf(ofp, "%s %f", name, avg);
//	return 0;
//}
int isPrime(int n) {
	for (int i = 2; i * i<=n; i++) {
		if (n%i == 0)
			return 0;
	}
	return 1;
}
int main() {

}