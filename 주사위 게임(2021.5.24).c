#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	int n1, n2;
	int sum = 0;
	char answer;
	while (1)
	{
		printf("주사위 게임을 하시겠습니까? (y/n) :");
		scanf(" %c", &answer);
		if (answer == 'y') {
			srand((unsigned)time(NULL));
			n1 = rand() % 6 + 1;
			n2 = rand() % 6 + 1;
			sum = n1 + n2;
			printf("주사위: %d %d", n1, n2);
			printf("%d칸 전진합니다.",sum)
		}

		else if (answer == 'n') {
			printf("게임을 종료합니다.");
			break;
		}
	}
}