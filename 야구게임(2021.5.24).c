#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	int me[3], com[3] = { 0, };
	int ball = 0 , strike = 0;
	int answer = 0;
	int out = 0;
	while (1)
	{	
		printf("야구게임을 하시겠습니까? (y/n) :");
		scanf_s(" %c", &answer);
		if (answer == 'y') {
			while (1) {
				if (com[0] == com[1] || com[1] == com[2] || com[2] == com[0]) {
					srand((unsigned)time(NULL));
					com[0] = rand() % 9 + 1;
					com[1] = rand() % 9 + 1;
					com[2] = rand() % 9 + 1;
					continue;
				}
				break;
			}
			while (1) {
				printf("세 자리 숫자를 입력하시오 :");
				scanf_s("%d %d %d", &me[0], &me[1], &me[2]);
				for (int i = 0; i < 3; i++) {
					for (int j = 0; j < 3; j++) {
						if (com[i] == me[j]) {
							ball++;
							if (i == j) {
								ball--;
								strike++;
							}
						}
						else if(com[i]!=me[j]&&j==i) {
							out++;
						}
					}
				}
				out -= ball;
				if (strike == 3) break;
				if (strike != 0)printf("%d 스트라이크 ", strike);
				if (ball != 0)printf("%d 볼 ", ball);
				if (out != 0)printf("%d 아웃", out);
				printf("\n");
				ball = 0;
				strike = 0;
				out = 0;
			}
			printf("정답입니다\n");
			ball = 0;
			strike = 0;
			out = 0;
			com[0] = 0, com[1] = 0, com[2];
		}
		else if (answer == 'n') break;
		else printf("y/n로 답하시오");
	}
}