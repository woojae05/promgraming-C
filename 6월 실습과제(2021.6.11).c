#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	/*int ground[3];
	int wid[3];
	int hei[3];
	int max = 0;
		printf("3개의 운동장의 가로와 세로를 입력하시오\n");
	for (int i = 0; i < 3; i++){
		scanf("%d %d", &wid[i], &hei[i]);
		ground[i] = wid[i] * hei[i];
		printf("\n");
	}
	for (int i = 0; i < 3; i++) {
		if (ground[i] > max)
			max = ground[i];
	}
	printf("%d", max);*/

	//way 1
	int n;
	int score[100];
	int tmep;
	printf("몇 명? ");
	scanf("%d", &n);
	int max = -1;
	int min = 101;
	for (int i = 0; i < n; i++) {
		scanf("%d", &score[i]);
	}
	/*for (int i = 0; i < n-1; i++) {
		if (score[i] > max) {
			max=score[i];
		}
		if (score[i] < min) {
			min = score[i];
		}
	}
	printf("1등의 점수:%d    꼴등의 점수:%d", max, min);*/
	
	//way 2
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n-i; j++) {
			if (score[j] < score[j + 1]) {
				tmep = score[j+1];
				score[j+1] = score[j];
				score[j] = tmep;
			}
		}
	}
	/*for (int i = 0; i < n; i++) {
		printf("%d ", score[i]);
	}*/
	printf("1등:%d점  뒤에서 1등:%d점", score[0], score[n-1]);
}
