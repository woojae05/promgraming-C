#include <stdio.h>
#include <stdlib.h>
int main() {
	int arr[4] = { 1,2,3,4 };
	int* pArr;
	int n = 3;
	pArr = (int*)malloc(sizeof(double)*n); //실행후 크기를 잡아준다. //calloc , realloc
	if (pArr == NULL) {
		printf("메모리 할당 실패\n");
		return 0;
	}
	for (int i = 0; i < n; i++) {
		pArr[i] = i * i;
		arr[i] = i * i;
		printf("pArr[i]=%d\n", pArr[i]);
	}
	//free(pArr)
}