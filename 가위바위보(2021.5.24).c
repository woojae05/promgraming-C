//#include<stdio.h>
//#include<stdlib.h> 
//#include<time.h>
//int main() {
//
//	int win = 0, draw = 0, lose = 0, me = 0, com = 0, n;
//	printf("������ �� �� �Ͻðڽ��ϱ�? : ");
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		printf("(1:���� 2:���� 3:��): ");
//		scanf("%d", &me);
//		srand((unsigned)time(NULL));
//		com = rand() % 3 + 1;
//		if (me == com) {
//			printf("�����ϴ�.\n");
//			draw++;
//			printf("%d��,%d��,%d��\n", win, draw, lose);
//		}
//		else if (me - com == -2 || me - com == 1) {
//			printf("�̰���ϴ�.\n");
//			win++;
//			printf("%d��,%d��,%d��\n", win, draw, lose);
//		}
//		else {
//			printf("�й��߽��ϴ�\n");
//			lose++;
//			printf("%d��,%d��,%d��\n", win, draw, lose);
//		}
//	}
//}