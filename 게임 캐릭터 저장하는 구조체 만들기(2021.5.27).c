#include<stdio.h>
//struct point //구조체 점
//{
//	int x, y;
//};
//struct student //학생이라는 자료형 만들기
//{
//	char name[20];
//	char stu, num[10];
//	int age;
//};
//int main() {
//	struct point p1;
//	struct student class12[20];//20명의 학생 정보 저장 가능
//	p1.x = 5;
//	p1.y = 3;
//	printf("x=%d y=%d", p1.x, p1.y );
//}

typedef struct game
{
	char name[20];// 케릭터 이름
	char weapon[10];//캐릭터 무기 이름
	int power; //캐릭터 능력치
}mygame;
int main() {
	//sturct game user;
	mygame user;
	printf("이름 입력: ");
	scanf("%s", user.name);
	printf_s("무기이름 입력: ");
	scanf("%s", user.weapon);
	printf("능력치 입력: ");
	scanf(" %d", &user.power);
	printf("이름: %s\n" , user.name);
	printf("무기 이름: %s\n" , user.weapon);
	printf("능력치: %d\n" , user.power);
	return 0;
}
