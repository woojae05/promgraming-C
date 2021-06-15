#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
typedef struct p {
	int x, y;
}point;
point weigtcenter(point p1,point p2,point p3) {
	point sum;
	sum.x = (p1.x + p2.x + p3.x)/3;
	sum.y = (p1.y + p2.y + p3.y)/3;
	return sum;
}
int main() {
	point p1, p2, p3, sum;
	scanf("%d %d", &p1.x, &p1.y);
	scanf("%d %d", &p2.x, &p2.y);
	scanf("%d %d", &p3.x, &p3.y);
	sum = weigtcenter(p1, p2, p3);
	printf("%d %d", sum.x, sum.y);
}