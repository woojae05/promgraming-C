#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	int n1, n2;
	int sum = 0;
	char answer;
	while (1)
	{
		printf("�ֻ��� ������ �Ͻðڽ��ϱ�? (y/n) :");
		scanf(" %c", &answer);
		if (answer == 'y') {
			srand((unsigned)time(NULL));
			n1 = rand() % 6 + 1;
			n2 = rand() % 6 + 1;
			sum = n1 + n2;
			printf("�ֻ���: %d %d", n1, n2);
			printf("%dĭ �����մϴ�.",sum)
		}

		else if (answer == 'n') {
			printf("������ �����մϴ�.");
			break;
		}
	}
}