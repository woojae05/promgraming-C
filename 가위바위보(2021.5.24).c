//#include<stdio.h>
//#include<stdlib.h> 
//#include<time.h>
//int main() {
//
//	int win = 0, draw = 0, lose = 0, me = 0, com = 0, n;
//	printf("게임을 몇 번 하시겠습니까? : ");
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		printf("(1:가위 2:바위 3:보): ");
//		scanf("%d", &me);
//		srand((unsigned)time(NULL));
//		com = rand() % 3 + 1;
//		if (me == com) {
//			printf("비겼습니다.\n");
//			draw++;
//			printf("%d승,%d무,%d패\n", win, draw, lose);
//		}
//		else if (me - com == -2 || me - com == 1) {
//			printf("이겼습니다.\n");
//			win++;
//			printf("%d승,%d무,%d패\n", win, draw, lose);
//		}
//		else {
//			printf("패배했습니다\n");
//			lose++;
//			printf("%d승,%d무,%d패\n", win, draw, lose);
//		}
//	}
//}