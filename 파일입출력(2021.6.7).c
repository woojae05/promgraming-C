//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main() {
//	FILE* fp;
//	fp = fopen("myfile.txt", "r");
//	char name[80] = "";
//	int myAge;
//	while (!feof(fp)){ //������ ������ üũ
//		fscanf(fp, "%s %d", name, &myAge);
//		printf("%s %d\n", name, myAge);
//	}
//	fclose(fp);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main() {
//	FILE* fp = fopen("mydata.txt", "w");
//	fprintf(fp, "%s %d\n", "ȫ�浿", 34);
//	fclose(fp);
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char name[20][20];
	int age;
	FILE* fp = fopen("mydata1.txt", "w");
	for (int i = 0; i < 3; i++) {
	scanf("%s %d", name[i], &age);
	fprintf(fp, "%s %d\n", name[i], age);
	}
	fclose(fp);
}