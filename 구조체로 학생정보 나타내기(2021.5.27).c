#include <stdio.h>
#include <string.h>//strcpy 문자열 복사 함수

//학생 5명의 정보를 키보드로 입력받아 출력하는 프로그램을 만드시오.
typedef struct Student {
	char name[20];//학생이름
	int stuNum;//학생번호
	int age;//학생나이
	char address[100];//집주소
}STU;


int main() {

#if 1
	int a;

	printf("입력할 학생의 수를 입력하세요 : ");
	scanf("%d", &a);

	STU class12[20];
	for (int i = 0; i < a; i++) {
		printf("이름 입력 : ");
		scanf("%s", class12[i].name);
		printf("나이 입력 : ");
		scanf("%d", &class12[i].age);
		printf("번호 입력 : ");
		scanf("%d", &class12[i].stuNum);
		printf("주소 입력 : ");
		scanf(" %[^\n]", class12[i].address);
		printf("\n");
	}


	printf("======= 1학년 2반 학생 정보=====\n");
	for (int i = 0; i < a; i++) {
		printf("이름 : %s\n", class12[i].name);
		printf("나이 : %d\n", class12[i].age);
		printf("학번 : %d\n", class12[i].stuNum);
		printf("주소 : %s\n", class12[i].address);
	}

#endif // 1

	return 0;
}