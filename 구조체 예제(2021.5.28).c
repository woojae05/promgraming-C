#include<stdio.h>

typedef struct Menu
{
	char food[20];
	int price;
}menu;

int main() {
	struct Menu user[20];
	int n;
	printf("��� ������ ����Ͻðڽ��ϱ�: ");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("�޴�: ");
		scanf(" %s", user[i].food);
		printf("����: ");
		scanf(" %d",&user[i].price);
		printf("\n");
	}
	printf("=======�޴�=======\n");
	for (int i = 0; i < n; i++) {
		printf("%d. �޴�: %s\n", i+1, user[i].food);
		printf("    ����: %d\n", user[i].price);
		printf("\n");
	}
	return 0;
}