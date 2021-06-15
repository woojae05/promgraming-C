#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
typedef struct _H {
char name[5][20];
int he[5];
double we[5];
}human;

human h[3];
typedef struct _tmp {
	char tmp_name[20]; //temp
	int tmp_he;
	double tmp_we;
}tmp;
void input() {
	for (int i = 0; i < 3; i++) {
		scanf("%s %d %lf", h[i].name[i], &h[i].he[i], &h[i].we[i]);
	}
}
void sort() {
	
	tmp t;
	for (int i = 0; i < 2; i++) {
		for (int j = i + 1; j < 3; j++) {
			if (h[i].he[i] >h[j].he[j]) {
				memcpy(&t, &h[i],sizeof(human));
				memcpy(&h[i] , &h[j], sizeof(human));
				memcpy(&h[j] , &t, sizeof(human));
			}
		}
	}
}
void output() {
	
		printf("================Á¤º¸===============\n");
	for (int i = 0; i < 3; i++) {
		printf("%s %d %0.2lf\n", h[i].name[i], h[i].he[i], h[i].we[i]);
	}

	}
	int main() {
		input();
		sort();
		output();
		return 0;
	}