#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
typedef struct d {
	char name[20];
	int x, y;
}point;
int main() {
	point p1, p2;
	strcpy(p1.name, "구조체 복사");
	p1.x = 10;
	p1.y = 20;
	/*strcpy(p2.name, p1.name);
	p2.x = p1.x;
	p2.y = p1.y;*/
	memcpy( &p2, &p1,sizeof(point));
	printf("%s \n", p1.name);
	printf("%d %d\n", p2.x, p2.y);
}