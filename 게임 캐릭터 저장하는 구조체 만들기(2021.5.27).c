#include<stdio.h>
//struct point //����ü ��
//{
//	int x, y;
//};
//struct student //�л��̶�� �ڷ��� �����
//{
//	char name[20];
//	char stu, num[10];
//	int age;
//};
//int main() {
//	struct point p1;
//	struct student class12[20];//20���� �л� ���� ���� ����
//	p1.x = 5;
//	p1.y = 3;
//	printf("x=%d y=%d", p1.x, p1.y );
//}

typedef struct game
{
	char name[20];// �ɸ��� �̸�
	char weapon[10];//ĳ���� ���� �̸�
	int power; //ĳ���� �ɷ�ġ
}mygame;
int main() {
	//sturct game user;
	mygame user;
	printf("�̸� �Է�: ");
	scanf("%s", user.name);
	printf_s("�����̸� �Է�: ");
	scanf("%s", user.weapon);
	printf("�ɷ�ġ �Է�: ");
	scanf(" %d", &user.power);
	printf("�̸�: %s\n" , user.name);
	printf("���� �̸�: %s\n" , user.weapon);
	printf("�ɷ�ġ: %d\n" , user.power);
	return 0;
}
