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
	printf("�̸� �Է� : ");
	scanf("%s", me.name);
	printf("���� �Է� : ");
	scanf("%d", &me.age);
	printf("�й� �Է� : ");
	scanf("%d", &me.myClass);
	printf("============����============\n");
	printf("�̸�: %s\n", me.name);
	printf("����: %d\n", me.age);
	printf("�й�: %d\n", me.myClass);
}