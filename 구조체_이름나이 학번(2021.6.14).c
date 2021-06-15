#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//typedef struct data Student;
typedef struct data {
	char name[20];
	int age;
	int myClass;
}Student;

int main() {
	Student me;
	printf("이름 입력 : ");
	scanf("%s", me.name);
	printf("나이 입력 : ");
	scanf("%d", &me.age);
	printf("학번 입력 : ");
	scanf("%d", &me.myClass);
	printf("============정보============\n");
	printf("이름: %s\n", me.name);
	printf("나이: %d\n", me.age);
	printf("학번: %d\n", me.myClass);
}