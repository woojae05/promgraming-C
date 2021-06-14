#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
typedef struct b{
	int num;
	int money;
}money;
money maxMoney(money m[], int n) {
	money king = m[0];
		for (int i = 0; i < n; i++) {
			if (king.money < m[i].money) {
				king = m[i];
			}
		}
		return king;
}
int main() {
	money m[5], king;
	int i;
	for (i = 0; i < 5; i++) {
		printf("계좌번화와 금액\n");
		m[i].num=i;
		scanf("%d", &m[i].money);
		king = maxMoney(m, 5);
	}
		printf("king: %d  money: %d", king.num+1, king.money);
}