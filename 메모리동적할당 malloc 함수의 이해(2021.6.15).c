#include <stdio.h>
#include <stdlib.h>
int main() {
	int arr[4] = { 1,2,3,4 };
	int* pArr;
	int n = 3;
	pArr = (int*)malloc(sizeof(double)*n); //������ ũ�⸦ ����ش�. //calloc , realloc
	if (pArr == NULL) {
		printf("�޸� �Ҵ� ����\n");
		return 0;
	}
	for (int i = 0; i < n; i++) {
		pArr[i] = i * i;
		arr[i] = i * i;
		printf("pArr[i]=%d\n", pArr[i]);
	}
	//free(pArr)
}