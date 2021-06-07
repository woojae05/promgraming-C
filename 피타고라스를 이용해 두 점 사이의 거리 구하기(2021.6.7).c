#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

struct point
{
	int x, y;
};

int main() {
	struct point p;
	p.x = 1;
	p.y = 2;
	printf("x: ÁÂÇ¥ %d yÁÂÇ¥: %d\n", p.x, p.y);
	struct point p1;
	p1.x = 3;
	p1.y = 4;
	printf("x: ÁÂÇ¥ %d yÁÂÇ¥: %d\n", p1.x, p1.y);
	// µÎ Á¡ÀÇ °Å¸®¸¦ Ãâ·Â
	double a, b, c;
	a = p1.x - p.x;
	b = p1.y - p. y;
	c = sqrt(a * a + b * b);
	printf("%.2f", c);
}