#include <stdio.h>
#include <string.h>//strcpy ���ڿ� ���� �Լ�

//�л� 5���� ������ Ű����� �Է¹޾� ����ϴ� ���α׷��� ����ÿ�.
typedef struct Student {
	char name[20];//�л��̸�
	int stuNum;//�л���ȣ
	int age;//�л�����
	char address[100];//���ּ�
}STU;


int main() {

#if 1
	int a;

	printf("�Է��� �л��� ���� �Է��ϼ��� : ");
	scanf("%d", &a);

	STU class12[20];
	for (int i = 0; i < a; i++) {
		printf("�̸� �Է� : ");
		scanf("%s", class12[i].name);
		printf("���� �Է� : ");
		scanf("%d", &class12[i].age);
		printf("��ȣ �Է� : ");
		scanf("%d", &class12[i].stuNum);
		printf("�ּ� �Է� : ");
		scanf(" %[^\n]", class12[i].address);
		printf("\n");
	}


	printf("======= 1�г� 2�� �л� ����=====\n");
	for (int i = 0; i < a; i++) {
		printf("�̸� : %s\n", class12[i].name);
		printf("���� : %d\n", class12[i].age);
		printf("�й� : %d\n", class12[i].stuNum);
		printf("�ּ� : %s\n", class12[i].address);
	}

#endif // 1

	return 0;
}