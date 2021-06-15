#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

typedef struct p {
	double x, y;
}point;
point distance(point p1, point p2) {
	point sum;
	sum.x = (p1.x + p2.x) / 2;
	sum.y = (p1.y + p2.y) / 2;
	return sum;
}
int main() {
	point p1, p2,sum;
	scanf("%lf %lf", &p1.x, &p1.y);
	scanf("%lf %lf", &p2.x, &p2.y);
	sum=distance(p1, p2);
	printf("%0.1lf %0.1lf", sum.x, sum.y);
}