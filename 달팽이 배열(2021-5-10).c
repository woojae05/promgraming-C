#include<stdio.h>
#define SIDE 100
int arr[SIDE][SIDE];//arr[100][100]
void makeArr(int n) {		//달팽이 배열 만들기
	int cnt = 1;
	int row = 0, col = -1;
	int inc = 1;
	while (n > 0) {
		for (int i = 0; i < n; i++) {
			col += inc;//0 1 2 3
			arr[row][col] = cnt++;
		}
		n--;
		if (n == 0)break;
		for (int i = 0; i < n; i++) {
			row += inc;
			arr[row][col] = cnt++;
		}
		inc *= -1;
	}
}

void printArr(int n) {		//달팽이 배열 출력
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			printf("%3d", arr[i][j]);
		printf("\n");
	}
}

int main() {

#if 1
	int n = 0;
	printf("달팽이 배열의 길이: ");
	scanf_s("%d", &n);
	makeArr(n);//달팽이 배열 만들기
	printArr(n);//달팽이 배열 출력
#endif
	return 0;
}