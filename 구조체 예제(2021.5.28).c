#include<stdio.h>

typedef struct Menu
{
	char food[20];
	int price;
}menu;

int main() {
	struct Menu user[20];
	int n;
	printf("몇개의 음식을 등록하시겠습니까: ");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("메뉴: ");
		scanf(" %s", user[i].food);
		printf("가격: ");
		scanf(" %d",&user[i].price);
		printf("\n");
	}
	printf("=======메뉴=======\n");
	for (int i = 0; i < n; i++) {
		printf("%d. 메뉴: %s\n", i+1, user[i].food);
		printf("    가격: %d\n", user[i].price);
		printf("\n");
	}
	return 0;
}