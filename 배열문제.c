#include<stdio.h>
int main() {
#if 0
	int arr[20] = { 0, };
	int i = 0;
	int cnt = 0;
	while (1) {
		scanf_s("%d", &arr[i]);
		if (arr[i] > 10 || arr[i] <= 0) {
			break;
		}
		i++;

	}
	for (int j = 1; j < 11; j++) {
		for (int k = 0; k < 10; k++) {
			if (j == arr[k]) {
				cnt++;

			}
		}
		if (cnt != 0) {
			printf("%d: %d개\n", j, cnt);
		}
		cnt = 0;

	}
#endif

#if 0
	int num, i;
	int count[11] = { 0 };
	while (1) {
		scanf_s("%d", &num);
	}
#endif
	
#if 0
	int arr[4][4] = { { 0} };
;
	for (int i = 0; i < 3; i++) {
		printf("%d의 점수:", i+1);
		
		for (int  j= 0; j < 3; j++) {
			scanf_s("%d", &arr[i][j]);
			arr[3][i] += arr[i][j];
		}
	}
		printf("         컴일     프c    수학    총점\n");
		for (int i = 0; i < 4; i++) {
			if (i < 3)printf(" %d번", i + 1);
			else printf("총합");
			for (int j = 0; j < 3; j++) {
				printf("%8d", arr[i][j]);
			}
			arr[i][3] = arr[i][0] + arr[i][1] + arr[i][2];
			printf("%8d", arr[i][3]);
			printf("\n");
	}
#endif

#if 0
		char arr[9][9]={{0}};
		int n;
		scanf_s("%d", &n);
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (i == n - 1 || j== n-1 || i==0||j==0) {
					arr[i][j] = '*';
				}
				else arr[i][j] =' ';
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				printf("%c", arr[i][j]);
			}
			printf("\n");
		}

#endif

#if 1
		int arr[3] = { 0 };//학새의 점수의 합
		int t, x = 0;
		for (int i = 0; i < 3; i++) 
			for (int j = 0; j < 4; j++) {
				scanf_s("%d", &t);
				arr[i] += t;
			}
		
		for (int i = 0; i < 3;i++) 
			if (arr[i] / 4 >= 80) {
				printf("pass\n");
				x++;
			}
			else
				printf("faill\n");
			printf("합격: %d", x);
		

#endif
}